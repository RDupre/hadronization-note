{
//=========Macro generated from canvas: Plot_36/#DeltaP_{T}^{2} as a function of z
//=========  (Thu Mar 21 18:22:28 2019) by ROOT version 6.14/00
   TCanvas *Plot_36 = new TCanvas("Plot_36", "#DeltaP_{T}^{2} as a function of z",0,0,600,500);
   Plot_36->Range(0,0,1,1);
   Plot_36->SetFillColor(0);
   Plot_36->SetBorderMode(0);
   Plot_36->SetBorderSize(2);
   Plot_36->SetFrameBorderMode(0);
   
   TH2D *CanmI111__37 = new TH2D("CanmI111__37","#DeltaP_{T}^{2} as a function of z",100,0,1,100,0,0.035);
   CanmI111__37->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI111__37->SetLineColor(ci);
   CanmI111__37->GetXaxis()->SetTitle("z");
   CanmI111__37->GetXaxis()->CenterTitle(true);
   CanmI111__37->GetXaxis()->SetLabelFont(42);
   CanmI111__37->GetXaxis()->SetLabelSize(0.035);
   CanmI111__37->GetXaxis()->SetTitleSize(0.035);
   CanmI111__37->GetXaxis()->SetTitleFont(42);
   CanmI111__37->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI111__37->GetYaxis()->CenterTitle(true);
   CanmI111__37->GetYaxis()->SetLabelFont(42);
   CanmI111__37->GetYaxis()->SetLabelSize(0.035);
   CanmI111__37->GetYaxis()->SetTitleSize(0.035);
   CanmI111__37->GetYaxis()->SetTitleOffset(1.5);
   CanmI111__37->GetYaxis()->SetTitleFont(42);
   CanmI111__37->GetZaxis()->SetLabelFont(42);
   CanmI111__37->GetZaxis()->SetLabelSize(0.035);
   CanmI111__37->GetZaxis()->SetTitleSize(0.035);
   CanmI111__37->GetZaxis()->SetTitleFont(42);
   CanmI111__37->Draw("");
   
   Double_t Graph0_fx1305[10] = {
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
   Double_t Graph0_fy1305[10] = {
   0,
   5.65466e-05,
   0.0001865109,
   0.002589462,
   0.005428153,
   0.007085012,
   0.01163885,
   0.01288912,
   0.02069753,
   0.008830505};
   Double_t Graph0_fex1305[10] = {
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
   Double_t Graph0_fey1305[10] = {
   0,
   1.187479e-05,
   3.916734e-05,
   0.0005437913,
   0.001139942,
   0.001487965,
   0.002444488,
   0.002707147,
   0.004347496,
   0.001854884};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1305,Graph0_fy1305,Graph0_fex1305,Graph0_fey1305);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1306[10] = {
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
   Double_t Graph1_fy1306[10] = {
   -0.0007459109,
   -0.0006942755,
   0.0007670924,
   0.004090042,
   0.009415845,
   0.01452707,
   0.01363324,
   0.01037045,
   0.005739842,
   0.01959896};
   Double_t Graph1_fex1306[10] = {
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
   Double_t Graph1_fey1306[10] = {
   -8.205021e-05,
   -7.637031e-05,
   8.438022e-05,
   0.0004499061,
   0.001038908,
   0.001615678,
   0.001524994,
   0.001162351,
   0.0006439803,
   0.002207724};
   gre = new TGraphErrors(10,Graph1_fx1306,Graph1_fy1306,Graph1_fex1306,Graph1_fey1306);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1307[10] = {
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
   Double_t Graph2_fy1307[10] = {
   0,
   5.65466e-05,
   0.0001865109,
   0.002589462,
   0.005428153,
   0.007085012,
   0.01163885,
   0.01288912,
   0.02069753,
   0.008830505};
   Double_t Graph2_fex1307[10] = {
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
   Double_t Graph2_fey1307[10] = {
   0,
   0.0001566391,
   0.0003410868,
   0.0008388991,
   0.001176876,
   0.001848906,
   0.002668424,
   0.003055782,
   0.003903553,
   0.003910675};
   gre = new TGraphErrors(10,Graph2_fx1307,Graph2_fy1307,Graph2_fex1307,Graph2_fey1307);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1308[10] = {
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
   Double_t Graph3_fy1308[10] = {
   -0.0007459109,
   -0.0006942755,
   0.0007670924,
   0.004090042,
   0.009415845,
   0.01452707,
   0.01363324,
   0.01037045,
   0.005739842,
   0.01959896};
   Double_t Graph3_fex1308[10] = {
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
   Double_t Graph3_fey1308[10] = {
   5.688514e-05,
   6.156629e-05,
   0.0001350416,
   0.0002891301,
   0.0005325384,
   0.0008539101,
   0.001153132,
   0.001392198,
   0.001729556,
   0.002337834};
   gre = new TGraphErrors(10,Graph3_fx1308,Graph3_fy1308,Graph3_fex1308,Graph3_fey1308);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.65,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","z dependence of #DeltaP_{T}^{2} Pb/C","h");
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
   Plot_36->Modified();
   Plot_36->cd();
   Plot_36->SetSelected(Plot_36);
}
