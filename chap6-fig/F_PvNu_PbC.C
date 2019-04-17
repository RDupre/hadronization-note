{
//=========Macro generated from canvas: Plot_34/#DeltaP_{T}^{2} as a function of #nu
//=========  (Thu Mar 21 18:22:28 2019) by ROOT version 6.14/00
   TCanvas *Plot_34 = new TCanvas("Plot_34", "#DeltaP_{T}^{2} as a function of #nu",0,0,600,500);
   Plot_34->Range(0,0,1,1);
   Plot_34->SetFillColor(0);
   Plot_34->SetBorderMode(0);
   Plot_34->SetBorderSize(2);
   Plot_34->SetFrameBorderMode(0);
   
   TH2D *CanmI109__35 = new TH2D("CanmI109__35","#DeltaP_{T}^{2} as a function of #nu",100,2.25,4.25,100,0,0.03);
   CanmI109__35->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI109__35->SetLineColor(ci);
   CanmI109__35->GetXaxis()->SetTitle("#nu (GeV)");
   CanmI109__35->GetXaxis()->CenterTitle(true);
   CanmI109__35->GetXaxis()->SetLabelFont(42);
   CanmI109__35->GetXaxis()->SetLabelSize(0.035);
   CanmI109__35->GetXaxis()->SetTitleSize(0.035);
   CanmI109__35->GetXaxis()->SetTitleFont(42);
   CanmI109__35->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI109__35->GetYaxis()->CenterTitle(true);
   CanmI109__35->GetYaxis()->SetLabelFont(42);
   CanmI109__35->GetYaxis()->SetLabelSize(0.035);
   CanmI109__35->GetYaxis()->SetTitleSize(0.035);
   CanmI109__35->GetYaxis()->SetTitleOffset(1.5);
   CanmI109__35->GetYaxis()->SetTitleFont(42);
   CanmI109__35->GetZaxis()->SetLabelFont(42);
   CanmI109__35->GetZaxis()->SetLabelSize(0.035);
   CanmI109__35->GetZaxis()->SetTitleSize(0.035);
   CanmI109__35->GetZaxis()->SetTitleFont(42);
   CanmI109__35->Draw("");
   
   
   Double_t Graph1_fx1298[10] = {
   2.379359,
   2.559699,
   2.754802,
   2.945276,
   3.151709,
   3.348545,
   3.551686,
   3.749513,
   3.950339,
   4.146722};
   Double_t Graph1_fy1298[10] = {
   0.004248388,
   0.008472095,
   0.01354764,
   0.01288764,
   0.01391545,
   0.01326688,
   0.01385391,
   0.01474085,
   0.01493129,
   0.01247091};
   Double_t Graph1_fex1298[10] = {
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
   Double_t Graph1_fey1298[10] = {
   0.0004674315,
   0.0009324236,
   0.001493004,
   0.001422375,
   0.001540263,
   0.001471183,
   0.001540209,
   0.00164174,
   0.001666153,
   0.001394344};
   gre = new TGraphErrors(10,Graph1_fx1298,Graph1_fy1298,Graph1_fex1298,Graph1_fey1298);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   
   Double_t Graph3_fx1300[10] = {
   2.379359,
   2.559699,
   2.754802,
   2.945276,
   3.151709,
   3.348545,
   3.551686,
   3.749513,
   3.950339,
   4.146722};
   Double_t Graph3_fy1300[10] = {
   0.004248388,
   0.008472095,
   0.01354764,
   0.01288764,
   0.01391545,
   0.01326688,
   0.01385391,
   0.01474085,
   0.01493129,
   0.01247091};
   Double_t Graph3_fex1300[10] = {
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
   Double_t Graph3_fey1300[10] = {
   0.002374591,
   0.001497774,
   0.001400743,
   0.001365533,
   0.001301742,
   0.001314102,
   0.001250111,
   0.001259908,
   0.001264471,
   0.001299939};
   gre = new TGraphErrors(10,Graph3_fx1300,Graph3_fy1300,Graph3_fex1300,Graph3_fey1300);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.72,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Nu dependence of #DeltaP_{T}^{2} Pb/C","h");
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
   Plot_34->Modified();
   Plot_34->cd();
   Plot_34->SetSelected(Plot_34);
}
