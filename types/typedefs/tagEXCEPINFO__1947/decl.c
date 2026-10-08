struct __declspec(align(8)) tagEXCEPINFO
{
WORD wCode;
WORD wReserved;
BSTR bstrSource;
BSTR bstrDescription;
BSTR bstrHelpFile;
DWORD dwHelpContext;
PVOID pvReserved;
HRESULT_0 (*pfnDeferredFillIn)(tagEXCEPINFO *);
SCODE scode;
};
