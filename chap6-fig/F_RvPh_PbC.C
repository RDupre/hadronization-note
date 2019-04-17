{
//=========Macro generated from canvas: Plot_33/Multiplicity Ratio as a function of #phi_{h}
//=========  (Thu Mar 21 18:22:28 2019) by ROOT version 6.14/00
   TCanvas *Plot_33 = new TCanvas("Plot_33", "Multiplicity Ratio as a function of #phi_{h}",0,0,600,500);
   Plot_33->Range(0,0,1,1);
   Plot_33->SetFillColor(0);
   Plot_33->SetBorderMode(0);
   Plot_33->SetBorderSize(2);
   Plot_33->SetFrameBorderMode(0);
   
   TH2D *CanmI108__34 = new TH2D("CanmI108__34","Multiplicity Ratio as a function of #phi_{h}",100,0,180,100,0.45,0.8);
   CanmI108__34->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI108__34->SetLineColor(ci);
   CanmI108__34->GetXaxis()->SetTitle("#phi_{h}");
   CanmI108__34->GetXaxis()->CenterTitle(true);
   CanmI108__34->GetXaxis()->SetLabelFont(42);
   CanmI108__34->GetXaxis()->SetLabelSize(0.035);
   CanmI108__34->GetXaxis()->SetTitleSize(0.035);
   CanmI108__34->GetXaxis()->SetTitleFont(42);
   CanmI108__34->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI108__34->GetYaxis()->CenterTitle(true);
   CanmI108__34->GetYaxis()->SetLabelFont(42);
   CanmI108__34->GetYaxis()->SetLabelSize(0.035);
   CanmI108__34->GetYaxis()->SetTitleSize(0.035);
   CanmI108__34->GetYaxis()->SetTitleOffset(1.5);
   CanmI108__34->GetYaxis()->SetTitleFont(42);
   CanmI108__34->GetZaxis()->SetLabelFont(42);
   CanmI108__34->GetZaxis()->SetLabelSize(0.035);
   CanmI108__34->GetZaxis()->SetTitleSize(0.035);
   CanmI108__34->GetZaxis()->SetTitleFont(42);
   CanmI108__34->Draw("");
   
   Double_t Graph0_fx1293[10] = {
   8.728232,
   26.04138,
   44.00677,
   63.56595,
   80.94464,
   97.78868,
   114.7047,
   134.7668,
   149.3611,
   172.11};
   Double_t Graph0_fy1293[10] = {
   0.5786547,
   0.5730795,
   0.5747585,
   0.616806,
   0.6017332,
   0.6022645,
   0.607399,
   0.6430935,
   0.6450723,
   0.7230306};
   Double_t Graph0_fex1293[10] = {
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
   Double_t Graph0_fey1293[10] = {
   0.006768375,
   0.007446647,
   0.008141565,
   0.008746541,
   0.007250628,
   0.008081486,
   0.01375716,
   0.01511295,
   0.02746125,
   0.03212699};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1293,Graph0_fy1293,Graph0_fex1293,Graph0_fey1293);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1294[10] = {
   8.882472,
   26.48726,
   44.56792,
   63.36863,
   81.15243,
   98.74906,
   116.3307,
   134.6789,
   151.3131,
   172.2683};
   Double_t Graph1_fy1294[10] = {
   0.5747665,
   0.5765433,
   0.5767254,
   0.5790378,
   0.5765687,
   0.5707185,
   0.5735083,
   0.5951501,
   0.5786597,
   0.6209367};
   Double_t Graph1_fex1294[10] = {
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
   Double_t Graph1_fey1294[10] = {
   0.003206631,
   0.00377627,
   0.004386295,
   0.004312901,
   0.00396631,
   0.004008189,
   0.004793012,
   0.005718449,
   0.00700838,
   0.01111336};
   gre = new TGraphErrors(10,Graph1_fx1294,Graph1_fy1294,Graph1_fex1294,Graph1_fey1294);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1295[10] = {
   8.728232,
   26.04138,
   44.00677,
   63.56595,
   80.94464,
   97.78868,
   114.7047,
   134.7668,
   149.3611,
   172.11};
   Double_t Graph2_fy1295[10] = {
   0.5786547,
   0.5730795,
   0.5747585,
   0.616806,
   0.6017332,
   0.6022645,
   0.607399,
   0.6430935,
   0.6450723,
   0.7230306};
   Double_t Graph2_fex1295[10] = {
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
   Double_t Graph2_fey1295[10] = {
   0.006768375,
   0.007446647,
   0.008141565,
   0.008746541,
   0.007250628,
   0.008081486,
   0.01375716,
   0.01511295,
   0.02746125,
   0.03212699};
   gre = new TGraphErrors(10,Graph2_fx1295,Graph2_fy1295,Graph2_fex1295,Graph2_fey1295);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1296[10] = {
   8.882472,
   26.48726,
   44.56792,
   63.36863,
   81.15243,
   98.74906,
   116.3307,
   134.6789,
   151.3131,
   172.2683};
   Double_t Graph3_fy1296[10] = {
   0.5747665,
   0.5765433,
   0.5767254,
   0.5790378,
   0.5765687,
   0.5707185,
   0.5735083,
   0.5951501,
   0.5786597,
   0.6209367};
   Double_t Graph3_fex1296[10] = {
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
   Double_t Graph3_fey1296[10] = {
   0.003206631,
   0.00377627,
   0.004386295,
   0.004312901,
   0.00396631,
   0.004008189,
   0.004793012,
   0.005718449,
   0.00700838,
   0.01111336};
   gre = new TGraphErrors(10,Graph3_fx1296,Graph3_fy1296,Graph3_fex1296,Graph3_fey1296);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#phi_{h} dependence of R^{#pi} Pb/C","h");
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
   Plot_33->Modified();
   Plot_33->cd();
   Plot_33->SetSelected(Plot_33);
}
