struct EMRSETPALETTEENTRIES
{
EMR emr;
DWORD ihPal;
DWORD iStart;
DWORD cEntries;
PALETTEENTRY aPalEntries[1];
};
