{
//=========Macro generated from canvas: Plot_19/#DeltaP_{T}^{2} as a function of z
//=========  (Thu Mar 21 18:22:28 2019) by ROOT version 6.14/00
   TCanvas *Plot_19 = new TCanvas("Plot_19", "#DeltaP_{T}^{2} as a function of z",0,0,600,500);
   Plot_19->Range(0,0,1,1);
   Plot_19->SetFillColor(0);
   Plot_19->SetBorderMode(0);
   Plot_19->SetBorderSize(2);
   Plot_19->SetFrameBorderMode(0);
   
   TH2D *CanmI94__20 = new TH2D("CanmI94__20","#DeltaP_{T}^{2} as a function of z",100,0,1,100,0,0.04);
   CanmI94__20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CanmI94__20->SetLineColor(ci);
   CanmI94__20->GetXaxis()->SetTitle("z");
   CanmI94__20->GetXaxis()->CenterTitle(true);
   CanmI94__20->GetXaxis()->SetLabelFont(42);
   CanmI94__20->GetXaxis()->SetLabelSize(0.035);
   CanmI94__20->GetXaxis()->SetTitleSize(0.035);
   CanmI94__20->GetXaxis()->SetTitleFont(42);
   CanmI94__20->GetYaxis()->SetTitle("#DeltaP_{T}^{2}");
   CanmI94__20->GetYaxis()->CenterTitle(true);
   CanmI94__20->GetYaxis()->SetLabelFont(42);
   CanmI94__20->GetYaxis()->SetLabelSize(0.035);
   CanmI94__20->GetYaxis()->SetTitleSize(0.035);
   CanmI94__20->GetYaxis()->SetTitleOffset(1.5);
   CanmI94__20->GetYaxis()->SetTitleFont(42);
   CanmI94__20->GetZaxis()->SetLabelFont(42);
   CanmI94__20->GetZaxis()->SetLabelSize(0.035);
   CanmI94__20->GetZaxis()->SetTitleSize(0.035);
   CanmI94__20->GetZaxis()->SetTitleFont(42);
   CanmI94__20->Draw("");
   
   Double_t Graph3_fx1184[10] = {
   0.09148271,
   0.15695,
   0.2475094,
   0.3466044,
   0.4460554,
   0.5453663,
   0.6474332,
   0.7482229,
   0.8441777,
   0.9446512};
   Double_t Graph3_fy1184[10] = {
   -0.001158428,
   -0.001221231,
   0.001995208,
   0.00647825,
   0.01391252,
   0.02231953,
   0.025444,
   0.02866265,
   0.0190147,
   0.02702664};
   Double_t Graph3_fex1184[10] = {
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
   Double_t Graph3_fey1184[10] = {
   -0.0001777424,
   -0.0001873786,
   0.0003061331,
   0.0009939863,
   0.002137939,
   0.003443612,
   0.003937283,
   0.004440644,
   0.0029475,
   0.004201773};
   gre = new TGraphErrors(10,Graph3_fx1184,Graph3_fy1184,Graph3_fex1184,Graph3_fey1184);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph4_fx1185[10] = {
   0.09148033,
   0.1562843,
   0.2474153,
   0.34656,
   0.4460397,
   0.5453177,
   0.6472924,
   0.7482038,
   0.8444546,
   0.943991};
   Double_t Graph4_fy1185[10] = {
   -0.0007055341,
   -0.001070844,
   0.001605257,
   0.004990251,
   0.01110212,
   0.01656776,
   0.02152832,
   0.02568134,
   0.01852359,
   0.02024448};
   Double_t Graph4_fex1185[10] = {
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
   Double_t Graph4_fey1185[10] = {
   -0.000110851,
   -0.0001682471,
   0.0002522122,
   0.0007840505,
   0.001746931,
   0.002616849,
   0.003409906,
   0.004072361,
   0.002938803,
   0.00322073};
   gre = new TGraphErrors(10,Graph4_fx1185,Graph4_fy1185,Graph4_fex1185,Graph4_fey1185);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph5_fx1186[10] = {
   0.09132092,
   0.1569726,
   0.2475462,
   0.3465211,
   0.4459667,
   0.545376,
   0.6474226,
   0.7479991,
   0.8444519,
   0.9439388};
   Double_t Graph5_fy1186[10] = {
   -0.000436379,
   -0.0006345767,
   0.0009787282,
   0.001946453,
   0.004461426,
   0.006925479,
   0.01254197,
   0.01775826,
   0.01364293,
   0.009220617};
   Double_t Graph5_fex1186[10] = {
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
   Double_t Graph5_fey1186[10] = {
   -8.125889e-05,
   -0.0001181656,
   0.0001822507,
   0.0003624527,
   0.0008316467,
   0.00129445,
   0.002348934,
   0.003328699,
   0.002558333,
   0.001732535};
   gre = new TGraphErrors(10,Graph5_fx1186,Graph5_fy1186,Graph5_fex1186,Graph5_fey1186);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->Draw("z");
   
   Double_t Graph9_fx1190[10] = {
   0.09148271,
   0.15695,
   0.2475094,
   0.3466044,
   0.4460554,
   0.5453663,
   0.6474332,
   0.7482229,
   0.8441777,
   0.9446512};
   Double_t Graph9_fy1190[10] = {
   -0.001158428,
   -0.001221231,
   0.001995208,
   0.00647825,
   0.01391252,
   0.02231953,
   0.025444,
   0.02866265,
   0.0190147,
   0.02702664};
   Double_t Graph9_fex1190[10] = {
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
   Double_t Graph9_fey1190[10] = {
   5.239386e-05,
   5.573363e-05,
   0.0001223172,
   0.0002627286,
   0.0004860179,
   0.000780096,
   0.001050077,
   0.001264671,
   0.001581775,
   0.002155019};
   gre = new TGraphErrors(10,Graph9_fx1190,Graph9_fy1190,Graph9_fex1190,Graph9_fey1190);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->Draw("p");
   
   Double_t Graph10_fx1191[10] = {
   0.09148033,
   0.1562843,
   0.2474153,
   0.34656,
   0.4460397,
   0.5453177,
   0.6472924,
   0.7482038,
   0.8444546,
   0.943991};
   Double_t Graph10_fy1191[10] = {
   -0.0007055341,
   -0.001070844,
   0.001605257,
   0.004990251,
   0.01110212,
   0.01656776,
   0.02152832,
   0.02568134,
   0.01852359,
   0.02024448};
   Double_t Graph10_fex1191[10] = {
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
   Double_t Graph10_fey1191[10] = {
   3.397088e-05,
   3.467103e-05,
   7.556441e-05,
   0.000158397,
   0.0002893197,
   0.0004598083,
   0.0006190625,
   0.0007560256,
   0.0009189584,
   0.00111891};
   gre = new TGraphErrors(10,Graph10_fx1191,Graph10_fy1191,Graph10_fex1191,Graph10_fey1191);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->Draw("p");
   
   Double_t Graph11_fx1192[10] = {
   0.09132092,
   0.1569726,
   0.2475462,
   0.3465211,
   0.4459667,
   0.545376,
   0.6474226,
   0.7479991,
   0.8444519,
   0.9439388};
   Double_t Graph11_fy1192[10] = {
   -0.000436379,
   -0.0006345767,
   0.0009787282,
   0.001946453,
   0.004461426,
   0.006925479,
   0.01254197,
   0.01775826,
   0.01364293,
   0.009220617};
   Double_t Graph11_fex1192[10] = {
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
   Double_t Graph11_fey1192[10] = {
   4.663792e-05,
   4.793281e-05,
   0.0001005,
   0.0002075718,
   0.0003731543,
   0.0005880429,
   0.0007902536,
   0.0009738742,
   0.001174308,
   0.001334373};
   gre = new TGraphErrors(10,Graph11_fx1192,Graph11_fy1192,Graph11_fex1192,Graph11_fey1192);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.85,0.5,0.63,NULL,"brNDC");
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
   leg->Draw();
   Plot_19->Modified();
   Plot_19->cd();
   Plot_19->SetSelected(Plot_19);
}
