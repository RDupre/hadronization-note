{
//=========Macro generated from canvas: Plot_13/Multiplicity Ratio as a function of P_{T}^{2} in various z bins
//=========  (Thu Mar 21 18:22:27 2019) by ROOT version 6.14/00
   TCanvas *Plot_13 = new TCanvas("Plot_13", "Multiplicity Ratio as a function of P_{T}^{2} in various z bins",0,0,600,500);
   Plot_13->Range(0,0,1,1);
   Plot_13->SetFillColor(0);
   Plot_13->SetBorderMode(0);
   Plot_13->SetBorderSize(2);
   Plot_13->SetFrameBorderMode(0);
   
   TH2D *CanmI88__14 = new TH2D("CanmI88__14","Multiplicity Ratio as a function of P_{T}^{2} in various z bins",100,0,1.3,100,0,4);
   CanmI88__14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI88__14->SetLineColor(ci);
   CanmI88__14->GetXaxis()->SetTitle("P_{T}^{2} (GeV^{2}/c^{2})");
   CanmI88__14->GetXaxis()->CenterTitle(true);
   CanmI88__14->GetXaxis()->SetLabelFont(42);
   CanmI88__14->GetXaxis()->SetLabelSize(0.035);
   CanmI88__14->GetXaxis()->SetTitleSize(0.035);
   CanmI88__14->GetXaxis()->SetTitleFont(42);
   CanmI88__14->GetYaxis()->SetTitle("R_{Fe}^{#pi^{+}}");
   CanmI88__14->GetYaxis()->CenterTitle(true);
   CanmI88__14->GetYaxis()->SetLabelFont(42);
   CanmI88__14->GetYaxis()->SetLabelSize(0.035);
   CanmI88__14->GetYaxis()->SetTitleSize(0.035);
   CanmI88__14->GetYaxis()->SetTitleOffset(1.3);
   CanmI88__14->GetYaxis()->SetTitleFont(42);
   CanmI88__14->GetZaxis()->SetLabelFont(42);
   CanmI88__14->GetZaxis()->SetLabelSize(0.035);
   CanmI88__14->GetZaxis()->SetTitleSize(0.035);
   CanmI88__14->GetZaxis()->SetTitleFont(42);
   CanmI88__14->Draw("");
   
   Double_t Graph0_fx1125[10] = {
   0.06457217,
   0.2191645,
   0.3653949,
   0.5159797,
   0.6632795,
   0.8137384,
   0.9615806,
   1.106989,
   1.265291,
   1.409168};
   Double_t Graph0_fy1125[10] = {
   0.4636924,
   0.5157501,
   0.6077344,
   0.5819526,
   0.5955349,
   0.8422046,
   0.7866619,
   1.293111,
   2.451275,
   4.219493};
   Double_t Graph0_fex1125[10] = {
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
   Double_t Graph0_fey1125[10] = {
   0.0074919,
   0.008540852,
   0.01070545,
   0.01143872,
   0.01477946,
   0.02930393,
   0.04665506,
   0.1356368,
   0.4708241,
   2.489243};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1125,Graph0_fy1125,Graph0_fex1125,Graph0_fey1125);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1126[10] = {
   0.07460341,
   0.2186129,
   0.3660247,
   0.5162412,
   0.6636731,
   0.8133737,
   0.9609408,
   1.108543,
   1.255765,
   1.393505};
   Double_t Graph1_fy1126[10] = {
   0.5246144,
   0.5399071,
   0.5570893,
   0.6286624,
   0.6944965,
   0.8639711,
   1.121665,
   2.398613,
   3.627741,
   7.684264};
   Double_t Graph1_fex1126[10] = {
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
   Double_t Graph1_fey1126[10] = {
   0.008362678,
   0.008629787,
   0.009312756,
   0.01136074,
   0.01440204,
   0.02474277,
   0.05419253,
   0.253245,
   0.7379067,
   3.620548};
   gre = new TGraphErrors(10,Graph1_fx1126,Graph1_fy1126,Graph1_fex1126,Graph1_fey1126);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1127[10] = {
   0.08273659,
   0.2165579,
   0.3669505,
   0.5150106,
   0.6640413,
   0.8116679,
   0.9598701,
   1.108966,
   1.254582,
   1.375171};
   Double_t Graph2_fy1127[10] = {
   0.5429326,
   0.565567,
   0.5865439,
   0.628501,
   0.7393251,
   0.8667501,
   1.129981,
   1.552847,
   2.176931,
   2.617895};
   Double_t Graph2_fex1127[10] = {
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
   Double_t Graph2_fey1127[10] = {
   0.008457399,
   0.008837356,
   0.009398516,
   0.01064361,
   0.01422677,
   0.02165887,
   0.04398425,
   0.1093022,
   0.344736,
   2.111012};
   gre = new TGraphErrors(10,Graph2_fx1127,Graph2_fy1127,Graph2_fex1127,Graph2_fey1127);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph3_fx1128[10] = {
   0.07849704,
   0.215797,
   0.3644288,
   0.5113494,
   0.6582086,
   0.8055975,
   0.95236,
   1.093362,
   0,
   0};
   Double_t Graph3_fy1128[10] = {
   0.5673814,
   0.5981571,
   0.6354817,
   0.7184629,
   0.8264396,
   1.027179,
   1.375414,
   1.531513,
   0,
   0};
   Double_t Graph3_fex1128[10] = {
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
   Double_t Graph3_fey1128[10] = {
   0.008679682,
   0.009179979,
   0.009940236,
   0.01192542,
   0.01622639,
   0.0298625,
   0.08217807,
   0.2762945,
   0,
   0};
   gre = new TGraphErrors(10,Graph3_fx1128,Graph3_fy1128,Graph3_fex1128,Graph3_fey1128);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1129[10] = {
   0.06457217,
   0.2191645,
   0.3653949,
   0.5159797,
   0.6632795,
   0.8137384,
   0.9615806,
   1.106989,
   1.265291,
   1.409168};
   Double_t Graph4_fy1129[10] = {
   0.4636924,
   0.5157501,
   0.6077344,
   0.5819526,
   0.5955349,
   0.8422046,
   0.7866619,
   1.293111,
   2.451275,
   4.219493};
   Double_t Graph4_fex1129[10] = {
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
   Double_t Graph4_fey1129[10] = {
   0.002784093,
   0.003618917,
   0.005612918,
   0.00739214,
   0.01177427,
   0.02644099,
   0.04513819,
   0.1342427,
   0.4693862,
   2.488438};
   gre = new TGraphErrors(10,Graph4_fx1129,Graph4_fy1129,Graph4_fex1129,Graph4_fey1129);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->Draw("p");
   
   Double_t Graph5_fx1130[10] = {
   0.07460341,
   0.2186129,
   0.3660247,
   0.5162412,
   0.6636731,
   0.8133737,
   0.9609408,
   1.108543,
   1.255765,
   1.393505};
   Double_t Graph5_fy1130[10] = {
   0.5246144,
   0.5399071,
   0.5570893,
   0.6286624,
   0.6944965,
   0.8639711,
   1.121665,
   2.398613,
   3.627741,
   7.684264};
   Double_t Graph5_fex1130[10] = {
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
   Double_t Graph5_fey1130[10] = {
   0.002830164,
   0.002980907,
   0.004110842,
   0.006335829,
   0.009944621,
   0.02107734,
   0.05151457,
   0.2506761,
   0.7358975,
   3.618712};
   gre = new TGraphErrors(10,Graph5_fx1130,Graph5_fy1130,Graph5_fex1130,Graph5_fey1130);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph6_fx1131[10] = {
   0.08273659,
   0.2165579,
   0.3669505,
   0.5150106,
   0.6640413,
   0.8116679,
   0.9598701,
   1.108966,
   1.254582,
   1.375171};
   Double_t Graph6_fy1131[10] = {
   0.5429326,
   0.565567,
   0.5865439,
   0.628501,
   0.7393251,
   0.8667501,
   1.129981,
   1.552847,
   2.176931,
   2.617895};
   Double_t Graph6_fex1131[10] = {
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
   Double_t Graph6_fey1131[10] = {
   0.00228102,
   0.002475683,
   0.003305226,
   0.004940476,
   0.008911537,
   0.01732265,
   0.0405872,
   0.1067915,
   0.343186,
   2.110647};
   gre = new TGraphErrors(10,Graph6_fx1131,Graph6_fy1131,Graph6_fex1131,Graph6_fey1131);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph7_fx1132[10] = {
   0.07849704,
   0.215797,
   0.3644288,
   0.5113494,
   0.6582086,
   0.8055975,
   0.95236,
   1.093362,
   0,
   0};
   Double_t Graph7_fy1132[10] = {
   0.5673814,
   0.5981571,
   0.6354817,
   0.7184629,
   0.8264396,
   1.027179,
   1.375414,
   1.531513,
   0,
   0};
   Double_t Graph7_fex1132[10] = {
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
   Double_t Graph7_fey1132[10] = {
   0.001704263,
   0.001941353,
   0.002818683,
   0.005106194,
   0.01046997,
   0.0255807,
   0.07954614,
   0.2753378,
   0,
   0};
   gre = new TGraphErrors(10,Graph7_fx1132,Graph7_fy1132,Graph7_fex1132,Graph7_fey1132);
   gre->SetName("Graph7");
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
   TLegendEntry *entry=leg->AddEntry("NULL","P_{T}^{2} dependence of R^{#pi} in z bins","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph7","0.4 < z < 0.5","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph6","0.5 < z < 0.6","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph5","0.6 < z < 0.7","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph4","0.7 < z < 0.8","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_13->Modified();
   Plot_13->cd();
   Plot_13->SetSelected(Plot_13);
}
