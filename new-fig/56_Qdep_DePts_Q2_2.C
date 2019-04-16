{
//=========Macro generated from canvas: Plot_55/#DeltaP_{T}^{2} as a function of Q^{2}
//=========  (Fri Mar 29 18:04:36 2019) by ROOT version 6.14/00
   TCanvas *Plot_55 = new TCanvas("Plot_55", "#DeltaP_{T}^{2} as a function of Q^{2}",0,0,600,500);
   Plot_55->Range(0,0,1,1);
   Plot_55->SetFillColor(0);
   Plot_55->SetBorderMode(0);
   Plot_55->SetBorderSize(2);
   Plot_55->SetFrameBorderMode(0);
   
   TH2D *CanmI130__56 = new TH2D("CanmI130__56","#DeltaP_{T}^{2} as a function of Q^{2}",100,1,4,100,0,0.05);
   CanmI130__56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI130__56->SetLineColor(ci);
   CanmI130__56->GetXaxis()->SetTitle("Q^{2} (GeV^{2}/c^{2})");
   CanmI130__56->GetXaxis()->CenterTitle(true);
   CanmI130__56->GetXaxis()->SetLabelFont(42);
   CanmI130__56->GetXaxis()->SetLabelSize(0.035);
   CanmI130__56->GetXaxis()->SetTitleSize(0.035);
   CanmI130__56->GetXaxis()->SetTitleFont(42);
   CanmI130__56->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI130__56->GetYaxis()->CenterTitle(true);
   CanmI130__56->GetYaxis()->SetLabelFont(42);
   CanmI130__56->GetYaxis()->SetLabelSize(0.035);
   CanmI130__56->GetYaxis()->SetTitleSize(0.035);
   CanmI130__56->GetYaxis()->SetTitleOffset(0);
   CanmI130__56->GetYaxis()->SetTitleFont(42);
   CanmI130__56->GetZaxis()->SetLabelFont(42);
   CanmI130__56->GetZaxis()->SetLabelSize(0.035);
   CanmI130__56->GetZaxis()->SetTitleSize(0.035);
   CanmI130__56->GetZaxis()->SetTitleFont(42);
   CanmI130__56->Draw("");
   
   Double_t Graph0_fx1398[10] = {
   1.136328,
   1.429073,
   1.737343,
   2.037456,
   2.335564,
   2.638351,
   2.929389,
   3.228133,
   3.525046,
   3.800993};
   Double_t Graph0_fy1398[10] = {
   0.01392011,
   0.007388385,
   0.01152407,
   0.01291266,
   0.008147889,
   0.006969218,
   0.01382472,
   0.01384987,
   0.007337792,
   0.01132579};
   Double_t Graph0_fex1398[10] = {
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
   Double_t Graph0_fey1398[10] = {
   0.0009030123,
   0.0009804089,
   0.001046039,
   0.00133057,
   0.00190998,
   0.002562503,
   0.002911183,
   0.00369551,
   0.004726747,
   0.007962049};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1398,Graph0_fy1398,Graph0_fex1398,Graph0_fey1398);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->Draw("p");
   
   Double_t Graph1_fx1399[10] = {
   1.145153,
   1.432979,
   1.736592,
   2.035768,
   2.336306,
   2.64135,
   2.932849,
   3.229114,
   3.525738,
   3.798091};
   Double_t Graph1_fy1399[10] = {
   0.01521237,
   0.01599746,
   0.01544047,
   0.01731697,
   0.01684399,
   0.01400181,
   0.01573369,
   0.01390144,
   0.01619288,
   0.01225081};
   Double_t Graph1_fex1399[10] = {
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
   Double_t Graph1_fey1399[10] = {
   0.0004335334,
   0.0004537693,
   0.0005373322,
   0.0006723939,
   0.0008877337,
   0.001240078,
   0.001545204,
   0.002106844,
   0.002985568,
   0.005520397};
   gre = new TGraphErrors(10,Graph1_fx1399,Graph1_fy1399,Graph1_fex1399,Graph1_fey1399);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph2_fx1400[10] = {
   1.136351,
   1.429071,
   1.737292,
   2.037493,
   2.335608,
   2.638384,
   2.929409,
   3.22806,
   3.525395,
   3.803162};
   Double_t Graph2_fy1400[10] = {
   0.01478333,
   0.007974297,
   0.01226033,
   0.01367855,
   0.009289568,
   0.007100261,
   0.01376743,
   0.01358984,
   0.006606129,
   0.01214353};
   Double_t Graph2_fex1400[10] = {
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
   Double_t Graph2_fey1400[10] = {
   0.0009074045,
   0.0009882646,
   0.001049576,
   0.001324924,
   0.001917326,
   0.002565887,
   0.002914325,
   0.003702377,
   0.004688952,
   0.007859186};
   gre = new TGraphErrors(10,Graph2_fx1400,Graph2_fy1400,Graph2_fex1400,Graph2_fey1400);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1401[10] = {
   1.145147,
   1.432998,
   1.736606,
   2.035761,
   2.33631,
   2.641345,
   2.932933,
   3.229178,
   3.52591,
   3.802196};
   Double_t Graph3_fy1401[10] = {
   0.01417336,
   0.01516447,
   0.01459879,
   0.01638586,
   0.01605178,
   0.01322938,
   0.01471728,
   0.01230394,
   0.01465997,
   0.01018128};
   Double_t Graph3_fex1401[10] = {
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
   Double_t Graph3_fey1401[10] = {
   0.0004276042,
   0.0004461394,
   0.0005210516,
   0.000650923,
   0.0008524958,
   0.001161428,
   0.001523591,
   0.00207206,
   0.002925871,
   0.00523472};
   gre = new TGraphErrors(10,Graph3_fx1401,Graph3_fy1401,Graph3_fex1401,Graph3_fey1401);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.5,0.85,0.85,0.55,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Q^{2} dependence of #DeltaP_{T}^{2}","h");
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
   Plot_55->Modified();
   Plot_55->cd();
   Plot_55->SetSelected(Plot_55);
}
