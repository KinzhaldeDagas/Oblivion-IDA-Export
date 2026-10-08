void __thiscall sub_7DD6B0(_DWORD *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  _DWORD *v5; // esi
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  v2 = (Ni2DBuffer **)(this + 0xB); /*0x7dd6d9*/
  if ( !*(this + 0xB) ) /*0x7dd6d5*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7dd6e4*/
    if ( v3 ) /*0x7dd6fa*/
      v4 = NiD3DShaderCostantMapPixel::Construct(v3, *(this + 5)); /*0x7dd702*/
    else
      v4 = 0; /*0x7dd709*/
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4); /*0x7dd716*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, _DWORD *, _DWORD))(*v2)->__vftable /*0x7dd744*/
     + 6))(
      *v2,
      "Time",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x44,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7dd76d*/
     + 6))(
      *v2,
      "BlendAmount",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x4C],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7dd796*/
     + 6))(
      *v2,
      "TextureOffset",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x66],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7dd7bf*/
     + 6))(
      *v2,
      "fDamp",
      0x10000007,
      0,
      3,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x4B],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7dd7e8*/
     + 6))(
      *v2,
      "RainVars",
      0x10000007,
      0,
      4,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x51],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7dd811*/
     + 6))(
      *v2,
      "WadingVars",
      0x10000007,
      0,
      5,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x55],
      0);
  }
  v5 = this + 0xC; /*0x7dd817*/
  if ( !*(this + 0xC) ) /*0x7dd813*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7dd822*/
    if ( v6 ) /*0x7dd838*/
      v7 = NiD3DShaderCostantMapVertex::Construct(v6, *(this + 5)); /*0x7dd840*/
    else
      v7 = 0; /*0x7dd847*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xC, (Ni2DBuffer *)v7); /*0x7dd854*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7dd882*/
      *v5,
      "texRatio0",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x25,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7dd8ad*/
      *v5,
      "texRatio1",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x29,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7dd8d6*/
      *v5,
      "TransMatrixRowOne",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x59],
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7dd8ff*/
      *v5,
      "TransMatrixRowTwo",
      0x10000007,
      0,
      9,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x5D],
      0);
  }
}
