// MoonSugarEffect decode: Blur constant map exposes blendW, blurParams, alphaAdd, texRatio0, and texRatio1 to native BlurShader_P20.
char __thiscall sub_7E9C10(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  int *v6; // esi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  v3 = (Ni2DBuffer **)(this + 0xB); /*0x7e9c39*/
  if ( !*(this + 0xB) ) /*0x7e9c35*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7e9c44*/
    if ( v4 ) /*0x7e9c5a*/
      v5 = NiD3DShaderCostantMapPixel::Construct(v4, *(this + 5)); /*0x7e9c62*/
    else
      v5 = 0; /*0x7e9c69*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x7e9c76*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x7e9ca2*/
     + 6))(
      *v3,
      "blendW",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2D888,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x7e9ccb*/
     + 6))(
      *v3,
      "blurParams",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2D8B8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x7e9cf6*/
     + 6))(
      *v3,
      "alphaAdd",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x30,
      0);
  }
  v6 = this + 0xC; /*0x7e9cfc*/
  if ( !*(this + 0xC) ) /*0x7e9cf8*/
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7e9d07*/
    if ( v7 ) /*0x7e9d1d*/
      v8 = NiD3DShaderCostantMapVertex::Construct(v7, *(this + 5)); /*0x7e9d25*/
    else
      v8 = 0; /*0x7e9d2c*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xC, (Ni2DBuffer *)v8); /*0x7e9d39*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7e9d65*/
      *v6,
      "texRatio0",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2D898,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7e9d8e*/
      *v6,
      "texRatio1",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2D8A8,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2); /*0x7e9d9c*/
}
