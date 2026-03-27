char __thiscall sub_810F90(_DWORD *this, NiObjectNET *a2)
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "Diffuse Light direction",
      0x10000007,
      0,
      4,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x30,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "Diffuse Light color",
      0x10000007,
      0,
      5,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x34,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "ambient color",
      0x10000007,
      0,
      0xD,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x2C,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "eye vector",
      0x10000007,
      0,
      0xE,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x3C,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "eye right vector",
      0x10000007,
      0,
      9,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x40,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "alpha param param",
      0x10000007,
      0,
      0xC,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2C334,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "fogparam",
      0x10000007,
      0,
      0xB,
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
      0xA,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46648,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, _DWORD, CHAR *, int, int, _DWORD, _DWORD))(*v3)->__vftable
     + 6))(
      *v3,
      "instance data",
      0x10000009,
      0,
      0x14,
      *((unsigned __int16 *)this + 0x56),
      EmptyString,
      0x10 * *((unsigned __int16 *)this + 0x56),
      4,
      *(this + 0x29),
      0);
    *(this + 0x2A) = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v3)->__vftable + 0xE))(*v3, "instance data");
  }
  if ( !*(this + 0xB) )
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v6 )
      v7 = NiD3DShaderCostantMapPixel::Construct(v6, *(this + 5));
    else
      v7 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v7);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*(this + 0xB) + 0x18))(
      *(this + 0xB),
      "alpha test ref",
      0x10000007,
      0,
      3,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x38,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2);
}
