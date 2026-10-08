// Oblivion-authoritative ShadowLightShader constant-map builder. Registers the B44FD8 four-float vector as PointLightPos0 at vertex c16; the mode-5 SLS2052..2056 caster vertex programs expose the same register as LightPosition and use c16.w as their depth normalization denominator.
//
// SpeedTreeOBSE v156 binding evidence: pixel map Ambient Color c1 <- B46498; Light Color0..3 c2..5 <- B464A8/B464B8/B464C8/B464D8. Size16/stride4/one register, flags10000007, noncopy source. Use actual definition1 map entries when validating; B4551C..2C auxiliary pointers can reflect another map construction. Vertex DiffuseColor0..2 c19..21 read the same first three direct-light vectors.
void __thiscall ShadowLightShader__BuildConstantMaps(void *this)
{
  _DWORD *v1; // ebx
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  int v5; // edi
  int v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // ebx
  Ni2DBuffer *v8; // eax
  Ni2DBuffer *v9; // eax
  Ni2DBuffer *v10; // eax
  Ni2DBuffer *v11; // eax
  Ni2DBuffer *v12; // eax
  Ni2DBuffer *v13; // eax
  Ni2DBuffer *v14; // eax
  Ni2DBuffer *v15; // eax
  Ni2DBuffer *v16; // eax
  Ni2DBuffer *v17; // eax
  Ni2DBuffer *v18; // eax
  Ni2DBuffer *v19; // eax
  Ni2DBuffer *v20; // eax
  Ni2DBuffer *v21; // eax
  Ni2DBuffer *v22; // eax
  Ni2DBuffer *v23; // eax
  Ni2DBuffer *v24; // eax
  Ni2DBuffer *v25; // eax
  Ni2DBuffer *v26; // eax
  Ni2DBuffer *v27; // eax
  Ni2DBuffer *v28; // eax
  Ni2DBuffer *v29; // eax
  Ni2DBuffer *v30; // eax
  Ni2DBuffer *v31; // eax
  Ni2DBuffer *v32; // eax
  Ni2DBuffer *v33; // eax
  Ni2DBuffer *v34; // eax
  int *v35; // esi
  NiD3DShaderConstantMap *v36; // eax
  NiD3DShaderConstantMap *v37; // eax
  Ni2DBuffer *v38; // eax
  int v39; // edi
  int v40; // eax
  void (__thiscall ***v41)(_DWORD, int); // ebx
  Ni2DBuffer *v42; // eax
  Ni2DBuffer *v43; // eax
  Ni2DBuffer *v44; // eax
  Ni2DBuffer *v45; // eax
  Ni2DBuffer *v46; // eax
  Ni2DBuffer *v47; // eax
  Ni2DBuffer *v48; // eax
  Ni2DBuffer *v49; // eax
  Ni2DBuffer *v50; // eax
  Ni2DBuffer *v51; // eax
  _DWORD *v52; // esi
  NiD3DShaderConstantMap *v53; // eax
  NiD3DShaderConstantMap *v54; // eax
  _DWORD *v55; // esi
  NiD3DShaderConstantMap *v56; // eax
  NiD3DShaderConstantMap *v57; // eax

  v1 = this; /*0x7cc2a7*/
  v2 = (Ni2DBuffer **)((char *)this + 0x30); /*0x7cc2ad*/
  if ( !*((_DWORD *)this + 0xC) ) /*0x7cc2b3*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7cc2be*/
    if ( v3 ) /*0x7cc2d4*/
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, v1[5]); /*0x7cc2dc*/
    else
      v4 = 0; /*0x7cc2e3*/
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4); /*0x7cc2ec*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, CHAR *))(*v2)->__vftable + 7))( /*0x7cc309*/
      *v2,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      EmptyString);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))( /*0x7cc323*/
      *v2,
      "SkinWorldViewProjTranspose",
      0x20000009,
      1,
      EmptyString);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable /*0x7cc34c*/
     + 6))(
      *v2,
      "ShadowProj",
      0x10000009,
      0,
      0x1C,
      4,
      EmptyString,
      0x40,
      4,
      &unk_B45560,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable /*0x7cc375*/
     + 6))(
      *v2,
      "SkinWorldTranspose",
      0x10000009,
      0,
      9,
      4,
      EmptyString,
      0x40,
      4,
      &unk_B44F98,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable /*0x7cc39e*/
     + 6))(
      *v2,
      "WorldTranspose",
      0x10000009,
      0,
      8,
      4,
      EmptyString,
      0x40,
      4,
      &unk_B45498,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc3c7*/
     + 6))(
      *v2,
      "ShadowProjData",
      0x10000007,
      0,
      0x20,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B44EE8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc3f0*/
     + 6))(
      *v2,
      "ShadowProjTransform",
      0x10000007,
      0,
      0x21,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B44EF8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc419*/
     + 6))(
      *v2,
      "HighDetailRange",
      0x10000007,
      0,
      0xC,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x221],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc442*/
     + 6))(
      *v2,
      "DirectronalLightDir0",
      0x10000007,
      0,
      0xD,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B454D8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc46b*/
     + 6))(
      *v2,
      "DirectronalLightDir1",
      0x10000007,
      0,
      0xE,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B454E8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc494*/
     + 6))(
      *v2,
      "PointLightPos0",
      0x10000007,
      0,
      0x10,
      1,
      EmptyString,
      0x10,
      4,
      &ShadowLightPointLightPos0Constant,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc4bd*/
     + 6))(
      *v2,
      "PointLightPos1",
      0x10000007,
      0,
      0x11,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B44FE8,
      0);                                       // Register B44FD8 as ShadowLight vertex constant PointLightPos0 at c16, four floats. Mode-5 SLS2052..2056 expose this as LightPosition.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc4e6*/
     + 6))(
      *v2,
      "PointLightPos2",
      0x10000007,
      0,
      0x12,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B44FF8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc50f*/
     + 6))(
      *v2,
      "DiffuseColor0",
      0x10000007,
      0,
      0x13,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x1A5],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc538*/
     + 6))(
      *v2,
      "DiffuseColor1",
      0x10000007,
      0,
      0x14,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x1A9],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc561*/
     + 6))(
      *v2,
      "DiffuseColor2",
      0x10000007,
      0,
      0x15,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x1AD],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc58a*/
     + 6))(
      *v2,
      "FogParam | ShadowVolumeFatness",
      0x10000007,
      0,
      0x17,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x209],
      0);                                       // Fog constant-map decode: ShadowLight/shared map declares FogParam | ShadowVolumeFatness at vs c23 from B46638; shared fog vector also has shadow-volume semantics.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc5b3*/
     + 6))(
      *v2,
      "FogColor | ShadowVolumeExtrudeDistance",
      0x10000007,
      0,
      0x18,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x20D],
      0);                                       // Fog constant-map decode: ShadowLight/shared map declares FogColor | ShadowVolumeExtrudeDistance at vs c24 from B46648; shared fog vector also has shadow-volume semantics.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc5dc*/
     + 6))(
      *v2,
      "EyePosition",
      0x10000007,
      0,
      0x19,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B44F08,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc605*/
     + 6))(
      *v2,
      "BoundCenter",
      0x10000007,
      0,
      0x2E,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B44F28,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc62e*/
     + 6))(
      *v2,
      "LODLandFlags",
      0x10000007,
      0,
      0x2F,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x229],
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2)->__vftable /*0x7cc654*/
     + 6))(
      *v2,
      "BoneMatrix3",
      0x20000009,
      0x120000,
      0x2A,
      0x36,
      0,
      0,
      0,
      0,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))( /*0x7cc66e*/
      *v2,
      "WorldViewTranspose",
      0x20000009,
      4,
      EmptyString);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))( /*0x7cc688*/
      *v2,
      "SkinWorldViewTranspose",
      0x20000009,
      5,
      EmptyString);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc6b1*/
     + 6))(
      *v2,
      "Time",
      0x10000004,
      0,
      0x16,
      1,
      EmptyString,
      4,
      4,
      &unk_B44EE0,
      0);
    v5 = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "WorldViewProjTranspose"); /*0x7cc6c1*/
    v6 = unk_B45018; /*0x7cc6c3*/
    if ( unk_B45018 != v5 ) /*0x7cc6ca*/
    {
      if ( v6 ) /*0x7cc6ce*/
      {
        v7 = (void (__thiscall ***)(_DWORD, int))unk_B45018; /*0x7cc6d0*/
        if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7cc6d6*/
        {
          if ( v7 ) /*0x7cc6e2*/
            (**v7)(v7, 1); /*0x7cc6ec*/
        }
        v1 = this; /*0x7cc6ee*/
      }
      unk_B45018 = v5; /*0x7cc6f4*/
      if ( v5 ) /*0x7cc6fa*/
        InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x7cc700*/
    }
    v8 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc712*/
                         *v2,
                         "WorldTranspose");
    NiSmartPointer_Set__(&dword_B4501C, v8); /*0x7cc71a*/
    v9 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc72b*/
                         *v2,
                         "SkinWorldTranspose");
    NiSmartPointer_Set__(&dword_B45068, v9); /*0x7cc733*/
    v10 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc744*/
                          *v2,
                          "SkinWorldViewProjTranspose");
    NiSmartPointer_Set__(&dword_B45020, v10); /*0x7cc74c*/
    v11 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "ShadowProj"); /*0x7cc75d*/
    NiSmartPointer_Set__(&dword_B45024, v11); /*0x7cc765*/
    v12 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc776*/
                          *v2,
                          "ShadowProjData");
    NiSmartPointer_Set__(&dword_B45028, v12); /*0x7cc77e*/
    v13 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc78f*/
                          *v2,
                          "ShadowProjTransform");
    NiSmartPointer_Set__(&dword_B4502C, v13); /*0x7cc797*/
    v14 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc7a8*/
                          *v2,
                          "HighDetailRange");
    NiSmartPointer_Set__(&dword_B45078, v14); /*0x7cc7b0*/
    v15 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc7c1*/
                          *v2,
                          "DirectronalLightDir0");
    NiSmartPointer_Set__(&dword_B45030, v15); /*0x7cc7c9*/
    v16 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc7da*/
                          *v2,
                          "DirectronalLightDir1");
    NiSmartPointer_Set__(&dword_B45034, v16); /*0x7cc7e2*/
    v17 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc7f3*/
                          *v2,
                          "DirectronalLightDir2");
    NiSmartPointer_Set__(&dword_B45038, v17); /*0x7cc7fb*/
    v18 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc80c*/
                          *v2,
                          "DirectronalLightDir3");
    NiSmartPointer_Set__(&dword_B4503C, v18); /*0x7cc814*/
    v19 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc825*/
                          *v2,
                          "PointLightPos0");
    NiSmartPointer_Set__(&dword_B45040, v19); /*0x7cc82d*/
    v20 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc83e*/
                          *v2,
                          "PointLightPos1");
    NiSmartPointer_Set__(&dword_B45044, v20); /*0x7cc846*/
    v21 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc857*/
                          *v2,
                          "PointLightPos2");
    NiSmartPointer_Set__(&dword_B45048, v21); /*0x7cc85f*/
    v22 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc870*/
                          *v2,
                          "PointLightPos3");
    NiSmartPointer_Set__(&dword_B4504C, v22); /*0x7cc878*/
    v23 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc889*/
                          *v2,
                          "FogParam | ShadowVolumeFatness");// Fog constant-map decode: caches handle for shared FogParam | ShadowVolumeFatness declaration; handle target is B46638.
    NiSmartPointer_Set__(&dword_B45050, v23); /*0x7cc891*/
    v24 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc8a2*/
                          *v2,
                          "FogColor | ShadowVolumeExtrudeDistance");// Fog constant-map decode: caches handle for shared FogColor | ShadowVolumeExtrudeDistance declaration; handle target is B46648.
    NiSmartPointer_Set__(&dword_B45054, v24); /*0x7cc8aa*/
    v25 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "EyePosition"); /*0x7cc8bb*/
    NiSmartPointer_Set__(&dword_B45058, v25); /*0x7cc8c3*/
    v26 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "BoneMatrix3"); /*0x7cc8d4*/
    NiSmartPointer_Set__(&dword_B4505C, v26); /*0x7cc8dc*/
    v27 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc8ed*/
                          *v2,
                          "WorldViewTranspose");
    NiSmartPointer_Set__(&dword_B4506C, v27); /*0x7cc8f5*/
    v28 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc906*/
                          *v2,
                          "SkinWorldViewTranspose");
    NiSmartPointer_Set__(&dword_B45070, v28); /*0x7cc90e*/
    v29 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "Time"); /*0x7cc91f*/
    NiSmartPointer_Set__(&dword_B45074, v29); /*0x7cc927*/
    v30 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "BoundCenter"); /*0x7cc938*/
    NiSmartPointer_Set__(&dword_B4507C, v30); /*0x7cc940*/
    v31 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc951*/
                          *v2,
                          "LODLandFlags");
    NiSmartPointer_Set__(&dword_B45080, v31); /*0x7cc959*/
    if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x7cc965*/
    {
      (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc992*/
       + 6))(
        *v2,
        "DecalCount",
        0x10000007,
        0,
        0x1E,
        1,
        EmptyString,
        0x10,
        4,
        &OB_ShaderConstantStorage_010201A0[0xD2],
        0);
      v32 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc9a0*/
                            *v2,
                            "DecalCount");
      NiSmartPointer_Set__((Ni2DBuffer **)&unk_B45060, v32); /*0x7cc9a8*/
      (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cc9d7*/
       + 6))(
        *v2,
        "decal fade",
        0x10000009,
        0,
        0x1F,
        8,
        EmptyString,
        0x80,
        4,
        &OB_ShaderConstantStorage_010201A0[0x101],
        0);
      v33 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cc9e5*/
                            *v2,
                            "decal fade");
      NiSmartPointer_Set__(&dword_B45084, v33); /*0x7cc9ed*/
      (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7cca1c*/
       + 6))(
        *v2,
        "decal proj",
        0x10000009,
        0,
        0x28,
        0x20,
        EmptyString,
        0x200,
        4,
        &OB_ShaderConstantStorage_010201A0[0x121],
        0);
      v34 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7cca2a*/
                            *v2,
                            "decal proj");
      NiSmartPointer_Set__(&dword_B44F8C, v34); /*0x7cca32*/
    }
    OB_NiSmartPointer_Assign_010201A0(v1 + 0x26, (int *)v2); /*0x7cca3e*/
  }
  v35 = v1 + 0xB; /*0x7cca47*/
  if ( !v1[0xB] ) /*0x7cca43*/
  {
    v36 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7cca52*/
    if ( v36 ) /*0x7cca68*/
      v37 = NiD3DShaderCostantMapPixel::Construct(v36, v1[5]); /*0x7cca70*/
    else
      v37 = 0; /*0x7cca77*/
    NiSmartPointer_Set__((Ni2DBuffer **)v1 + 0xB, (Ni2DBuffer *)v37); /*0x7cca80*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccaac*/
      *v35,
      "eye dir",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B44F18,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccad5*/
      *v35,
      "Ambient Color",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x1A1],
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccafe*/
      *v35,
      "Light Color 0",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x1A5],
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccb27*/
      *v35,
      "Light Color 1",
      0x10000007,
      0,
      3,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x1A9],
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccb50*/
      *v35,
      "Light Color 2",
      0x10000007,
      0,
      4,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x1AD],
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccb79*/
      *v35,
      "Light Color 3",
      0x10000007,
      0,
      5,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x1B1],
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccba2*/
      *v35,
      "Emittance Color",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x205],
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccbcb*/
      *v35,
      "Toggles",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x21D],
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccbf4*/
      *v35,
      "HairTint",
      0x10000007,
      0,
      0x18,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0xD6],
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccc1d*/
      *v35,
      "STBBColorConstants",
      0x10000007,
      0,
      0x1A,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x225],
      0);                                       // Registers shader constant map entry STBBColorConstants using backing globals at B466A8. This supports TES STBB color constants only; it is separate from SpeedTreeRT 360 billboard image selection.
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccc46*/
      *v35,
      "RefractionPower",
      0x10000004,
      0,
      0x19,
      1,
      EmptyString,
      4,
      4,
      &unk_B44EDC,
      0);
    v38 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "HairTint"); /*0x7ccc54*/
    NiSmartPointer_Set__(&dword_B45554, v38); /*0x7ccc5c*/
    v39 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "eye dir"); /*0x7ccc6f*/
    v40 = unk_B45518[0]; /*0x7ccc71*/
    if ( unk_B45518[0] != v39 ) /*0x7ccc78*/
    {
      if ( v40 ) /*0x7ccc7c*/
      {
        v41 = (void (__thiscall ***)(_DWORD, int))unk_B45518[0]; /*0x7ccc7e*/
        if ( !InterlockedDecrement((volatile LONG *)(v40 + 4)) ) /*0x7ccc84*/
        {
          if ( v41 ) /*0x7ccc90*/
            (**v41)(v41, 1); /*0x7ccc9a*/
        }
        v1 = this; /*0x7ccc9c*/
      }
      unk_B45518[0] = v39; /*0x7ccca2*/
      if ( v39 ) /*0x7ccca8*/
        InterlockedIncrement((volatile LONG *)(v39 + 4)); /*0x7cccae*/
    }
    v42 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Ambient Color"); /*0x7cccc0*/
    NiSmartPointer_Set__(&dword_B4551C, v42); /*0x7cccc8*/
    v43 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Light Color 0"); /*0x7cccd9*/
    NiSmartPointer_Set__(&dword_B45520, v43); /*0x7ccce1*/
    v44 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Light Color 1"); /*0x7cccf2*/
    NiSmartPointer_Set__(&dword_B45524, v44); /*0x7cccfa*/
    v45 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Light Color 2"); /*0x7ccd0b*/
    NiSmartPointer_Set__(&dword_B45528, v45); /*0x7ccd13*/
    v46 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Light Color 3"); /*0x7ccd24*/
    NiSmartPointer_Set__(&dword_B4552C, v46); /*0x7ccd2c*/
    v47 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Emittance Color"); /*0x7ccd3d*/
    NiSmartPointer_Set__(&dword_B45530, v47); /*0x7ccd45*/
    v48 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Toggles"); /*0x7ccd56*/
    NiSmartPointer_Set__(&dword_B45534, v48); /*0x7ccd5e*/
    v49 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "RefractionPower"); /*0x7ccd6f*/
    NiSmartPointer_Set__(&dword_B45558, v49); /*0x7ccd77*/
    if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x7ccd83*/
    {
      (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccdb0*/
        *v35,
        "DecalCount",
        0x10000007,
        0,
        0xE,
        1,
        EmptyString,
        0x10,
        4,
        &OB_ShaderConstantStorage_010201A0[0xD2],
        0);
      v50 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "DecalCount"); /*0x7ccdbe*/
      NiSmartPointer_Set__(&dword_B45550, v50); /*0x7ccdc6*/
      (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))( /*0x7ccdf5*/
        *v35,
        "decal offset",
        0x10000009,
        0,
        0xF,
        8,
        EmptyString,
        0x80,
        4,
        &OB_ShaderConstantStorage_010201A0[0xE1],
        0);
      v51 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "decal offset"); /*0x7cce03*/
      NiSmartPointer_Set__(&dword_B44F88, v51); /*0x7cce0b*/
    }
    OB_NiSmartPointer_Assign_010201A0(v1 + 0x25, v35); /*0x7cce17*/
  }
  v52 = v1 + 0x24; /*0x7cce23*/
  if ( !v1[0x24] ) /*0x7cce1c*/
  {
    v53 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7cce31*/
    if ( v53 ) /*0x7cce47*/
      v54 = NiD3DShaderCostantMapVertex::Construct(v53, v1[5]); /*0x7cce4f*/
    else
      v54 = 0; /*0x7cce56*/
    NiSmartPointer_Set__((Ni2DBuffer **)v1 + 0x24, (Ni2DBuffer *)v54); /*0x7cce5f*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, CHAR *))(*(_DWORD *)*v52 + 0x1C))( /*0x7cce7c*/
      *v52,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      EmptyString);
    (*(void (__thiscall **)(_DWORD, const char *, int, int, CHAR *))(*(_DWORD *)*v52 + 0x1C))( /*0x7cce96*/
      *v52,
      "SkinWorldViewProjTranspose",
      0x20000009,
      4,
      EmptyString);
    (*(void (__thiscall **)(_DWORD, const char *, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v52 + 0x18))( /*0x7ccebc*/
      *v52,
      "BoneMatrix3",
      0x20000009,
      0x120000,
      0xE,
      0x36,
      0,
      0,
      0,
      0,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v52 + 0x18))( /*0x7ccee5*/
      *v52,
      "EyePosition",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B44F08,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v52 + 0x18))( /*0x7ccf0e*/
      *v52,
      "U Offset",
      0x10000004,
      0,
      9,
      1,
      EmptyString,
      4,
      4,
      &g_ShadowLight_TextureEffectUOffset,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v52 + 0x18))( /*0x7ccf37*/
      *v52,
      "V Offset",
      0x10000004,
      0,
      0xA,
      1,
      EmptyString,
      4,
      4,
      &g_ShadowLight_TextureEffectVOffset,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*(_DWORD *)*v52 + 0x18))( /*0x7ccf60*/
      *v52,
      "Z scaler",
      0x10000004,
      0,
      0xB,
      1,
      EmptyString,
      4,
      4,
      &unk_B44ED8,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v52 + 0x18))( /*0x7ccf89*/
      *v52,
      "FogParam",
      0x10000007,
      0,
      0xC,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B44F78,
      0);                                       // Fog constant-map decode: ShadowLight alternate explicit FogParam at vs c12 uses local/global backing B44F78, not shared B46638.
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v52 + 0x18))( /*0x7ccfb2*/
      *v52,
      "FogColor",
      0x10000007,
      0,
      0xD,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B44F68,
      0);                                       // Fog constant-map decode: ShadowLight alternate explicit FogColor at vs c13 uses local/global backing B44F68, not shared B46648.
  }
  v55 = v1 + 0x23; /*0x7ccfbb*/
  if ( !v1[0x23] ) /*0x7ccfb4*/
  {
    v56 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7ccfc9*/
    if ( v56 ) /*0x7ccfdf*/
      v57 = NiD3DShaderCostantMapPixel::Construct(v56, v1[5]); /*0x7ccfe7*/
    else
      v57 = 0; /*0x7ccfee*/
    NiSmartPointer_Set__((Ni2DBuffer **)v1 + 0x23, (Ni2DBuffer *)v57); /*0x7ccff7*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v55 + 0x18))( /*0x7cd023*/
      *v55,
      "Fill Color",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      &g_ShadowLight_CurrentFillColor,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v55 + 0x18))( /*0x7cd04c*/
      *v55,
      "Rim Color",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &g_ShadowLight_CurrentEdgeColor,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v55 + 0x18))( /*0x7cd075*/
      *v55,
      "fVars",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &g_ShadowLight_TextureEffectEdgeFalloff,
      0);                                       // Verified (Oblivion): ShadowLight pixel constant map registers the 16-byte fVars vector at pixel constant c2. The installed shaderpackage002.sdp SLS2076 CTAB independently describes a float4 fVars at c2, but its program-name/source association conflicts with the current loader table (SLS2076 -> SimpleShadow). CTAB confirms the vector shape only as Candidate corroboration; components z/w remain Unknown.
  }
}
