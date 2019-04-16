{
//=========Macro generated from canvas: Plot_51/Multiplicity Ratio as a function of z
//=========  (Fri Mar 29 18:04:36 2019) by ROOT version 6.14/00
   TCanvas *Plot_51 = new TCanvas("Plot_51", "Multiplicity Ratio as a function of z",0,0,600,500);
   Plot_51->Range(0,0,1,1);
   Plot_51->SetFillColor(0);
   Plot_51->SetBorderMode(0);
   Plot_51->SetBorderSize(2);
   Plot_51->SetFrameBorderMode(0);
   
   TH2D *CanmI126__52 = new TH2D("CanmI126__52","Multiplicity Ratio as a function of z",100,0,1,100,0,1.2);
   CanmI126__52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI126__52->SetLineColor(ci);
   CanmI126__52->GetXaxis()->SetTitle("z");
   CanmI126__52->GetXaxis()->CenterTitle(true);
   CanmI126__52->GetXaxis()->SetLabelFont(42);
   CanmI126__52->GetXaxis()->SetLabelSize(0.035);
   CanmI126__52->GetXaxis()->SetTitleSize(0.035);
   CanmI126__52->GetXaxis()->SetTitleFont(42);
   CanmI126__52->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI126__52->GetYaxis()->CenterTitle(true);
   CanmI126__52->GetYaxis()->SetLabelFont(42);
   CanmI126__52->GetYaxis()->SetLabelSize(0.035);
   CanmI126__52->GetYaxis()->SetTitleSize(0.035);
   CanmI126__52->GetYaxis()->SetTitleOffset(0);
   CanmI126__52->GetYaxis()->SetTitleFont(42);
   CanmI126__52->GetZaxis()->SetLabelFont(42);
   CanmI126__52->GetZaxis()->SetLabelSize(0.035);
   CanmI126__52->GetZaxis()->SetTitleSize(0.035);
   CanmI126__52->GetZaxis()->SetTitleFont(42);
   CanmI126__52->Draw("");
   
   Double_t Graph0_fx1382[10] = {
   0,
   0.1686924,
   0.2494553,
   0.3467256,
   0.4457837,
   0.5453592,
   0.6462313,
   0.7465156,
   0.8435424,
   0.947005};
   Double_t Graph0_fy1382[10] = {
   0,
   0.6970022,
   0.63539,
   0.6062958,
   0.5689231,
   0.5059342,
   0.5078751,
   0.4779829,
   0.4696966,
   0.3650875};
   Double_t Graph0_fex1382[10] = {
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
   Double_t Graph0_fey1382[10] = {
   0,
   0.003266094,
   0.002305676,
   0.002849081,
   0.002564126,
   0.002992852,
   0.003788913,
   0.003933018,
   0.004548207,
   0.004113208};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1382,Graph0_fy1382,Graph0_fex1382,Graph0_fey1382);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->Draw("p");
   
   Double_t Graph1_fx1383[10] = {
   0.09094302,
   0.1569506,
   0.2479213,
   0.3464767,
   0.4462399,
   0.5463266,
   0.6472755,
   0.7481454,
   0.8453892,
   0.9451155};
   Double_t Graph1_fy1383[10] = {
   0.8986043,
   0.7637162,
   0.6632073,
   0.6174867,
   0.58537,
   0.5607939,
   0.5336342,
   0.4669616,
   0.4192954,
   0.3254898};
   Double_t Graph1_fex1383[10] = {
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
   Double_t Graph1_fey1383[10] = {
   0.005600994,
   0.001064887,
   0.0008771082,
   0.0009586082,
   0.001112611,
   0.001335414,
   0.001547662,
   0.001584191,
   0.001695454,
   0.001781687};
   gre = new TGraphErrors(10,Graph1_fx1383,Graph1_fy1383,Graph1_fex1383,Graph1_fey1383);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph2_fx1384[10] = {
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
   Double_t Graph2_fy1384[10] = {
   0,
   0.6967148,
   0.6362675,
   0.6067258,
   0.5692622,
   0.506329,
   0.5083208,
   0.4780789,
   0.4699729,
   0.3672183};
   Double_t Graph2_fex1384[10] = {
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
   Double_t Graph2_fey1384[10] = {
   0,
   0.003261357,
   0.002305371,
   0.002843869,
   0.002557506,
   0.002989009,
   0.003781262,
   0.00392666,
   0.004542539,
   0.004118706};
   gre = new TGraphErrors(10,Graph2_fx1384,Graph2_fy1384,Graph2_fex1384,Graph2_fey1384);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1385[10] = {
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
   Double_t Graph3_fy1385[10] = {
   0.9828863,
   0.7722773,
   0.6643642,
   0.6179347,
   0.5856616,
   0.5610052,
   0.5340393,
   0.4671117,
   0.4194373,
   0.325795};
   Double_t Graph3_fex1385[10] = {
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
   Double_t Graph3_fey1385[10] = {
   0.005783451,
   0.001058265,
   0.0008698025,
   0.0009492279,
   0.001100013,
   0.001320559,
   0.001533655,
   0.001568069,
   0.001689895,
   0.001778267};
   gre = new TGraphErrors(10,Graph3_fx1385,Graph3_fy1385,Graph3_fex1385,Graph3_fey1385);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.15,0.5,0.45,NULL,"brNDC");
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
   Plot_51->Modified();
   Plot_51->cd();
   Plot_51->SetSelected(Plot_51);
}
