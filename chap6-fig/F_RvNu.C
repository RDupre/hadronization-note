{
//=========Macro generated from canvas: Plot_1/Multiplicity Ratio as a function of #nu
//=========  (Thu Mar 21 18:22:26 2019) by ROOT version 6.14/00
   TCanvas *Plot_1 = new TCanvas("Plot_1", "Multiplicity Ratio as a function of #nu",0,0,600,500);
   Plot_1->Range(0,0,1,1);
   Plot_1->SetFillColor(0);
   Plot_1->SetBorderMode(0);
   Plot_1->SetBorderSize(2);
   Plot_1->SetFrameBorderMode(0);
   
   TH2D *CanmI76__2 = new TH2D("CanmI76__2","Multiplicity Ratio as a function of #nu",100,2.25,4.25,100,0,.9);
   CanmI76__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI76__2->SetLineColor(ci);
   CanmI76__2->GetXaxis()->SetTitle("#nu (GeV)");
   CanmI76__2->GetXaxis()->CenterTitle(true);
   CanmI76__2->GetXaxis()->SetLabelFont(42);
   CanmI76__2->GetXaxis()->SetLabelSize(0.035);
   CanmI76__2->GetXaxis()->SetTitleSize(0.035);
   CanmI76__2->GetXaxis()->SetTitleFont(42);
   CanmI76__2->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI76__2->GetYaxis()->CenterTitle(true);
   CanmI76__2->GetYaxis()->SetLabelFont(42);
   CanmI76__2->GetYaxis()->SetLabelSize(0.035);
   CanmI76__2->GetYaxis()->SetTitleSize(0.035);
   CanmI76__2->GetYaxis()->SetTitleOffset(1.5);
   CanmI76__2->GetYaxis()->SetTitleFont(42);
   CanmI76__2->GetZaxis()->SetLabelFont(42);
   CanmI76__2->GetZaxis()->SetLabelSize(0.035);
   CanmI76__2->GetZaxis()->SetTitleSize(0.035);
   CanmI76__2->GetZaxis()->SetTitleFont(42);
   CanmI76__2->Draw("");
   
   Double_t Graph0_fx1005[10] = {
   2.37213,
   2.557461,
   2.752358,
   2.949344,
   3.149025,
   3.351823,
   3.545328,
   3.753357,
   3.960687,
   4.137988};
   Double_t Graph0_fy1005[10] = {
   0.4386483,
   0.4281045,
   0.409971,
   0.4124033,
   0.4207986,
   0.4323059,
   0.435579,
   0.4642761,
   0.4674285,
   0.4726269};
   Double_t Graph0_fex1005[10] = {
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
   Double_t Graph0_fey1005[10] = {
   0.02248833,
   0.0202038,
   0.01914552,
   0.01916731,
   0.01969272,
   0.02028256,
   0.02053029,
   0.02194744,
   0.02315244,
   0.02428091};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1006[10] = {
   2.373027,
   2.5575,
   2.75273,
   2.949593,
   3.148954,
   3.351815,
   3.545236,
   3.753008,
   3.96128,
   4.137403};
   Double_t Graph1_fy1006[10] = {
   0.5770754,
   0.5478608,
   0.5293468,
   0.5298867,
   0.5471393,
   0.5492875,
   0.5609747,
   0.5969888,
   0.5985119,
   0.5739349};
   Double_t Graph1_fex1006[10] = {
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
   Double_t Graph1_fey1006[10] = {
   0.02688699,
   0.02472634,
   0.02378475,
   0.02376644,
   0.02463157,
   0.02479038,
   0.02533889,
   0.02696642,
   0.02770677,
   0.02699496};
   gre = new TGraphErrors(10,Graph1_fx1006,Graph1_fy1006,Graph1_fex1006,Graph1_fey1006);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1007[10] = {
   2.373305,
   2.557413,
   2.752057,
   2.949406,
   3.149083,
   3.352127,
   3.544966,
   3.752952,
   3.961206,
   4.136879};
   Double_t Graph2_fy1007[10] = {
   0.7856736,
   0.7408185,
   0.7083699,
   0.7090972,
   0.7285728,
   0.7194789,
   0.7641655,
   0.7948103,
   0.7944101,
   0.7714202};
   Double_t Graph2_fex1007[10] = {
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
   Double_t Graph2_fey1007[10] = {
   0.04169582,
   0.0377381,
   0.03586791,
   0.03583146,
   0.03706301,
   0.0367039,
   0.03902621,
   0.04063067,
   0.04201347,
   0.04181514};
   gre = new TGraphErrors(10,Graph2_fx1007,Graph2_fy1007,Graph2_fex1007,Graph2_fey1007);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph3_fx1008[10] = {
   2.37701,
   2.559643,
   2.754541,
   2.945723,
   3.151229,
   3.349322,
   3.550649,
   3.749669,
   3.950728,
   4.146397};
   Double_t Graph3_fy1008[10] = {
   0.4426823,
   0.4352176,
   0.4326037,
   0.4322246,
   0.4457554,
   0.4562562,
   0.4526817,
   0.4650463,
   0.4690604,
   0.4738133};
   Double_t Graph3_fex1008[10] = {
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
   Double_t Graph3_fey1008[10] = {
   0.01357687,
   0.01219593,
   0.01195154,
   0.01187398,
   0.01216989,
   0.01244436,
   0.01231672,
   0.01263937,
   0.01274609,
   0.01289868};
   gre = new TGraphErrors(10,Graph3_fx1008,Graph3_fy1008,Graph3_fex1008,Graph3_fey1008);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1009[10] = {
   2.37749,
   2.559738,
   2.754755,
   2.945706,
   3.151414,
   3.349061,
   3.550827,
   3.749511,
   3.950753,
   4.14648};
   Double_t Graph4_fy1009[10] = {
   0.5980856,
   0.585622,
   0.5765774,
   0.5732577,
   0.5919239,
   0.5961308,
   0.5814253,
   0.5863023,
   0.5895808,
   0.5904782};
   Double_t Graph4_fex1009[10] = {
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
   Double_t Graph4_fey1009[10] = {
   0.01753568,
   0.01664351,
   0.01630913,
   0.01618597,
   0.0166792,
   0.01679362,
   0.0163682,
   0.0165001,
   0.01659091,
   0.01662894};
   gre = new TGraphErrors(10,Graph4_fx1009,Graph4_fy1009,Graph4_fex1009,Graph4_fey1009);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph5_fx1010[10] = {
   2.377414,
   2.559654,
   2.754872,
   2.945513,
   3.151338,
   3.349143,
   3.551259,
   3.749585,
   3.950512,
   4.146434};
   Double_t Graph5_fy1010[10] = {
   0.8020689,
   0.797475,
   0.7782032,
   0.7829616,
   0.7857745,
   0.795552,
   0.7707339,
   0.7829029,
   0.788705,
   0.7892021};
   Double_t Graph5_fex1010[10] = {
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
   Double_t Graph5_fey1010[10] = {
   0.02512142,
   0.02387482,
   0.02313356,
   0.02321397,
   0.02322477,
   0.02350616,
   0.02274723,
   0.02309589,
   0.02326927,
   0.0233172};
   gre = new TGraphErrors(10,Graph5_fx1010,Graph5_fy1010,Graph5_fex1010,Graph5_fey1010);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph6_fx1011[10] = {
   2.37213,
   2.557461,
   2.752358,
   2.949344,
   3.149025,
   3.351823,
   3.545328,
   3.753357,
   3.960687,
   4.137988};
   Double_t Graph6_fy1011[10] = {
   0.4386483,
   0.4281045,
   0.409971,
   0.4124033,
   0.4207986,
   0.4323059,
   0.435579,
   0.4642761,
   0.4674285,
   0.4726269};
   Double_t Graph6_fex1011[10] = {
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
   Double_t Graph6_fey1011[10] = {
   0.01087589,
   0.00625744,
   0.005302272,
   0.004992097,
   0.005590466,
   0.005921586,
   0.006281386,
   0.006903318,
   0.00980238,
   0.0118226};
   gre = new TGraphErrors(10,Graph6_fx1011,Graph6_fy1011,Graph6_fex1011,Graph6_fey1011);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(26);
   gre->Draw("p");
   
   Double_t Graph7_fx1012[10] = {
   2.373027,
   2.5575,
   2.75273,
   2.949593,
   3.148954,
   3.351815,
   3.545236,
   3.753008,
   3.96128,
   4.137403};
   Double_t Graph7_fy1012[10] = {
   0.5770754,
   0.5478608,
   0.5293468,
   0.5298867,
   0.5471393,
   0.5492875,
   0.5609747,
   0.5969888,
   0.5985119,
   0.5739349};
   Double_t Graph7_fex1012[10] = {
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
   Double_t Graph7_fey1012[10] = {
   0.00848016,
   0.004963863,
   0.004236577,
   0.003995019,
   0.004637515,
   0.004975013,
   0.005184752,
   0.005521515,
   0.008210021,
   0.009208536};
   gre = new TGraphErrors(10,Graph7_fx1012,Graph7_fy1012,Graph7_fex1012,Graph7_fey1012);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(25);
   gre->Draw("p");
   
   Double_t Graph8_fx1013[10] = {
   2.373305,
   2.557413,
   2.752057,
   2.949406,
   3.149083,
   3.352127,
   3.544966,
   3.752952,
   3.961206,
   4.136879};
   Double_t Graph8_fy1013[10] = {
   0.7856736,
   0.7408185,
   0.7083699,
   0.7090972,
   0.7285728,
   0.7194789,
   0.7641655,
   0.7948103,
   0.7944101,
   0.7714202};
   Double_t Graph8_fex1013[10] = {
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
   Double_t Graph8_fey1013[10] = {
   0.01495191,
   0.008787978,
   0.007414926,
   0.007059565,
   0.008419764,
   0.008759051,
   0.00948019,
   0.01002139,
   0.0147061,
   0.01697039};
   gre = new TGraphErrors(10,Graph8_fx1013,Graph8_fy1013,Graph8_fex1013,Graph8_fey1013);
   gre->SetName("Graph8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   gre->Draw("p");
   
   Double_t Graph9_fx1014[10] = {
   2.37701,
   2.559643,
   2.754541,
   2.945723,
   3.151229,
   3.349322,
   3.550649,
   3.749669,
   3.950728,
   4.146397};
   Double_t Graph9_fy1014[10] = {
   0.4426823,
   0.4352176,
   0.4326037,
   0.4322246,
   0.4457554,
   0.4562562,
   0.4526817,
   0.4650463,
   0.4690604,
   0.4738133};
   Double_t Graph9_fex1014[10] = {
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
   Double_t Graph9_fey1014[10] = {
   0.006835734,
   0.003967105,
   0.003380759,
   0.003132368,
   0.002930009,
   0.002947832,
   0.002794744,
   0.002809778,
   0.002823295,
   0.002955937};
   gre = new TGraphErrors(10,Graph9_fx1014,Graph9_fy1014,Graph9_fex1014,Graph9_fey1014);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph10_fx1015[10] = {
   2.37749,
   2.559738,
   2.754755,
   2.945706,
   3.151414,
   3.349061,
   3.550827,
   3.749511,
   3.950753,
   4.14648};
   Double_t Graph10_fy1015[10] = {
   0.5980856,
   0.585622,
   0.5765774,
   0.5732577,
   0.5919239,
   0.5961308,
   0.5814253,
   0.5863023,
   0.5895808,
   0.5904782};
   Double_t Graph10_fex1015[10] = {
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
   Double_t Graph10_fey1015[10] = {
   0.00539918,
   0.003184018,
   0.002701621,
   0.002503417,
   0.002356403,
   0.002343818,
   0.002204658,
   0.002182756,
   0.00218394,
   0.002282274};
   gre = new TGraphErrors(10,Graph10_fx1015,Graph10_fy1015,Graph10_fex1015,Graph10_fey1015);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph11_fx1016[10] = {
   2.377414,
   2.559654,
   2.754872,
   2.945513,
   3.151338,
   3.349143,
   3.551259,
   3.749585,
   3.950512,
   4.146434};
   Double_t Graph11_fy1016[10] = {
   0.8020689,
   0.797475,
   0.7782032,
   0.7829616,
   0.7857745,
   0.795552,
   0.7707339,
   0.7829029,
   0.788705,
   0.7892021};
   Double_t Graph11_fex1016[10] = {
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
   Double_t Graph11_fey1016[10] = {
   0.009323368,
   0.005662299,
   0.004785606,
   0.004510578,
   0.004136962,
   0.004145546,
   0.003868271,
   0.003867129,
   0.003909014,
   0.004104868};
   gre = new TGraphErrors(10,Graph11_fx1016,Graph11_fy1016,Graph11_fex1016,Graph11_fey1016);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.5,0.43,0.85,0.15,NULL,"brNDC");
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
   entry=leg->AddEntry("Graph8","Carbon (#pi^{-})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph7","Iron (#pi^{-})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph6","Lead (#pi^{-})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_1->Modified();
   Plot_1->cd();
   Plot_1->SetSelected(Plot_1);
}
