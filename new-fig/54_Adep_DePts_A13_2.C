{
//=========Macro generated from canvas: Plot_53/#DeltaP_{T}^{2} as a function of A
//=========  (Fri Mar 29 18:04:36 2019) by ROOT version 6.14/00
   TCanvas *Plot_53 = new TCanvas("Plot_53", "#DeltaP_{T}^{2} as a function of A",0,0,600,500);
   Plot_53->Range(0,0,1,1);
   Plot_53->SetFillColor(0);
   Plot_53->SetBorderMode(0);
   Plot_53->SetBorderSize(2);
   Plot_53->SetFrameBorderMode(0);
   
   TH2D *CanmI128__54 = new TH2D("CanmI128__54","#DeltaP_{T}^{2} as a function of A",100,2,6,100,0,0.05);
   CanmI128__54->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI128__54->SetLineColor(ci);
   CanmI128__54->GetXaxis()->SetTitle("A^{1/3}");
   CanmI128__54->GetXaxis()->CenterTitle(true);
   CanmI128__54->GetXaxis()->SetLabelFont(42);
   CanmI128__54->GetXaxis()->SetLabelSize(0.035);
   CanmI128__54->GetXaxis()->SetTitleSize(0.035);
   CanmI128__54->GetXaxis()->SetTitleFont(42);
   CanmI128__54->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI128__54->GetYaxis()->CenterTitle(true);
   CanmI128__54->GetYaxis()->SetLabelFont(42);
   CanmI128__54->GetYaxis()->SetLabelSize(0.035);
   CanmI128__54->GetYaxis()->SetTitleSize(0.035);
   CanmI128__54->GetYaxis()->SetTitleOffset(0);
   CanmI128__54->GetYaxis()->SetTitleFont(42);
   CanmI128__54->GetZaxis()->SetLabelFont(42);
   CanmI128__54->GetZaxis()->SetLabelSize(0.035);
   CanmI128__54->GetZaxis()->SetTitleSize(0.035);
   CanmI128__54->GetZaxis()->SetTitleFont(42);
   CanmI128__54->Draw("");
   
   Double_t Graph0_fx1390[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph0_fy1390[5] = {
   0.006684885,
   0.009690026,
   0.01190484,
   0.01280315,
   0.01451795};
   Double_t Graph0_fex1390[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1390[5] = {
   0.0007016387,
   0.001112285,
   0.0005350527,
   0.003011497,
   0.0008721684};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1390,Graph0_fy1390,Graph0_fex1390,Graph0_fey1390);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->Draw("p");
   
   Double_t Graph1_fx1391[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph1_fy1391[5] = {
   0.006717624,
   0.01316265,
   0.01559112,
   0.01859003,
   0.02110565};
   Double_t Graph1_fex1391[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1391[5] = {
   0.0003117483,
   0.0004925632,
   0.0002439469,
   0.001401851,
   0.0004346389};
   gre = new TGraphErrors(5,Graph1_fx1391,Graph1_fy1391,Graph1_fex1391,Graph1_fey1391);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph2_fx1392[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph2_fy1392[5] = {
   0.006959569,
   0.01017797,
   0.01268669,
   0.01475741,
   0.01615632};
   Double_t Graph2_fex1392[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1392[5] = {
   0.0007024248,
   0.001116774,
   0.0005372022,
   0.003047645,
   0.0008827171};
   gre = new TGraphErrors(5,Graph2_fx1392,Graph2_fy1392,Graph2_fex1392,Graph2_fey1392);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1393[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph3_fy1393[5] = {
   0.006476149,
   0.01258734,
   0.01465463,
   0.01706018,
   0.01908363};
   Double_t Graph3_fex1393[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1393[5] = {
   0.0003100103,
   0.000487028,
   0.0002393283,
   0.001370778,
   0.0004160785};
   gre = new TGraphErrors(5,Graph3_fx1393,Graph3_fy1393,Graph3_fex1393,Graph3_fey1393);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.87,0.5,0.59,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","A dependence of #DeltaP_{T}^{2}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","No Coulomb (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","No Coulomb (#pi^{-})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph1","With Coulomb (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph0","With Coulomb (#pi^{-})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_53->Modified();
   Plot_53->cd();
   Plot_53->SetSelected(Plot_53);
}
