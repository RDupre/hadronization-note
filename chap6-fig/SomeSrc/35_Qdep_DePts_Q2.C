{
//=========Macro generated from canvas: Plot35/#DeltaP_{T}^{2} in function of Q^{2}
//=========  (Tue Sep  6 21:54:50 2011) by ROOT version5.28/00d
   TCanvas *Plot35 = new TCanvas("Plot35", "#DeltaP_{T}^{2} in function of Q^{2}",204,49,600,500);
   Plot35->Range(0,0,1,1);
   Plot35->SetFillColor(0);
   Plot35->SetBorderMode(0);
   Plot35->SetBorderSize(2);
   Plot35->SetFrameBorderMode(0);
   
   TH2D *Can107 = new TH2D("Can107","#DeltaP_{T}^{2} in function of Q^{2} (Pb/C)",100,1,3.5,100,0,0.05);
   Can107->SetStats(0);
   Can107->GetXaxis()->SetTitle("Q^{2} (GeV^{2}/c^{2})");
   Can107->GetXaxis()->CenterTitle(true);
   Can107->Draw("");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,1.1469,0.01288373);
   gre->SetPointError(0,0,0.000139524);
   gre->SetPoint(1,1.433126,0.01279101);
   gre->SetPointError(1,0,0.0001628511);
   gre->SetPoint(2,1.736309,0.01153183);
   gre->SetPointError(2,0,0.0001712212);
   gre->SetPoint(3,2.035953,0.01233677);
   gre->SetPointError(3,0,0.0002025859);
   gre->SetPoint(4,2.336202,0.01285533);
   gre->SetPointError(4,0,0.0002317548);
   gre->SetPoint(5,2.640238,0.01613859);
   gre->SetPointError(5,0,0.0003008523);
   gre->SetPoint(6,2.933009,0.01062012);
   gre->SetPointError(6,0,0.0002083349);
   gre->SetPoint(7,3.228389,0.01581968);
   gre->SetPointError(7,0,0.0003442193);
   gre->SetPoint(8,3.525126,0.009783665);
   gre->SetPointError(8,0,0.0002357498);
   gre->SetPoint(9,3.808178,-0.01045033);
   gre->SetPointError(9,0,-0.0003226118);
   gre->Draw("z");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.1469,0.01288373);
   gre->SetPointError(0,0,0.00332657);
   gre->SetPoint(1,1.433126,0.01279101);
   gre->SetPointError(1,0,0.002560338);
   gre->SetPoint(2,1.736309,0.01153183);
   gre->SetPointError(2,0,0.002641517);
   gre->SetPoint(3,2.035953,0.01233677);
   gre->SetPointError(3,0,0.003375114);
   gre->SetPoint(4,2.336202,0.01285533);
   gre->SetPointError(4,0,0.00434005);
   gre->SetPoint(5,2.640238,0.01613859);
   gre->SetPointError(5,0,0.006436854);
   gre->SetPoint(6,2.933009,0.01062012);
   gre->SetPointError(6,0,0.008621895);
   gre->SetPoint(7,3.228389,0.01581968);
   gre->SetPointError(7,0,0.01141588);
   gre->SetPoint(8,3.525126,0.009783665);
   gre->SetPointError(8,0,0.01377074);
   gre->SetPoint(9,3.808178,-0.01045033);
   gre->SetPointError(9,0,0.02302004);
   gre->Draw("p");
   
}
