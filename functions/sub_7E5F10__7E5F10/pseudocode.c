char __thiscall sub_7E5F10(_DWORD *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  _DWORD *v6; // esi
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      9,
      4,
      0,
      0,
      0,
      0,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "ShadowProjTransform",
      0x10000007,
      0,
      0xD,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B44EF8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "fogparam",
      0x10000007,
      0,
      0xF,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46638,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "fogcolor",
      0x10000007,
      0,
      0xE,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46648,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "grouped constants",
      0x10000009,
      0,
      0,
      9,
      EmptyString,
      0x90,
      4,
      &dword_B46070,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, _DWORD, CHAR *, int, int, _DWORD, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "instance data",
      0x10000009,
      0,
      0x14,
      *((unsigned __int16 *)this + 0xB0),
      EmptyString,
      0x10 * *((unsigned __int16 *)this + 0xB0),
      4,
      *(this + 0x56),
      0);
    *(this + 0x57) = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v3)->__vftable + 0xE))(*v3, "instance data");
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
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
      *v6,
      "point light color",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x59,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
      *v6,
      "point light data",
      0x10000007,
      0,
      4,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x5D,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*v6 + 0x18))(
      *v6,
      "alpha test ref",
      0x10000007,
      0,
      3,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x61,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2);
}
