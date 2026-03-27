void __thiscall sub_7DD6B0(_DWORD *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  _DWORD *v5; // esi
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  v2 = (Ni2DBuffer **)(this + 0xB);
  if ( !*(this + 0xB) )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v3 )
      v4 = NiD3DShaderCostantMapPixel::Construct(v3, *(this + 5));
    else
      v4 = 0;
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, _DWORD *, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B45F44,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B45FAC,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &WaterShader_DisplaceDampener,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &WaterShader_Rainforce,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &WaterShader_DisplaceForce,
      0);
  }
  v5 = this + 0xC;
  if ( !*(this + 0xC) )
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v6 )
      v7 = NiD3DShaderCostantMapVertex::Construct(v6, *(this + 5));
    else
      v7 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xC, (Ni2DBuffer *)v7);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v5 + 0x18))(
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
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v5 + 0x18))(
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
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v5 + 0x18))(
      *v5,
      "TransMatrixRowOne",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B45F78,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v5 + 0x18))(
      *v5,
      "TransMatrixRowTwo",
      0x10000007,
      0,
      9,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B45F88,
      0);
  }
}
