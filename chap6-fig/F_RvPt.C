{
//=========Macro generated from canvas: Plot_4/Multiplicity Ratio as a function of P_{T}^{2}
//=========  (Thu Mar 21 18:22:26 2019) by ROOT version 6.14/00
   TCanvas *Plot_4 = new TCanvas("Plot_4", "Multiplicity Ratio as a function of P_{T}^{2}",0,0,600,500);
   Plot_4->Range(0,0,1,1);
   Plot_4->SetFillColor(0);
   Plot_4->SetBorderMode(0);
   Plot_4->SetBorderSize(2);
   Plot_4->SetFrameBorderMode(0);
   
   TH2D *CanmI79__5 = new TH2D("CanmI79__5","Multiplicity Ratio as a function of P_{T}^{2}",100,0,1.3,100,0,4);
   CanmI79__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI79__5->SetLineColor(ci);
   CanmI79__5->GetXaxis()->SetTitle("P_{T}^{2} (GeV^{2}/c^{2})");
   CanmI79__5->GetXaxis()->CenterTitle(true);
   CanmI79__5->GetXaxis()->SetLabelFont(42);
   CanmI79__5->GetXaxis()->SetLabelSize(0.035);
   CanmI79__5->GetXaxis()->SetTitleSize(0.035);
   CanmI79__5->GetXaxis()->SetTitleFont(42);
   CanmI79__5->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI79__5->GetYaxis()->CenterTitle(true);
   CanmI79__5->GetYaxis()->SetLabelFont(42);
   CanmI79__5->GetYaxis()->SetLabelSize(0.035);
   CanmI79__5->GetYaxis()->SetTitleSize(0.035);
   CanmI79__5->GetYaxis()->SetTitleOffset(1.5);
   CanmI79__5->GetYaxis()->SetTitleFont(42);
   CanmI79__5->GetZaxis()->SetLabelFont(42);
   CanmI79__5->GetZaxis()->SetLabelSize(0.035);
   CanmI79__5->GetZaxis()->SetTitleSize(0.035);
   CanmI79__5->GetZaxis()->SetTitleFont(42);
   CanmI79__5->Draw("");
   
   Double_t Graph0_fx1041[10] = {
   0.08993929,
   0.2113048,
   0.3642556,
   0.5141874,
   0.6629022,
   0.8086131,
   0.9552233,
   1.105575,
   1.250999,
   1.370605};
   Double_t Graph0_fy1041[10] = {
   0.4189613,
   0.4251993,
   0.4585333,
   0.4856008,
   0.5512108,
   0.6461033,
   0.8002431,
   1.145499,
   1.692902,
   0.8412269};
   Double_t Graph0_fex1041[10] = {
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
   Double_t Graph0_fey1041[10] = {
   0.01420496,
   0.01421235,
   0.01523786,
   0.01651589,
   0.01992857,
   0.02705759,
   0.0447971,
   0.1062366,
   0.3461971,
   0.6407881};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1042[10] = {
   0.09016032,
   0.2116881,
   0.3643088,
   0.5146219,
   0.6629229,
   0.8090603,
   0.9578431,
   1.106634,
   1.250491,
   1.406192};
   Double_t Graph1_fy1042[10] = {
   0.5364337,
   0.5472023,
   0.5817329,
   0.6103105,
   0.6696218,
   0.8096266,
   1.044014,
   1.56397,
   1.773887,
   8.683845};
   Double_t Graph1_fex1042[10] = {
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
   Double_t Graph1_fey1042[10] = {
   0.01885704,
   0.01914942,
   0.02031221,
   0.02149958,
   0.02423465,
   0.03156865,
   0.04861646,
   0.1115104,
   0.265445,
   4.331942};
   gre = new TGraphErrors(10,Graph1_fx1042,Graph1_fy1042,Graph1_fex1042,Graph1_fey1042);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1043[10] = {
   0.09028463,
   0.2115508,
   0.3644268,
   0.5144543,
   0.6623841,
   0.8080788,
   0.9574678,
   1.103185,
   1.255043,
   1.384097};
   Double_t Graph2_fy1043[10] = {
   0.7352981,
   0.7346977,
   0.7627438,
   0.7701385,
   0.8238201,
   0.9352424,
   1.136595,
   1.522679,
   2.877746,
   9.075338};
   Double_t Graph2_fex1043[10] = {
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
   Double_t Graph2_fey1043[10] = {
   0.02562964,
   0.02539992,
   0.02626718,
   0.02697999,
   0.03031643,
   0.0393748,
   0.06214658,
   0.1424273,
   0.6119547,
   6.885547};
   gre = new TGraphErrors(10,Graph2_fx1043,Graph2_fy1043,Graph2_fex1043,Graph2_fey1043);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph3_fx1044[10] = {
   0.07926183,
   0.2164984,
   0.3656112,
   0.5134736,
   0.661978,
   0.8107,
   0.9596251,
   1.106072,
   1.254998,
   1.417613};
   Double_t Graph3_fy1044[10] = {
   0.4163492,
   0.4435617,
   0.4712523,
   0.5375934,
   0.61577,
   0.7553787,
   0.987689,
   1.843335,
   3.30162,
   6.168969};
   Double_t Graph3_fex1044[10] = {
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
   Double_t Graph3_fey1044[10] = {
   0.008351954,
   0.008910223,
   0.009595181,
   0.01131727,
   0.01408353,
   0.02106234,
   0.04174657,
   0.1406163,
   0.5564091,
   3.105197};
   gre = new TGraphErrors(10,Graph3_fx1044,Graph3_fy1044,Graph3_fex1044,Graph3_fey1044);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1045[10] = {
   0.07897666,
   0.2165824,
   0.3655641,
   0.5138183,
   0.6621151,
   0.8109416,
   0.9593287,
   1.108007,
   1.255251,
   1.390833};
   Double_t Graph4_fy1045[10] = {
   0.5535691,
   0.5763743,
   0.6028819,
   0.6639216,
   0.7522303,
   0.897877,
   1.154732,
   1.85267,
   2.916195,
   6.21929};
   Double_t Graph4_fex1045[10] = {
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
   Double_t Graph4_fey1045[10] = {
   0.0158385,
   0.01649716,
   0.01730212,
   0.01919126,
   0.02218056,
   0.02824998,
   0.04449149,
   0.1174828,
   0.3898204,
   2.534015};
   gre = new TGraphErrors(10,Graph4_fx1045,Graph4_fy1045,Graph4_fex1045,Graph4_fey1045);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph5_fx1046[10] = {
   0.07944478,
   0.2165303,
   0.3655318,
   0.513626,
   0.6613312,
   0.8099803,
   0.9573135,
   1.108403,
   1.25109,
   1.388025};
   Double_t Graph5_fy1046[10] = {
   0.7674476,
   0.782735,
   0.7934361,
   0.8235823,
   0.8909484,
   0.9731096,
   1.0794,
   1.725471,
   1.910616,
   3.558748};
   Double_t Graph5_fex1046[10] = {
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
   Double_t Graph5_fey1046[10] = {
   0.01424254,
   0.0145496,
   0.01491802,
   0.01596396,
   0.01869532,
   0.02563714,
   0.04506108,
   0.1412982,
   0.3717816,
   1.950372};
   gre = new TGraphErrors(10,Graph5_fx1046,Graph5_fy1046,Graph5_fex1046,Graph5_fey1046);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph6_fx1047[10] = {
   0.08993929,
   0.2113048,
   0.3642556,
   0.5141874,
   0.6629022,
   0.8086131,
   0.9552233,
   1.105575,
   1.250999,
   1.370605};
   Double_t Graph6_fy1047[10] = {
   0.4189613,
   0.4251993,
   0.4585333,
   0.4856008,
   0.5512108,
   0.6461033,
   0.8002431,
   1.145499,
   1.692902,
   0.8412269};
   Double_t Graph6_fex1047[10] = {
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
   Double_t Graph6_fey1047[10] = {
   0.004152329,
   0.003451915,
   0.003338671,
   0.004986155,
   0.00881577,
   0.01712409,
   0.03651736,
   0.09953237,
   0.3418178,
   0.6402074};
   gre = new TGraphErrors(10,Graph6_fx1047,Graph6_fy1047,Graph6_fex1047,Graph6_fey1047);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(26);
   gre->Draw("p");
   
   Double_t Graph7_fx1048[10] = {
   0.09016032,
   0.2116881,
   0.3643088,
   0.5146219,
   0.6629229,
   0.8090603,
   0.9578431,
   1.106634,
   1.250491,
   1.406192};
   Double_t Graph7_fy1048[10] = {
   0.5364337,
   0.5472023,
   0.5817329,
   0.6103105,
   0.6696218,
   0.8096266,
   1.044014,
   1.56397,
   1.773887,
   8.683845};
   Double_t Graph7_fex1048[10] = {
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
   Double_t Graph7_fey1048[10] = {
   0.003303755,
   0.002837265,
   0.002691277,
   0.004010746,
   0.007088303,
   0.0145411,
   0.03252733,
   0.09749261,
   0.258248,
   4.321504};
   gre = new TGraphErrors(10,Graph7_fx1048,Graph7_fy1048,Graph7_fex1048,Graph7_fey1048);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(25);
   gre->Draw("p");
   
   Double_t Graph8_fx1049[10] = {
   0.09028463,
   0.2115508,
   0.3644268,
   0.5144543,
   0.6623841,
   0.8080788,
   0.9574678,
   1.103185,
   1.255043,
   1.384097};
   Double_t Graph8_fy1049[10] = {
   0.7352981,
   0.7346977,
   0.7627438,
   0.7701385,
   0.8238201,
   0.9352424,
   1.136595,
   1.522679,
   2.877746,
   9.075338};
   Double_t Graph8_fex1049[10] = {
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
   Double_t Graph8_fey1049[10] = {
   0.006036741,
   0.005072694,
   0.004727292,
   0.006877103,
   0.01184356,
   0.02338035,
   0.0487826,
   0.1327588,
   0.6041401,
   6.87868};
   gre = new TGraphErrors(10,Graph8_fx1049,Graph8_fy1049,Graph8_fex1049,Graph8_fey1049);
   gre->SetName("Graph8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   gre->Draw("p");
   
   Double_t Graph9_fx1050[10] = {
   0.07926183,
   0.2164984,
   0.3656112,
   0.5134736,
   0.661978,
   0.8107,
   0.9596251,
   1.106072,
   1.254998,
   1.417613};
   Double_t Graph9_fy1050[10] = {
   0.4163492,
   0.4435617,
   0.4712523,
   0.5375934,
   0.61577,
   0.7553787,
   0.987689,
   1.843335,
   3.30162,
   6.168969};
   Double_t Graph9_fex1050[10] = {
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
   Double_t Graph9_fey1050[10] = {
   0.001570984,
   0.001738312,
   0.002421624,
   0.003987268,
   0.007152917,
   0.01490424,
   0.03693385,
   0.1358455,
   0.5525937,
   3.102817};
   gre = new TGraphErrors(10,Graph9_fx1050,Graph9_fy1050,Graph9_fex1050,Graph9_fey1050);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph10_fx1051[10] = {
   0.07897666,
   0.2165824,
   0.3655641,
   0.5138183,
   0.6621151,
   0.8109416,
   0.9593287,
   1.108007,
   1.255251,
   1.390833};
   Double_t Graph10_fy1051[10] = {
   0.5535691,
   0.5763743,
   0.6028819,
   0.6639216,
   0.7522303,
   0.897877,
   1.154732,
   1.85267,
   2.916195,
   6.21929};
   Double_t Graph10_fex1051[10] = {
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
   Double_t Graph10_fey1051[10] = {
   0.001237919,
   0.001365537,
   0.001907507,
   0.003109057,
   0.00562036,
   0.01192193,
   0.02990992,
   0.1049263,
   0.3808421,
   2.527798};
   gre = new TGraphErrors(10,Graph10_fx1051,Graph10_fy1051,Graph10_fex1051,Graph10_fey1051);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph11_fx1052[10] = {
   0.07944478,
   0.2165303,
   0.3655318,
   0.513626,
   0.6613312,
   0.8099803,
   0.9573135,
   1.108403,
   1.25109,
   1.388025};
   Double_t Graph11_fy1052[10] = {
   0.7674476,
   0.782735,
   0.7934361,
   0.8235823,
   0.8909484,
   0.9731096,
   1.0794,
   1.725471,
   1.910616,
   3.558748};
   Double_t Graph11_fex1052[10] = {
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
   Double_t Graph11_fey1052[10] = {
   0.002248114,
   0.002436454,
   0.003335941,
   0.005201758,
   0.00910696,
   0.01841876,
   0.04048733,
   0.1377147,
   0.3701292,
   1.949281};
   gre = new TGraphErrors(10,Graph11_fx1052,Graph11_fy1052,Graph11_fex1052,Graph11_fey1052);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","P_{T}^{2} dependence of R^{#pi}","h");
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
   Plot_4->Modified();
   Plot_4->cd();
   Plot_4->SetSelected(Plot_4);
}
