void __thiscall sub_7EE9C0(_DWORD *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  _DWORD *v5; // esi
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  v2 = (Ni2DBuffer **)(this + 0xB); /*0x7ee9e9*/
  if ( !*(this + 0xB) ) /*0x7ee9e5*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7ee9f0*/
    if ( v3 ) /*0x7eea06*/
      v4 = NiD3DShaderCostantMapPixel::Construct(v3, *(this + 5)); /*0x7eea0e*/
    else
      v4 = 0; /*0x7eea15*/
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4); /*0x7eea22*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, _DWORD *, _DWORD))(*v2)->__vftable /*0x7eea50*/
     + 6))(
      *v2,
      "ambient color",
      0x10000006,
      0,
      0,
      1,
      EmptyString,
      0xC,
      4,
      this + 0x2C,
      0);
  }
  v5 = this + 0xC; /*0x7eea56*/
  if ( !*(this + 0xC) ) /*0x7eea52*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7eea61*/
    if ( v6 ) /*0x7eea77*/
      v7 = NiD3DShaderCostantMapVertex::Construct(v6, *(this + 5)); /*0x7eea7f*/
    else
      v7 = 0; /*0x7eea86*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xC, (Ni2DBuffer *)v7); /*0x7eea93*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7eeab9*/
      *v5,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      0,
      4,
      0,
      0,
      0,
      0,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7eeae2*/
      *v5,
      "eye pos",
      0x10000006,
      0,
      8,
      1,
      EmptyString,
      0xC,
      4,
      &OB_ShaderConstantStorage_010201A0[0x23F],
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7eeb0a*/
      *v5,
      "velocity",
      0x10000006,
      0,
      9,
      1,
      EmptyString,
      0xC,
      4,
      this + 0x1F,
      0);
    (*(void (__thiscall **)(_DWORD, char (**)[3], int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7eeb35*/
      *v5,
      &aMin,
      0x10000006,
      0,
      0xA,
      1,
      EmptyString,
      0xC,
      4,
      this + 0x22,
      0);
    (*(void (__thiscall **)(_DWORD, void **, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7eeb60*/
      *v5,
      &aMax,
      0x10000006,
      0,
      0xB,
      1,
      EmptyString,
      0xC,
      4,
      this + 0x25,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7eeb8b*/
      *v5,
      "params",
      0x10000006,
      0,
      0xC,
      1,
      EmptyString,
      0xC,
      4,
      this + 0x28,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x7eebb4*/
      *v5,
      "cam up",
      0x10000006,
      0,
      0xD,
      1,
      EmptyString,
      0xC,
      4,
      &OB_ShaderConstantStorage_010201A0[0x239],
      0);
  }
}
