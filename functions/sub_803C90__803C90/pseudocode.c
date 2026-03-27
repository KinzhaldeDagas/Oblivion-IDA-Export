char __thiscall sub_803C90(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  int *v6; // esi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  v3 = (Ni2DBuffer **)(this + 0xC);
  if ( !*(this + 0xC) )
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v4 )
      v5 = NiD3DShaderCostantMapVertex::Construct(v4, *(this + 5));
    else
      v5 = 0;
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable
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
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable
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
      &dword_B474CC,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable
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
      &dword_B474DC,
      0);
  }
  v6 = this + 0xB;
  if ( !*(this + 0xB) )
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v7 )
      v8 = NiD3DShaderCostantMapPixel::Construct(v7, *(this + 5));
    else
      v8 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v8);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
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
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
      *v6,
      "blurdata",
      0x10000009,
      0,
      4,
      0x10,
      EmptyString,
      0x100,
      4,
      &unk_B474F8,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2);
}
