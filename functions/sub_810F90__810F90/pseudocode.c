//
// Verified 2026-10-07: DistantLOD PS alpha-test-ref c3 reads shader+E0, while VS EyeDir c14 reads shader+F0. 811ED0 supplies fixed sampled-alpha threshold when any NiAlphaProperty is present. Directional per-view thresholds need to reach E0, not just the NiAlphaProperty output-alpha byte.
char __thiscall sub_810F90(_DWORD *this, NiObjectNET *a2)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  v3 = (Ni2DBuffer **)(this + 0xC); /*0x810fba*/
  if ( !*(this + 0xC) ) /*0x810fb6*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x810fc5*/
    if ( v4 ) /*0x810fdb*/
      v5 = NiD3DShaderCostantMapVertex::Construct(v4, *(this + 5)); /*0x810fe3*/
    else
      v5 = 0; /*0x810fea*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x810ff7*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v3)->__vftable /*0x81101d*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*v3)->__vftable /*0x811048*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*v3)->__vftable /*0x811073*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*v3)->__vftable /*0x81109e*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*v3)->__vftable /*0x8110c9*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*v3)->__vftable /*0x8110f4*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x81111d*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x811146*/
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
      &OB_ShaderConstantStorage_010201A0[0x209],
      0);                                       // Fog constant-map decode: DistantLOD declares fogparam at vs c11 from shared world B45E14[0x209] / B46638; not a separate DistantLOD fog producer.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x81116f*/
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
      &OB_ShaderConstantStorage_010201A0[0x20D],
      0);                                       // Fog constant-map decode: DistantLOD declares fogcolor at vs c10 from shared world B45E14[0x20D] / B46648; not a separate DistantLOD fog producer.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, _DWORD, CHAR *, int, int, _DWORD, _DWORD))(*v3)->__vftable /*0x8111a4*/
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
    *(this + 0x2A) = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v3)->__vftable + 0xE))(*v3, "instance data"); /*0x8111b4*/
  }
  if ( !*(this + 0xB) ) /*0x8111ba*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x8111c5*/
    if ( v6 ) /*0x8111db*/
      v7 = NiD3DShaderCostantMapPixel::Construct(v6, *(this + 5)); /*0x8111e3*/
    else
      v7 = 0; /*0x8111ea*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v7); /*0x8111f7*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, _DWORD *, _DWORD))(*(_DWORD *)*(this + 0xB) + 0x18))( /*0x811225*/
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
  return sub_77AA60((NiD3DShader *)this, a2); /*0x811233*/
}
