// Builds TallGrassShader constant maps in Oblivion. Vertex bindings include WVP, ShadowProjTransform, fog, grouped constants and instancing; pixel bindings include point-light color/data and alpha-test reference.
bool __thiscall TallGrassShader__BuildConstantMaps(void *this, NiObjectNET *object)
{
  Ni2DBuffer **v3; // esi
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap *v5; // eax
  _DWORD *v6; // esi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  v3 = (Ni2DBuffer **)((char *)this + 0x30); /*0x7e5f3a*/
  if ( !*((_DWORD *)this + 0xC) ) /*0x7e5f36*/
  {
    v4 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7e5f45*/
    if ( v4 ) /*0x7e5f5b*/
      v5 = NiD3DShaderCostantMapVertex::Construct(v4, *((_DWORD *)this + 5)); /*0x7e5f63*/
    else
      v5 = 0; /*0x7e5f6a*/
    NiSmartPointer_Set__(v3, (Ni2DBuffer *)v5); /*0x7e5f77*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v3)->__vftable /*0x7e5f9d*/
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x7e5fc6*/
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
      &unk_B44EF8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x7e5fef*/
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
      flt_B46638,
      0);                                       // Fog constant-map decode: projected/instance vertex path declares fogparam at vs c15 from shared B45E14[0x209] / B46638.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v3)->__vftable /*0x7e6018*/
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
      &flt_B46638[4],
      0);                                       // Fog constant-map decode: projected/instance vertex path declares fogcolor at vs c14 from shared B45E14[0x20D] / B46648.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, int *, _DWORD))(*v3)->__vftable /*0x7e6044*/
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
      &unk_B46070,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, _DWORD, CHAR *, int, int, _DWORD, _DWORD))(*v3)->__vftable /*0x7e6079*/
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
      *((_DWORD *)this + 0x56),
      0);
    *((_DWORD *)this + 0x57) = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v3)->__vftable + 0xE))( /*0x7e6089*/
                                 *v3,
                                 "instance data");
  }
  v6 = (char *)this + 0x2C; /*0x7e6093*/
  if ( !*((_DWORD *)this + 0xB) ) /*0x7e608f*/
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7e609e*/
    if ( v7 ) /*0x7e60b4*/
      v8 = NiD3DShaderCostantMapPixel::Construct(v7, *((_DWORD *)this + 5)); /*0x7e60bc*/
    else
      v8 = 0; /*0x7e60c3*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v8); /*0x7e60d0*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, char *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7e60fe*/
      *v6,
      "point light color",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      (char *)this + 0x164,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, char *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7e6129*/
      *v6,
      "point light data",
      0x10000007,
      0,
      4,
      1,
      EmptyString,
      0x10,
      4,
      (char *)this + 0x174,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, char *, _DWORD))(*(_DWORD *)*v6 + 0x18))( /*0x7e6154*/
      *v6,
      "alpha test ref",
      0x10000007,
      0,
      3,
      1,
      EmptyString,
      0x10,
      4,
      (char *)this + 0x184,
      0);
  }
  return sub_77AA60((NiD3DShader *)this, object); /*0x7e6162*/
}
