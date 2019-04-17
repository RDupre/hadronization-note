{
//=========Macro generated from canvas: Plot_11/Multiplicity Ratio as a function of P_{T}^{2} in various #nu bins
//=========  (Thu Mar 21 18:22:27 2019) by ROOT version 6.14/00
   TCanvas *Plot_11 = new TCanvas("Plot_11", "Multiplicity Ratio as a function of P_{T}^{2} in various #nu bins",0,0,600,500);
   Plot_11->Range(0,0,1,1);
   Plot_11->SetFillColor(0);
   Plot_11->SetBorderMode(0);
   Plot_11->SetBorderSize(2);
   Plot_11->SetFrameBorderMode(0);
   
   TH2D *CanmI86__12 = new TH2D("CanmI86__12","Multiplicity Ratio as a function of P_{T}^{2} in various #nu bins",100,0,1.3,100,0.2,4);
   CanmI86__12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI86__12->SetLineColor(ci);
   CanmI86__12->GetXaxis()->SetTitle("P_{T}^{2} (GeV^{2}/c^{2})");
   CanmI86__12->GetXaxis()->CenterTitle(true);
   CanmI86__12->GetXaxis()->SetLabelFont(42);
   CanmI86__12->GetXaxis()->SetLabelSize(0.035);
   CanmI86__12->GetXaxis()->SetTitleSize(0.035);
   CanmI86__12->GetXaxis()->SetTitleFont(42);
   CanmI86__12->GetYaxis()->SetTitle("R_{Fe}^{#pi^{+}}");
   CanmI86__12->GetYaxis()->CenterTitle(true);
   CanmI86__12->GetYaxis()->SetLabelFont(42);
   CanmI86__12->GetYaxis()->SetLabelSize(0.035);
   CanmI86__12->GetYaxis()->SetTitleSize(0.035);
   CanmI86__12->GetYaxis()->SetTitleOffset(1.3);
   CanmI86__12->GetYaxis()->SetTitleFont(42);
   CanmI86__12->GetZaxis()->SetLabelFont(42);
   CanmI86__12->GetZaxis()->SetLabelSize(0.035);
   CanmI86__12->GetZaxis()->SetTitleSize(0.035);
   CanmI86__12->GetZaxis()->SetTitleFont(42);
   CanmI86__12->Draw("");
   
   Double_t Graph0_fx1109[10] = {
   0.07993029,
   0.2163058,
   0.3663828,
   0.5155809,
   0.6638273,
   0.8112429,
   0.9578331,
   1.105543,
   1.252878,
   1.377644};
   Double_t Graph0_fy1109[10] = {
   0.5542829,
   0.5816687,
   0.607872,
   0.6528101,
   0.7360043,
   0.8398168,
   1.014712,
   1.38493,
   2.081098,
   3.8728};
   Double_t Graph0_fex1109[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1109[10] = {
   0.008615745,
   0.009050488,
   0.009679763,
   0.0109066,
   0.01357519,
   0.01927011,
   0.03649562,
   0.1052086,
   0.416907,
   4.191082};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1109,Graph0_fy1109,Graph0_fex1109,Graph0_fey1109);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1110[10] = {
   0.07838018,
   0.2165163,
   0.3660846,
   0.515119,
   0.6616763,
   0.8116975,
   0.9618437,
   1.111052,
   1.261296,
   1.40087};
   Double_t Graph1_fy1110[10] = {
   0.5441341,
   0.5748775,
   0.6190286,
   0.6961636,
   0.7955668,
   0.8826353,
   1.109827,
   1.757992,
   2.866454,
   8.034529};
   Double_t Graph1_fex1110[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1110[10] = {
   0.008446463,
   0.00895422,
   0.009925552,
   0.01191018,
   0.01584637,
   0.02477767,
   0.05173794,
   0.1635925,
   0.5476183,
   5.102394};
   gre = new TGraphErrors(10,Graph1_fx1110,Graph1_fy1110,Graph1_fex1110,Graph1_fey1110);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1111[10] = {
   0.07903886,
   0.216797,
   0.3660354,
   0.5121221,
   0.6614414,
   0.811213,
   0.9594179,
   1.107117,
   1.249341,
   1.384065};
   Double_t Graph2_fy1111[10] = {
   0.5522742,
   0.5765125,
   0.598617,
   0.6313934,
   0.7201755,
   0.9001218,
   1.315692,
   2.416422,
   3.293866,
   5.581929};
   Double_t Graph2_fex1111[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1111[10] = {
   0.008624842,
   0.009061321,
   0.009733133,
   0.01129203,
   0.01626419,
   0.03133331,
   0.08587298,
   0.3267579,
   0.92926,
   3.358877};
   gre = new TGraphErrors(10,Graph2_fx1111,Graph2_fy1111,Graph2_fex1111,Graph2_fey1111);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph3_fx1112[10] = {
   0.07836405,
   0.2167254,
   0.3623691,
   0.5100589,
   0.6591055,
   0.8039404,
   0.9435201,
   1.102826,
   0,
   0};
   Double_t Graph3_fy1112[10] = {
   0.5764208,
   0.577204,
   0.5775132,
   0.673798,
   0.7149785,
   1.260892,
   2.474416,
   20.54583,
   0,
   0};
   Double_t Graph3_fex1112[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1112[10] = {
   0.009303248,
   0.009428522,
   0.0101028,
   0.01470399,
   0.02344877,
   0.09137926,
   0.5950083,
   21.34668,
   0,
   0};
   gre = new TGraphErrors(10,Graph3_fx1112,Graph3_fy1112,Graph3_fex1112,Graph3_fey1112);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1113[10] = {
   0.07993029,
   0.2163058,
   0.3663828,
   0.5155809,
   0.6638273,
   0.8112429,
   0.9578331,
   1.105543,
   1.252878,
   1.377644};
   Double_t Graph4_fy1113[10] = {
   0.5542829,
   0.5816687,
   0.607872,
   0.6528101,
   0.7360043,
   0.8398168,
   1.014712,
   1.38493,
   2.081098,
   3.8728};
   Double_t Graph4_fex1113[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1113[10] = {
   0.002259296,
   0.002405236,
   0.003249375,
   0.004802893,
   0.007899542,
   0.0145824,
   0.03317018,
   0.1031373,
   0.4157366,
   4.19068};
   gre = new TGraphErrors(10,Graph4_fx1113,Graph4_fy1113,Graph4_fex1113,Graph4_fey1113);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->Draw("p");
   
   Double_t Graph5_fx1114[10] = {
   0.07838018,
   0.2165163,
   0.3660846,
   0.515119,
   0.6616763,
   0.8116975,
   0.9618437,
   1.111052,
   1.261296,
   1.40087};
   Double_t Graph5_fy1114[10] = {
   0.5441341,
   0.5748775,
   0.6190286,
   0.6961636,
   0.7955668,
   0.8826353,
   1.109827,
   1.757992,
   2.866454,
   8.034529};
   Double_t Graph5_fex1114[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph5_fey1114[10] = {
   0.002173548,
   0.002412288,
   0.003506765,
   0.005727793,
   0.01042588,
   0.02094392,
   0.04898651,
   0.1614532,
   0.5459278,
   5.100971};
   gre = new TGraphErrors(10,Graph5_fx1114,Graph5_fy1114,Graph5_fex1114,Graph5_fey1114);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph6_fx1115[10] = {
   0.07903886,
   0.216797,
   0.3660354,
   0.5121221,
   0.6614414,
   0.811213,
   0.9594179,
   1.107117,
   1.249341,
   1.384065};
   Double_t Graph6_fy1115[10] = {
   0.5522742,
   0.5765125,
   0.598617,
   0.6313934,
   0.7201755,
   0.9001218,
   1.315692,
   2.416422,
   3.293866,
   5.581929};
   Double_t Graph6_fex1115[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph6_fey1115[10] = {
   0.002400288,
   0.002706481,
   0.00375591,
   0.006149139,
   0.01215842,
   0.02827503,
   0.08357442,
   0.3247413,
   0.9279456,
   3.357834};
   gre = new TGraphErrors(10,Graph6_fx1115,Graph6_fy1115,Graph6_fex1115,Graph6_fey1115);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph7_fx1116[10] = {
   0.07836405,
   0.2167254,
   0.3623691,
   0.5100589,
   0.6591055,
   0.8039404,
   0.9435201,
   1.102826,
   0,
   0};
   Double_t Graph7_fy1116[10] = {
   0.5764208,
   0.577204,
   0.5775132,
   0.673798,
   0.7149785,
   1.260892,
   2.474416,
   20.54583,
   0,
   0};
   Double_t Graph7_fex1116[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph7_fey1116[10] = {
   0.003433907,
   0.003732966,
   0.00519848,
   0.01067972,
   0.02085248,
   0.08940052,
   0.5938495,
   21.34445,
   0,
   0};
   gre = new TGraphErrors(10,Graph7_fx1116,Graph7_fy1116,Graph7_fex1116,Graph7_fey1116);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","P_{T}^{2} dependence of R^{#pi} in #nu bins","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph7","2.25 < #nu < 2.75 GeV","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph6","2.75 < #nu < 3.25 GeV","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph5","3.25 < #nu < 3.75 GeV","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph4","3.75 < #nu < 4.25 GeV","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_11->Modified();
   Plot_11->cd();
   Plot_11->SetSelected(Plot_11);
}
