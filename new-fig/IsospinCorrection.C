{
//=========Macro generated from canvas: Plot_49/Multiplicity Ratio as a function of A
//=========  (Fri Mar 29 18:04:36 2019) by ROOT version 6.14/00
   TCanvas *Plot_49 = new TCanvas("Plot_49", "Multiplicity Ratio as a function of A",0,0,600,500);
   Plot_49->Range(0,0,1,1);
   Plot_49->SetFillColor(0);
   Plot_49->SetBorderMode(0);
   Plot_49->SetBorderSize(2);
   Plot_49->SetFrameBorderMode(0);
   
   TH2D *CanmI124__50 = new TH2D("CanmI124__50","Multiplicity Ratio as a function of A",100,2,6,100,0,1);
   CanmI124__50->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI124__50->SetLineColor(ci);
   CanmI124__50->GetXaxis()->SetTitle("A^{1/3}");
   CanmI124__50->GetXaxis()->CenterTitle(true);
   CanmI124__50->GetXaxis()->SetLabelFont(42);
   CanmI124__50->GetXaxis()->SetLabelSize(0.035);
   CanmI124__50->GetXaxis()->SetTitleSize(0.035);
   CanmI124__50->GetXaxis()->SetTitleFont(42);
   CanmI124__50->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI124__50->GetYaxis()->CenterTitle(true);
   CanmI124__50->GetYaxis()->SetLabelFont(42);
   CanmI124__50->GetYaxis()->SetLabelSize(0.035);
   CanmI124__50->GetYaxis()->SetTitleSize(0.035);
   CanmI124__50->GetYaxis()->SetTitleOffset(0);
   CanmI124__50->GetYaxis()->SetTitleFont(42);
   CanmI124__50->GetZaxis()->SetLabelFont(42);
   CanmI124__50->GetZaxis()->SetLabelSize(0.035);
   CanmI124__50->GetZaxis()->SetTitleSize(0.035);
   CanmI124__50->GetZaxis()->SetTitleFont(42);
   CanmI124__50->Draw("");
   
   Double_t Graph0_fx1374[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph0_fy1374[5] = {
   0.7446206,
   0.6357406,
   0.5554158,
   0.4668018,
   0.4348205};
   Double_t Graph0_fex1374[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1374[5] = {
   0.003285881,
   0.004303971,
   0.001833964,
   0.008605375,
   0.002268921};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1374,Graph0_fy1374,Graph0_fex1374,Graph0_fey1374);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->Draw("p");
   
   Double_t Graph1_fx1375[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph1_fy1375[5] = {
   0.785697,
   0.6680005,
   0.5849096,
   0.507847,
   0.4507926};
   Double_t Graph1_fex1375[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1375[5] = {
   0.001427499,
   0.001852531,
   0.0008017894,
   0.003906378,
   0.001015687};
   gre = new TGraphErrors(5,Graph1_fx1375,Graph1_fy1375,Graph1_fex1375,Graph1_fey1375);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph2_fx1376[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph2_fy1376[5] = {
   0.7446206,
   0.6357406,
   0.5554158,
   0.4668018,
   0.4348205};
   Double_t Graph2_fex1376[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1376[5] = {
   0.003285881,
   0.004303971,
   0.001833964,
   0.008605375,
   0.002268921};
   gre = new TGraphErrors(5,Graph2_fx1376,Graph2_fy1376,Graph2_fex1376,Graph2_fey1376);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1377[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph3_fy1377[5] = {
   0.785697,
   0.6581286,
   0.5678734,
   0.4702287,
   0.4098115};
   Double_t Graph3_fex1377[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1377[5] = {
   0.001427499,
   0.001825154,
   0.0007784363,
   0.003617017,
   0.0009233517};
   gre = new TGraphErrors(5,Graph3_fx1377,Graph3_fy1377,Graph3_fex1377,Graph3_fey1377);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.15,0.5,0.45,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Nu dependence of R^{#pi}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","No Isospin (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","No Isospin (#pi^{-})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph1","With Isospin (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph0","With Isospin (#pi^{-})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_49->Modified();
   Plot_49->cd();
   Plot_49->SetSelected(Plot_49);
}
