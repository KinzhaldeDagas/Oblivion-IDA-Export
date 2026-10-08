// Oblivion Lighting30 constant-map build. Main vertex automatic entries are WorldViewProjTranspose at c0, SkinWorldViewProjTranspose at c1, WorldViewTranspose at c5, SkinWorldViewTranspose at c6, and BoneMatrix3 at c31 for 54 registers. The shared vertex ConstantGroup occupies c10..c30 from global slot 0x3D5; pixel ConstantGroup occupies c0..c48 from slot 0x459.
// GPU static-world audit 2026-09-27: main rigid automatic matrix entries are WVP transpose c0 and WV transpose c5; skinned entries use c1 and c6 and must not be classified by the rigid register layout. Shared vertex ConstantGroup c10..30 and pixel c0..48 contain additional per-draw semantics. Patching only WVP does not establish complete material residency.
// DX11 map ownership audit 2026-10-01: active pixel/vertex2C/30 and retained alternate/main map fields7C/80/84/88 are separate NiPointer owners. Known aliases across these six slots contribute independent references. Main activation can avoid destruction only while every ordered release leaves a positive count; final-count arithmetic alone is not sufficient proof.
void __thiscall Lighting30Shader__BuildConstantMaps(void *this)
{
  Ni2DBuffer **v2; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  int v5; // edi
  float v6; // eax
  float v7; // ebp
  Ni2DBuffer *v8; // eax
  Ni2DBuffer *v9; // eax
  Ni2DBuffer *v10; // eax
  Ni2DBuffer *v11; // eax
  Ni2DBuffer *v12; // eax
  Ni2DBuffer *v13; // eax
  _DWORD *v14; // edi
  NiD3DShaderConstantMap *v15; // eax
  NiD3DShaderConstantMap *v16; // eax
  Ni2DBuffer *v17; // ebp
  Ni2DBuffer *v18; // esi
  int v19; // esi
  int v20; // edi
  _DWORD *v21; // esi
  NiD3DShaderConstantMap *v22; // eax
  NiD3DShaderConstantMap *v23; // eax
  _DWORD *v24; // esi
  NiD3DShaderConstantMap *v25; // eax
  NiD3DShaderConstantMap *v26; // eax

  v2 = (Ni2DBuffer **)((char *)this + 0x30); /*0x7fccab*/
  if ( !*((_DWORD *)this + 0xC) ) /*0x7fcca7*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7fccb6*/
    if ( v3 ) /*0x7fcccc*/
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, *((_DWORD *)this + 5)); /*0x7fccd4*/
    else
      v4 = 0; /*0x7fccdb*/
    NiSmartPointer_Set__(v2, (Ni2DBuffer *)v4); /*0x7fcce8*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, CHAR *))(*v2)->__vftable + 7))( /*0x7fcd05*/
      *v2,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      EmptyString);                             // Add automatic main-vertex-map WorldViewProjTranspose at VS c0 (non-skinned matrix c0..c3).
    v5 = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "WorldViewProjTranspose"); /*0x7fcd15*/
    v6 = OB_ShaderConstantStorage_010201A0[0x361]; /*0x7fcd17*/
    if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x361]) != v5 ) /*0x7fcd1e*/
    {
      if ( v6 != 0.0 ) /*0x7fcd22*/
      {
        v7 = OB_ShaderConstantStorage_010201A0[0x361]; /*0x7fcd24*/
        if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v6) + 4)) && v7 != 0.0 ) /*0x7fcd36*/
          (**(void (__thiscall ***)(float, int))LODWORD(v7))(COERCE_FLOAT(LODWORD(v7)), 1); /*0x7fcd41*/
      }
      LODWORD(OB_ShaderConstantStorage_010201A0[0x361]) = v5;// Retain the WorldViewProjTranspose constant-map entry for selector-mask activation. /*0x7fcd45*/
      if ( v5 ) /*0x7fcd4b*/
        InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x7fcd51*/
    }
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))( /*0x7fcd6f*/
      *v2,
      "SkinWorldViewProjTranspose",
      0x20000009,
      1,
      EmptyString);                             // Add automatic SkinWorldViewProjTranspose at VS c1 (skinned matrix c1..c4).
    v8 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7fcd7d*/
                         *v2,
                         "SkinWorldViewProjTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&OB_ShaderConstantStorage_010201A0[0x362], v8);// Retain the SkinWorldViewProjTranspose entry for selector-mask activation. /*0x7fcd85*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))( /*0x7fcda2*/
      *v2,
      "WorldViewTranspose",
      0x20000009,
      5,
      EmptyString);                             // Add automatic WorldViewTranspose at VS c5.
    v9 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7fcdb0*/
                         *v2,
                         "WorldViewTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&OB_ShaderConstantStorage_010201A0[0x364], v9);// Retain the WorldViewTranspose entry for selector-mask activation. /*0x7fcdb8*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, CHAR *))(*v2)->__vftable + 7))( /*0x7fcdd5*/
      *v2,
      "SkinWorldViewTranspose",
      0x20000009,
      6,
      EmptyString);                             // Add automatic SkinWorldViewTranspose at VS c6.
    v10 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))( /*0x7fcde3*/
                          *v2,
                          "SkinWorldViewTranspose");
    NiSmartPointer_Set__((Ni2DBuffer **)&OB_ShaderConstantStorage_010201A0[0x365], v10);// Retain the SkinWorldViewTranspose entry for selector-mask activation. /*0x7fcdeb*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2)->__vftable /*0x7fce14*/
     + 6))(
      *v2,
      "BoneMatrix3",
      0x20000009,
      0x120000,
      0x1F,
      0x36,
      0,
      0,
      0,
      0,
      0);                                       // Add automatic BoneMatrix3 at VS c31, count 54 registers (18 affine bone matrices at three float4 registers each).
    v11 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "BoneMatrix3"); /*0x7fce22*/
    NiSmartPointer_Set__((Ni2DBuffer **)&OB_ShaderConstantStorage_010201A0[0x363], v11);// Retain the BoneMatrix3 entry for selector-mask activation. /*0x7fce2a*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7fce59*/
     + 6))(
      *v2,
      "ConstantGroup",
      0x10000009,
      0,
      0xA,
      0x15,
      EmptyString,
      0x150,
      4,
      &OB_ShaderConstantStorage_010201A0[0x3D5],
      0);                                       // Add Lighting30 vertex ConstantGroup at VS c10, count 21, backed by global slot 0x3D5.
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7fce85*/
     + 6))(
      *v2,
      "decal fade",
      0x10000009,
      0,
      0x20,
      8,
      EmptyString,
      0x80,
      4,
      &OB_ShaderConstantStorage_010201A0[0x101],
      0);
    v12 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "decal fade"); /*0x7fce93*/
    NiSmartPointer_Set__((Ni2DBuffer **)&OB_ShaderConstantStorage_010201A0[0x380], v12); /*0x7fce9b*/
    (*((void (__thiscall **)(Ni2DBuffer *, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*v2)->__vftable /*0x7fceca*/
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
    v13 = (Ni2DBuffer *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v2)->__vftable + 0xE))(*v2, "decal proj"); /*0x7fced8*/
    NiSmartPointer_Set__((Ni2DBuffer **)&OB_ShaderConstantStorage_010201A0[0x381], v13); /*0x7fcee0*/
  }
  v14 = (char *)this + 0x2C; /*0x7fcee9*/
  if ( !*((_DWORD *)this + 0xB) ) /*0x7fcee5*/
  {
    v15 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7fcef0*/
    if ( v15 ) /*0x7fcf06*/
      v16 = NiD3DShaderCostantMapPixel::Construct(v15, *((_DWORD *)this + 5)); /*0x7fcf0e*/
    else
      v16 = 0; /*0x7fcf15*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, (Ni2DBuffer *)v16); /*0x7fcf22*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v14 + 0x18))( /*0x7fcf51*/
      *v14,
      "ConstantGroup",
      0x10000009,
      0,
      0,
      0x31,
      EmptyString,
      0x310,
      4,
      &OB_ShaderConstantStorage_010201A0[0x459],
      0);                                       // Build Lighting30 pixel ConstantGroup at PS c0, count 49, backed by global slot 0x459.
    *((_DWORD *)this + 0x27) = (*(int (__thiscall **)(_DWORD, const char *))(*(_DWORD *)*v14 + 0x38))( /*0x7fcf61*/
                                 *v14,
                                 "ConstantGroup");
  }
  v17 = *((Ni2DBuffer **)this + 0x22); /*0x7fcf67*/
  if ( v17 != *v2 ) /*0x7fcf6f*/
  {
    if ( v17 ) /*0x7fcf73*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x7fcf79*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v17->__vftable)(v17, 1); /*0x7fcf90*/
    }
    v18 = *v2; /*0x7fcf92*/
    *((_DWORD *)this + 0x22) = v18; /*0x7fcf96*/
    if ( v18 ) /*0x7fcf9c*/
      InterlockedIncrement((volatile LONG *)&v18->members); /*0x7fcfa2*/
  }
  v19 = *((_DWORD *)this + 0x21); /*0x7fcfa8*/
  if ( v19 != *v14 ) /*0x7fcfb0*/
  {
    if ( v19 ) /*0x7fcfb4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x7fcfba*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x7fcfd0*/
    }
    v20 = *v14; /*0x7fcfd2*/
    *((_DWORD *)this + 0x21) = v20; /*0x7fcfd6*/
    if ( v20 ) /*0x7fcfdc*/
      InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x7fcfe2*/
  }
  v21 = (char *)this + 0x80; /*0x7fcfef*/
  if ( !*((_DWORD *)this + 0x20) ) /*0x7fcfe8*/
  {
    v22 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7fcffd*/
    if ( v22 ) /*0x7fd013*/
      v23 = NiD3DShaderCostantMapVertex::Construct(v22, *((_DWORD *)this + 5)); /*0x7fd01b*/
    else
      v23 = 0; /*0x7fd022*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x20, (Ni2DBuffer *)v23); /*0x7fd02f*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, CHAR *))(*(_DWORD *)*v21 + 0x1C))( /*0x7fd04c*/
      *v21,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      EmptyString);
    (*(void (__thiscall **)(_DWORD, const char *, int, int, CHAR *))(*(_DWORD *)*v21 + 0x1C))( /*0x7fd066*/
      *v21,
      "SkinWorldViewProjTranspose",
      0x20000009,
      4,
      EmptyString);
    (*(void (__thiscall **)(_DWORD, const char *, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v21 + 0x18))( /*0x7fd08c*/
      *v21,
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
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v21 + 0x18))( /*0x7fd0b5*/
      *v21,
      "EyePosition",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x3E5],
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v21 + 0x18))( /*0x7fd0de*/
      *v21,
      "U Offset",
      0x10000004,
      0,
      9,
      1,
      EmptyString,
      4,
      4,
      &OB_ShaderConstantStorage_010201A0[0x34A],
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v21 + 0x18))( /*0x7fd107*/
      *v21,
      "V Offset",
      0x10000004,
      0,
      0xA,
      1,
      EmptyString,
      4,
      4,
      &OB_ShaderConstantStorage_010201A0[0x34B],
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v21 + 0x18))( /*0x7fd130*/
      *v21,
      "InvBoundDiameter",
      0x10000004,
      0,
      0xB,
      1,
      EmptyString,
      4,
      4,
      &OB_ShaderConstantStorage_010201A0[0x34C],
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v21 + 0x18))( /*0x7fd159*/
      *v21,
      "FogParam",
      0x10000007,
      0,
      0xC,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x35D],
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v21 + 0x18))( /*0x7fd182*/
      *v21,
      "FogColor",
      0x10000007,
      0,
      0xD,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x359],
      0);
  }
  v24 = (char *)this + 0x7C; /*0x7fd188*/
  if ( !*((_DWORD *)this + 0x1F) ) /*0x7fd184*/
  {
    v25 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7fd193*/
    if ( v25 ) /*0x7fd1a9*/
      v26 = NiD3DShaderCostantMapPixel::Construct(v25, *((_DWORD *)this + 5)); /*0x7fd1b1*/
    else
      v26 = 0; /*0x7fd1b8*/
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x1F, (Ni2DBuffer *)v26); /*0x7fd1c5*/
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, _DWORD, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v24 + 0x18))( /*0x7fd1f1*/
      *v24,
      "Fill Color",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x34D],
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v24 + 0x18))( /*0x7fd21a*/
      *v24,
      "Rim Color",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x351],
      0);
    (*(void (__thiscall **)(_DWORD, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)*v24 + 0x18))( /*0x7fd243*/
      *v24,
      "Vars",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x355],
      0);
  }
}
