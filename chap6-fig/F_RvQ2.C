{
//=========Macro generated from canvas: Plot_2/Multiplicity Ratio as a function of Q^{2}
//=========  (Thu Mar 21 18:22:26 2019) by ROOT version 6.14/00
   TCanvas *Plot_2 = new TCanvas("Plot_2", "Multiplicity Ratio as a function of Q^{2}",0,0,600,500);
   Plot_2->Range(0,0,1,1);
   Plot_2->SetFillColor(0);
   Plot_2->SetBorderMode(0);
   Plot_2->SetBorderSize(2);
   Plot_2->SetFrameBorderMode(0);
   
   TH2D *CanmI77__3 = new TH2D("CanmI77__3","Multiplicity Ratio as a function of Q^{2}",100,1,4,100,0,0.9);
   CanmI77__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI77__3->SetLineColor(ci);
   CanmI77__3->GetXaxis()->SetTitle("Q^{2} (GeV^{2}/c^{2})");
   CanmI77__3->GetXaxis()->CenterTitle(true);
   CanmI77__3->GetXaxis()->SetLabelFont(42);
   CanmI77__3->GetXaxis()->SetLabelSize(0.035);
   CanmI77__3->GetXaxis()->SetTitleSize(0.035);
   CanmI77__3->GetXaxis()->SetTitleFont(42);
   CanmI77__3->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI77__3->GetYaxis()->CenterTitle(true);
   CanmI77__3->GetYaxis()->SetLabelFont(42);
   CanmI77__3->GetYaxis()->SetLabelSize(0.035);
   CanmI77__3->GetYaxis()->SetTitleSize(0.035);
   CanmI77__3->GetYaxis()->SetTitleOffset(1.3);
   CanmI77__3->GetYaxis()->SetTitleFont(42);
   CanmI77__3->GetZaxis()->SetLabelFont(42);
   CanmI77__3->GetZaxis()->SetLabelSize(0.035);
   CanmI77__3->GetZaxis()->SetTitleSize(0.035);
   CanmI77__3->GetZaxis()->SetTitleFont(42);
   CanmI77__3->Draw("");
   
   Double_t Graph0_fx1017[10] = {
   1.138513,
   1.428901,
   1.737762,
   2.036258,
   2.338136,
   2.636107,
   2.930173,
   3.22919,
   3.524602,
   3.799039};
   Double_t Graph0_fy1017[10] = {
   0.4023407,
   0.4635319,
   0.4433882,
   0.4571715,
   0.49663,
   0.5207858,
   0.4848663,
   0.4630789,
   0.438524,
   0.451463};
   Double_t Graph0_fex1017[10] = {
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
   Double_t Graph0_fey1017[10] = {
   0.01496284,
   0.01728574,
   0.01662619,
   0.01754351,
   0.02038917,
   0.02271869,
   0.02178294,
   0.02425988,
   0.02819775,
   0.04878503};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1018[10] = {
   1.138916,
   1.428979,
   1.737726,
   2.036334,
   2.336308,
   2.637594,
   2.928453,
   3.228272,
   3.524759,
   3.800768};
   Double_t Graph1_fy1018[10] = {
   0.5224553,
   0.5884072,
   0.5604877,
   0.5828932,
   0.6105912,
   0.6171351,
   0.6105909,
   0.5884751,
   0.5970909,
   0.6398035};
   Double_t Graph1_fex1018[10] = {
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
   Double_t Graph1_fey1018[10] = {
   0.02017125,
   0.02274323,
   0.02169652,
   0.02274653,
   0.02436637,
   0.02525836,
   0.02545512,
   0.0260948,
   0.02971242,
   0.04536388};
   gre = new TGraphErrors(10,Graph1_fx1018,Graph1_fy1018,Graph1_fex1018,Graph1_fey1018);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1019[10] = {
   1.13953,
   1.429078,
   1.737706,
   2.037056,
   2.337379,
   2.636535,
   2.928861,
   3.225981,
   3.524286,
   3.799767};
   Double_t Graph2_fy1019[10] = {
   0.7079662,
   0.7879232,
   0.7578003,
   0.7596196,
   0.8121853,
   0.7965495,
   0.7911195,
   0.7713357,
   0.718033,
   0.6339851};
   Double_t Graph2_fex1019[10] = {
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
   Double_t Graph2_fey1019[10] = {
   0.0302434,
   0.03369359,
   0.03250247,
   0.03291906,
   0.03628454,
   0.03663993,
   0.03776293,
   0.03991291,
   0.04332302,
   0.05890662};
   gre = new TGraphErrors(10,Graph2_fx1019,Graph2_fy1019,Graph2_fex1019,Graph2_fey1019);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph3_fx1020[10] = {
   1.147686,
   1.433601,
   1.736352,
   2.034445,
   2.336888,
   2.641685,
   2.931875,
   3.228163,
   3.525694,
   3.798897};
   Double_t Graph3_fy1020[10] = {
   0.4438249,
   0.4536411,
   0.4556362,
   0.4567143,
   0.4689846,
   0.4682738,
   0.4475841,
   0.4322579,
   0.4503073,
   0.4178493};
   Double_t Graph3_fex1020[10] = {
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
   Double_t Graph3_fey1020[10] = {
   0.007444343,
   0.007618677,
   0.007748424,
   0.007962514,
   0.008532495,
   0.009151344,
   0.009851422,
   0.01178393,
   0.01626129,
   0.02795869};
   gre = new TGraphErrors(10,Graph3_fx1020,Graph3_fy1020,Graph3_fex1020,Graph3_fey1020);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1021[10] = {
   1.148113,
   1.433465,
   1.736663,
   2.034618,
   2.336607,
   2.641847,
   2.931657,
   3.22752,
   3.524754,
   3.798269};
   Double_t Graph4_fy1021[10] = {
   0.5767499,
   0.5902952,
   0.5884899,
   0.5951801,
   0.5996171,
   0.5939422,
   0.5853497,
   0.5504416,
   0.5685155,
   0.5168858};
   Double_t Graph4_fex1021[10] = {
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
   Double_t Graph4_fey1021[10] = {
   0.01001614,
   0.01025595,
   0.01026859,
   0.01047424,
   0.01072026,
   0.01092342,
   0.01132351,
   0.0118518,
   0.01447154,
   0.02075878};
   gre = new TGraphErrors(10,Graph4_fx1021,Graph4_fy1021,Graph4_fex1021,Graph4_fey1021);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph5_fx1022[10] = {
   1.148264,
   1.433398,
   1.736778,
   2.034875,
   2.336723,
   2.641794,
   2.931066,
   3.227538,
   3.52459,
   3.802841};
   Double_t Graph5_fy1022[10] = {
   0.7779898,
   0.7969725,
   0.7853595,
   0.7925407,
   0.7910312,
   0.7837554,
   0.7756828,
   0.7493446,
   0.7384543,
   0.7156962};
   Double_t Graph5_fex1022[10] = {
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
   Double_t Graph5_fey1022[10] = {
   0.01400873,
   0.01435962,
   0.01424939,
   0.01457492,
   0.01490964,
   0.01541892,
   0.0164611,
   0.01832844,
   0.02222391,
   0.03553327};
   gre = new TGraphErrors(10,Graph5_fx1022,Graph5_fy1022,Graph5_fex1022,Graph5_fey1022);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph6_fx1023[10] = {
   1.138513,
   1.428901,
   1.737762,
   2.036258,
   2.338136,
   2.636107,
   2.930173,
   3.22919,
   3.524602,
   3.799039};
   Double_t Graph6_fy1023[10] = {
   0.4023407,
   0.4635319,
   0.4433882,
   0.4571715,
   0.49663,
   0.5207858,
   0.4848663,
   0.4630789,
   0.438524,
   0.451463};
   Double_t Graph6_fex1023[10] = {
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
   Double_t Graph6_fey1023[10] = {
   0.003660271,
   0.00440608,
   0.004560888,
   0.006000497,
   0.009747421,
   0.01278578,
   0.01299246,
   0.01759842,
   0.02334658,
   0.04598864};
   gre = new TGraphErrors(10,Graph6_fx1023,Graph6_fy1023,Graph6_fex1023,Graph6_fey1023);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(26);
   gre->Draw("p");
   
   Double_t Graph7_fx1024[10] = {
   1.138916,
   1.428979,
   1.737726,
   2.036334,
   2.336308,
   2.637594,
   2.928453,
   3.228272,
   3.524759,
   3.800768};
   Double_t Graph7_fy1024[10] = {
   0.5224553,
   0.5884072,
   0.5604877,
   0.5828932,
   0.6105912,
   0.6171351,
   0.6105909,
   0.5884751,
   0.5970909,
   0.6398035};
   Double_t Graph7_fex1024[10] = {
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
   Double_t Graph7_fey1024[10] = {
   0.003014489,
   0.003562782,
   0.003595005,
   0.004717564,
   0.007098989,
   0.009107806,
   0.01022933,
   0.01327632,
   0.01905948,
   0.03822728};
   gre = new TGraphErrors(10,Graph7_fx1024,Graph7_fy1024,Graph7_fex1024,Graph7_fey1024);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(25);
   gre->Draw("p");
   
   Double_t Graph8_fx1025[10] = {
   1.13953,
   1.429078,
   1.737706,
   2.037056,
   2.337379,
   2.636535,
   2.928861,
   3.225981,
   3.524286,
   3.799767};
   Double_t Graph8_fy1025[10] = {
   0.7079662,
   0.7879232,
   0.7578003,
   0.7596196,
   0.8121853,
   0.7965495,
   0.7911195,
   0.7713357,
   0.718033,
   0.6339851};
   Double_t Graph8_fex1025[10] = {
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
   Double_t Graph8_fey1025[10] = {
   0.005487309,
   0.006294551,
   0.00655333,
   0.008082611,
   0.01234574,
   0.01492402,
   0.01793029,
   0.02330341,
   0.03109658,
   0.05254185};
   gre = new TGraphErrors(10,Graph8_fx1025,Graph8_fy1025,Graph8_fex1025,Graph8_fey1025);
   gre->SetName("Graph8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   gre->Draw("p");
   
   Double_t Graph9_fx1026[10] = {
   1.147686,
   1.433601,
   1.736352,
   2.034445,
   2.336888,
   2.641685,
   2.931875,
   3.228163,
   3.525694,
   3.798897};
   Double_t Graph9_fy1026[10] = {
   0.4438249,
   0.4536411,
   0.4556362,
   0.4567143,
   0.4689846,
   0.4682738,
   0.4475841,
   0.4322579,
   0.4503073,
   0.4178493};
   Double_t Graph9_fex1026[10] = {
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
   Double_t Graph9_fey1026[10] = {
   0.001795957,
   0.001875413,
   0.002242844,
   0.002851889,
   0.003811234,
   0.005064155,
   0.006630977,
   0.009452684,
   0.01451554,
   0.02711874};
   gre = new TGraphErrors(10,Graph9_fx1026,Graph9_fy1026,Graph9_fex1026,Graph9_fey1026);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph10_fx1027[10] = {
   1.148113,
   1.433465,
   1.736663,
   2.034618,
   2.336607,
   2.641847,
   2.931657,
   3.22752,
   3.524754,
   3.798269};
   Double_t Graph10_fy1027[10] = {
   0.5767499,
   0.5902952,
   0.5884899,
   0.5951801,
   0.5996171,
   0.5939422,
   0.5853497,
   0.5504416,
   0.5685155,
   0.5168858};
   Double_t Graph10_fex1027[10] = {
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
   Double_t Graph10_fey1027[10] = {
   0.00142792,
   0.00149325,
   0.001765775,
   0.002245879,
   0.002948202,
   0.003884618,
   0.0051947,
   0.007137434,
   0.0106737,
   0.01876132};
   gre = new TGraphErrors(10,Graph10_fx1027,Graph10_fy1027,Graph10_fex1027,Graph10_fey1027);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph11_fx1028[10] = {
   1.148264,
   1.433398,
   1.736778,
   2.034875,
   2.336723,
   2.641794,
   2.931066,
   3.227538,
   3.52459,
   3.802841};
   Double_t Graph11_fy1028[10] = {
   0.7779898,
   0.7969725,
   0.7853595,
   0.7925407,
   0.7910312,
   0.7837554,
   0.7756828,
   0.7493446,
   0.7384543,
   0.7156962};
   Double_t Graph11_fex1028[10] = {
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
   Double_t Graph11_fey1028[10] = {
   0.002564109,
   0.002675809,
   0.003124852,
   0.003949311,
   0.005120083,
   0.006726924,
   0.009078608,
   0.012648,
   0.01797274,
   0.03319791};
   gre = new TGraphErrors(10,Graph11_fx1028,Graph11_fy1028,Graph11_fex1028,Graph11_fey1028);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.15,0.5,0.42,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Q^{2} dependence of R^{#pi}","h");
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
   Plot_2->Modified();
   Plot_2->cd();
   Plot_2->SetSelected(Plot_2);
}
