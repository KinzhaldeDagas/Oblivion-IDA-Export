char __thiscall sub_7AFEA0(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  int *v6; // esi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  v3 = (Ni2DBuffer **)(this + 0xB);
  if ( !*(this + 0xB) )
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v4 )
      v5 = NiD3DShaderCostantMapPixel::Construct(v4, *(this + 5));
    else
      v5 = 0;
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable
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
  v6 = this + 0xC;
  if ( !*(this + 0xC) )
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v7 )
      v8 = NiD3DShaderCostantMapVertex::Construct(v7, *(this + 5));
    else
      v8 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xC, (Ni2DBuffer *)v8);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
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
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
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
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
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
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
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
  return sub_77AA60((NiD3DShader *)this, a2);
}
