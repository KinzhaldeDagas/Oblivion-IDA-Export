// MoonSugarEffect decode: CopyShader render pass. Used as image-space fallback when no active native shader exists; copies source texture to destination/default target with tex ratio constants.
char __thiscall sub_803C90(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  int *v6; // esi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  v3 = (Ni2DBuffer **)(this + 0xC); /*0x803cb9*/
  if ( !*(this + 0xC) ) /*0x803cb5*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x803cc4*/
    if ( v4 ) /*0x803cda*/
      v5 = NiD3DShaderCostantMapVertex::Construct(v4, *(this + 5)); /*0x803ce2*/
    else
      v5 = 0; /*0x803ce9*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x803cf6*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x803d24*/
     + 6))(
      *v3,
      "texRatio0",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x2A,
      0);                                       // MoonSugarEffect decode: CopyShader vertex constants include texRatio0 plus RowOne/RowTwo transform rows for the copy/mask pass.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x803d4d*/
     + 6))(
      *v3,
      "RowOne",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      flt_B474CC,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x803d76*/
     + 6))(
      *v3,
      "RowTwo",
      0x10000007,
      0,
      9,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B474CC[4],
      0);
  }
  v6 = this + 0xB; /*0x803d7c*/
  if ( !*(this + 0xB) ) /*0x803d78*/
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x803d87*/
    if ( v7 ) /*0x803d9d*/
      v8 = NiD3DShaderCostantMapPixel::Construct(v7, *(this + 5)); /*0x803da5*/
    else
      v8 = 0; /*0x803dac*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v8); /*0x803db9*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x803de5*/
      *v6,
      "blurscale",
      0x10000007,
      0,
      3,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2E03C,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x803e11*/
      *v6,
      "blurdata",
      0x10000009,
      0,
      4,
      0x10,
      EmptyString,
      0x100,
      4,
      &flt_B474CC[0xB],
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2); /*0x803e1f*/
}
