struct EMREXTCREATEPEN
{
EMR emr;
DWORD ihPen;
DWORD offBmi;
DWORD cbBmi;
DWORD offBits;
DWORD cbBits;
__declspec(align(8)) EXTLOGPEN elp;
};
