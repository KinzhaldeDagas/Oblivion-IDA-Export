struct __declspec(align(4)) EMREXTSELECTCLIPRGN
{
EMR emr;
DWORD cbRgnData;
DWORD iMode;
BYTE RgnData[1];
};
