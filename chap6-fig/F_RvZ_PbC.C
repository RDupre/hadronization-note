{
//=========Macro generated from canvas: Plot_30/Multiplicity Ratio as a function of z
//=========  (Thu Mar 21 18:22:28 2019) by ROOT version 6.14/00
   TCanvas *Plot_30 = new TCanvas("Plot_30", "Multiplicity Ratio as a function of z",0,0,600,500);
   Plot_30->Range(0,0,1,1);
   Plot_30->SetFillColor(0);
   Plot_30->SetBorderMode(0);
   Plot_30->SetBorderSize(2);
   Plot_30->SetFrameBorderMode(0);
   
   TH2D *CanmI105__31 = new TH2D("CanmI105__31","Multiplicity Ratio as a function of z",100,0,1,100,0.35,0.75);
   CanmI105__31->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI105__31->SetLineColor(ci);
   CanmI105__31->GetXaxis()->SetTitle("z");
   CanmI105__31->GetXaxis()->CenterTitle(true);
   CanmI105__31->GetXaxis()->SetLabelFont(42);
   CanmI105__31->GetXaxis()->SetLabelSize(0.035);
   CanmI105__31->GetXaxis()->SetTitleSize(0.035);
   CanmI105__31->GetXaxis()->SetTitleFont(42);
   CanmI105__31->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI105__31->GetYaxis()->CenterTitle(true);
   CanmI105__31->GetYaxis()->SetLabelFont(42);
   CanmI105__31->GetYaxis()->SetLabelSize(0.035);
   CanmI105__31->GetYaxis()->SetTitleSize(0.035);
   CanmI105__31->GetYaxis()->SetTitleOffset(1.3);
   CanmI105__31->GetYaxis()->SetTitleFont(42);
   CanmI105__31->GetZaxis()->SetLabelFont(42);
   CanmI105__31->GetZaxis()->SetLabelSize(0.035);
   CanmI105__31->GetZaxis()->SetTitleSize(0.035);
   CanmI105__31->GetZaxis()->SetTitleFont(42);
   CanmI105__31->Draw("");
   
   Double_t Graph0_fx1281[10] = {
   0,
   0.1636512,
   0.2454184,
   0.3466499,
   0.4449192,
   0.543626,
   0.6479182,
   0.7457964,
   0.8426025,
   0.9404518};
   Double_t Graph0_fy1281[10] = {
   0,
   0.68048,
   0.6323821,
   0.5904759,
   0.5797857,
   0.5691122,
   0.5495492,
   0.5110487,
   0.5447833,
   0.5867948};
   Double_t Graph0_fex1281[10] = {
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
   Double_t Graph0_fey1281[10] = {
   0,
   0.005259173,
   0.003976653,
   0.00502442,
   0.004669265,
   0.00591196,
   0.007782826,
   0.008737227,
   0.01166871,
   0.01679548};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1281,Graph0_fy1281,Graph0_fex1281,Graph0_fey1281);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1282[10] = {
   0.09141613,
   0.156209,
   0.2472489,
   0.3462631,
   0.4458123,
   0.5452145,
   0.6472206,
   0.7478118,
   0.8447379,
   0.940653};
   Double_t Graph1_fy1282[10] = {
   0.686445,
   0.6914133,
   0.6338156,
   0.6063601,
   0.5957586,
   0.5921279,
   0.579823,
   0.5713234,
   0.5441412,
   0.4550961};
   Double_t Graph1_fex1282[10] = {
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
   Double_t Graph1_fey1282[10] = {
   0.006984589,
   0.001644965,
   0.001440096,
   0.001643025,
   0.002032852,
   0.002607732,
   0.003256149,
   0.003887635,
   0.004626005,
   0.006026253};
   gre = new TGraphErrors(10,Graph1_fx1282,Graph1_fy1282,Graph1_fex1282,Graph1_fey1282);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1283[10] = {
   0,
   0.1636512,
   0.2454184,
   0.3466499,
   0.4449192,
   0.543626,
   0.6479182,
   0.7457964,
   0.8426025,
   0.9404518};
   Double_t Graph2_fy1283[10] = {
   0,
   0.68048,
   0.6323821,
   0.5904759,
   0.5797857,
   0.5691122,
   0.5495492,
   0.5110487,
   0.5447833,
   0.5867948};
   Double_t Graph2_fex1283[10] = {
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
   Double_t Graph2_fey1283[10] = {
   0,
   0.005259173,
   0.003976653,
   0.00502442,
   0.004669265,
   0.00591196,
   0.007782826,
   0.008737227,
   0.01166871,
   0.01679548};
   gre = new TGraphErrors(10,Graph2_fx1283,Graph2_fy1283,Graph2_fex1283,Graph2_fey1283);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1284[10] = {
   0.09141613,
   0.156209,
   0.2472489,
   0.3462631,
   0.4458123,
   0.5452145,
   0.6472206,
   0.7478118,
   0.8447379,
   0.940653};
   Double_t Graph3_fy1284[10] = {
   0.686445,
   0.6914133,
   0.6338156,
   0.6063601,
   0.5957586,
   0.5921279,
   0.579823,
   0.5713234,
   0.5441412,
   0.4550961};
   Double_t Graph3_fex1284[10] = {
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
   Double_t Graph3_fey1284[10] = {
   0.006984589,
   0.001644965,
   0.001440096,
   0.001643025,
   0.002032852,
   0.002607732,
   0.003256149,
   0.003887635,
   0.004626005,
   0.006026253};
   gre = new TGraphErrors(10,Graph3_fx1284,Graph3_fy1284,Graph3_fex1284,Graph3_fey1284);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.4,0.5,0.15,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","z dependence of R^{#pi} Pb/C","h");
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
   Plot_30->Modified();
   Plot_30->cd();
   Plot_30->SetSelected(Plot_30);
}
