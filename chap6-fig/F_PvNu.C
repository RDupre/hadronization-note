{
//=========Macro generated from canvas: Plot_17/#DeltaP_{T}^{2} as a function of #nu
//=========  (Thu Mar 21 18:22:27 2019) by ROOT version 6.14/00
   TCanvas *Plot_17 = new TCanvas("Plot_17", "#DeltaP_{T}^{2} as a function of #nu",0,0,600,500);
   Plot_17->Range(0,0,1,1);
   Plot_17->SetFillColor(0);
   Plot_17->SetBorderMode(0);
   Plot_17->SetBorderSize(2);
   Plot_17->SetFrameBorderMode(0);
   
   TH2D *CanmI92__18 = new TH2D("CanmI92__18","#DeltaP_{T}^{2} as a function of #nu",100,2.25,4.25,100,0,0.04);
   CanmI92__18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI92__18->SetLineColor(ci);
   CanmI92__18->GetXaxis()->SetTitle("#nu (GeV)");
   CanmI92__18->GetXaxis()->CenterTitle(true);
   CanmI92__18->GetXaxis()->SetLabelFont(42);
   CanmI92__18->GetXaxis()->SetLabelSize(0.035);
   CanmI92__18->GetXaxis()->SetTitleSize(0.035);
   CanmI92__18->GetXaxis()->SetTitleFont(42);
   CanmI92__18->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI92__18->GetYaxis()->CenterTitle(true);
   CanmI92__18->GetYaxis()->SetLabelFont(42);
   CanmI92__18->GetYaxis()->SetLabelSize(0.035);
   CanmI92__18->GetYaxis()->SetTitleSize(0.035);
   CanmI92__18->GetYaxis()->SetTitleOffset(1.5);
   CanmI92__18->GetYaxis()->SetTitleFont(42);
   CanmI92__18->GetZaxis()->SetLabelFont(42);
   CanmI92__18->GetZaxis()->SetLabelSize(0.035);
   CanmI92__18->GetZaxis()->SetTitleSize(0.035);
   CanmI92__18->GetZaxis()->SetTitleFont(42);
   CanmI92__18->Draw("");
   
   
   Double_t Graph3_fx1160[10] = {
   2.37701,
   2.559643,
   2.754541,
   2.945723,
   3.151229,
   3.349322,
   3.550649,
   3.749669,
   3.950728,
   4.146397};
   Double_t Graph3_fy1160[10] = {
   0.003029705,
   0.008105561,
   0.01575716,
   0.01726264,
   0.01906487,
   0.02193097,
   0.02773476,
   0.02591504,
   0.02179498,
   0.01952344};
   Double_t Graph3_fex1160[10] = {
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
   Double_t Graph3_fey1160[10] = {
   0.0004347998,
   0.001163481,
   0.002263639,
   0.002482094,
   0.002745828,
   0.003162086,
   0.004004362,
   0.003745503,
   0.003153411,
   0.002827828};
   gre = new TGraphErrors(10,Graph3_fx1160,Graph3_fy1160,Graph3_fex1160,Graph3_fey1160);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1161[10] = {
   2.37749,
   2.559738,
   2.754755,
   2.945706,
   3.151414,
   3.349061,
   3.550827,
   3.749511,
   3.950753,
   4.14648};
   Double_t Graph4_fy1161[10] = {
   0.002372206,
   0.006183188,
   0.008617064,
   0.01247494,
   0.01537744,
   0.01695711,
   0.02134799,
   0.02038977,
   0.01807701,
   0.01368624};
   Double_t Graph4_fex1161[10] = {
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
   Double_t Graph4_fey1161[10] = {
   0.0003416136,
   0.0008906436,
   0.001242213,
   0.001799979,
   0.002222499,
   0.002453462,
   0.003093034,
   0.0029572,
   0.002624462,
   0.00198907};
   gre = new TGraphErrors(10,Graph4_fx1161,Graph4_fy1161,Graph4_fex1161,Graph4_fey1161);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph5_fx1162[10] = {
   2.377414,
   2.559654,
   2.754872,
   2.945513,
   3.151338,
   3.349143,
   3.551259,
   3.749585,
   3.950512,
   4.146434};
   Double_t Graph5_fy1162[10] = {
   -0.001767656,
   0.0003081351,
   0.002867745,
   0.003672204,
   0.005752916,
   0.008341378,
   0.01268744,
   0.01081574,
   0.006508713,
   0.007444993};
   Double_t Graph5_fex1162[10] = {
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
   Double_t Graph5_fey1162[10] = {
   -0.0003576623,
   6.235465e-05,
   0.0005805558,
   0.0007437492,
   0.001166159,
   0.001691795,
   0.002575046,
   0.002196328,
   0.001322396,
   0.001513406};
   gre = new TGraphErrors(10,Graph5_fx1162,Graph5_fy1162,Graph5_fex1162,Graph5_fey1162);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph9_fx1166[10] = {
   2.37701,
   2.559643,
   2.754541,
   2.945723,
   3.151229,
   3.349322,
   3.550649,
   3.749669,
   3.950728,
   4.146397};
   Double_t Graph9_fy1166[10] = {
   0.003029705,
   0.008105561,
   0.01575716,
   0.01726264,
   0.01906487,
   0.02193097,
   0.02773476,
   0.02591504,
   0.02179498,
   0.01952344};
   Double_t Graph9_fex1166[10] = {
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
   Double_t Graph9_fey1166[10] = {
   0.002148903,
   0.001365522,
   0.001283499,
   0.001249597,
   0.001192381,
   0.001207079,
   0.001143537,
   0.00115465,
   0.001158928,
   0.001188067};
   gre = new TGraphErrors(10,Graph9_fx1166,Graph9_fy1166,Graph9_fex1166,Graph9_fey1166);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph10_fx1167[10] = {
   2.37749,
   2.559738,
   2.754755,
   2.945706,
   3.151414,
   3.349061,
   3.550827,
   3.749511,
   3.950753,
   4.14648};
   Double_t Graph10_fy1167[10] = {
   0.002372206,
   0.006183188,
   0.008617064,
   0.01247494,
   0.01537744,
   0.01695711,
   0.02134799,
   0.02038977,
   0.01807701,
   0.01368624};
   Double_t Graph10_fex1167[10] = {
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
   Double_t Graph10_fey1167[10] = {
   0.001236608,
   0.0007929575,
   0.0007391866,
   0.0007308554,
   0.0006985244,
   0.0007065364,
   0.0006714765,
   0.0006802849,
   0.0006881185,
   0.0007091552};
   gre = new TGraphErrors(10,Graph10_fx1167,Graph10_fy1167,Graph10_fex1167,Graph10_fey1167);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph11_fx1168[10] = {
   2.377414,
   2.559654,
   2.754872,
   2.945513,
   3.151338,
   3.349143,
   3.551259,
   3.749585,
   3.950512,
   4.146434};
   Double_t Graph11_fy1168[10] = {
   -0.001767656,
   0.0003081351,
   0.002867745,
   0.003672204,
   0.005752916,
   0.008341378,
   0.01268744,
   0.01081574,
   0.006508713,
   0.007444993};
   Double_t Graph11_fex1168[10] = {
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
   Double_t Graph11_fey1168[10] = {
   0.001560639,
   0.001007354,
   0.0009285434,
   0.0009235984,
   0.0008839201,
   0.0008995524,
   0.0008574418,
   0.0008721243,
   0.0008921808,
   0.0009344073};
   gre = new TGraphErrors(10,Graph11_fx1168,Graph11_fy1168,Graph11_fex1168,Graph11_fey1168);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.6,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Nu dependence of #DeltaP_{T}^{2}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph11","Carbon (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph10","Iron (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph9","Lead (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_17->Modified();
   Plot_17->cd();
   Plot_17->SetSelected(Plot_17);
}
