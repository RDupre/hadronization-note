{
//=========Macro generated from canvas: Plot36/#DeltaP_{T}^{2} in function of z
//=========  (Tue Sep  6 21:54:51 2011) by ROOT version5.28/00d
   TCanvas *Plot36 = new TCanvas("Plot36", "#DeltaP_{T}^{2} in function of z",204,49,600,500);
   Plot36->Range(0,0,1,1);
   Plot36->SetFillColor(0);
   Plot36->SetBorderMode(0);
   Plot36->SetBorderSize(2);
   Plot36->SetFrameBorderMode(0);
   
   TH2D *Can108 = new TH2D("Can108","#DeltaP_{T}^{2} in function of z (Pb/C)",100,0,1,100,0,0.05);
   Can108->SetStats(0);
   Can108->GetXaxis()->SetTitle("z");
   Can108->GetXaxis()->CenterTitle(true);
   Can108->Draw("");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,0.09093677,-0.0001601485);
   gre->SetPointError(0,0,-3.469524e-08);
   gre->SetPoint(1,0.1560351,-0.0004970079);
   gre->SetPointError(1,0,-1.234737e-07);
   gre->SetPoint(2,0.2471762,0.0009751046);
   gre->SetPointError(2,0,4.866866e-07);
   gre->SetPoint(3,0.3465305,0.004093999);
   gre->SetPointError(3,0,4.465929e-06);
   gre->SetPoint(4,0.4463604,0.01007902);
   gre->SetPointError(4,0,8.586379e-05);
   gre->SetPoint(5,0.5461572,0.01486604);
   gre->SetPointError(5,0,0.0002257607);
   gre->SetPoint(6,0.6473591,0.01606426);
   gre->SetPointError(6,0,0.0002923881);
   gre->SetPoint(7,0.747917,0.01182961);
   gre->SetPointError(7,0,0.0002275783);
   gre->SetPoint(8,0.8456777,0.006341035);
   gre->SetPointError(8,0,0.0001237255);
   gre->SetPoint(9,0.941401,0.01992575);
   gre->SetPointError(9,0,0.0003949237);
   gre->Draw("z");
   
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,0.09093677,-0.0001601485);
   gre->SetPointError(0,0,0.0002166442);
   gre->SetPoint(1,0.1560351,-0.0004970079);
   gre->SetPointError(1,0,0.0002484341);
   gre->SetPoint(2,0.2471762,0.0009751046);
   gre->SetPointError(2,0,0.0004991122);
   gre->SetPoint(3,0.3465305,0.004093999);
   gre->SetPointError(3,0,0.001090847);
   gre->SetPoint(4,0.4463604,0.01007902);
   gre->SetPointError(4,0,0.001868446);
   gre->SetPoint(5,0.5461572,0.01486604);
   gre->SetPointError(5,0,0.003135595);
   gre->SetPoint(6,0.6473591,0.01606426);
   gre->SetPointError(6,0,0.004068832);
   gre->SetPoint(7,0.747917,0.01182961);
   gre->SetPointError(7,0,0.004930195);
   gre->SetPoint(8,0.8456777,0.006341035);
   gre->SetPointError(8,0,0.005508558);
   gre->SetPoint(9,0.941401,0.01992575);
   gre->SetPointError(9,0,0.005842031);
   gre->Draw("p");
   
}
