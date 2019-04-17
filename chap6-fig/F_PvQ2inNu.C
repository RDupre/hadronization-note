{
//=========Macro generated from canvas: Plot_27/#DeltaP_{T}^{2} as a function of Q^{2} in a #nu bin
//=========  (Thu Mar 21 18:22:28 2019) by ROOT version 6.14/00
   TCanvas *Plot_27 = new TCanvas("Plot_27", "#DeltaP_{T}^{2} as a function of Q^{2} in a #nu bin",0,0,600,500);
   Plot_27->Range(0,0,1,1);
   Plot_27->SetFillColor(0);
   Plot_27->SetBorderMode(0);
   Plot_27->SetBorderSize(2);
   Plot_27->SetFrameBorderMode(0);
   
   TH2D *CanmI102__28 = new TH2D("CanmI102__28","#DeltaP_{T}^{2} as a function of Q^{2} in a #nu bin",100,1,4,100,0,0.05);
   CanmI102__28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI102__28->SetLineColor(ci);
   CanmI102__28->GetXaxis()->SetTitle("Q^{2} (GeV^{2}/c^{2})");
   CanmI102__28->GetXaxis()->CenterTitle(true);
   CanmI102__28->GetXaxis()->SetLabelFont(42);
   CanmI102__28->GetXaxis()->SetLabelSize(0.035);
   CanmI102__28->GetXaxis()->SetTitleSize(0.035);
   CanmI102__28->GetXaxis()->SetTitleFont(42);
   CanmI102__28->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI102__28->GetYaxis()->CenterTitle(true);
   CanmI102__28->GetYaxis()->SetLabelFont(42);
   CanmI102__28->GetYaxis()->SetLabelSize(0.035);
   CanmI102__28->GetYaxis()->SetTitleSize(0.035);
   CanmI102__28->GetYaxis()->SetTitleOffset(1.5);
   CanmI102__28->GetYaxis()->SetTitleFont(42);
   CanmI102__28->GetZaxis()->SetLabelFont(42);
   CanmI102__28->GetZaxis()->SetLabelSize(0.035);
   CanmI102__28->GetZaxis()->SetTitleSize(0.035);
   CanmI102__28->GetZaxis()->SetTitleFont(42);
   CanmI102__28->Draw("");
   
   
   Double_t Graph3_fx1264[10] = {
   1.145239,
   1.4365,
   1.735231,
   2.038251,
   2.34047,
   2.639497,
   2.933262,
   3.227848,
   3.524941,
   3.76979};
   Double_t Graph3_fy1264[10] = {
   0.02534645,
   0.02846344,
   0.02777853,
   0.0260599,
   0.02051619,
   0.01474054,
   0.01559059,
   0.00822318,
   0.007922967,
   0.0269396};
   Double_t Graph3_fex1264[10] = {
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
   Double_t Graph3_fey1264[10] = {
   0.002806942,
   0.00315936,
   0.003088912,
   0.002904228,
   0.002290271,
   0.001647144,
   0.001743572,
   0.0009233964,
   0.0008912537,
   0.003105736};
   gre = new TGraphErrors(10,Graph3_fx1264,Graph3_fy1264,Graph3_fex1264,Graph3_fey1264);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1265[10] = {
   1.145527,
   1.435943,
   1.736103,
   2.038625,
   2.340738,
   2.639632,
   2.932436,
   3.229339,
   3.522099,
   3.767623};
   Double_t Graph4_fy1265[10] = {
   0.01987866,
   0.02138244,
   0.02419774,
   0.01900592,
   0.01554279,
   0.01171889,
   0.01063911,
   0.006192018,
   0.01044353,
   0.008872316};
   Double_t Graph4_fex1265[10] = {
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
   Double_t Graph4_fey1265[10] = {
   0.002201395,
   0.002373191,
   0.002690696,
   0.002117748,
   0.001734611,
   0.001309099,
   0.001189524,
   0.0006947845,
   0.001173958,
   0.001004702};
   gre = new TGraphErrors(10,Graph4_fx1265,Graph4_fy1265,Graph4_fex1265,Graph4_fey1265);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph5_fx1266[10] = {
   1.145702,
   1.435849,
   1.737287,
   2.038487,
   2.341483,
   2.640733,
   2.93135,
   3.22481,
   3.523771,
   3.76995};
   Double_t Graph5_fy1266[10] = {
   0.01026266,
   0.01308461,
   0.01513777,
   0.01178527,
   0.006993738,
   0.006582201,
   0.008151711,
   -0.001637931,
   -0.003042954,
   0.01436964};
   Double_t Graph5_fex1266[10] = {
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
   Double_t Graph5_fey1266[10] = {
   0.001136501,
   0.001452218,
   0.001683092,
   0.001313101,
   0.0007804651,
   0.0007353147,
   0.0009115439,
   -0.0001837223,
   -0.0003421286,
   0.001623015};
   gre = new TGraphErrors(10,Graph5_fx1266,Graph5_fy1266,Graph5_fex1266,Graph5_fey1266);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph9_fx1270[10] = {
   1.145239,
   1.4365,
   1.735231,
   2.038251,
   2.34047,
   2.639497,
   2.933262,
   3.227848,
   3.524941,
   3.76979};
   Double_t Graph9_fy1270[10] = {
   0.02534645,
   0.02846344,
   0.02777853,
   0.0260599,
   0.02051619,
   0.01474054,
   0.01559059,
   0.00822318,
   0.007922967,
   0.0269396};
   Double_t Graph9_fex1270[10] = {
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
   Double_t Graph9_fey1270[10] = {
   0.001492435,
   0.001488868,
   0.001580541,
   0.001901433,
   0.002143553,
   0.002508881,
   0.003040973,
   0.004754656,
   0.007282018,
   0.02649652};
   gre = new TGraphErrors(10,Graph9_fx1270,Graph9_fy1270,Graph9_fex1270,Graph9_fey1270);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph10_fx1271[10] = {
   1.145527,
   1.435943,
   1.736103,
   2.038625,
   2.340738,
   2.639632,
   2.932436,
   3.229339,
   3.522099,
   3.767623};
   Double_t Graph10_fy1271[10] = {
   0.01987866,
   0.02138244,
   0.02419774,
   0.01900592,
   0.01554279,
   0.01171889,
   0.01063911,
   0.006192018,
   0.01044353,
   0.008872316};
   Double_t Graph10_fex1271[10] = {
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
   Double_t Graph10_fey1271[10] = {
   0.0008835064,
   0.0008732143,
   0.0009382597,
   0.001122281,
   0.001277261,
   0.001438613,
   0.00176867,
   0.002600547,
   0.004067754,
   0.01163072};
   gre = new TGraphErrors(10,Graph10_fx1271,Graph10_fy1271,Graph10_fex1271,Graph10_fey1271);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph11_fx1272[10] = {
   1.145702,
   1.435849,
   1.737287,
   2.038487,
   2.341483,
   2.640733,
   2.93135,
   3.22481,
   3.523771,
   3.76995};
   Double_t Graph11_fy1272[10] = {
   0.01026266,
   0.01308461,
   0.01513777,
   0.01178527,
   0.006993738,
   0.006582201,
   0.008151711,
   -0.001637931,
   -0.003042954,
   0.01436964};
   Double_t Graph11_fex1272[10] = {
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
   Double_t Graph11_fey1272[10] = {
   0.001134446,
   0.001116596,
   0.001206291,
   0.001441819,
   0.001600853,
   0.001818826,
   0.002227961,
   0.003253091,
   0.005169631,
   0.01139977};
   gre = new TGraphErrors(10,Graph11_fx1272,Graph11_fy1272,Graph11_fex1272,Graph11_fey1272);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.63,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Q^{2} dependence of R^{#pi} in a #nu bin","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph11","Carbon (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph10","Iron (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph9","Lead (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_27->Modified();
   Plot_27->cd();
   Plot_27->SetSelected(Plot_27);
}
