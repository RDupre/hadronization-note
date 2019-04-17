{
//=========Macro generated from canvas: Plot_28/Multiplicity Ratio as a function of #nu
//=========  (Thu Mar 21 18:22:28 2019) by ROOT version 6.14/00
   TCanvas *Plot_28 = new TCanvas("Plot_28", "Multiplicity Ratio as a function of #nu",0,0,600,500);
   Plot_28->Range(0,0,1,1);
   Plot_28->SetFillColor(0);
   Plot_28->SetBorderMode(0);
   Plot_28->SetBorderSize(2);
   Plot_28->SetFrameBorderMode(0);
   
   TH2D *CanmI103__29 = new TH2D("CanmI103__29","Multiplicity Ratio as a function of #nu",100,2.25,4.25,100,0.45,0.7);
   CanmI103__29->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI103__29->SetLineColor(ci);
   CanmI103__29->GetXaxis()->SetTitle("Nu (GeV)");
   CanmI103__29->GetXaxis()->CenterTitle(true);
   CanmI103__29->GetXaxis()->SetLabelFont(42);
   CanmI103__29->GetXaxis()->SetLabelSize(0.035);
   CanmI103__29->GetXaxis()->SetTitleSize(0.035);
   CanmI103__29->GetXaxis()->SetTitleFont(42);
   CanmI103__29->GetYaxis()->SetTitle("R_{A}^{#pi}");
   CanmI103__29->GetYaxis()->CenterTitle(true);
   CanmI103__29->GetYaxis()->SetLabelFont(42);
   CanmI103__29->GetYaxis()->SetLabelSize(0.035);
   CanmI103__29->GetYaxis()->SetTitleSize(0.035);
   CanmI103__29->GetYaxis()->SetTitleOffset(1.5);
   CanmI103__29->GetYaxis()->SetTitleFont(42);
   CanmI103__29->GetZaxis()->SetLabelFont(42);
   CanmI103__29->GetZaxis()->SetLabelSize(0.035);
   CanmI103__29->GetZaxis()->SetTitleSize(0.035);
   CanmI103__29->GetZaxis()->SetTitleFont(42);
   CanmI103__29->Draw("");
   
   Double_t Graph0_fx1273[10] = {
   2.374664,
   2.55685,
   2.752271,
   2.950298,
   3.148625,
   3.352978,
   3.544494,
   3.754184,
   3.959699,
   4.135197};
   Double_t Graph0_fy1273[10] = {
   0.5586617,
   0.5719992,
   0.5743604,
   0.5811235,
   0.5815882,
   0.6027812,
   0.5774864,
   0.595232,
   0.5874664,
   0.6283265};
   Double_t Graph0_fex1273[10] = {
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
   Double_t Graph0_fey1273[10] = {
   0.01550213,
   0.009363074,
   0.008278186,
   0.007810141,
   0.00833309,
   0.008824247,
   0.009131993,
   0.00987346,
   0.01379676,
   0.01745756};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1273,Graph0_fy1273,Graph0_fex1273,Graph0_fey1273);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1274[10] = {
   2.379359,
   2.559699,
   2.754802,
   2.945276,
   3.151709,
   3.348545,
   3.551686,
   3.749513,
   3.950339,
   4.146722};
   Double_t Graph1_fy1274[10] = {
   0.544883,
   0.5492742,
   0.5558361,
   0.560234,
   0.5716886,
   0.5764951,
   0.5902894,
   0.597853,
   0.5994063,
   0.6048384};
   Double_t Graph1_fex1274[10] = {
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
   Double_t Graph1_fey1274[10] = {
   0.009292452,
   0.00550752,
   0.004775635,
   0.004460562,
   0.004124004,
   0.004074249,
   0.003990672,
   0.003954388,
   0.003951274,
   0.004136229};
   gre = new TGraphErrors(10,Graph1_fx1274,Graph1_fy1274,Graph1_fex1274,Graph1_fey1274);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1275[10] = {
   2.374664,
   2.55685,
   2.752271,
   2.950298,
   3.148625,
   3.352978,
   3.544494,
   3.754184,
   3.959699,
   4.135197};
   Double_t Graph2_fy1275[10] = {
   0.5586617,
   0.5719992,
   0.5743604,
   0.5811235,
   0.5815882,
   0.6027812,
   0.5774864,
   0.595232,
   0.5874664,
   0.6283265};
   Double_t Graph2_fex1275[10] = {
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
   Double_t Graph2_fey1275[10] = {
   0.01550213,
   0.009363074,
   0.008278186,
   0.007810141,
   0.00833309,
   0.008824247,
   0.009131993,
   0.00987346,
   0.01379676,
   0.01745756};
   gre = new TGraphErrors(10,Graph2_fx1275,Graph2_fy1275,Graph2_fex1275,Graph2_fey1275);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1276[10] = {
   2.379359,
   2.559699,
   2.754802,
   2.945276,
   3.151709,
   3.348545,
   3.551686,
   3.749513,
   3.950339,
   4.146722};
   Double_t Graph3_fy1276[10] = {
   0.544883,
   0.5492742,
   0.5558361,
   0.560234,
   0.5716886,
   0.5764951,
   0.5902894,
   0.597853,
   0.5994063,
   0.6048384};
   Double_t Graph3_fex1276[10] = {
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
   Double_t Graph3_fey1276[10] = {
   0.009292452,
   0.00550752,
   0.004775635,
   0.004460562,
   0.004124004,
   0.004074249,
   0.003990672,
   0.003954388,
   0.003951274,
   0.004136229};
   gre = new TGraphErrors(10,Graph3_fx1276,Graph3_fy1276,Graph3_fex1276,Graph3_fey1276);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.7,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Nu dependence of R^{#pi} Pb/C","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","#pi^{+}","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","#pi^{-}","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_28->Modified();
   Plot_28->cd();
   Plot_28->SetSelected(Plot_28);
}
