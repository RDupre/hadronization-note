{
//=========Macro generated from canvas: Plot_29/Multiplicity Ratio as a function of Q^{2}
//=========  (Thu Mar 21 18:22:28 2019) by ROOT version 6.14/00
   TCanvas *Plot_29 = new TCanvas("Plot_29", "Multiplicity Ratio as a function of Q^{2}",0,0,600,500);
   Plot_29->Range(0,0,1,1);
   Plot_29->SetFillColor(0);
   Plot_29->SetBorderMode(0);
   Plot_29->SetBorderSize(2);
   Plot_29->SetFrameBorderMode(0);
   
   TH2D *CanmI104__30 = new TH2D("CanmI104__30","Multiplicity Ratio as a function of Q^{2}",100,1,4,100,0.4,.95);
   CanmI104__30->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI104__30->SetLineColor(ci);
   CanmI104__30->GetXaxis()->SetTitle("Q^{2} (GeV^{2}/c^{2})");
   CanmI104__30->GetXaxis()->CenterTitle(true);
   CanmI104__30->GetXaxis()->SetLabelFont(42);
   CanmI104__30->GetXaxis()->SetLabelSize(0.035);
   CanmI104__30->GetXaxis()->SetTitleSize(0.035);
   CanmI104__30->GetXaxis()->SetTitleFont(42);
   CanmI104__30->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI104__30->GetYaxis()->CenterTitle(true);
   CanmI104__30->GetYaxis()->SetLabelFont(42);
   CanmI104__30->GetYaxis()->SetLabelSize(0.035);
   CanmI104__30->GetYaxis()->SetTitleSize(0.035);
   CanmI104__30->GetYaxis()->SetTitleOffset(1.3);
   CanmI104__30->GetYaxis()->SetTitleFont(42);
   CanmI104__30->GetZaxis()->SetLabelFont(42);
   CanmI104__30->GetZaxis()->SetLabelSize(0.035);
   CanmI104__30->GetZaxis()->SetTitleSize(0.035);
   CanmI104__30->GetZaxis()->SetTitleFont(42);
   CanmI104__30->Draw("");
   
   Double_t Graph0_fx1277[10] = {
   1.14285,
   1.430779,
   1.736054,
   2.038445,
   2.338872,
   2.636678,
   2.929374,
   3.225874,
   3.529159,
   3.798517};
   Double_t Graph0_fy1277[10] = {
   0.5735866,
   0.5868644,
   0.5881621,
   0.6041562,
   0.6223906,
   0.6475419,
   0.6117278,
   0.5772879,
   0.627405,
   0.8155855};
   Double_t Graph0_fex1277[10] = {
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
   Double_t Graph0_fey1277[10] = {
   0.005744971,
   0.00643129,
   0.006641136,
   0.008825358,
   0.01370679,
   0.01715007,
   0.01796673,
   0.02414977,
   0.03698562,
   0.09273324};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1277,Graph0_fy1277,Graph0_fex1277,Graph0_fey1277);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1278[10] = {
   1.149746,
   1.43341,
   1.736293,
   2.034812,
   2.336514,
   2.640419,
   2.931702,
   3.226647,
   3.524445,
   3.800562};
   Double_t Graph1_fy1278[10] = {
   0.5745892,
   0.5751527,
   0.5804611,
   0.5776547,
   0.5948702,
   0.5991593,
   0.5831069,
   0.5806276,
   0.6011176,
   0.6215953};
   Double_t Graph1_fex1278[10] = {
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
   Double_t Graph1_fey1278[10] = {
   0.00256656,
   0.002610679,
   0.003128821,
   0.003937146,
   0.005276616,
   0.007041525,
   0.009365712,
   0.01378682,
   0.02107166,
   0.04337248};
   gre = new TGraphErrors(10,Graph1_fx1278,Graph1_fy1278,Graph1_fex1278,Graph1_fey1278);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1279[10] = {
   1.14285,
   1.430779,
   1.736054,
   2.038445,
   2.338872,
   2.636678,
   2.929374,
   3.225874,
   3.529159,
   3.798517};
   Double_t Graph2_fy1279[10] = {
   0.5735866,
   0.5868644,
   0.5881621,
   0.6041562,
   0.6223906,
   0.6475419,
   0.6117278,
   0.5772879,
   0.627405,
   0.8155855};
   Double_t Graph2_fex1279[10] = {
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
   Double_t Graph2_fey1279[10] = {
   0.005744971,
   0.00643129,
   0.006641136,
   0.008825358,
   0.01370679,
   0.01715007,
   0.01796673,
   0.02414977,
   0.03698562,
   0.09273324};
   gre = new TGraphErrors(10,Graph2_fx1279,Graph2_fy1279,Graph2_fex1279,Graph2_fey1279);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1280[10] = {
   1.149746,
   1.43341,
   1.736293,
   2.034812,
   2.336514,
   2.640419,
   2.931702,
   3.226647,
   3.524445,
   3.800562};
   Double_t Graph3_fy1280[10] = {
   0.5745892,
   0.5751527,
   0.5804611,
   0.5776547,
   0.5948702,
   0.5991593,
   0.5831069,
   0.5806276,
   0.6011176,
   0.6215953};
   Double_t Graph3_fex1280[10] = {
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
   Double_t Graph3_fey1280[10] = {
   0.00256656,
   0.002610679,
   0.003128821,
   0.003937146,
   0.005276616,
   0.007041525,
   0.009365712,
   0.01378682,
   0.02107166,
   0.04337248};
   gre = new TGraphErrors(10,Graph3_fx1280,Graph3_fy1280,Graph3_fex1280,Graph3_fey1280);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.7,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Q^{2} dependence of R^{#pi} Pb/C","h");
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
   Plot_29->Modified();
   Plot_29->cd();
   Plot_29->SetSelected(Plot_29);
}
