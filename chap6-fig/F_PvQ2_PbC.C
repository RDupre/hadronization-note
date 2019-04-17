{
//=========Macro generated from canvas: Plot_35/#DeltaP_{T}^{2} as a function of Q^{2}
//=========  (Thu Mar 21 18:22:28 2019) by ROOT version 6.14/00
   TCanvas *Plot_35 = new TCanvas("Plot_35", "#DeltaP_{T}^{2} as a function of Q^{2}",0,0,600,500);
   Plot_35->Range(0,0,1,1);
   Plot_35->SetFillColor(0);
   Plot_35->SetBorderMode(0);
   Plot_35->SetBorderSize(2);
   Plot_35->SetFrameBorderMode(0);
   
   TH2D *CanmI110__36 = new TH2D("CanmI110__36","#DeltaP_{T}^{2} as a function of Q^{2}",100,1,4,100,0,0.03);
   CanmI110__36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI110__36->SetLineColor(ci);
   CanmI110__36->GetXaxis()->SetTitle("Q^{2} (GeV^{2}/c^{2})");
   CanmI110__36->GetXaxis()->CenterTitle(true);
   CanmI110__36->GetXaxis()->SetLabelFont(42);
   CanmI110__36->GetXaxis()->SetLabelSize(0.035);
   CanmI110__36->GetXaxis()->SetTitleSize(0.035);
   CanmI110__36->GetXaxis()->SetTitleFont(42);
   CanmI110__36->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI110__36->GetYaxis()->CenterTitle(true);
   CanmI110__36->GetYaxis()->SetLabelFont(42);
   CanmI110__36->GetYaxis()->SetLabelSize(0.035);
   CanmI110__36->GetYaxis()->SetTitleSize(0.035);
   CanmI110__36->GetYaxis()->SetTitleOffset(1.5);
   CanmI110__36->GetYaxis()->SetTitleFont(42);
   CanmI110__36->GetZaxis()->SetLabelFont(42);
   CanmI110__36->GetZaxis()->SetLabelSize(0.035);
   CanmI110__36->GetZaxis()->SetTitleSize(0.035);
   CanmI110__36->GetZaxis()->SetTitleFont(42);
   CanmI110__36->Draw("");
   
   Double_t Graph1_fx1302[10] = {
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
   Double_t Graph1_fy1302[10] = {
   0.01409022,
   0.01319789,
   0.01271041,
   0.01384965,
   0.0104579,
   0.01333257,
   0.009294256,
   0.01260306,
   0.006416024,
   -0.004133429};
   Double_t Graph1_fex1302[10] = {
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
   Double_t Graph1_fey1302[10] = {
   0.001558443,
   0.001462592,
   0.001412448,
   0.00154243,
   0.001168067,
   0.001489143,
   0.001038662,
   0.001412382,
   0.0007212117,
   -0.0004663328};
   gre = new TGraphErrors(10,Graph1_fx1302,Graph1_fy1302,Graph1_fex1302,Graph1_fey1302);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph3_fx1304[10] = {
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
   Double_t Graph3_fy1304[10] = {
   0.01409022,
   0.01319789,
   0.01271041,
   0.01384965,
   0.0104579,
   0.01333257,
   0.009294256,
   0.01260306,
   0.006416024,
   -0.004133429};
   Double_t Graph3_fex1304[10] = {
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
   Double_t Graph3_fey1304[10] = {
   0.0008211359,
   0.0008185971,
   0.0009491062,
   0.001177963,
   0.00149103,
   0.001987666,
   0.002651185,
   0.003747351,
   0.005257943,
   0.009987486};
   gre = new TGraphErrors(10,Graph3_fx1304,Graph3_fy1304,Graph3_fex1304,Graph3_fey1304);
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
   TLegendEntry *entry=leg->AddEntry("NULL","Q^{2} dependence of #DeltaP_{T}^{2} Pb/C","h");
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
   leg->Draw();
   Plot_35->Modified();
   Plot_35->cd();
   Plot_35->SetSelected(Plot_35);
}
