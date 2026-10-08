void __cdecl sub_5547F0(_DWORD *a1, _DWORD *a2, FaceGenHeadParameters *parameters, char a4)
{
  const char *v4; // eax
  char *m_data; // ebp
  char *v6; // edi
  BSFaceGenModelMap *v7; // eax
  BSFaceGenModelMap *v8; // esi
  bool v9; // zf
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  Ni2DBuffer *v13; // esi
  BSFaceGenModel *v14; // eax
  Ni2DBuffer *v15; // eax
  NiNode *v16; // ecx
  NiInterpController *begin; // eax
  const char *cachedScaledTime_low; // eax
  int *SourceTexture_010201A0; // eax
  void (__thiscall ***v20)(_DWORD, int); // esi
  NiRenderedTexture *v21; // ebp
  NiTexturingProperty *v22; // eax
  NiTexturingProperty *v23; // esi
  NiNode *v24; // eax
  NiNode *v25; // esi
  const char *v26; // eax
  char *v27; // esi
  char *v28; // ebp
  char *v29; // edi
  BSFaceGenModelMap *v30; // eax
  BSFaceGenModelMap *v31; // esi
  int v32; // ecx
  int v33; // esi
  int v34; // ecx
  Ni2DBuffer *v35; // esi
  BSFaceGenModel *v36; // eax
  Ni2DBuffer *v37; // eax
  NiInterpController *v38; // eax
  const char *v39; // eax
  int *v40; // eax
  FaceGenHeadParameters *v41; // esi
  NiRenderedTexture *v42; // edi
  NiTexturingProperty *v43; // eax
  NiTexturingProperty *v44; // esi
  NiNode *v45; // eax
  NiNode *v46; // esi
  int v47; // edi
  NiNode *v48; // esi
  float v49; // [esp+30h] [ebp-84h]
  NiNode *v50; // [esp+48h] [ebp-6Ch] BYREF
  int v51; // [esp+4Ch] [ebp-68h] BYREF
  UInt32 v52; // [esp+50h] [ebp-64h] BYREF
  int v53; // [esp+54h] [ebp-60h] BYREF
  void *v54; // [esp+58h] [ebp-5Ch]
  BSStringT ArgList; // [esp+5Ch] [ebp-58h] BYREF
  BSStringT v56; // [esp+64h] [ebp-50h] BYREF
  BSStringT v57; // [esp+6Ch] [ebp-48h] BYREF
  int v58; // [esp+74h] [ebp-40h]
  __int16 v59; // [esp+78h] [ebp-3Ch]
  __int16 v60; // [esp+7Ah] [ebp-3Ah]
  int v61; // [esp+7Ch] [ebp-38h]
  int v62; // [esp+80h] [ebp-34h]
  float v63[9]; // [esp+84h] [ebp-30h] BYREF
  int v64; // [esp+B0h] [ebp-4h]

  ArgList.m_data = 0; /*0x554819*/
  ArgList.m_dataLen = 0; /*0x55481d*/
  ArgList.m_bufLen = 0; /*0x554822*/
  v64 = 0; /*0x554827*/
  v57.m_data = 0; /*0x55482b*/
  v57.m_dataLen = 0; /*0x55482f*/
  v57.m_bufLen = 0; /*0x554834*/
  v56.m_data = 0; /*0x554839*/
  v56.m_dataLen = 0; /*0x55483d*/
  v56.m_bufLen = 0; /*0x554842*/
  v58 = 0; /*0x554847*/
  v59 = 0; /*0x55484b*/
  v60 = 0; /*0x554850*/
  v61 = 0; /*0x554855*/
  v62 = 0; /*0x554859*/
  v51 = 0; /*0x554863*/
  v50 = 0; /*0x554867*/
  v49 = flt_A3721C; /*0x554876*/
  LOBYTE(v64) = 6; /*0x554879*/
  NiMatrix33_InitRotationY(v63, v49); /*0x554881*/
  if ( !parameters[1].matrices[3].end ) /*0x554893*/
    goto LABEL_66; /*0x554893*/
  v4 = (const char *)(*(int (__thiscall **)(float *))(*(_DWORD *)parameters[1].matrices[3].end + 0x14))(parameters[1].matrices[3].end); /*0x5548a4*/
  BSStringT_Static_Format(&ArgList, "Meshes\\%s", v4); /*0x5548b1*/
  m_data = ArgList.m_data; /*0x5548b6*/
  v53 = (int)sub_550010(&v56, ArgList.m_data); /*0x5548cb*/
  v6 = sub_54FEB0(&v57, m_data); /*0x5548d7*/
  v52 = 0; /*0x5548d9*/
  LOBYTE(v64) = 7; /*0x5548df*/
  if ( !v6 ) /*0x5548e4*/
  {
    LOBYTE(v64) = 6; /*0x5548e6*/
    goto LABEL_37; /*0x5548eb*/
  }
  if ( !g_faceGenManager ) /*0x5548f0*/
    FaceGenManager_EnsureInitialized(); /*0x5548f8*/
  if ( !*((_DWORD *)g_faceGenManager + 0x36B) ) /*0x554902*/
  {
    v7 = (BSFaceGenModelMap *)FormHeapAlloc(0x20u); /*0x554910*/
    v54 = v7; /*0x554918*/
    LOBYTE(v64) = 8; /*0x55491e*/
    if ( v7 ) /*0x554923*/
      v8 = BSFaceGenModelMap::BSFaceGenModelMap(v7); /*0x55492c*/
    else
      v8 = 0; /*0x554930*/
    v9 = g_faceGenManager == 0; /*0x554932*/
    LOBYTE(v64) = 7; /*0x554938*/
    if ( v9 ) /*0x55493d*/
      FaceGenManager_EnsureInitialized(); /*0x55493f*/
    *((_DWORD *)g_faceGenManager + 0x36B) = v8; /*0x55494a*/
    v10 = *((_DWORD *)g_faceGenManager + 0x36B); /*0x554956*/
    *(_DWORD *)(v10 + 0x18) = dword_B120EC; /*0x554962*/
    sub_5506B0((char *)v10, 0); /*0x554965*/
    v11 = dword_B120F4; /*0x554970*/
    if ( !g_faceGenManager ) /*0x55496a*/
      FaceGenManager_EnsureInitialized(); /*0x554978*/
    v12 = *((_DWORD *)g_faceGenManager + 0x36B); /*0x554983*/
    *(_DWORD *)(v12 + 0x1C) = v11; /*0x55498a*/
    sub_5506B0((char *)v12, 0); /*0x55498d*/
  }
  if ( !g_faceGenManager ) /*0x554992*/
    FaceGenManager_EnsureInitialized(); /*0x55499a*/
  if ( sub_5515B0(*((char **)g_faceGenManager + 0x36B), (int)v6, (int *)&v52) ) /*0x5549b0*/
  {
    v13 = (Ni2DBuffer *)v52; /*0x5549b9*/
    if ( !*(_DWORD *)(v52 + 8) ) /*0x5549bd*/
      sub_559B50((_DWORD *)v52, v6, m_data, (void *)v53, 0, 0); /*0x5549cd*/
    LOBYTE(v64) = 6; /*0x5549d6*/
    if ( InterlockedDecrement((volatile LONG *)&v13->members) ) /*0x5549de*/
      goto LABEL_36; /*0x5549e6*/
    goto LABEL_35; /*0x5549e6*/
  }
  v14 = (BSFaceGenModel *)FormHeapAlloc(0x1Cu); /*0x5549fd*/
  v54 = v14; /*0x554a05*/
  LOBYTE(v64) = 9; /*0x554a0b*/
  if ( v14 ) /*0x554a10*/
    v15 = (Ni2DBuffer *)BSFaceGenModel::BSFaceGenModel(v14); /*0x554a14*/
  else
    v15 = 0; /*0x554a1b*/
  LOBYTE(v64) = 7; /*0x554a22*/
  NiSmartPointer_Set__((Ni2DBuffer **)&v52, v15); /*0x554a2a*/
  v13 = (Ni2DBuffer *)v52; /*0x554a33*/
  if ( sub_559B50((_DWORD *)v52, v6, m_data, (void *)v53, 0, 0) ) /*0x554a3e*/
  {
    if ( !g_faceGenManager ) /*0x554a47*/
      FaceGenManager_EnsureInitialized(); /*0x554a4f*/
    sub_551450(*((char **)g_faceGenManager + 0x36B), (int)v6, v13); /*0x554a62*/
  }
  else if ( v13 ) /*0x554a6b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v13->members) ) /*0x554a71*/
      (*(void (__thiscall **)(Ni2DBuffer *, int))v13->__vftable)(v13, 1); /*0x554a83*/
    v13 = 0; /*0x554a85*/
  }
  LOBYTE(v64) = 6; /*0x554a89*/
  if ( v13 ) /*0x554a8e*/
  {
    if ( InterlockedDecrement((volatile LONG *)&v13->members) ) /*0x554a94*/
    {
LABEL_36:
      BSFaceGenModel_CreateMorphedGeometry(v13, parameters, (NiGeometry **)&v50); /*0x554aa8*/
      goto LABEL_37; /*0x554ab7*/
    }
LABEL_35:
    (*(void (__thiscall **)(Ni2DBuffer *, int))v13->__vftable)(v13, 1); /*0x554a9e*/
    goto LABEL_36; /*0x554aa6*/
  }
