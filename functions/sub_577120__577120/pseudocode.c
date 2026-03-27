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

  v3 = *(this + 7) == 0;
  *((_BYTE *)this + 4) = a2;
  if ( v3 || !*(_BYTE *)*(this + 7) )
  {
    v4 = *this;
    v5 = FontManager_GetSingleton()[v4];
    v6 = *((unsigned __int8 *)this + 4);
    v7 = *(_DWORD *)(v5 + 0x38);
    if ( 0.0 == *(float *)(v7 + 0x38 * v6 + 0x14C) )
      v8 = 0.0;
    else
      v8 = *(float *)(v7 + 0x38 * v6 + 0x158) + *(float *)(v7 + 0x38 * v6 + 0x154);
    v9 = Double_To_SInt32(v8 + *(float *)(v7 + 0x38 * v6 + 0x14C));
    v10 = *this;
    *(this + 9) = v9;
    Singleton = FontManager_GetSingleton();
    v12 = Double_To_SInt32(**(float **)(Singleton[v10] + 0x38));
    v13 = *this;
    *(this + 0xA) = v12;
    v14 = FontManager_GetSingleton();
    *(this + 0xB) = Double_To_SInt32(-*(float *)(v14[v13] + 0x30));
    *(this + 0xC) = 0;
  }
  *(this + 0xD) = 0;
}
