char __thiscall sub_7AFEA0(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  int *v6; // esi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  v3 = (Ni2DBuffer **)(this + 0xB); /*0x7afec9*/
  if ( !*(this + 0xB) ) /*0x7afec5*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7afed4*/
    if ( v4 ) /*0x7afeea*/
      v5 = NiD3DShaderCostantMapPixel::Construct(v4, *(this + 5)); /*0x7afef2*/
    else
      v5 = 0; /*0x7afef9*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x7aff06*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x7aff32*/
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
      &flt_B2C2C4,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x7aff5d*/
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
      this + 0x34,
      0);
  }
  v6 = this + 0xC; /*0x7aff63*/
  if ( !*(this + 0xC) ) /*0x7aff5f*/
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7aff6e*/
    if ( v7 ) /*0x7aff84*/
      v8 = NiD3DShaderCostantMapVertex::Construct(v7, *(this + 5)); /*0x7aff8c*/
    else
      v8 = 0; /*0x7aff93*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xC, (Ni2DBuffer *)v8); /*0x7affa0*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7affce*/
      *v6,
      "x texcoord offsets",
      0x10000007,
      0,
      4,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x2C,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7afff9*/
      *v6,
      "y texcoord offsets",
      0x10000007,
      0,
      5,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x30,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7b0022*/
      *v6,
      "texRatio0",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2C2D4,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7b004b*/
      *v6,
      "texRatio1",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2C2E4,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2); /*0x7b0059*/
}
