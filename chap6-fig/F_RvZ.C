{
//=========Macro generated from canvas: Plot_3/Multiplicity Ratio as a function of z
//=========  (Thu Mar 21 18:22:26 2019) by ROOT version 6.14/00
   TCanvas *Plot_3 = new TCanvas("Plot_3", "Multiplicity Ratio as a function of z",0,0,600,500);
   Plot_3->Range(0,0,1,1);
   Plot_3->SetFillColor(0);
   Plot_3->SetBorderMode(0);
   Plot_3->SetBorderSize(2);
   Plot_3->SetFrameBorderMode(0);
   
   TH2D *CanmI78__4 = new TH2D("CanmI78__4","Multiplicity Ratio as a function of z",100,0,1,100,0.2,1.2);
   CanmI78__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI78__4->SetLineColor(ci);
   CanmI78__4->GetXaxis()->SetTitle("z");
   CanmI78__4->GetXaxis()->CenterTitle(true);
   CanmI78__4->GetXaxis()->SetLabelFont(42);
   CanmI78__4->GetXaxis()->SetLabelSize(0.035);
   CanmI78__4->GetXaxis()->SetTitleSize(0.035);
   CanmI78__4->GetXaxis()->SetTitleFont(42);
   CanmI78__4->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI78__4->GetYaxis()->CenterTitle(true);
   CanmI78__4->GetYaxis()->SetLabelFont(42);
   CanmI78__4->GetYaxis()->SetLabelSize(0.035);
   CanmI78__4->GetYaxis()->SetTitleSize(0.035);
   CanmI78__4->GetYaxis()->SetTitleOffset(1.3);
   CanmI78__4->GetYaxis()->SetTitleFont(42);
   CanmI78__4->GetZaxis()->SetLabelFont(42);
   CanmI78__4->GetZaxis()->SetLabelSize(0.035);
   CanmI78__4->GetZaxis()->SetTitleSize(0.035);
   CanmI78__4->GetZaxis()->SetTitleFont(42);
   CanmI78__4->Draw("");
   
   Double_t Graph0_fx1029[10] = {
   0,
   0.1642319,
   0.2455758,
   0.3469161,
   0.4453398,
   0.5441051,
   0.6475265,
   0.7469012,
   0.8415068,
   0.946448};
   Double_t Graph0_fy1029[10] = {
   0,
   0.5814098,
   0.5118962,
   0.4724614,
   0.4394624,
   0.4045741,
   0.3985865,
   0.3529728,
   0.3459495,
   0.2968656};
   Double_t Graph0_fex1029[10] = {
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
   Double_t Graph0_fey1029[10] = {
   0.000,
   0.02245553,
   0.01965184,
   0.01830714,
   0.01698163,
   0.01583043,
   0.01600456,
   0.01445929,
   0.01473024,
   0.01354602};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1030[10] = {
   0,
   0.1641088,
   0.2455261,
   0.3468307,
   0.445322,
   0.544002,
   0.6477863,
   0.74657,
   0.8414271,
   0.9452945};
   Double_t Graph1_fy1030[10] = {
   0,
   0.6985288,
   0.636978,
   0.6056985,
   0.5716328,
   0.5208598,
   0.5222421,
   0.4838741,
   0.456892,
   0.3641056};
   Double_t Graph1_fex1030[10] = {
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
   Double_t Graph1_fey1030[10] = {
   0.000,
   0.02616921,
   0.02378483,
   0.02269934,
   0.02140121,
   0.0196053,
   0.01988681,
   0.0185656,
   0.01781198,
   0.01468064};
   gre = new TGraphErrors(10,Graph1_fx1030,Graph1_fy1030,Graph1_fex1030,Graph1_fey1030);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1031[10] = {
   0,
   0.1641649,
   0.2455408,
   0.3470896,
   0.4452469,
   0.5441318,
   0.6476858,
   0.7466603,
   0.8413144,
   0.9449355};
   Double_t Graph2_fy1031[10] = {
   0,
   0.8413117,
   0.8046172,
   0.7960264,
   0.762396,
   0.712832,
   0.7293509,
   0.6901012,
   0.6434183,
   0.5143102};
   Double_t Graph2_fex1031[10] = {
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
   Double_t Graph2_fey1031[10] = {
   0.000,
   0.03477216,
   0.03308466,
   0.03290242,
   0.03146467,
   0.02963887,
   0.03085158,
   0.02945698,
   0.02809165,
   0.02356286};
   gre = new TGraphErrors(10,Graph2_fx1031,Graph2_fy1031,Graph2_fex1031,Graph2_fey1031);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph3_fx1032[10] = {
   0.09148271,
   0.15695,
   0.2475094,
   0.3466044,
   0.4460554,
   0.5453663,
   0.6474332,
   0.7482229,
   0.8441777,
   0.9446512};
   Double_t Graph3_fy1032[10] = {
   0.6913927,
   0.6376483,
   0.5436564,
   0.4998006,
   0.4760198,
   0.4578642,
   0.439026,
   0.4069214,
   0.3890035,
   0.3216382};
   Double_t Graph3_fex1032[10] = {
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
   Double_t Graph3_fey1032[10] = {
   0.01559893,
   0.01315766,
   0.01121286,
   0.01033018,
   0.009879665,
   0.00957376,
   0.009286009,
   0.008724896,
   0.008540307,
   0.007676639};
   gre = new TGraphErrors(10,Graph3_fx1032,Graph3_fy1032,Graph3_fex1032,Graph3_fey1032);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1033[10] = {
   0.09148033,
   0.1562843,
   0.2474153,
   0.34656,
   0.4460397,
   0.5453177,
   0.6472924,
   0.7482038,
   0.8444546,
   0.943991};
   Double_t Graph4_fy1033[10] = {
   0.9038239,
   0.7836606,
   0.6814859,
   0.6361395,
   0.6073053,
   0.5853155,
   0.5629835,
   0.5228674,
   0.5021593,
   0.4549379};
   Double_t Graph4_fex1033[10] = {
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
   Double_t Graph4_fey1033[10] = {
   0.01943662,
   0.01624267,
   0.01412204,
   0.01319209,
   0.01261333,
   0.01219048,
   0.01177548,
   0.01099222,
   0.01064812,
   0.009913612};
   gre = new TGraphErrors(10,Graph4_fx1033,Graph4_fy1033,Graph4_fex1033,Graph4_fey1033);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph5_fx1034[10] = {
   0.09132092,
   0.1569726,
   0.2475462,
   0.3465211,
   0.4459667,
   0.545376,
   0.6474226,
   0.7479991,
   0.8444519,
   0.9439388};
   Double_t Graph5_fy1034[10] = {
   1.013072,
   0.9249497,
   0.8614383,
   0.8270234,
   0.803712,
   0.7782697,
   0.7627602,
   0.7257093,
   0.7282413,
   0.7172614};
   Double_t Graph5_fex1034[10] = {
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
   Double_t Graph5_fey1034[10] = {
   0.02306641,
   0.01974897,
   0.01838248,
   0.0176689,
   0.01721377,
   0.01674558,
   0.016526,
   0.01585343,
   0.01611916,
   0.01649255};
   gre = new TGraphErrors(10,Graph5_fx1034,Graph5_fy1034,Graph5_fex1034,Graph5_fey1034);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph6_fx1035[10] = {
   0,
   0.1642319,
   0.2455758,
   0.3469161,
   0.4453398,
   0.5441051,
   0.6475265,
   0.7469012,
   0.8415068,
   0.946448};
   Double_t Graph6_fy1035[10] = {
   0,
   0.5814098,
   0.5118962,
   0.4724614,
   0.4394624,
   0.4045741,
   0.3985865,
   0.3529728,
   0.3459495,
   0.2968656};
   Double_t Graph6_fex1035[10] = {
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
   Double_t Graph6_fey1035[10] = {
   0,
   0.00413101,
   0.002922518,
   0.003666462,
   0.003168155,
   0.003834544,
   0.005213232,
   0.00543231,
   0.006670337,
   0.007515396};
   gre = new TGraphErrors(10,Graph6_fx1035,Graph6_fy1035,Graph6_fex1035,Graph6_fey1035);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(26);
   gre->Draw("p");
   
   Double_t Graph7_fx1036[10] = {
   0,
   0.1641088,
   0.2455261,
   0.3468307,
   0.445322,
   0.544002,
   0.6477863,
   0.74657,
   0.8414271,
   0.9452945};
   Double_t Graph7_fy1036[10] = {
   0,
   0.6985288,
   0.636978,
   0.6056985,
   0.5716328,
   0.5208598,
   0.5222421,
   0.4838741,
   0.456892,
   0.3641056};
   Double_t Graph7_fex1036[10] = {
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
   Double_t Graph7_fey1036[10] = {
   0,
   0.00329071,
   0.002294551,
   0.002915291,
   0.002578796,
   0.00310254,
   0.004330341,
   0.004611976,
   0.005377558,
   0.005691844};
   gre = new TGraphErrors(10,Graph7_fx1036,Graph7_fy1036,Graph7_fex1036,Graph7_fey1036);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(25);
   gre->Draw("p");
   
   Double_t Graph8_fx1037[10] = {
   0,
   0.1641649,
   0.2455408,
   0.3470896,
   0.4452469,
   0.5441318,
   0.6476858,
   0.7466603,
   0.8413144,
   0.9449355};
   Double_t Graph8_fy1037[10] = {
   0,
   0.8413117,
   0.8046172,
   0.7960264,
   0.762396,
   0.712832,
   0.7293509,
   0.6901012,
   0.6434183,
   0.5143102};
   Double_t Graph8_fex1037[10] = {
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
   Double_t Graph8_fey1037[10] = {
   0,
   0.005415491,
   0.003935492,
   0.005136417,
   0.004604061,
   0.005613218,
   0.008071972,
   0.008597302,
   0.009955076,
   0.01069171};
   gre = new TGraphErrors(10,Graph8_fx1037,Graph8_fy1037,Graph8_fex1037,Graph8_fey1037);
   gre->SetName("Graph8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   gre->Draw("p");
   
   Double_t Graph9_fx1038[10] = {
   0.09148271,
   0.15695,
   0.2475094,
   0.3466044,
   0.4460554,
   0.5453663,
   0.6474332,
   0.7482229,
   0.8441777,
   0.9446512};
   Double_t Graph9_fy1038[10] = {
   0.6913927,
   0.6376483,
   0.5436564,
   0.4998006,
   0.4760198,
   0.4578642,
   0.439026,
   0.4069214,
   0.3890035,
   0.3216382};
   Double_t Graph9_fex1038[10] = {
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
   Double_t Graph9_fey1038[10] = {
   0.006481238,
   0.001373296,
   0.001118814,
   0.001228324,
   0.001475513,
   0.001834914,
   0.002248487,
   0.002527354,
   0.003034255,
   0.003919467};
   gre = new TGraphErrors(10,Graph9_fx1038,Graph9_fy1038,Graph9_fex1038,Graph9_fey1038);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph10_fx1039[10] = {
   0.09148033,
   0.1562843,
   0.2474153,
   0.34656,
   0.4460397,
   0.5453177,
   0.6472924,
   0.7482038,
   0.8444546,
   0.943991};
   Double_t Graph10_fy1039[10] = {
   0.9038239,
   0.7836606,
   0.6814859,
   0.6361395,
   0.6073053,
   0.5853155,
   0.5629835,
   0.5228674,
   0.5021593,
   0.4549379};
   Double_t Graph10_fex1039[10] = {
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
   Double_t Graph10_fey1039[10] = {
   0.005323219,
   0.001058198,
   0.0008747608,
   0.0009609733,
   0.001151323,
   0.001433823,
   0.001754852,
   0.00196984,
   0.002348177,
   0.003121617};
   gre = new TGraphErrors(10,Graph10_fx1039,Graph10_fy1039,Graph10_fex1039,Graph10_fey1039);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph11_fx1040[10] = {
   0.09132092,
   0.1569726,
   0.2475462,
   0.3465211,
   0.4459667,
   0.545376,
   0.6474226,
   0.7479991,
   0.8444519,
   0.9439388};
   Double_t Graph11_fy1040[10] = {
   1.013072,
   0.9249497,
   0.8614383,
   0.8270234,
   0.803712,
   0.7782697,
   0.7627602,
   0.7257093,
   0.7282413,
   0.7172614};
   Double_t Graph11_fex1040[10] = {
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
   Double_t Graph11_fey1040[10] = {
   0.008231481,
   0.0017267,
   0.001484066,
   0.00166281,
   0.002021547,
   0.002529012,
   0.003146853,
   0.003615885,
   0.004461516,
   0.006265966};
   gre = new TGraphErrors(10,Graph11_fx1040,Graph11_fy1040,Graph11_fex1040,Graph11_fey1040);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.52,0.87,0.87,0.62,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","z dependence of R^{#pi}","h");
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
   Plot_3->Modified();
   Plot_3->cd();
   Plot_3->SetSelected(Plot_3);
}
