// BloodOnDeath decode 2026-05-30: GeometryDecalShader constant-map setup. Decal Count/DecalCount are per-pass shader constants, not active temp-effect counts.
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

  v2 = (Ni2DBuffer **)(this + 0xB); /*0x8050a9*/
  if ( !*(this + 0xB) ) /*0x8050a5*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x8050b4*/
    if ( v3 ) /*0x8050ca*/
      v4 = NiD3DShaderCostantMapPixel::Construct(v3, *(this + 5)); /*0x8050d2*/
    else
      v4 = 0; /*0x8050d9*/
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4); /*0x8050e6*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x805112*/
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
      &OB_ShaderConstantStorage_010201A0[0xE1],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x80513b*/
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
      &OB_ShaderConstantStorage_010201A0[0xD2],
      0);                                       // BloodOnDeath decode: pixel-shader "Decal Count" constant; not the actor-hit/trail emitter loop bound.
  }
  v5 = this + 0xC; /*0x805141*/
  if ( !*(this + 0xC) ) /*0x80513d*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x80514c*/
    if ( v6 ) /*0x805162*/
      v7 = NiD3DShaderCostantMapVertex::Construct(v6, *(this + 5)); /*0x80516a*/
    else
      v7 = 0; /*0x805171*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xC, (Ni2DBuffer *)v7); /*0x80517e*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x8051a4*/
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
    v8 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v5 + 0x38))(*v5, "WorldViewProjTranspose"); /*0x8051b2*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x25, v8); /*0x8051bb*/
    (*(void (__thiscall **)(int, const char *, int, int, CHAR *))(*(_DWORD *)*v5 + 0x1C))( /*0x8051d8*/
      *v5,
      "SkinWorldViewProjTranspose",
      0x20000009,
      1,
      EmptyString);
    v9 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v5 + 0x38))( /*0x8051e6*/
                         *v5,
                         "SkinWorldViewProjTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x26, v9); /*0x8051ef*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x80521b*/
      *v5,
      "DecalCount",
      0x10000007,
      0,
      0x1E,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0xD2],
      0);                                       // BloodOnDeath decode: vertex-shader "DecalCount" constant paired with per-pass decal state.
    (*(void (__thiscall **)(int, const char *, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x805241*/
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
    v10 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v5 + 0x38))(*v5, "BoneMatrix3"); /*0x80524f*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x27, v10); /*0x805258*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v5 + 0x18))( /*0x805284*/
      *v5,
      "decal fade",
      0x10000007,
      0,
      0x1F,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x101],
      0);                                       // BloodOnDeath decode: "decal fade" consumes temp-effect fade progress; longer BSTempEffect duration leaves decals visible longer.
  }
}
