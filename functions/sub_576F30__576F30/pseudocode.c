float *__thiscall sub_576F30(float *this, signed int a2, char a3, int a4, int a5, int a6, int a7, int a8)
{
  signed int v9; // eax
  int v10; // edi
  int v11; // eax
  float *v12; // edi
  double v13; // st7
  bool v14; // c3
  double v15; // st7
  int v16; // eax
  int v17; // ebp
  _DWORD *Singleton; // eax

  *(this + 2) = 0.0;
  *(this + 3) = 0.0;
  *(this + 4) = 0.0;
  *(this + 5) = 0.0;
  *(this + 7) = 0.0;
  *((_WORD *)this + 0x10) = 0;
  *((_WORD *)this + 0x11) = 0;
  if ( a2 >= 5 )
    v9 = 5;
  else
    v9 = a2 < 0 ? 0 : a2;
  *(_DWORD *)this = v9;
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = a5;
  *((_BYTE *)this + 4) = a3;
  *((_DWORD *)this + 4) = a6;
  *((_DWORD *)this + 5) = a7;
  *((_DWORD *)this + 6) = a8;
  FormHeapFree(*((_DWORD *)this + 7));
  *(this + 7) = 0.0;
  *((_WORD *)this + 0x11) = 0;
  *((_WORD *)this + 0x10) = 0;
  v10 = *(_DWORD *)this;
  v11 = *(_DWORD *)(FontManager_GetSingleton()[v10] + 0x38);
  v12 = (float *)(v11 + 0x38 * *((unsigned __int8 *)this + 4) + 0x128);
  v13 = *(float *)(v11 + 0x38 * *((unsigned __int8 *)this + 4) + 0x14C);
  v14 = 0.0 == v13 + v13;
  v15 = 0.0;
  if ( !v14 )
    v15 = v12[0xC] + v12[0xB];
  v16 = Double_To_SInt32(v15);
  v17 = *(_DWORD *)this;
  *((_DWORD *)this + 9) = v16;
  Singleton = FontManager_GetSingleton();
  *((_DWORD *)this + 0xA) = Double_To_SInt32(**(float **)(Singleton[v17] + 0x38));
  *((_DWORD *)this + 0xB) = Double_To_SInt32(v12[0xA] - v12[0xD]);
  *(this + 0xC) = 0.0;
  *(this + 0xD) = 0.0;
  return this;
}
