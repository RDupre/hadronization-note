{
//=========Macro generated from canvas: Plot_31/Multiplicity Ratio as a function of P_{T}^{2}
//=========  (Thu Mar 21 18:22:28 2019) by ROOT version 6.14/00
   TCanvas *Plot_31 = new TCanvas("Plot_31", "Multiplicity Ratio as a function of P_{T}^{2}",0,0,600,500);
   Plot_31->Range(0,0,1,1);
   Plot_31->SetFillColor(0);
   Plot_31->SetBorderMode(0);
   Plot_31->SetBorderSize(2);
   Plot_31->SetFrameBorderMode(0);
   
   TH2D *CanmI106__32 = new TH2D("CanmI106__32","Multiplicity Ratio as a function of P_{T}^{2}",100,0,1.5,100,0,2);
   CanmI106__32->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI106__32->SetLineColor(ci);
   CanmI106__32->GetXaxis()->SetTitle("P_{T}^{2} (GeV^{2}/c^{2})");
   CanmI106__32->GetXaxis()->CenterTitle(true);
   CanmI106__32->GetXaxis()->SetLabelFont(42);
   CanmI106__32->GetXaxis()->SetLabelSize(0.035);
   CanmI106__32->GetXaxis()->SetTitleSize(0.035);
   CanmI106__32->GetXaxis()->SetTitleFont(42);
   CanmI106__32->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI106__32->GetYaxis()->CenterTitle(true);
   CanmI106__32->GetYaxis()->SetLabelFont(42);
   CanmI106__32->GetYaxis()->SetLabelSize(0.035);
   CanmI106__32->GetYaxis()->SetTitleSize(0.035);
   CanmI106__32->GetYaxis()->SetTitleOffset(1.3);
   CanmI106__32->GetYaxis()->SetTitleFont(42);
   CanmI106__32->GetZaxis()->SetLabelFont(42);
   CanmI106__32->GetZaxis()->SetLabelSize(0.035);
   CanmI106__32->GetZaxis()->SetTitleSize(0.035);
   CanmI106__32->GetZaxis()->SetTitleFont(42);
   CanmI106__32->Draw("");
   
   Double_t Graph0_fx1285[10] = {
   0.09117815,
   0.2123008,
   0.3644384,
   0.5153399,
   0.663447,
   0.8096597,
   0.9578164,
   1.105686,
   1.253118,
   1.386305};
   Double_t Graph0_fy1285[10] = {
   0.5804789,
   0.5753444,
   0.6010738,
   0.623085,
   0.6695403,
   0.6585569,
   0.6939519,
   0.7912812,
   0.6583399,
   0.1794621};
   Double_t Graph0_fex1285[10] = {
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
   Double_t Graph0_fey1285[10] = {
   0.006406308,
   0.005112214,
   0.004831347,
   0.007030935,
   0.01166082,
   0.01911993,
   0.03400509,
   0.07161258,
   0.1249391,
   0.1154538};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1285,Graph0_fy1285,Graph0_fex1285,Graph0_fey1285);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1286[10] = {
   0.07966202,
   0.2169544,
   0.365831,
   0.5142192,
   0.6625757,
   0.8115954,
   0.9593592,
   1.109728,
   1.255214,
   1.409027};
   Double_t Graph1_fy1286[10] = {
   0.5464547,
   0.5698796,
   0.5985657,
   0.6547459,
   0.690077,
   0.8017864,
   0.8994937,
   1.083558,
   1.219619,
   1.768627};
   Double_t Graph1_fex1286[10] = {
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
   Double_t Graph1_fey1286[10] = {
   0.00226268,
   0.002450177,
   0.003373768,
   0.005312259,
   0.008688923,
   0.01707518,
   0.03577839,
   0.08011186,
   0.1876306,
   0.6830336};
   gre = new TGraphErrors(10,Graph1_fx1286,Graph1_fy1286,Graph1_fex1286,Graph1_fey1286);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1287[10] = {
   0.09117815,
   0.2123008,
   0.3644384,
   0.5153399,
   0.663447,
   0.8096597,
   0.9578164,
   1.105686,
   1.253118,
   1.386305};
   Double_t Graph2_fy1287[10] = {
   0.5804789,
   0.5753444,
   0.6010738,
   0.623085,
   0.6695403,
   0.6585569,
   0.6939519,
   0.7912812,
   0.6583399,
   0.1794621};
   Double_t Graph2_fex1287[10] = {
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
   Double_t Graph2_fey1287[10] = {
   0.006406308,
   0.005112214,
   0.004831347,
   0.007030935,
   0.01166082,
   0.01911993,
   0.03400509,
   0.07161258,
   0.1249391,
   0.1154538};
   gre = new TGraphErrors(10,Graph2_fx1287,Graph2_fy1287,Graph2_fex1287,Graph2_fey1287);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1288[10] = {
   0.07966202,
   0.2169544,
   0.365831,
   0.5142192,
   0.6625757,
   0.8115954,
   0.9593592,
   1.109728,
   1.255214,
   1.409027};
   Double_t Graph3_fy1288[10] = {
   0.5464547,
   0.5698796,
   0.5985657,
   0.6547459,
   0.690077,
   0.8017864,
   0.8994937,
   1.083558,
   1.219619,
   1.768627};
   Double_t Graph3_fex1288[10] = {
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
   Double_t Graph3_fey1288[10] = {
   0.00226268,
   0.002450177,
   0.003373768,
   0.005312259,
   0.008688923,
   0.01707518,
   0.03577839,
   0.08011186,
   0.1876306,
   0.6830336};
   gre = new TGraphErrors(10,Graph3_fx1288,Graph3_fy1288,Graph3_fex1288,Graph3_fey1288);
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
   TLegendEntry *entry=leg->AddEntry("NULL","P_{T}^{2} dependence of R^{#pi} Pb/C","h");
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
   Plot_31->Modified();
   Plot_31->cd();
   Plot_31->SetSelected(Plot_31);
}
