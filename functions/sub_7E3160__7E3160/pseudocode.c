void __thiscall sub_7E3160(int *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  int v5; // eax
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  v2 = (Ni2DBuffer **)(this + 0xC);
  if ( !*(this + 0xC) )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v3 )
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, *(this + 5));
    else
      v4 = 0;
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
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
    v5 = dword_B4600C;
    if ( !dword_B4600C )
    {
      v5 = ShaderPackage < 2 ? 0x28 : 0x78;
      dword_B4600C = v5;
    }
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD, _DWORD))(*v2)->__vftable
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
  if ( !*(this + 0xB) )
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v6 )
      v7 = NiD3DShaderCostantMapPixel::Construct(v6, *(this + 5));
    else
      v7 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v7);
  }
}