LABEL_37:
  v16 = v50; /*0x554abc*/
  if ( v50 ) /*0x554ac2*/
  {
    NiObjectNET_SetName((NiObjectNET *)v50, "FaceGenEyeLeft"); /*0x554acd*/
    begin = (NiInterpController *)parameters[1].matrices[0].begin; /*0x554ad9*/
    if ( begin ) /*0x554ade*/
    {
      cachedScaledTime_low = (const char *)LODWORD(begin->member.cachedScaledTime); /*0x554ae0*/
      if ( !cachedScaledTime_low ) /*0x554ae5*/
        cachedScaledTime_low = EmptyString; /*0x554ae7*/
      BSStringT_Static_Format(&ArgList, "Textures\\%s", cachedScaledTime_low); /*0x554af7*/
      SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0((UInt32 *)&v53, ArgList.m_data, 0, 0); /*0x554b11*/
      LOBYTE(v64) = 0xA; /*0x554b16*/
    }
    else
    {
      SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0( /*0x554b2f*/
                                        (UInt32 *)&v53,
                                        "Textures\\Characters\\Eyes\\EyeDefault.dds",
                                        0,
                                        0);
      LOBYTE(v64) = 0xB; /*0x554b34*/
    }
    OB_NiSmartPointer_Assign_010201A0(&v51, SourceTexture_010201A0); /*0x554b3e*/
    LOBYTE(v64) = 6; /*0x554b49*/
    if ( v53 ) /*0x554b4e*/
    {
      v20 = (void (__thiscall ***)(_DWORD, int))v53; /*0x554b50*/
      if ( !InterlockedDecrement((volatile LONG *)(v53 + 4)) ) /*0x554b56*/
        (**v20)(v20, 1); /*0x554b6c*/
    }
    v21 = (NiRenderedTexture *)v51; /*0x554b6e*/
    if ( v51 ) /*0x554b74*/
    {
      v22 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x554b78*/
      v54 = v22; /*0x554b80*/
      LOBYTE(v64) = 0xC; /*0x554b86*/
      if ( v22 ) /*0x554b8b*/
        v23 = NiTexturingProperty::NiTexturingProperty(v22); /*0x554b94*/
      else
        v23 = 0; /*0x554b98*/
      LOBYTE(v64) = 6; /*0x554b9d*/
      OB_NiTexturingProperty_SetBaseTexture_010201A0(v23, v21); /*0x554ba5*/
      OB_NiTexturingProperty_SetClampMode_010201A0(v23, 3); /*0x554bae*/
      NiTexturingProperty_SetBaseMapFilterMode(v23, 2); /*0x554bb7*/
      if ( NiNode_GetNiPropertyByID(v50, 6) ) /*0x554bc2*/
      {
        sub_708560((int ***)v50, (volatile LONG **)&v53, 6); /*0x554bd6*/
        NiPointerSlot_Release((NiD3DVertexShader *)&v53); /*0x554bdf*/
      }
      sub_405680(v50, (BSShaderProperty *)v23); /*0x554be9*/
    }
    if ( *(_DWORD *)&v50->members.children.numObjs ) /*0x554bf2*/
    {
      if ( a4 ) /*0x554c02*/
      {
        sub_478350(v50, 0); /*0x554c06*/
        v24 = v50; /*0x554c0b*/
        v50->members.super.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x554c15*/
        v24 = (NiNode *)((char *)v24 + 0x54); /*0x554c1e*/
        v24->members.super.super.super.m_uiRefCount = LODWORD(g_zeroNiPoint3.y); /*0x554c21*/
        v24->members.super.super.m_pcName = (const char *)LODWORD(g_zeroNiPoint3.z); /*0x554c2a*/
        qmemcpy(&v50->members.super.m_localTransform, v63, 0x24u); /*0x554c44*/
        (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a1 + 0x84))(*a1, v50, 0); /*0x554c49*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a2 + 0x84))(*a2, v50, 0); /*0x554c5d*/
      }
    }
    else
    {
      qmemcpy(&v50->members.super.m_localTransform, v63, 0x24u); /*0x554c6d*/
      (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a1 + 0x84))(*a1, v50, 0); /*0x554c85*/
    }
    v16 = v50; /*0x554c87*/
    if ( v50 ) /*0x554c8d*/
    {
      v25 = v50; /*0x554c8f*/
      if ( !InterlockedDecrement((volatile LONG *)&v50->members) ) /*0x554c95*/
        v25->vtbl->super.super.super.Destructor((NiRefObject *)v25, 1); /*0x554cab*/
      v16 = 0; /*0x554cad*/
      v50 = 0; /*0x554caf*/
    }
    if ( v21 ) /*0x554cb5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v21->member) ) /*0x554cbb*/
        v21->__vftable->super.super.super.Destructor((NiRefObject *)v21, 1); /*0x554cce*/
      v51 = 0; /*0x554cd0*/
