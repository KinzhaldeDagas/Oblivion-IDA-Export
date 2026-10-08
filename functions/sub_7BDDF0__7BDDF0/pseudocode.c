char __thiscall sub_7BDDF0(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  int *v6; // esi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  v3 = (Ni2DBuffer **)(this + 0xB); /*0x7bde19*/
  if ( !*(this + 0xB) ) /*0x7bde15*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7bde24*/
    if ( v4 ) /*0x7bde3a*/
      v5 = NiD3DShaderCostantMapPixel::Construct(v4, *(this + 5)); /*0x7bde42*/
    else
      v5 = 0; /*0x7bde49*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x7bde56*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x7bde84*/
     + 6))(
      *v3,
      "timingdata",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x20,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x7bdeaf*/
     + 6))(
      *v3,
      "hdrparam",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      this + 0x42,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x7bded8*/
     + 6))(
      *v3,
      "blurscale",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2C794,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v3)->__vftable /*0x7bdf04*/
     + 6))(
      *v3,
      "blurdata",
      0x10000009,
      0,
      3,
      0x10,
      EmptyString,
      0x100,
      4,
      &unk_B43228,
      0);
  }
  v6 = this + 0xC; /*0x7bdf0a*/
  if ( !*(this + 0xC) ) /*0x7bdf06*/
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7bdf15*/
    if ( v7 ) /*0x7bdf2b*/
      v8 = NiD3DShaderCostantMapVertex::Construct(v7, *(this + 5)); /*0x7bdf33*/
    else
      v8 = 0; /*0x7bdf3a*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xC, (Ni2DBuffer *)v8); /*0x7bdf47*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7bdf73*/
      *v6,
      "texRatio0",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2C774,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7bdf9c*/
      *v6,
      "texRatio1",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B2C784,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2); /*0x7bdfaa*/
}
