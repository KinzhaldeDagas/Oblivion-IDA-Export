// MoonSugarEffect decode: Gethit constant map exposes fDoubleVis from B2D90C.. and fBlurParams from B46114.. to the native shader.
char __thiscall sub_7EB250(Ni2DBuffer **this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  Ni2DBuffer **v6; // esi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  v3 = this + 0xB; /*0x7eb279*/
  if ( !*(this + 0xB) ) /*0x7eb275*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7eb284*/
    if ( v4 ) /*0x7eb29a*/
      v5 = NiD3DShaderCostantMapPixel::Construct(v4, (int)unk_B43104); /*0x7eb2a5*/
    else
      v5 = 0; /*0x7eb2ac*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x7eb2b9*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x7eb2e5*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x7eb30e*/
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
      &unk_B46114,
      0);
  }
  v6 = this + 0xC; /*0x7eb314*/
  if ( !*(this + 0xC) ) /*0x7eb310*/
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7eb31f*/
    if ( v7 ) /*0x7eb335*/
      v8 = NiD3DShaderCostantMapVertex::Construct(v7, (int)unk_B43104); /*0x7eb340*/
    else
      v8 = 0; /*0x7eb347*/
    NiSmartPointer_Set__(this + 0xC, (Ni2DBuffer *)v8); /*0x7eb354*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v6)->__vftable /*0x7eb380*/
     + 6))(
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v6)->__vftable /*0x7eb3a9*/
     + 6))(
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
  return sub_77AA60((NiD3DShader *)this, a2); /*0x7eb3b7*/
}
