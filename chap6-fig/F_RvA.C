{
//=========Macro generated from canvas: Plot_0/Multiplicity Ratio as a function of A
//=========  (Thu Mar 21 18:22:26 2019) by ROOT version 6.14/00
   TCanvas *Plot_0 = new TCanvas("Plot_0", "Multiplicity Ratio as a function of A",0,0,600,500);
   Plot_0->Range(0,0,1,1);
   Plot_0->SetFillColor(0);
   Plot_0->SetBorderMode(0);
   Plot_0->SetBorderSize(2);
   Plot_0->SetFrameBorderMode(0);
   
   TH2D *CanmI75__1 = new TH2D("CanmI75__1","Multiplicity Ratio as a function of A",100,2,6.25,100,0.3,0.85);
   CanmI75__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI75__1->SetLineColor(ci);
   CanmI75__1->GetXaxis()->SetTitle("A^{1/3}");
   CanmI75__1->GetXaxis()->CenterTitle(true);
   CanmI75__1->GetXaxis()->SetLabelFont(42);
   CanmI75__1->GetXaxis()->SetLabelSize(0.035);
   CanmI75__1->GetXaxis()->SetTitleSize(0.035);
   CanmI75__1->GetXaxis()->SetTitleFont(42);
   CanmI75__1->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI75__1->GetYaxis()->CenterTitle(true);
   CanmI75__1->GetYaxis()->SetLabelFont(42);
   CanmI75__1->GetYaxis()->SetLabelSize(0.035);
   CanmI75__1->GetYaxis()->SetTitleSize(0.035);
   CanmI75__1->GetYaxis()->SetTitleOffset(1.5);
   CanmI75__1->GetYaxis()->SetTitleFont(42);
   CanmI75__1->GetZaxis()->SetLabelFont(42);
   CanmI75__1->GetZaxis()->SetLabelSize(0.035);
   CanmI75__1->GetZaxis()->SetTitleSize(0.035);
   CanmI75__1->GetZaxis()->SetTitleFont(42);
   CanmI75__1->Draw("");
   
   Double_t Graph0_fx1001[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph0_fy1001[5] = {
   0.7446206,
   0.6357406,
   0.5554158,
   0.4668018,
   0.4348205};
   Double_t Graph0_fex1001[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[5] = {
   0.019637,
   0.01708041,
   0.0145568,
   0.01487802,
   0.01153077};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1002[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph1_fy1002[5] = {
   0.785697,
   0.6680005,
   0.5849096,
   0.507847,
   0.4507926};
   Double_t Graph1_fex1002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[5] = {
   0.01187159,
   0.01018982,
   0.008810204,
   0.008560913,
   0.006837746};
   gre = new TGraphErrors(5,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1003[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph2_fy1003[5] = {
   0.7446206,
   0.6357406,
   0.5554158,
   0.4668018,
   0.4348205};
   Double_t Graph2_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1003[5] = {
   0.003285881,
   0.004303971,
   0.001833964,
   0.008605375,
   0.002268921};
   gre = new TGraphErrors(5,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1004[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph3_fy1004[5] = {
   0.785697,
   0.6680005,
   0.5849096,
   0.507847,
   0.4507926};
   Double_t Graph3_fex1004[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1004[5] = {
   0.001427499,
   0.001852531,
   0.0008017894,
   0.003906378,
   0.001015687};
   gre = new TGraphErrors(5,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.5,0.85,0.85,0.65,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","A dependence of R^{#pi}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","#pi^{+}","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","#pi^{-}","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_0->Modified();
   Plot_0->cd();
   Plot_0->SetSelected(Plot_0);
}
