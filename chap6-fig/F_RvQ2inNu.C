{
//=========Macro generated from canvas: Plot_15/Multiplicity Ratio as a function of Q^{2} in a #nu bin
//=========  (Thu Mar 21 18:22:27 2019) by ROOT version 6.14/00
   TCanvas *Plot_15 = new TCanvas("Plot_15", "Multiplicity Ratio as a function of Q^{2} in a #nu bin",0,0,600,500);
   Plot_15->Range(0,0,1,1);
   Plot_15->SetFillColor(0);
   Plot_15->SetBorderMode(0);
   Plot_15->SetBorderSize(2);
   Plot_15->SetFrameBorderMode(0);
   
   TH2D *CanmI90__16 = new TH2D("CanmI90__16","Multiplicity Ratio as a function of Q^{2} in a #nu bin",100,1,4,100,0,.9);
   CanmI90__16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI90__16->SetLineColor(ci);
   CanmI90__16->GetXaxis()->SetTitle("Q^{2} (GeV^{2}/c^{2})");
   CanmI90__16->GetXaxis()->CenterTitle(true);
   CanmI90__16->GetXaxis()->SetLabelFont(42);
   CanmI90__16->GetXaxis()->SetLabelSize(0.035);
   CanmI90__16->GetXaxis()->SetTitleSize(0.035);
   CanmI90__16->GetXaxis()->SetTitleFont(42);
   CanmI90__16->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI90__16->GetYaxis()->CenterTitle(true);
   CanmI90__16->GetYaxis()->SetLabelFont(42);
   CanmI90__16->GetYaxis()->SetLabelSize(0.035);
   CanmI90__16->GetYaxis()->SetTitleSize(0.035);
   CanmI90__16->GetYaxis()->SetTitleOffset(1.3);
   CanmI90__16->GetYaxis()->SetTitleFont(42);
   CanmI90__16->GetZaxis()->SetLabelFont(42);
   CanmI90__16->GetZaxis()->SetLabelSize(0.035);
   CanmI90__16->GetZaxis()->SetTitleSize(0.035);
   CanmI90__16->GetZaxis()->SetTitleFont(42);
   CanmI90__16->Draw("");
   
   Double_t Graph0_fx1141[10] = {
   1.135641,
   1.432824,
   1.736301,
   2.0404,
   2.341882,
   2.636824,
   2.932754,
   3.226871,
   3.522031,
   3.7642};
   Double_t Graph0_fy1141[10] = {
   0.398849,
   0.4305912,
   0.4655236,
   0.5017788,
   0.4965338,
   0.470028,
   0.4655294,
   0.4398837,
   0.5611409,
   0.4781319};
   Double_t Graph0_fex1141[10] = {
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
   Double_t Graph0_fey1141[10] = {
   0.01245857,
   0.01308245,
   0.01431876,
   0.01660259,
   0.01828969,
   0.0170801,
   0.01881795,
   0.02506254,
   0.04656104,
   0.1236278};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1141,Graph0_fy1141,Graph0_fex1141,Graph0_fey1141);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1142[10] = {
   1.135978,
   1.432664,
   1.736778,
   2.038504,
   2.339657,
   2.637334,
   2.931372,
   3.227607,
   3.518266,
   3.770379};
   Double_t Graph1_fy1142[10] = {
   0.523267,
   0.5487419,
   0.5846863,
   0.623071,
   0.6261917,
   0.5949875,
   0.585973,
   0.6007369,
   0.7173226,
   0.6901698};
   Double_t Graph1_fex1142[10] = {
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
   Double_t Graph1_fey1142[10] = {
   0.01484998,
   0.01525708,
   0.01637933,
   0.01799062,
   0.01919774,
   0.01802323,
   0.01886244,
   0.02343194,
   0.0381601,
   0.08820431};
   gre = new TGraphErrors(10,Graph1_fx1142,Graph1_fy1142,Graph1_fex1142,Graph1_fey1142);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1143[10] = {
   1.135711,
   1.432609,
   1.738012,
   2.039223,
   2.341136,
   2.636942,
   2.931708,
   3.221931,
   3.522781,
   3.767769};
   Double_t Graph2_fy1143[10] = {
   0.708729,
   0.7300566,
   0.7803757,
   0.8197509,
   0.8161315,
   0.7672916,
   0.7737222,
   0.7998839,
   0.8089714,
   0.6461929};
   Double_t Graph2_fex1143[10] = {
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
   Double_t Graph2_fey1143[10] = {
   0.02141005,
   0.02134408,
   0.02305383,
   0.02536894,
   0.02723079,
   0.02545786,
   0.02792748,
   0.03710737,
   0.05614819,
   0.106284};
   gre = new TGraphErrors(10,Graph2_fx1143,Graph2_fy1143,Graph2_fex1143,Graph2_fey1143);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph3_fx1144[10] = {
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
   Double_t Graph3_fy1144[10] = {
   0.4489327,
   0.4499904,
   0.4640948,
   0.4808778,
   0.4536176,
   0.4680864,
   0.4681126,
   0.428931,
   0.4517006,
   0.4062754};
   Double_t Graph3_fex1144[10] = {
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
   Double_t Graph3_fey1144[10] = {
   0.007546048,
   0.007613993,
   0.008051819,
   0.008920453,
   0.008980193,
   0.00998709,
   0.01147332,
   0.01483742,
   0.02434428,
   0.0721645};
   gre = new TGraphErrors(10,Graph3_fx1144,Graph3_fy1144,Graph3_fex1144,Graph3_fey1144);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1145[10] = {
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
   Double_t Graph4_fy1145[10] = {
   0.5761037,
   0.5825645,
   0.5986868,
   0.6181729,
   0.5831389,
   0.6094937,
   0.6178943,
   0.5670787,
   0.6126824,
   0.5888793};
   Double_t Graph4_fex1145[10] = {
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
   Double_t Graph4_fey1145[10] = {
   0.009055758,
   0.009177592,
   0.009537462,
   0.01014855,
   0.009869814,
   0.01070006,
   0.01171566,
   0.01328148,
   0.01952588,
   0.04677014};
   gre = new TGraphErrors(10,Graph4_fx1145,Graph4_fy1145,Graph4_fex1145,Graph4_fey1145);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph5_fx1146[10] = {
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
   Double_t Graph5_fy1146[10] = {
   0.7685839,
   0.7843906,
   0.7973363,
   0.8127106,
   0.7712966,
   0.799103,
   0.7935703,
   0.7837714,
   0.7707952,
   0.7998345};
   Double_t Graph5_fex1146[10] = {
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
   Double_t Graph5_fey1146[10] = {
   0.01249392,
   0.01279855,
   0.01324761,
   0.01414338,
   0.01400166,
   0.01528315,
   0.01680503,
   0.02165848,
   0.03076521,
   0.07530741};
   gre = new TGraphErrors(10,Graph5_fx1146,Graph5_fy1146,Graph5_fex1146,Graph5_fey1146);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph6_fx1147[10] = {
   1.135641,
   1.432824,
   1.736301,
   2.0404,
   2.341882,
   2.636824,
   2.932754,
   3.226871,
   3.522031,
   3.7642};
   Double_t Graph6_fy1147[10] = {
   0.398849,
   0.4305912,
   0.4655236,
   0.5017788,
   0.4965338,
   0.470028,
   0.4655294,
   0.4398837,
   0.5611409,
   0.4781319};
   Double_t Graph6_fex1147[10] = {
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
   Double_t Graph6_fey1147[10] = {
   0.006904895,
   0.006768624,
   0.007650461,
   0.01026847,
   0.01295561,
   0.01193246,
   0.01440882,
   0.02230082,
   0.0442162,
   0.1230012};
   gre = new TGraphErrors(10,Graph6_fx1147,Graph6_fy1147,Graph6_fex1147,Graph6_fey1147);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(26);
   gre->Draw("p");
   
   Double_t Graph7_fx1148[10] = {
   1.135978,
   1.432664,
   1.736778,
   2.038504,
   2.339657,
   2.637334,
   2.931372,
   3.227607,
   3.518266,
   3.770379};
   Double_t Graph7_fy1148[10] = {
   0.523267,
   0.5487419,
   0.5846863,
   0.623071,
   0.6261917,
   0.5949875,
   0.585973,
   0.6007369,
   0.7173226,
   0.6901698};
   Double_t Graph7_fex1148[10] = {
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
   Double_t Graph7_fey1148[10] = {
   0.005952098,
   0.005405813,
   0.006098062,
   0.007824802,
   0.01017265,
   0.009248032,
   0.01112104,
   0.01746705,
   0.03329199,
   0.0863597};
   gre = new TGraphErrors(10,Graph7_fx1148,Graph7_fy1148,Graph7_fex1148,Graph7_fey1148);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(25);
   gre->Draw("p");
   
   Double_t Graph8_fx1149[10] = {
   1.135711,
   1.432609,
   1.738012,
   2.039223,
   2.341136,
   2.636942,
   2.931708,
   3.221931,
   3.522781,
   3.767769};
   Double_t Graph8_fy1149[10] = {
   0.708729,
   0.7300566,
   0.7803757,
   0.8197509,
   0.8161315,
   0.7672916,
   0.7737222,
   0.7998839,
   0.8089714,
   0.6461929};
   Double_t Graph8_fex1149[10] = {
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
   Double_t Graph8_fey1149[10] = {
   0.01090127,
   0.009760819,
   0.01094553,
   0.01375924,
   0.01706611,
   0.01581509,
   0.01937161,
   0.03073179,
   0.05205979,
   0.1049477};
   gre = new TGraphErrors(10,Graph8_fx1149,Graph8_fy1149,Graph8_fex1149,Graph8_fey1149);
   gre->SetName("Graph8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   gre->Draw("p");
   
   Double_t Graph9_fx1150[10] = {
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
   Double_t Graph9_fy1150[10] = {
   0.4489327,
   0.4499904,
   0.4640948,
   0.4808778,
   0.4536176,
   0.4680864,
   0.4681126,
   0.428931,
   0.4517006,
   0.4062754};
   Double_t Graph9_fex1150[10] = {
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
   Double_t Graph9_fey1150[10] = {
   0.003405319,
   0.003523114,
   0.004046033,
   0.005248304,
   0.005860534,
   0.007102349,
   0.009073746,
   0.01336986,
   0.0233824,
   0.07190672};
   gre = new TGraphErrors(10,Graph9_fx1150,Graph9_fy1150,Graph9_fex1150,Graph9_fey1150);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph10_fx1151[10] = {
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
   Double_t Graph10_fy1151[10] = {
   0.5761037,
   0.5825645,
   0.5986868,
   0.6181729,
   0.5831389,
   0.6094937,
   0.6178943,
   0.5670787,
   0.6126824,
   0.5888793};
   Double_t Graph10_fex1151[10] = {
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
   Double_t Graph10_fey1151[10] = {
   0.002707448,
   0.002804883,
   0.003212064,
   0.004124569,
   0.004571842,
   0.005559476,
   0.007166115,
   0.01020013,
   0.01722787,
   0.04592843};
   gre = new TGraphErrors(10,Graph10_fx1151,Graph10_fy1151,Graph10_fex1151,Graph10_fey1151);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph11_fx1152[10] = {
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
   Double_t Graph11_fy1152[10] = {
   0.7685839,
   0.7843906,
   0.7973363,
   0.8127106,
   0.7712966,
   0.799103,
   0.7935703,
   0.7837714,
   0.7707952,
   0.7998345};
   Double_t Graph11_fex1152[10] = {
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
   Double_t Graph11_fey1152[10] = {
   0.004815169,
   0.005036621,
   0.005697059,
   0.00717099,
   0.007886336,
   0.009481426,
   0.01186231,
   0.0181899,
   0.02851,
   0.07434558};
   gre = new TGraphErrors(10,Graph11_fx1152,Graph11_fy1152,Graph11_fex1152,Graph11_fey1152);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.42,0.5,0.15,NULL,"brNDC");
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
   Plot_15->Modified();
   Plot_15->cd();
   Plot_15->SetSelected(Plot_15);
}
