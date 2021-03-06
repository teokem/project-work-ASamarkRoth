  //Make histograms look nice
  TGaxis::SetMaxDigits(3);
  gStyle->SetCanvasColor(kWhite);    
  gStyle->SetFrameLineWidth(2);       
  gStyle->SetFrameLineColor(kWhite); //"No frame"
  gStyle->SetPadLeftMargin(0.13);
  gStyle->SetPadTopMargin(0.11);
  gStyle->SetPadRightMargin(0.1);
  gStyle->SetPadBottomMargin(0.15);
  //cout << "Margins are " << gStyle->GetPadLeftMargin() << " " << gStyle->GetPadTopMargin() << " " << gStyle->GetPadRightMargin() << " " << gStyle->GetPadBottomMargin() << " " << endl;
  gStyle->SetTitleSize(0.05,"xy");
  //gStyle->SetTitleOffset(12,"x"); //1.2   Doesn't do anything!
  //gStyle->SetTitleOffset(10,"y"); //1.0   Doesn't do anything!
  gStyle->SetOptStat();
  gStyle->SetLegendBorderSize(0);
  gStyle->SetLineWidth(2.); //X and Y axis thickness 
  gStyle->SetLabelSize(0.05,"xy"); //Size of numbers on X and Y axes  
  gStyle->SetLabelOffset(0.01,"xy"); //Offset of numbers on X and Y axes
  gStyle->SetLabelFont(42,"xy"); //Font on labels on X and Y axes
  //gStyle->SetHistoLineWidth(5);
  gStyle->SetCanvasBorderMode(0);     // turn off canvas borders
  gStyle->SetPadBorderMode(0);
  //gStyle->SetPaintTextFormat("5.2f");  // What precision to put numbers if plotted with "TEXT"
  gStyle->SetPaintTextFormat("g");  // What precision to put numbers if plotted with "TEXT"
  gStyle->SetNumberContours(20);
  //gStyle->SetTextSize(2.1);
  gStyle->SetTextFont(42); 
  gStyle->SetStripDecimals(0); 
  gStyle->SetOptStat(1111111);
