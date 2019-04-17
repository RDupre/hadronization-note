{
//=========Macro generated from canvas: Plot_16/#DeltaP_{T}^{2} as a function of A
//=========  (Thu Mar 21 18:22:27 2019) by ROOT version 6.14/00
   TCanvas *Plot_16 = new TCanvas("Plot_16", "#DeltaP_{T}^{2} as a function of A",0,0,600,500);
   Plot_16->Range(0,0,1,1);
   Plot_16->SetFillColor(0);
   Plot_16->SetBorderMode(0);
   Plot_16->SetBorderSize(2);
   Plot_16->SetFrameBorderMode(0);
   
   TH2D *CanmI91__17 = new TH2D("CanmI91__17","#DeltaP_{T}^{2} as a function of A",100,2,6.25,100,0,0.035);
   CanmI91__17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI91__17->SetLineColor(ci);
   CanmI91__17->GetXaxis()->SetTitle("A^{1/3}");
   CanmI91__17->GetXaxis()->CenterTitle(true);
   CanmI91__17->GetXaxis()->SetLabelFont(42);
   CanmI91__17->GetXaxis()->SetLabelSize(0.035);
   CanmI91__17->GetXaxis()->SetTitleSize(0.035);
   CanmI91__17->GetXaxis()->SetTitleFont(42);
   CanmI91__17->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI91__17->GetYaxis()->CenterTitle(true);
   CanmI91__17->GetYaxis()->SetLabelFont(42);
   CanmI91__17->GetYaxis()->SetLabelSize(0.035);
   CanmI91__17->GetYaxis()->SetTitleSize(0.035);
   CanmI91__17->GetYaxis()->SetTitleOffset(1.5);
   CanmI91__17->GetYaxis()->SetTitleFont(42);
   CanmI91__17->GetZaxis()->SetLabelFont(42);
   CanmI91__17->GetZaxis()->SetLabelSize(0.035);
   CanmI91__17->GetZaxis()->SetTitleSize(0.035);
   CanmI91__17->GetZaxis()->SetTitleFont(42);
   CanmI91__17->Draw("");
   
   Double_t Graph0_fx1153[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph0_fy1153[5] = {
   0.005714713,
   0.009125785,
   0.01032828,
   0.01139635,
   0.0121111};
   Double_t Graph0_fex1153[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1153[5] = {
   0.001200125,
   0.001916487,
   0.002168997,
   0.00239353,
   0.002543415};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1153,Graph0_fy1153,Graph0_fex1153,Graph0_fey1153);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph1_fx1154[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph1_fy1154[5] = {
   0.00652238,
   0.01263045,
   0.01509061,
   0.01821582,
   0.02017794};
   Double_t Graph1_fex1154[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1154[5] = {
   0.0007231631,
   0.00140048,
   0.001673323,
   0.002020168,
   0.002237558};
   gre = new TGraphErrors(5,Graph1_fx1154,Graph1_fy1154,Graph1_fex1154,Graph1_fey1154);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph2_fx1155[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph2_fy1155[5] = {
   0.005714713,
   0.009125785,
   0.01032828,
   0.01139635,
   0.0121111};
   Double_t Graph2_fex1155[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1155[5] = {
   0.0006934805,
   0.001095743,
   0.0005266842,
   0.002962817,
   0.0008506599};
   gre = new TGraphErrors(5,Graph2_fx1155,Graph2_fy1155,Graph2_fex1155,Graph2_fey1155);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph3_fx1156[5] = {
   2.29,
   3,
   3.83,
   4.93,
   5.91};
   Double_t Graph3_fy1156[5] = {
   0.00652238,
   0.01263045,
   0.01509061,
   0.01821582,
   0.02017794};
   Double_t Graph3_fex1156[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1156[5] = {
   0.0003036197,
   0.0004806747,
   0.0002377119,
   0.001364021,
   0.000406228};
   gre = new TGraphErrors(5,Graph3_fx1156,Graph3_fy1156,Graph3_fex1156,Graph3_fey1156);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.6,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","A dependence of #DeltaP_{T}^{2}","h");
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
   Plot_16->Modified();
   Plot_16->cd();
   Plot_16->SetSelected(Plot_16);
}
