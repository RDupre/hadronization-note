{
//=========Macro generated from canvas: Plot34/#DeltaP_{T}^{2} in function of #nu
//=========  (Tue Sep  6 21:54:50 2011) by ROOT version5.28/00d
   TCanvas *Plot34 = new TCanvas("Plot34", "#DeltaP_{T}^{2} in function of #nu (Pb/C)",204,49,600,500);
   Plot34->Range(0,0,1,1);
   Plot34->SetFillColor(0);
   Plot34->SetBorderMode(0);
   Plot34->SetBorderSize(2);
   Plot34->SetFrameBorderMode(0);
   
   TH2D *Can106 = new TH2D("Can106","#DeltaP_{T}^{2} in function of #nu",100,2.25,4.25,100,0,0.05);
   Can106->SetStats(0);
   Can106->GetXaxis()->SetTitle("#nu (GeV)");
   Can106->GetXaxis()->CenterTitle(true);
   Can106->Draw("");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,2.375859,0.003348286);
   gre->SetPointError(0,0,2.631464e-05);
   gre->SetPoint(1,2.557998,0.005685322);
   gre->SetPointError(1,0,3.403397e-05);
   gre->SetPoint(2,2.75467,0.009775429);
   gre->SetPointError(2,0,7.658079e-05);
   gre->SetPoint(3,2.945351,0.009417139);
   gre->SetPointError(3,0,8.934772e-05);
   gre->SetPoint(4,3.15153,0.01026019);
   gre->SetPointError(4,0,0.0001206908);
   gre->SetPoint(5,3.348671,0.01140175);
   gre->SetPointError(5,0,0.0001524563);
   gre->SetPoint(6,3.55054,0.01385551);
   gre->SetPointError(6,0,0.0002112915);
   gre->SetPoint(7,3.749285,0.0164821);
   gre->SetPointError(7,0,0.0002757341);
   gre->SetPoint(8,3.950376,0.01618296);
   gre->SetPointError(8,0,0.0002927697);
   gre->SetPoint(9,4.146619,0.01549412);
   gre->SetPointError(9,0,0.0003000872);
   gre->Draw("z");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,2.375859,0.003348286);
   gre->SetPointError(0,0,0.007859137);
   gre->SetPoint(1,2.557998,0.005685322);
   gre->SetPointError(1,0,0.005229535);
   gre->SetPoint(2,2.75467,0.009775429);
   gre->SetPointError(2,0,0.005127261);
   gre->SetPoint(3,2.945351,0.009417139);
   gre->SetPointError(3,0,0.005007753);
   gre->SetPoint(4,3.15153,0.01026019);
   gre->SetPointError(4,0,0.003953595);
   gre->SetPoint(5,3.348671,0.01140175);
   gre->SetPointError(5,0,0.004196869);
   gre->SetPoint(6,3.55054,0.01385551);
   gre->SetPointError(6,0,0.003635659);
   gre->SetPoint(7,3.749285,0.0164821);
   gre->SetPointError(7,0,0.003704071);
   gre->SetPoint(8,3.950376,0.01618296);
   gre->SetPointError(8,0,0.003627989);
   gre->SetPoint(9,4.146619,0.01549412);
   gre->SetPointError(9,0,0.003866406);
   gre->Draw("p");
   
}