LABEL_66:
      v16 = v50; /*0x554cd4*/
    }
  }
  if ( !parameters[1].matrices[3].capacityEnd ) /*0x554ce5*/
  {
    v47 = v51; /*0x555129*/
    goto LABEL_132; /*0x555129*/
  }
  v26 = (const char *)(*(int (__thiscall **)(float *))(*(_DWORD *)parameters[1].matrices[3].capacityEnd + 0x14))(parameters[1].matrices[3].capacityEnd); /*0x554cf8*/
  BSStringT_Static_Format(&ArgList, "Meshes\\%s", v26); /*0x554d05*/
  v27 = ArgList.m_data; /*0x554d0a*/
  v28 = sub_550010(&v56, ArgList.m_data); /*0x554d19*/
  v29 = sub_54FEB0(&v57, v27); /*0x554d29*/
  v52 = 0; /*0x554d2b*/
  LOBYTE(v64) = 0xD; /*0x554d31*/
  if ( v29 ) /*0x554d36*/
  {
    if ( !g_faceGenManager ) /*0x554d42*/
      FaceGenManager_EnsureInitialized(); /*0x554d4a*/
    if ( !*((_DWORD *)g_faceGenManager + 0x36B) ) /*0x554d55*/
    {
      v30 = (BSFaceGenModelMap *)FormHeapAlloc(0x20u); /*0x554d63*/
      v54 = v30; /*0x554d6b*/
      LOBYTE(v64) = 0xE; /*0x554d71*/
      if ( v30 ) /*0x554d76*/
        v31 = BSFaceGenModelMap::BSFaceGenModelMap(v30); /*0x554d7f*/
      else
        v31 = 0; /*0x554d83*/
      v9 = g_faceGenManager == 0; /*0x554d85*/
      LOBYTE(v64) = 0xD; /*0x554d8b*/
      if ( v9 ) /*0x554d90*/
        FaceGenManager_EnsureInitialized(); /*0x554d92*/
      *((_DWORD *)g_faceGenManager + 0x36B) = v31; /*0x554d9d*/
      v32 = *((_DWORD *)g_faceGenManager + 0x36B); /*0x554da8*/
      *(_DWORD *)(v32 + 0x18) = dword_B120EC; /*0x554db5*/
      sub_5506B0((char *)v32, 0); /*0x554db8*/
      v33 = dword_B120F4; /*0x554dc3*/
      if ( !g_faceGenManager ) /*0x554dbd*/
        FaceGenManager_EnsureInitialized(); /*0x554dcb*/
      v34 = *((_DWORD *)g_faceGenManager + 0x36B); /*0x554dd5*/
      *(_DWORD *)(v34 + 0x1C) = v33; /*0x554ddc*/
      sub_5506B0((char *)v34, 0); /*0x554ddf*/
    }
    if ( !g_faceGenManager ) /*0x554de4*/
      FaceGenManager_EnsureInitialized(); /*0x554dec*/
    if ( sub_5515B0(*((char **)g_faceGenManager + 0x36B), (int)v29, (int *)&v52) ) /*0x554e03*/
    {
      v35 = (Ni2DBuffer *)v52; /*0x554e0c*/
      if ( !*(_DWORD *)(v52 + 8) ) /*0x554e10*/
        sub_559B50((_DWORD *)v52, v29, ArgList.m_data, v28, 0, 0); /*0x554e20*/
      LOBYTE(v64) = 6; /*0x554e25*/
    }
    else
    {
      v36 = (BSFaceGenModel *)FormHeapAlloc(0x1Cu); /*0x554e31*/
      v54 = v36; /*0x554e39*/
      LOBYTE(v64) = 0xF; /*0x554e3f*/
      if ( v36 ) /*0x554e44*/
        v37 = (Ni2DBuffer *)BSFaceGenModel::BSFaceGenModel(v36); /*0x554e48*/
      else
        v37 = 0; /*0x554e4f*/
      LOBYTE(v64) = 0xD; /*0x554e56*/
      NiSmartPointer_Set__((Ni2DBuffer **)&v52, v37); /*0x554e5e*/
      v35 = (Ni2DBuffer *)v52; /*0x554e67*/
      if ( sub_559B50((_DWORD *)v52, v29, ArgList.m_data, v28, 0, 0) ) /*0x554e72*/
      {
        if ( !g_faceGenManager ) /*0x554e7b*/
          FaceGenManager_EnsureInitialized(); /*0x554e83*/
        sub_551450(*((char **)g_faceGenManager + 0x36B), (int)v29, v35); /*0x554e96*/
      }
      else if ( v35 ) /*0x554e9f*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v35->members) ) /*0x554ea5*/
          (*(void (__thiscall **)(Ni2DBuffer *, int))v35->__vftable)(v35, 1); /*0x554eb7*/
        v35 = 0; /*0x554eb9*/
      }
      LOBYTE(v64) = 6; /*0x554ebd*/
      if ( !v35 ) /*0x554ec2*/
        goto LABEL_102; /*0x554ec2*/
    }
    if ( !InterlockedDecrement((volatile LONG *)&v35->members) ) /*0x554ec8*/
      (*(void (__thiscall **)(Ni2DBuffer *, int))v35->__vftable)(v35, 1); /*0x554eda*/
    BSFaceGenModel_CreateMorphedGeometry(v35, parameters, (NiGeometry **)&v50); /*0x554eeb*/
  }
  else
  {
    LOBYTE(v64) = 6; /*0x554d38*/
  }
