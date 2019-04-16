{
//=========Macro generated from canvas: Plot_56/#DeltaP_{T}^{2} as a function of z
//=========  (Fri Mar 29 18:04:36 2019) by ROOT version 6.14/00
   TCanvas *Plot_56 = new TCanvas("Plot_56", "#DeltaP_{T}^{2} as a function of z",0,0,600,500);
   Plot_56->Range(0,0,1,1);
   Plot_56->SetFillColor(0);
   Plot_56->SetBorderMode(0);
   Plot_56->SetBorderSize(2);
   Plot_56->SetFrameBorderMode(0);
   
   TH2D *CanmI131__57 = new TH2D("CanmI131__57","#DeltaP_{T}^{2} as a function of z",100,0,1,100,0,0.05);
   CanmI131__57->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI131__57->SetLineColor(ci);
   CanmI131__57->GetXaxis()->SetTitle("z");
   CanmI131__57->GetXaxis()->CenterTitle(true);
   CanmI131__57->GetXaxis()->SetLabelFont(42);
   CanmI131__57->GetXaxis()->SetLabelSize(0.035);
   CanmI131__57->GetXaxis()->SetTitleSize(0.035);
   CanmI131__57->GetXaxis()->SetTitleFont(42);
   CanmI131__57->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI131__57->GetYaxis()->CenterTitle(true);
   CanmI131__57->GetYaxis()->SetLabelFont(42);
   CanmI131__57->GetYaxis()->SetLabelSize(0.035);
   CanmI131__57->GetYaxis()->SetTitleSize(0.035);
   CanmI131__57->GetYaxis()->SetTitleOffset(0);
   CanmI131__57->GetYaxis()->SetTitleFont(42);
   CanmI131__57->GetZaxis()->SetLabelFont(42);
   CanmI131__57->GetZaxis()->SetLabelSize(0.035);
   CanmI131__57->GetZaxis()->SetTitleSize(0.035);
   CanmI131__57->GetZaxis()->SetTitleFont(42);
   CanmI131__57->Draw("");
   
   Double_t Graph0_fx1402[10] = {
   0,
   0.1643629,
   0.2456495,
   0.3469728,
   0.4460594,
   0.5451542,
   0.6470979,
   0.7469425,
   0.8431629,
   0.9470371};
   Double_t Graph0_fy1402[10] = {
   0,
   0.0004476205,
   0.001843498,
   0.003584329,
   0.007286907,
   0.0196784,
   0.01929443,
   0.02913765,
   0.0330248,
   0.02051487};
   Double_t Graph0_fex1402[10] = {
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
   Double_t Graph0_fey1402[10] = {
   0,
   9.561606e-05,
   0.0001957013,
   0.0004569777,
   0.0006431903,
   0.001050678,
   0.001468106,
   0.001595559,
   0.001721216,
   0.001417587};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1402,Graph0_fy1402,Graph0_fex1402,Graph0_fey1402);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->Draw("p");
   
   Double_t Graph1_fx1403[10] = {
   0.09126844,
   0.1565038,
   0.2473514,
   0.3468224,
   0.4466626,
   0.5462011,
   0.6475918,
   0.7487601,
   0.8453861,
   0.9461105};
   Double_t Graph1_fy1403[10] = {
   -0.0006889729,
   -0.0010431,
   0.001520143,
   0.005111764,
   0.01165127,
   0.01755588,
   0.02083674,
   0.02486175,
   0.0246386,
   0.03332751};
   Double_t Graph1_fex1403[10] = {
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
   Double_t Graph1_fey1403[10] = {
   3.546652e-05,
   3.587578e-05,
   7.865569e-05,
   0.0001636558,
   0.0002920147,
   0.0004634985,
   0.000633994,
   0.0007534293,
   0.0008327603,
   0.0008534623};
   gre = new TGraphErrors(10,Graph1_fx1403,Graph1_fy1403,Graph1_fex1403,Graph1_fey1403);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph2_fx1404[10] = {
   0,
   0.1643738,
   0.2456463,
   0.3469722,
   0.4460619,
   0.5451559,
   0.6470904,
   0.746943,
   0.8431677,
   0.9471235};
   Double_t Graph2_fy1404[10] = {
   0,
   0.0004268842,
   0.001793156,
   0.003604105,
   0.007258158,
   0.01961816,
   0.01915983,
   0.02905484,
   0.03278517,
   0.02006415};
   Double_t Graph2_fex1404[10] = {
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
   Double_t Graph2_fey1404[10] = {
   0,
   9.555102e-05,
   0.0001955457,
   0.0004561847,
   0.0006413514,
   0.001048452,
   0.001463352,
   0.001592483,
   0.001717067,
   0.001408234};
   gre = new TGraphErrors(10,Graph2_fx1404,Graph2_fy1404,Graph2_fex1404,Graph2_fey1404);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1405[10] = {
   0.0910891,
   0.1563748,
   0.2473409,
   0.3468196,
   0.4466624,
   0.5462025,
   0.6475929,
   0.7487595,
   0.8453879,
   0.9461025};
   Double_t Graph3_fy1405[10] = {
   -0.0004345656,
   -0.0009395796,
   0.001639109,
   0.005188773,
   0.01168627,
   0.0175072,
   0.02072367,
   0.02475445,
   0.02447621,
   0.03315521};
   Double_t Graph3_fex1405[10] = {
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
   Double_t Graph3_fey1405[10] = {
   3.380293e-05,
   3.528065e-05,
   7.793098e-05,
   0.0001620041,
   0.0002885268,
   0.0004577657,
   0.0006274755,
   0.0007445741,
   0.0008291756,
   0.0008501556};
   gre = new TGraphErrors(10,Graph3_fx1405,Graph3_fy1405,Graph3_fex1405,Graph3_fey1405);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.87,0.5,0.59,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","z dependence of #DeltaP_{T}^{2}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","No Coulomb (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","No Coulomb (#pi^{-})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph1","With Coulomb (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph0","With Coulomb (#pi^{-})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_56->Modified();
   Plot_56->cd();
   Plot_56->SetSelected(Plot_56);
}
