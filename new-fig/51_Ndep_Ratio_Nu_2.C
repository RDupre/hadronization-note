{
//=========Macro generated from canvas: Plot_50/Multiplicity Ratio as a function of #nu
//=========  (Fri Mar 29 18:04:36 2019) by ROOT version 6.14/00
   TCanvas *Plot_50 = new TCanvas("Plot_50", "Multiplicity Ratio as a function of #nu",0,0,600,500);
   Plot_50->Range(0,0,1,1);
   Plot_50->SetFillColor(0);
   Plot_50->SetBorderMode(0);
   Plot_50->SetBorderSize(2);
   Plot_50->SetFrameBorderMode(0);
   
   TH2D *CanmI125__51 = new TH2D("CanmI125__51","Multiplicity Ratio as a function of #nu",100,2.25,4.25,100,0,1);
   CanmI125__51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI125__51->SetLineColor(ci);
   CanmI125__51->GetXaxis()->SetTitle("#nu (GeV)");
   CanmI125__51->GetXaxis()->CenterTitle(true);
   CanmI125__51->GetXaxis()->SetLabelFont(42);
   CanmI125__51->GetXaxis()->SetLabelSize(0.035);
   CanmI125__51->GetXaxis()->SetTitleSize(0.035);
   CanmI125__51->GetXaxis()->SetTitleFont(42);
   CanmI125__51->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI125__51->GetYaxis()->CenterTitle(true);
   CanmI125__51->GetYaxis()->SetLabelFont(42);
   CanmI125__51->GetYaxis()->SetLabelSize(0.035);
   CanmI125__51->GetYaxis()->SetTitleSize(0.035);
   CanmI125__51->GetYaxis()->SetTitleOffset(0);
   CanmI125__51->GetYaxis()->SetTitleFont(42);
   CanmI125__51->GetZaxis()->SetLabelFont(42);
   CanmI125__51->GetZaxis()->SetLabelSize(0.035);
   CanmI125__51->GetZaxis()->SetTitleSize(0.035);
   CanmI125__51->GetZaxis()->SetTitleFont(42);
   CanmI125__51->Draw("");
   
   Double_t Graph0_fx1378[10] = {
   2.37118,
   2.556191,
   2.752157,
   2.950655,
   3.147885,
   3.35155,
   3.54409,
   3.752609,
   3.961261,
   4.137328};
   Double_t Graph0_fy1378[10] = {
   0.5665879,
   0.5377507,
   0.5256065,
   0.5230791,
   0.5283829,
   0.5294295,
   0.5557891,
   0.593513,
   0.5954668,
   0.5646782};
   Double_t Graph0_fex1378[10] = {
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
   Double_t Graph0_fey1378[10] = {
   0.007821974,
   0.004912572,
   0.004250832,
   0.00410786,
   0.004735778,
   0.004829965,
   0.005068308,
   0.00549665,
   0.007958157,
   0.008772955};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1378,Graph0_fy1378,Graph0_fex1378,Graph0_fey1378);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->Draw("p");
   
   Double_t Graph1_fx1379[10] = {
   2.374777,
   2.55826,
   2.754583,
   2.945808,
   3.151378,
   3.348826,
   3.54989,
   3.749023,
   3.950471,
   4.146344};
   Double_t Graph1_fy1379[10] = {
   0.5922376,
   0.5720713,
   0.560397,
   0.5521436,
   0.5637844,
   0.5592418,
   0.5530533,
   0.5586573,
   0.5676284,
   0.5713735};
   Double_t Graph1_fex1379[10] = {
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
   Double_t Graph1_fey1379[10] = {
   0.004914907,
   0.002943356,
   0.002469704,
   0.002266188,
   0.002115823,
   0.002077653,
   0.002003693,
   0.002013647,
   0.002059589,
   0.002170999};
   gre = new TGraphErrors(10,Graph1_fx1379,Graph1_fy1379,Graph1_fex1379,Graph1_fey1379);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph2_fx1380[10] = {
   2.370926,
   2.556293,
   2.752145,
   2.95065,
   3.147869,
   3.351496,
   3.544146,
   3.752525,
   3.961199,
   4.137416};
   Double_t Graph2_fy1380[10] = {
   0.5535631,
   0.5290223,
   0.5200251,
   0.5172787,
   0.5225703,
   0.5225753,
   0.5465114,
   0.5879493,
   0.5874992,
   0.5579171};
   Double_t Graph2_fex1380[10] = {
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
   Double_t Graph2_fey1380[10] = {
   0.007600556,
   0.004828516,
   0.004217405,
   0.004076976,
   0.004702012,
   0.004781918,
   0.004993552,
   0.005461875,
   0.007849069,
   0.008673879};
   gre = new TGraphErrors(10,Graph2_fx1380,Graph2_fy1380,Graph2_fex1380,Graph2_fey1380);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1381[10] = {
   2.374573,
   2.558166,
   2.754575,
   2.945813,
   3.151358,
   3.348827,
   3.549896,
   3.749023,
   3.950471,
   4.146342};
   Double_t Graph3_fy1381[10] = {
   0.6010074,
   0.5790831,
   0.5665624,
   0.5577095,
   0.5704851,
   0.5651326,
   0.558634,
   0.5644119,
   0.5730776,
   0.5765183};
   Double_t Graph3_fex1381[10] = {
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
   Double_t Graph3_fey1381[10] = {
   0.004928006,
   0.00295637,
   0.00248129,
   0.002277557,
   0.002130119,
   0.002090021,
   0.002015922,
   0.002025924,
   0.002071822,
   0.002183075};
   gre = new TGraphErrors(10,Graph3_fx1381,Graph3_fy1381,Graph3_fex1381,Graph3_fey1381);
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
   Plot_50->Modified();
   Plot_50->cd();
   Plot_50->SetSelected(Plot_50);
}
