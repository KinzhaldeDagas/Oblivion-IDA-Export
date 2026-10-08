void __thiscall sub_577120(int *this, char a2)
{
  bool v3; // zf
  int v4; // edi
  int v5; // edx
  int v6; // eax
  int v7; // edx
  double v8; // st7
  int v9; // eax
  int v10; // edi
  _DWORD *Singleton; // eax
  int v12; // eax
  int v13; // edi
  _DWORD *v14; // eax

  v3 = *(this + 7) == 0; /*0x577127*/
  *((_BYTE *)this + 4) = a2; /*0x57712b*/
  if ( v3 || !*(_BYTE *)*(this + 7) ) /*0x577133*/
  {
    v4 = *this; /*0x577139*/
    v5 = FontManager_GetSingleton()[v4]; /*0x577142*/
    v6 = *((unsigned __int8 *)this + 4); /*0x577145*/
    v7 = *(_DWORD *)(v5 + 0x38); /*0x577149*/
    if ( 0.0 == *(float *)(v7 + 0x38 * v6 + 0x14C) ) /*0x577164*/
      v8 = 0.0; /*0x57716e*/
    else
      v8 = *(float *)(v7 + 0x38 * v6 + 0x158) + *(float *)(v7 + 0x38 * v6 + 0x154); /*0x577169*/
    v9 = Double_To_SInt32(v8 + *(float *)(v7 + 0x38 * v6 + 0x14C)); /*0x577173*/
    v10 = *this; /*0x577178*/
    *(this + 9) = v9; /*0x57717a*/
    Singleton = FontManager_GetSingleton(); /*0x57717d*/
    v12 = Double_To_SInt32(**(float **)(Singleton[v10] + 0x38)); /*0x57718a*/
    v13 = *this; /*0x57718f*/
    *(this + 0xA) = v12; /*0x577191*/
    v14 = FontManager_GetSingleton(); /*0x577194*/
    *(this + 0xB) = Double_To_SInt32(-*(float *)(v14[v13] + 0x30)); /*0x5771a6*/
    *(this + 0xC) = 0; /*0x5771a9*/
  }
  *(this + 0xD) = 0; /*0x5771b1*/
}