LABEL_102:
  v16 = v50; /*0x554ef0*/
  if ( v50 ) /*0x554ef6*/
  {
    NiObjectNET_SetName((NiObjectNET *)v50, "FaceGenEyeRight"); /*0x554f01*/
    v38 = (NiInterpController *)parameters[1].matrices[0].begin; /*0x554f0d*/
    if ( v38 ) /*0x554f12*/
    {
      v39 = (const char *)LODWORD(v38->member.cachedScaledTime); /*0x554f14*/
      if ( !v39 ) /*0x554f19*/
        v39 = EmptyString; /*0x554f1b*/
      BSStringT_Static_Format(&ArgList, "Textures\\%s", v39); /*0x554f2b*/
      v40 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0((UInt32 *)&parameters, ArgList.m_data, 0, 0); /*0x554f48*/
      LOBYTE(v64) = 0x10; /*0x554f4d*/
    }
    else
    {
      v40 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0( /*0x554f69*/
                     (UInt32 *)&parameters,
                     "Textures\\Characters\\Eyes\\EyeDefault.dds",
                     0,
                     0);
      LOBYTE(v64) = 0x11; /*0x554f6e*/
    }
    OB_NiSmartPointer_Assign_010201A0(&v51, v40); /*0x554f78*/
    LOBYTE(v64) = 6; /*0x554f86*/
    if ( parameters ) /*0x554f8b*/
    {
      v41 = parameters; /*0x554f8d*/
      if ( !InterlockedDecrement((volatile LONG *)&parameters->matrices[0].columns) ) /*0x554f93*/
        (*(void (__thiscall **)(FaceGenHeadParameters *, int))v41->matrices[0].rows)(v41, 1); /*0x554fa9*/
    }
    v42 = (NiRenderedTexture *)v51; /*0x554fab*/
    if ( v51 ) /*0x554fb1*/
    {
      v43 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x554fb9*/
      parameters = (FaceGenHeadParameters *)v43; /*0x554fc1*/
      LOBYTE(v64) = 0x12; /*0x554fca*/
      if ( v43 ) /*0x554fcf*/
        v44 = NiTexturingProperty::NiTexturingProperty(v43); /*0x554fd8*/
      else
        v44 = 0; /*0x554fdc*/
      LOBYTE(v64) = 6; /*0x554fe1*/
      OB_NiTexturingProperty_SetBaseTexture_010201A0(v44, v42); /*0x554fe9*/
      OB_NiTexturingProperty_SetClampMode_010201A0(v44, 3); /*0x554ff2*/
      NiTexturingProperty_SetBaseMapFilterMode(v44, 2); /*0x554ffb*/
      if ( NiNode_GetNiPropertyByID(v50, 6) ) /*0x555006*/
      {
        sub_708560((int ***)v50, (volatile LONG **)&parameters, 6); /*0x55501d*/
        NiPointerSlot_Release((NiD3DVertexShader *)&parameters); /*0x555029*/
      }
      sub_405680(v50, (BSShaderProperty *)v44); /*0x555033*/
    }
    if ( *(_DWORD *)&v50->members.children.numObjs ) /*0x55503c*/
    {
      if ( a4 ) /*0x55504c*/
      {
        sub_478350(v50, 0); /*0x555050*/
        v45 = v50; /*0x555055*/
        v50->members.super.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x55505f*/
        v45 = (NiNode *)((char *)v45 + 0x54); /*0x555068*/
        v45->members.super.super.super.m_uiRefCount = LODWORD(g_zeroNiPoint3.y); /*0x55506b*/
        v45->members.super.super.m_pcName = (const char *)LODWORD(g_zeroNiPoint3.z); /*0x555074*/
        qmemcpy(&v50->members.super.m_localTransform, v63, 0x24u); /*0x55508e*/
        (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a1 + 0x84))(*a1, v50, 0); /*0x555093*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a2 + 0x84))(*a2, v50, 0); /*0x5550a7*/
      }
    }
    else
    {
      qmemcpy(&v50->members.super.m_localTransform, v63, 0x24u); /*0x5550b7*/
      (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a1 + 0x84))(*a1, v50, 0); /*0x5550cf*/
    }
    v16 = v50; /*0x5550d1*/
    if ( v50 ) /*0x5550d7*/
    {
      v46 = v50; /*0x5550d9*/
      if ( !InterlockedDecrement((volatile LONG *)&v50->members) ) /*0x5550df*/
        v46->vtbl->super.super.super.Destructor((NiRefObject *)v46, 1); /*0x5550f5*/
      v16 = 0; /*0x5550f7*/
      v50 = 0; /*0x5550f9*/
    }
  }
  v47 = v51; /*0x5550fd*/
  if ( v51 ) /*0x555103*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v51 + 4)) ) /*0x555109*/
      (**(void (__thiscall ***)(int, int))v47)(v47, 1); /*0x55511b*/
    v16 = v50; /*0x55511d*/
    v47 = 0; /*0x555121*/
    v51 = 0; /*0x555123*/
  }
LABEL_132:
  LOBYTE(v64) = 5; /*0x55512d*/
  if ( v16 ) /*0x555134*/
  {
    v48 = v16; /*0x555136*/
    if ( !InterlockedDecrement((volatile LONG *)&v16->members) ) /*0x55513c*/
      v48->vtbl->super.super.super.Destructor((NiRefObject *)v48, 1); /*0x555152*/
  }
  LOBYTE(v64) = 4; /*0x555156*/
  if ( v47 ) /*0x55515b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v47 + 4)) ) /*0x555161*/
      (**(void (__thiscall ***)(int, int))v47)(v47, 1); /*0x555173*/
  }
  FormHeapFree(0); /*0x555176*/
  FormHeapFree(0); /*0x55517c*/
  FormHeapFree((unsigned int)v56.m_data); /*0x555186*/
  FormHeapFree((unsigned int)v57.m_data); /*0x555190*/
  FormHeapFree((unsigned int)ArgList.m_data); /*0x55519a*/
}
