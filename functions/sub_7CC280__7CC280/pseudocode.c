void __thiscall sub_7CC280(Ni2DBuffer **this)
{
  int *v1; // ebx
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

  v1 = (int *)this;
  v2 = this + 0xC;
  if ( !*(this + 0xC) )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v3 )
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, v1[5]);
    else
      v4 = 0;
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, CHAR *))(*v2)->__vftable + 7))(
      *v2,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      EmptyString);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))(
      *v2,
      "SkinWorldViewProjTranspose",
      0x20000009,
      1,
      EmptyString);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B44EE8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B44EF8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable
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
      &unk_B46698,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B454D8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B454E8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
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
      &dword_B44FD8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B44FE8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B44FF8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
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
      &dword_B464A8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable
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
      &unk_B464B8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable
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
      &unk_B464C8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
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
      &dword_B46638,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*v2)->__vftable
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
      &dword_B46648,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B44F08,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B44F28,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable
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
      &unk_B466B8,
      0);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2)->__vftable
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
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))(
      *v2,
      "WorldViewTranspose",
      0x20000009,
      4,
      EmptyString);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))(
      *v2,
      "SkinWorldViewTranspose",
      0x20000009,
      5,
      EmptyString);
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
      &flt_B44EE0,
      0);
    v5 = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "WorldViewProjTranspose");
    v6 = dword_B45018;
    if ( dword_B45018 != v5 )
    {
      if ( v6 )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))dword_B45018;
        if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        {
          if ( v7 )
            (**v7)(v7, 1);
        }
        v1 = (int *)this;
      }
      dword_B45018 = v5;
      if ( v5 )
        InterlockedIncrement((volatile LONG *)(v5 + 4));
    }
    v8 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                         *v2,
                         "WorldTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B4501C, v8);
    v9 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                         *v2,
                         "SkinWorldTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45068, v9);
    v10 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "SkinWorldViewProjTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45020, v10);
    v11 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "ShadowProj");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45024, v11);
    v12 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "ShadowProjData");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45028, v12);
    v13 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "ShadowProjTransform");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B4502C, v13);
    v14 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "HighDetailRange");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45078, v14);
    v15 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "DirectronalLightDir0");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45030, v15);
    v16 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "DirectronalLightDir1");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45034, v16);
    v17 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "DirectronalLightDir2");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45038, v17);
    v18 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "DirectronalLightDir3");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B4503C, v18);
    v19 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "PointLightPos0");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45040, v19);
    v20 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "PointLightPos1");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45044, v20);
    v21 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "PointLightPos2");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45048, v21);
    v22 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "PointLightPos3");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B4504C, v22);
    v23 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "FogParam | ShadowVolumeFatness");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45050, v23);
    v24 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "FogColor | ShadowVolumeExtrudeDistance");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45054, v24);
    v25 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "EyePosition");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45058, v25);
    v26 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "BoneMatrix3");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B4505C, v26);
    v27 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "WorldViewTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B4506C, v27);
    v28 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "SkinWorldViewTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45070, v28);
    v29 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "Time");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45074, v29);
    v30 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "BoundCenter");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B4507C, v30);
    v31 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                          *v2,
                          "LODLandFlags");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45080, v31);
    if ( ShaderPackage >= 2 )
    {
      (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
        &flt_B4615C,
        0);
      v32 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                            *v2,
                            "DecalCount");
      NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45060, v32);
      (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable
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
        &flt_B46218,
        0);
      v33 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                            *v2,
                            "decal fade");
      NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45084, v33);
      (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*v2)->__vftable
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
        &unk_B46298,
        0);
      v34 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(
                            *v2,
                            "decal proj");
      NiSmartPointer_Set__((Ni2DBuffer **)&dword_B44F8C, v34);
    }
    sub_55E2A0(v1 + 0x26, (int *)v2);
  }
  v35 = v1 + 0xB;
  if ( !v1[0xB] )
  {
    v36 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v36 )
      v37 = NiD3DShaderCostantMapPixel::Construct(v36, v1[5]);
    else
      v37 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)v1 + 0xB, (Ni2DBuffer *)v37);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
      "eye dir",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B44F18,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
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
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
      "Light Color 0",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B464A8,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
      "Light Color 1",
      0x10000007,
      0,
      3,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B464B8,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
      "Light Color 2",
      0x10000007,
      0,
      4,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B464C8,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
      "Light Color 3",
      0x10000007,
      0,
      5,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B464D8,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
      "Emittance Color",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B46628,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
      "Toggles",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B46688,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
      "HairTint",
      0x10000007,
      0,
      0x18,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B4616C,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
      "STBBColorConstants",
      0x10000007,
      0,
      0x1A,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B466A8,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
      *v35,
      "RefractionPower",
      0x10000004,
      0,
      0x19,
      1,
      EmptyString,
      4,
      4,
      &flt_B44EDC,
      0);
    v38 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "HairTint");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45554, v38);
    v39 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "eye dir");
    v40 = dword_B45518[0];
    if ( dword_B45518[0] != v39 )
    {
      if ( v40 )
      {
        v41 = (void (__thiscall ***)(_DWORD, int))dword_B45518[0];
        if ( !InterlockedDecrement((volatile LONG *)(v40 + 4)) )
        {
          if ( v41 )
            (**v41)(v41, 1);
        }
        v1 = (int *)this;
      }
      dword_B45518[0] = v39;
      if ( v39 )
        InterlockedIncrement((volatile LONG *)(v39 + 4));
    }
    v42 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Ambient Color");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B4551C, v42);
    v43 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Light Color 0");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45520, v43);
    v44 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Light Color 1");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45524, v44);
    v45 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Light Color 2");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45528, v45);
    v46 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Light Color 3");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B4552C, v46);
    v47 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Emittance Color");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45530, v47);
    v48 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "Toggles");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45534, v48);
    v49 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "RefractionPower");
    NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45558, v49);
    if ( ShaderPackage >= 2 )
    {
      (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
        *v35,
        "DecalCount",
        0x10000007,
        0,
        0xE,
        1,
        EmptyString,
        0x10,
        4,
        &flt_B4615C,
        0);
      v50 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "DecalCount");
      NiSmartPointer_Set__((Ni2DBuffer **)&dword_B45550, v50);
      (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v35 + 0x18))(
        *v35,
        "decal offset",
        0x10000009,
        0,
        0xF,
        8,
        EmptyString,
        0x80,
        4,
        &dword_B46198,
        0);
      v51 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)*v35 + 0x38))(*v35, "decal offset");
      NiSmartPointer_Set__((Ni2DBuffer **)&dword_B44F88, v51);
    }
    sub_55E2A0(v1 + 0x25, v35);
  }
  v52 = v1 + 0x24;
  if ( !v1[0x24] )
  {
    v53 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v53 )
      v54 = NiD3DShaderCostantMapVertex::Construct(v53, v1[5]);
    else
      v54 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)v1 + 0x24, (Ni2DBuffer *)v54);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, CHAR *))(*(_DWORD *)*v52 + 0x1C))(
      *v52,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      EmptyString);
    (*(void (__thiscall **)(_DWORD, const char *, int, int, CHAR *))(*(_DWORD *)*v52 + 0x1C))(
      *v52,
      "SkinWorldViewProjTranspose",
      0x20000009,
      4,
      EmptyString);
    (*(void (__thiscall **)(_DWORD, const char *, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v52 + 0x18))(
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
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v52 + 0x18))(
      *v52,
      "EyePosition",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B44F08,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v52 + 0x18))(
      *v52,
      "U Offset",
      0x10000004,
      0,
      9,
      1,
      EmptyString,
      4,
      4,
      &flt_B44ED0,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v52 + 0x18))(
      *v52,
      "V Offset",
      0x10000004,
      0,
      0xA,
      1,
      EmptyString,
      4,
      4,
      &flt_B44ED4,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*(_DWORD *)*v52 + 0x18))(
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
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v52 + 0x18))(
      *v52,
      "FogParam",
      0x10000007,
      0,
      0xC,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B44F78,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v52 + 0x18))(
      *v52,
      "FogColor",
      0x10000007,
      0,
      0xD,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B44F68,
      0);
  }
  v55 = v1 + 0x23;
  if ( !v1[0x23] )
  {
    v56 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v56 )
      v57 = NiD3DShaderCostantMapPixel::Construct(v56, v1[5]);
    else
      v57 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)v1 + 0x23, (Ni2DBuffer *)v57);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v55 + 0x18))(
      *v55,
      "Fill Color",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B44F38,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, int *, _DWORD))(*(_DWORD *)*v55 + 0x18))(
      *v55,
      "Rim Color",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B44F48,
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v55 + 0x18))(
      *v55,
      "fVars",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B44F58,
      0);
  }
}
