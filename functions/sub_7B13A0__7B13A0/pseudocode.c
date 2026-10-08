char __thiscall sub_7B13A0(int *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  v3 = (Ni2DBuffer **)(this + 0xC); /*0x7b13c9*/
  if ( !*(this + 0xC) ) /*0x7b13c5*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7b13d0*/
    if ( v4 ) /*0x7b13e6*/
      v5 = NiD3DShaderCostantMapVertex::Construct(v4, *(this + 5)); /*0x7b13ee*/
    else
      v5 = 0; /*0x7b13f5*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x7b1402*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x7b1430*/
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
      this + 0x28,
      0);
  }
  if ( !*(this + 0xB) ) /*0x7b1432*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7b143d*/
    if ( v6 ) /*0x7b1453*/
      v7 = NiD3DShaderCostantMapPixel::Construct(v6, *(this + 5)); /*0x7b145b*/
    else
      v7 = 0; /*0x7b1462*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v7); /*0x7b146f*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*(this + 0xB) + 0x18))( /*0x7b149b*/
      *(this + 0xB),
      "Blend Value",
      0x10000004,
      0,
      1,
      1,
      EmptyString,
      4,
      4,
      &unk_B42D50,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, a2); /*0x7b14a9*/
}
