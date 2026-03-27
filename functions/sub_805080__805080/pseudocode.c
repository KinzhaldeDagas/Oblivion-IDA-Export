void __thiscall sub_805080(int *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  int *v5; // esi
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax
  Ni2DBuffer *v8; // eax
  Ni2DBuffer *v9; // eax
  Ni2DBuffer *v10; // eax

  v2 = (Ni2DBuffer **)(this + 0xB);
  if ( !*(this + 0xB) )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v3 )
      v4 = NiD3DShaderCostantMapPixel::Construct(v3, *(this + 5));
    else
      v4 = 0;
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "Decal Offset",
      0x10000007,
      0,
      0xF,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46198,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
     + 6))(
      *v2,
      "Decal Count",
      0x10000007,
      0,
      0xE,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B4615C,
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
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v5 + 0x18))(
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
    v8 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v5 + 0x38))(*v5, "WorldViewProjTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x25, v8);
    (*(void (__thiscall **)(int, const char *, int, int, CHAR *))(*(_DWORD *)*v5 + 0x1C))(
      *v5,
      "SkinWorldViewProjTranspose",
      0x20000009,
      1,
      EmptyString);
    v9 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v5 + 0x38))(
                         *v5,
                         "SkinWorldViewProjTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x26, v9);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v5 + 0x18))(
      *v5,
      "DecalCount",
      0x10000007,
      0,
      0x1E,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B4615C,
      0);
    (*(void (__thiscall **)(int, const char *, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v5 + 0x18))(
      *v5,
      "BoneMatrix3",
      0x20000009,
      0x80000,
      0x2A,
      0x18,
      0,
      0,
      0,
      0,
      0);
    v10 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v5 + 0x38))(*v5, "BoneMatrix3");
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x27, v10);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v5 + 0x18))(
      *v5,
      "decal fade",
      0x10000007,
      0,
      0x1F,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B46218,
      0);
  }
}
