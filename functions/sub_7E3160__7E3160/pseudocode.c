void __thiscall sub_7E3160(int *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  int v5; // eax
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  v2 = (Ni2DBuffer **)(this + 0xC); /*0x7e3189*/
  if ( !*(this + 0xC) )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7e3194*/
    if ( v3 ) /*0x7e31aa*/
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, *(this + 5)); /*0x7e31b2*/
    else
      v4 = 0; /*0x7e31b9*/
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4); /*0x7e31c6*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2)->__vftable /*0x7e31ec*/
     + 6))(
      *v2,
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable /*0x7e3217*/
     + 6))(
      *v2,
      "Color1",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x46,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable /*0x7e3242*/
     + 6))(
      *v2,
      "Color2",
      0x10000007,
      0,
      9,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x4A,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable /*0x7e326d*/
     + 6))(
      *v2,
      "Color3",
      0x10000007,
      0,
      0xA,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x4E,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable /*0x7e3298*/
     + 6))(
      *v2,
      "Velocity",
      0x10000007,
      0,
      0xB,
      1,
      EmptyString,
      0xC,
      4,
      this + 0x3D,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable /*0x7e32c3*/
     + 6))(
      *v2,
      "Acceleration",
      0x10000007,
      0,
      0xC,
      1,
      EmptyString,
      0xC,
      4,
      this + 0x40,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable /*0x7e32ee*/
     + 6))(
      *v2,
      "fVars",
      0x10000009,
      0,
      4,
      4,
      EmptyString,
      0x40,
      4,
      this + 0x2D,
      0);
    v5 = unk_B4600C; /*0x7e32f0*/
    if ( !unk_B4600C )
    {
      v5 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ? 0x28 : 0x78;
      unk_B4600C = v5; /*0x7e330c*/
    }
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD, _DWORD))(*v2)->__vftable /*0x7e333f*/
     + 6))(
      *v2,
      "particle data",
      0x10000009,
      0,
      0xF,
      2 * v5,
      EmptyString,
      0x20 * v5,
      4,
      *(this + 0x20),
      0);
  }
  if ( !*(this + 0xB) ) /*0x7e3341*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7e334c*/
    if ( v6 ) /*0x7e3362*/
      v7 = NiD3DShaderCostantMapPixel::Construct(v6, *(this + 5)); /*0x7e336a*/
    else
      v7 = 0; /*0x7e3371*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v7); /*0x7e337e*/
  }
}
