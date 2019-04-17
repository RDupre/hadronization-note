{
//=========Macro generated from canvas: Plot_6/Multiplicity Ratio as a function of #phi_{h}
//=========  (Thu Mar 21 18:22:26 2019) by ROOT version 6.14/00
   TCanvas *Plot_6 = new TCanvas("Plot_6", "Multiplicity Ratio as a function of #phi_{h}",0,0,600,500);
   Plot_6->Range(0,0,1,1);
   Plot_6->SetFillColor(0);
   Plot_6->SetBorderMode(0);
   Plot_6->SetBorderSize(2);
   Plot_6->SetFrameBorderMode(0);
   
   TH2D *CanmI81__7 = new TH2D("CanmI81__7","Multiplicity Ratio as a function of #phi_{h}",100,0,180,100,0,.9);
   CanmI81__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI81__7->SetLineColor(ci);
   CanmI81__7->GetXaxis()->SetTitle("#phi_{h}");
   CanmI81__7->GetXaxis()->CenterTitle(true);
   CanmI81__7->GetXaxis()->SetLabelFont(42);
   CanmI81__7->GetXaxis()->SetLabelSize(0.035);
   CanmI81__7->GetXaxis()->SetTitleSize(0.035);
   CanmI81__7->GetXaxis()->SetTitleFont(42);
   CanmI81__7->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI81__7->GetYaxis()->CenterTitle(true);
   CanmI81__7->GetYaxis()->SetLabelFont(42);
   CanmI81__7->GetYaxis()->SetLabelSize(0.035);
   CanmI81__7->GetYaxis()->SetTitleSize(0.035);
   CanmI81__7->GetYaxis()->SetTitleOffset(1.5);
   CanmI81__7->GetYaxis()->SetTitleFont(42);
   CanmI81__7->GetZaxis()->SetLabelFont(42);
   CanmI81__7->GetZaxis()->SetLabelSize(0.035);
   CanmI81__7->GetZaxis()->SetTitleSize(0.035);
   CanmI81__7->GetZaxis()->SetTitleFont(42);
   CanmI81__7->Draw("");
   
   Double_t Graph0_fx1065[10] = {
   8.733152,
   26.03752,
   43.97706,
   63.51368,
   80.95799,
   97.89003,
   114.5405,
   134.9005,
   149.3552,
   172.2791};
   Double_t Graph0_fy1065[10] = {
   0.4245478,
   0.4400547,
   0.4228229,
   0.4592566,
   0.4494974,
   0.432218,
   0.4080743,
   0.4819126,
   0.4550023,
   0.5479347};
   Double_t Graph0_fex1065[10] = {
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
   Double_t Graph0_fey1065[10] = {
   0.01229885,
   0.01291776,
   0.01257846,
   0.01373083,
   0.01307627,
   0.01275318,
   0.0137671,
   0.01649973,
   0.02129537,
   0.02625407};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1066[10] = {
   8.756685,
   26.04502,
   43.99714,
   63.56541,
   80.95257,
   97.8636,
   114.542,
   134.8617,
   149.2677,
   172.2505};
   Double_t Graph1_fy1066[10] = {
   0.5459564,
   0.5723782,
   0.5519044,
   0.5658056,
   0.5688878,
   0.5312691,
   0.5174359,
   0.5915681,
   0.5681997,
   0.6799165};
   Double_t Graph1_fex1066[10] = {
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
   Double_t Graph1_fey1066[10] = {
   0.01552671,
   0.01637504,
   0.01589089,
   0.01630112,
   0.01618663,
   0.01522363,
   0.01575797,
   0.01825091,
   0.02093875,
   0.02637431};
   gre = new TGraphErrors(10,Graph1_fx1066,Graph1_fy1066,Graph1_fex1066,Graph1_fey1066);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1067[10] = {
   8.735914,
   26.10386,
   43.98781,
   63.55626,
   80.95032,
   97.84434,
   114.5069,
   134.8889,
   149.2625,
   172.2567};
   Double_t Graph2_fy1067[10] = {
   0.7383827,
   0.7758237,
   0.7374815,
   0.7434332,
   0.7514048,
   0.7177721,
   0.661235,
   0.7624859,
   0.7088551,
   0.7398143};
   Double_t Graph2_fex1067[10] = {
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
   Double_t Graph2_fey1067[10] = {
   0.02375285,
   0.02510124,
   0.02414938,
   0.02428853,
   0.02418037,
   0.02331441,
   0.02334988,
   0.02750628,
   0.03218456,
   0.03591585};
   gre = new TGraphErrors(10,Graph2_fx1067,Graph2_fy1067,Graph2_fex1067,Graph2_fey1067);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph3_fx1068[10] = {
   8.899264,
   26.53287,
   44.61083,
   63.36885,
   81.16239,
   98.75678,
   116.3744,
   134.6784,
   151.3935,
   172.1236};
   Double_t Graph3_fy1068[10] = {
   0.4581454,
   0.4576169,
   0.4465671,
   0.4513632,
   0.4534388,
   0.447194,
   0.4357808,
   0.4478015,
   0.4334453,
   0.4734014};
   Double_t Graph3_fex1068[10] = {
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
   Double_t Graph3_fey1068[10] = {
   0.007344005,
   0.007473339,
   0.007460779,
   0.007513811,
   0.007455752,
   0.007375294,
   0.007404707,
   0.007845779,
   0.008128099,
   0.01050972};
   gre = new TGraphErrors(10,Graph3_fx1068,Graph3_fy1068,Graph3_fex1068,Graph3_fey1068);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1069[10] = {
   8.906577,
   26.51856,
   44.58779,
   63.37483,
   81.1839,
   98.75985,
   116.3645,
   134.713,
   151.4505,
   172.2451};
   Double_t Graph4_fy1069[10] = {
   0.5964563,
   0.5935352,
   0.5809838,
   0.5824589,
   0.5854386,
   0.5816841,
   0.5682147,
   0.5735736,
   0.5747713,
   0.5970265};
   Double_t Graph4_fex1069[10] = {
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
   Double_t Graph4_fey1069[10] = {
   0.009225335,
   0.009249271,
   0.009137218,
   0.009149455,
   0.009150298,
   0.009100817,
   0.008996014,
   0.009198728,
   0.009490746,
   0.01074787};
   gre = new TGraphErrors(10,Graph4_fx1069,Graph4_fy1069,Graph4_fex1069,Graph4_fey1069);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph5_fx1070[10] = {
   8.904835,
   26.51382,
   44.57799,
   63.36032,
   81.14516,
   98.7512,
   116.3377,
   134.6482,
   151.3967,
   172.164};
   Double_t Graph5_fy1070[10] = {
   0.7972808,
   0.7971905,
   0.7738366,
   0.7826317,
   0.7895728,
   0.7965751,
   0.7699487,
   0.7635205,
   0.7557322,
   0.7799422};
   Double_t Graph5_fex1070[10] = {
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
   Double_t Graph5_fey1070[10] = {
   0.01254189,
   0.01269577,
   0.01250848,
   0.01262504,
   0.01263231,
   0.01276812,
   0.01258983,
   0.01277857,
   0.01327636,
   0.01581794};
   gre = new TGraphErrors(10,Graph5_fx1070,Graph5_fy1070,Graph5_fex1070,Graph5_fey1070);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph6_fx1071[10] = {
   8.733152,
   26.03752,
   43.97706,
   63.51368,
   80.95799,
   97.89003,
   114.5405,
   134.9005,
   149.3552,
   172.2791};
   Double_t Graph6_fy1071[10] = {
   0.4245478,
   0.4400547,
   0.4228229,
   0.4592566,
   0.4494974,
   0.432218,
   0.4080743,
   0.4819126,
   0.4550023,
   0.5479347};
   Double_t Graph6_fex1071[10] = {
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
   Double_t Graph6_fey1071[10] = {
   0.004515974,
   0.005125036,
   0.005330199,
   0.005949377,
   0.004928239,
   0.00519658,
   0.008283982,
   0.01017931,
   0.01741195,
   0.02170912};
   gre = new TGraphErrors(10,Graph6_fx1071,Graph6_fy1071,Graph6_fex1071,Graph6_fey1071);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(26);
   gre->Draw("p");
   
   Double_t Graph7_fx1072[10] = {
   8.756685,
   26.04502,
   43.99714,
   63.56541,
   80.95257,
   97.8636,
   114.542,
   134.8617,
   149.2677,
   172.2505};
   Double_t Graph7_fy1072[10] = {
   0.5459564,
   0.5723782,
   0.5519044,
   0.5658056,
   0.5688878,
   0.5312691,
   0.5174359,
   0.5915681,
   0.5681997,
   0.6799165};
   Double_t Graph7_fex1072[10] = {
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
   Double_t Graph7_fey1072[10] = {
   0.003646569,
   0.004216644,
   0.00444398,
   0.004591461,
   0.003832652,
   0.004008568,
   0.00661129,
   0.008103389,
   0.013846,
   0.01850214};
   gre = new TGraphErrors(10,Graph7_fx1072,Graph7_fy1072,Graph7_fex1072,Graph7_fey1072);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(25);
   gre->Draw("p");
   
   Double_t Graph8_fx1073[10] = {
   8.735914,
   26.10386,
   43.98781,
   63.55626,
   80.95032,
   97.84434,
   114.5069,
   134.8889,
   149.2625,
   172.2567};
   Double_t Graph8_fy1073[10] = {
   0.7383827,
   0.7758237,
   0.7374815,
   0.7434332,
   0.7514048,
   0.7177721,
   0.661235,
   0.7624859,
   0.7088551,
   0.7398143};
   Double_t Graph8_fex1073[10] = {
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
   Double_t Graph8_fey1073[10] = {
   0.006630725,
   0.00746624,
   0.008014374,
   0.007909486,
   0.006778473,
   0.007208857,
   0.01131441,
   0.01420724,
   0.02358792,
   0.02770735};
   gre = new TGraphErrors(10,Graph8_fx1073,Graph8_fy1073,Graph8_fex1073,Graph8_fey1073);
   gre->SetName("Graph8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   gre->Draw("p");
   
   Double_t Graph9_fx1074[10] = {
   8.899264,
   26.53287,
   44.61083,
   63.36885,
   81.16239,
   98.75678,
   116.3744,
   134.6784,
   151.3935,
   172.1236};
   Double_t Graph9_fy1074[10] = {
   0.4581454,
   0.4576169,
   0.4465671,
   0.4513632,
   0.4534388,
   0.447194,
   0.4357808,
   0.4478015,
   0.4334453,
   0.4734014};
   Double_t Graph9_fex1074[10] = {
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
   Double_t Graph9_fey1074[10] = {
   0.002333094,
   0.002733407,
   0.003097113,
   0.003064527,
   0.002844001,
   0.002862587,
   0.003310177,
   0.003902573,
   0.004760523,
   0.007660278};
   gre = new TGraphErrors(10,Graph9_fx1074,Graph9_fy1074,Graph9_fex1074,Graph9_fey1074);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph10_fx1075[10] = {
   8.906577,
   26.51856,
   44.58779,
   63.37483,
   81.1839,
   98.75985,
   116.3645,
   134.713,
   151.4505,
   172.2451};
   Double_t Graph10_fy1075[10] = {
   0.5964563,
   0.5935352,
   0.5809838,
   0.5824589,
   0.5854386,
   0.5816841,
   0.5682147,
   0.5735736,
   0.5747713,
   0.5970265};
   Double_t Graph10_fex1075[10] = {
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
   Double_t Graph10_fey1075[10] = {
   0.001841811,
   0.002152423,
   0.002441046,
   0.002405887,
   0.002237051,
   0.002260042,
   0.002601682,
   0.003008601,
   0.003767417,
   0.005800504};
   gre = new TGraphErrors(10,Graph10_fx1075,Graph10_fy1075,Graph10_fex1075,Graph10_fey1075);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph11_fx1076[10] = {
   8.904835,
   26.51382,
   44.57799,
   63.36032,
   81.14516,
   98.7512,
   116.3377,
   134.6482,
   151.3967,
   172.164};
   Double_t Graph11_fy1076[10] = {
   0.7972808,
   0.7971905,
   0.7738366,
   0.7826317,
   0.7895728,
   0.7965751,
   0.7699487,
   0.7635205,
   0.7557322,
   0.7799422};
   Double_t Graph11_fex1076[10] = {
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
   Double_t Graph11_fey1076[10] = {
   0.003256739,
   0.003810923,
   0.004274303,
   0.004247365,
   0.003962998,
   0.004073314,
   0.004657947,
   0.00536277,
   0.006667828,
   0.01047977};
   gre = new TGraphErrors(10,Graph11_fx1076,Graph11_fy1076,Graph11_fex1076,Graph11_fey1076);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.5,0.4,0.85,0.15,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#phi_{h} dependence of R^{#pi}","h");
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
   Plot_6->Modified();
   Plot_6->cd();
   Plot_6->SetSelected(Plot_6);
}
