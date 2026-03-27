char __thiscall sub_7EB250(Ni2DBuffer **this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  _DWORD *v6; // esi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  v3 = this + 0xB;
  if ( !*(this + 0xB) )
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v4 )
      v5 = NiD3DShaderCostantMapPixel::Construct(v4, (int)dword_B43104);
    else
      v5 = 0;
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "fDoubleVis",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2D90C,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "fBlurParams",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B46114,
      0);
  }
  v6 = this + 0xC;
  if ( !*(this + 0xC) )
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v7 )
      v8 = NiD3DShaderCostantMapVertex::Construct(v7, (int)dword_B43104);
    else
      v8 = 0;
    NiSmartPointer_Set__(this + 0xC, (Ni2DBuffer *)v8);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
      *v6,
      "texRatio0",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2D8EC,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
      *v6,
      "texRatio1",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2D8FC,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2);
}
