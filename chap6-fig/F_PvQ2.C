{
//=========Macro generated from canvas: Plot_18/#DeltaP_{T}^{2} as a function of Q^{2}
//=========  (Thu Mar 21 18:22:27 2019) by ROOT version 6.14/00
   TCanvas *Plot_18 = new TCanvas("Plot_18", "#DeltaP_{T}^{2} as a function of Q^{2}",0,0,600,500);
   Plot_18->Range(0,0,1,1);
   Plot_18->SetFillColor(0);
   Plot_18->SetBorderMode(0);
   Plot_18->SetBorderSize(2);
   Plot_18->SetFrameBorderMode(0);
   
   TH2D *CanmI93__19 = new TH2D("CanmI93__19","#DeltaP_{T}^{2} as a function of Q^{2}",100,1,4,100,0,0.03);
   CanmI93__19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI93__19->SetLineColor(ci);
   CanmI93__19->GetXaxis()->SetTitle("Q^{2} (GeV^{2}/c^{2})");
   CanmI93__19->GetXaxis()->CenterTitle(true);
   CanmI93__19->GetXaxis()->SetLabelFont(42);
   CanmI93__19->GetXaxis()->SetLabelSize(0.035);
   CanmI93__19->GetXaxis()->SetTitleSize(0.035);
   CanmI93__19->GetXaxis()->SetTitleFont(42);
   CanmI93__19->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI93__19->GetYaxis()->CenterTitle(true);
   CanmI93__19->GetYaxis()->SetLabelFont(42);
   CanmI93__19->GetYaxis()->SetLabelSize(0.035);
   CanmI93__19->GetYaxis()->SetTitleSize(0.035);
   CanmI93__19->GetYaxis()->SetTitleOffset(1.5);
   CanmI93__19->GetYaxis()->SetTitleFont(42);
   CanmI93__19->GetZaxis()->SetLabelFont(42);
   CanmI93__19->GetZaxis()->SetLabelSize(0.035);
   CanmI93__19->GetZaxis()->SetTitleSize(0.035);
   CanmI93__19->GetZaxis()->SetTitleFont(42);
   CanmI93__19->Draw("");
   
   Double_t Graph4_fx1173[10] = {
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
   Double_t Graph4_fy1173[10] = {
   0.01485579,
   0.01508368,
   0.01665466,
   0.01774686,
   0.01401183,
   0.01050912,
   0.01091331,
   0.004653967,
   0.01257249,
   0.007350354};
   Double_t Graph4_fex1173[10] = {
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
   Double_t Graph4_fey1173[10] = {
   0.001795709,
   0.001826184,
   0.002020739,
   0.002157069,
   0.001707071,
   0.001280088,
   0.001329873,
   0.0005683209,
   0.001539665,
   0.0009011992};
   gre = new TGraphErrors(10,Graph4_fx1173,Graph4_fy1173,Graph4_fex1173,Graph4_fey1173);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   
   Double_t Graph10_fx1179[10] = {
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
   Double_t Graph10_fy1179[10] = {
   0.01485579,
   0.01508368,
   0.01665466,
   0.01774686,
   0.01401183,
   0.01050912,
   0.01091331,
   0.004653967,
   0.01257249,
   0.007350354};
   Double_t Graph10_fex1179[10] = {
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
   Double_t Graph10_fey1179[10] = {
   0.0004411287,
   0.0004392385,
   0.0005092701,
   0.0006251896,
   0.0008060169,
   0.001070055,
   0.001411965,
   0.001969567,
   0.002798748,
   0.005055997};
   gre = new TGraphErrors(10,Graph10_fx1179,Graph10_fy1179,Graph10_fex1179,Graph10_fey1179);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.7,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Q^{2} dependence of #DeltaP_{T}^{2}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph10","Iron (#pi^{+})","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   Plot_18->Modified();
   Plot_18->cd();
   Plot_18->SetSelected(Plot_18);
}
