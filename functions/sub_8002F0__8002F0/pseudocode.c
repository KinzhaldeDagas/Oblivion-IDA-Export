char __thiscall sub_8002F0(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

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
      this + 0x29,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "texRatio1",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x2D,
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
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*(this + 0xB) + 0x18))(
      *(this + 0xB),
      "Ambient Color",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46498,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2);
}
