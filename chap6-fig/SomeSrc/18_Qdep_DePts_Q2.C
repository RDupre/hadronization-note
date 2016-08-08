{
//=========Macro generated from canvas: Plot18/#DeltaP_{T}^{2} in function of Q^{2}
//=========  (Tue Sep  6 21:54:48 2011) by ROOT version5.28/00d
   TCanvas *Plot18 = new TCanvas("Plot18", "#DeltaP_{T}^{2} in function of Q^{2}",204,49,600,500);
   Plot18->Range(0,0,1,1);
   Plot18->SetFillColor(0);
   Plot18->SetBorderMode(0);
   Plot18->SetBorderSize(2);
   Plot18->SetFrameBorderMode(0);
   
   TH2D *Can90 = new TH2D("Can90","#DeltaP_{T}^{2} in function of Q^{2}",100,1,3.5,100,0,0.05);
   Can90->SetStats(0);
   Can90->GetXaxis()->SetTitle("Q^{2} (GeV^{2}/c^{2})");
   Can90->GetXaxis()->CenterTitle(true);
   Can90->Draw("");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,1.145147,0.01417336);
   gre->SetPointError(0,0,0.0007432174);
   gre->SetPoint(1,1.432998,0.01516447);
   gre->SetPointError(1,0,0.000802094);
   gre->SetPoint(2,1.736606,0.01459879);
   gre->SetPointError(2,0,0.0007797307);
   gre->SetPoint(3,2.035761,0.01638586);
   gre->SetPointError(3,0,0.0008819226);
   gre->SetPoint(4,2.33631,0.01605178);
   gre->SetPointError(4,0,0.0008710169);
   gre->SetPoint(5,2.641345,0.01322938);
   gre->SetPointError(5,0,0.0007185465);
   gre->SetPoint(6,2.932933,0.01471728);
   gre->SetPointError(6,0,0.0008016168);
   gre->SetPoint(7,3.229178,0.01230394);
   gre->SetPointError(7,0,0.000675704);
   gre->SetPoint(8,3.52591,0.01465997);
   gre->SetPointError(8,0,0.0008149437);
   gre->SetPoint(9,3.802196,0.01018128);
   gre->SetPointError(9,0,0.0005782321);
   gre->Draw("z");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1.145147,0.01417336);
   gre->SetPointError(0,0,0.001656839);
   gre->SetPoint(1,1.432998,0.01516447);
   gre->SetPointError(1,0,0.001402118);
   gre->SetPoint(2,1.736606,0.01459879);
   gre->SetPointError(2,0,0.001401874);
   gre->SetPoint(3,2.035761,0.01638586);
   gre->SetPointError(3,0,0.001622489);
   gre->SetPoint(4,2.33631,0.01605178);
   gre->SetPointError(4,0,0.002123715);
   gre->SetPoint(5,2.641345,0.01322938);
   gre->SetPointError(5,0,0.003626045);
   gre->SetPoint(6,2.932933,0.01471728);
   gre->SetPointError(6,0,0.004921942);
   gre->SetPoint(7,3.229178,0.01230394);
   gre->SetPointError(7,0,0.006259259);
   gre->SetPoint(8,3.52591,0.01465997);
   gre->SetPointError(8,0,0.007646519);
   gre->SetPoint(9,3.802196,0.01018128);
   gre->SetPointError(9,0,0.01340397);
   gre->Draw("p");
   
   
   Plot18->Modified();
   Plot18->cd();
   Plot18->SetSelected(Plot18);

}
