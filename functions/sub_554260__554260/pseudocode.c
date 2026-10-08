// Build FaceGenHair geometry from the selected model, apply head EGM positions, then apply FaceGenRenderState::hairLength positions before materials and attachment. No normal regeneration occurs after either deformation.
void __cdecl BSFaceGen_BuildHairGeometryNodes(
        NiNode **bipedNode,
        NiNode **skinnedNode,
        const FaceGenRenderState *state,
        bool preferBipedGeometry)
{
  const FaceGenRenderState *v4; // esi
  const char *v5; // eax
  char *m_data; // edi
  char *v7; // ebp
  char *v8; // edi
  BSFaceGenModelMap *v9; // eax
  BSFaceGenModelMap *v10; // esi
  bool v11; // zf
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  Ni2DBuffer *v15; // esi
  BSFaceGenModel *v16; // eax
  Ni2DBuffer *v17; // eax
  NiNode *v18; // ecx
  const char *v19; // eax
  int *SourceTexture_010201A0; // eax
  const FaceGenRenderState *v21; // esi
  NiTexture *v22; // ebp
  FaceGenRenderState *v23; // eax
  NiTexturingProperty *v24; // esi
  NiNode *v25; // esi
  BSShaderProperty *v26; // eax
  NiNode *v27; // eax
  NiNode *v28; // esi
  NiNode *v29; // esi
  NiTexture *v30; // esi
  float hairLength; // [esp+10h] [ebp-80h]
  NiNode *v32; // [esp+28h] [ebp-68h] BYREF
  UInt32 v33; // [esp+2Ch] [ebp-64h] BYREF
  NiTexture *texture; // [esp+30h] [ebp-60h] BYREF
  BSFaceGenModelMap *v35; // [esp+34h] [ebp-5Ch]
  BSStringT ArgList; // [esp+38h] [ebp-58h] BYREF
  BSStringT v37; // [esp+40h] [ebp-50h] BYREF
  BSStringT v38; // [esp+48h] [ebp-48h] BYREF
  int v39; // [esp+50h] [ebp-40h]
  __int16 v40; // [esp+54h] [ebp-3Ch]
  __int16 v41; // [esp+56h] [ebp-3Ah]
  int v42; // [esp+58h] [ebp-38h]
  __int16 v43; // [esp+5Ch] [ebp-34h]
  __int16 v44; // [esp+5Eh] [ebp-32h]
  NiMatrix33 v45; // [esp+60h] [ebp-30h] BYREF
  int v46; // [esp+8Ch] [ebp-4h]

  ArgList.m_data = 0; /*0x554289*/
  ArgList.m_dataLen = 0; /*0x55428d*/
  ArgList.m_bufLen = 0; /*0x554292*/
  v46 = 0; /*0x554297*/
  v38.m_data = 0; /*0x55429b*/
  v38.m_dataLen = 0; /*0x55429f*/
  v38.m_bufLen = 0; /*0x5542a4*/
  v37.m_data = 0; /*0x5542a9*/
  v37.m_dataLen = 0; /*0x5542ad*/
  v37.m_bufLen = 0; /*0x5542b2*/
  v39 = 0; /*0x5542b7*/
  v40 = 0; /*0x5542bb*/
  v41 = 0; /*0x5542c0*/
  v42 = 0; /*0x5542c5*/
  v43 = 0; /*0x5542c9*/
  v44 = 0; /*0x5542ce*/
  texture = 0; /*0x5542d3*/
  v32 = 0; /*0x5542d7*/
  hairLength = flt_A3721C; /*0x5542e6*/
  LOBYTE(v46) = 6; /*0x5542e9*/
  NiMatrix33_InitRotationY(&v45, hairLength); /*0x5542ee*/
  v4 = state; /*0x5542f3*/
  if ( !state->hair ) /*0x5542fd*/
    goto LABEL_66; /*0x5542fd*/
  v5 = (const char *)(*(int (__thiscall **)(char *))(*((_DWORD *)state->hair + 9) + 0x14))((char *)state->hair + 0x24); /*0x55430e*/
  BSStringT_Static_Format(&ArgList, "Meshes\\%s", v5); /*0x55431b*/
  m_data = ArgList.m_data; /*0x554320*/
  v7 = sub_550010(&v37, ArgList.m_data); /*0x554335*/
  v8 = sub_54FEB0(&v38, m_data); /*0x55433f*/
  v33 = 0; /*0x554341*/
  LOBYTE(v46) = 7; /*0x554347*/
  if ( v8 ) /*0x55434c*/
  {
    if ( !g_faceGenManager ) /*0x554358*/
      FaceGenManager_EnsureInitialized(); /*0x554360*/
    if ( !*((_DWORD *)g_faceGenManager + 0x36B) ) /*0x55436a*/
    {
      v9 = (BSFaceGenModelMap *)FormHeapAlloc(0x20u); /*0x554378*/
      v35 = v9; /*0x554380*/
      LOBYTE(v46) = 8; /*0x554386*/
      if ( v9 ) /*0x55438b*/
        v10 = BSFaceGenModelMap::BSFaceGenModelMap(v9); /*0x554394*/
      else
        v10 = 0; /*0x554398*/
      v11 = g_faceGenManager == 0; /*0x55439a*/
      LOBYTE(v46) = 7; /*0x5543a0*/
      if ( v11 ) /*0x5543a5*/
        FaceGenManager_EnsureInitialized(); /*0x5543a7*/
      *((_DWORD *)g_faceGenManager + 0x36B) = v10; /*0x5543b2*/
      v12 = *((_DWORD *)g_faceGenManager + 0x36B); /*0x5543be*/
      *(_DWORD *)(v12 + 0x18) = dword_B120EC; /*0x5543ca*/
      sub_5506B0((char *)v12, 0); /*0x5543cd*/
      v13 = dword_B120F4; /*0x5543d8*/
      if ( !g_faceGenManager ) /*0x5543d2*/
        FaceGenManager_EnsureInitialized(); /*0x5543e0*/
      v14 = *((_DWORD *)g_faceGenManager + 0x36B); /*0x5543eb*/
      *(_DWORD *)(v14 + 0x1C) = v13; /*0x5543f2*/
      sub_5506B0((char *)v14, 0); /*0x5543f5*/
    }
    if ( !g_faceGenManager ) /*0x5543fa*/
      FaceGenManager_EnsureInitialized(); /*0x554402*/
    if ( sub_5515B0(*((char **)g_faceGenManager + 0x36B), (int)v8, (int *)&v33) ) /*0x554418*/
    {
      v15 = (Ni2DBuffer *)v33; /*0x554421*/
      if ( !*(_DWORD *)(v33 + 8) ) /*0x554425*/
        sub_559B50((_DWORD *)v33, v8, ArgList.m_data, v7, 0, 1); /*0x554436*/
      LOBYTE(v46) = 6; /*0x55443f*/
      if ( InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x554444*/
        goto LABEL_36; /*0x55444c*/
    }
    else
    {
      v16 = (BSFaceGenModel *)FormHeapAlloc(0x1Cu); /*0x554463*/
      v35 = v16; /*0x55446b*/
      LOBYTE(v46) = 9; /*0x554471*/
      if ( v16 ) /*0x554476*/
        v17 = (Ni2DBuffer *)BSFaceGenModel::BSFaceGenModel(v16); /*0x55447a*/
      else
        v17 = 0; /*0x554481*/
      LOBYTE(v46) = 7; /*0x554488*/
      NiSmartPointer_Set__((Ni2DBuffer **)&v33, v17); /*0x55448d*/
      v15 = (Ni2DBuffer *)v33; /*0x554496*/
      if ( sub_559B50((_DWORD *)v33, v8, ArgList.m_data, v7, 0, 1) ) /*0x5544a2*/
      {
        if ( !g_faceGenManager ) /*0x5544ab*/
          FaceGenManager_EnsureInitialized(); /*0x5544b3*/
        sub_551450(*((char **)g_faceGenManager + 0x36B), (int)v8, v15); /*0x5544c6*/
      }
      else if ( v15 ) /*0x5544cf*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x5544d5*/
          (*(void (__thiscall **)(Ni2DBuffer *, int))v15->__vftable)(v15, 1); /*0x5544e7*/
        v15 = 0; /*0x5544e9*/
      }
      LOBYTE(v46) = 6; /*0x5544ed*/
      if ( !v15 ) /*0x5544f2*/
        goto LABEL_37; /*0x5544f2*/
      if ( InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x5544f8*/
      {
LABEL_36:
        BSFaceGenModel_CreateMorphedGeometry(v15, &state->parameters, (NiGeometry **)&v32);// Create FaceGenHair by cloning the model and applying both EGM position banks. CreateMorphedGeometry does not regenerate normals. /*0x55450c*/
LABEL_37:
        v4 = state; /*0x554520*/
        goto LABEL_38; /*0x554520*/
      }
    }
    (*(void (__thiscall **)(Ni2DBuffer *, int))v15->__vftable)(v15, 1); /*0x55450a*/
    goto LABEL_36; /*0x55450a*/
  }
  LOBYTE(v46) = 6; /*0x55434e*/
LABEL_38:
  v18 = v32; /*0x554527*/
  if ( v32 ) /*0x55452d*/
  {
    NiObjectNET_SetName((NiObjectNET *)v32, "FaceGenHair"); /*0x554538*/
    BSFaceGen_ApplyHairLengthMorph((NiGeometry *)v32, v4->hairLength);// Apply the hair-length vertex morph after the EGM morph. The builder proceeds directly to materials and node attachment; no normal regeneration follows. /*0x554549*/
    v19 = *((const char **)v4->hair + 0x10); /*0x554554*/
    if ( !v19 ) /*0x55455c*/
      v19 = EmptyString; /*0x55455e*/
    BSStringT_Static_Format(&ArgList, "Textures\\%s", v19); /*0x55456e*/
    SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0( /*0x55458b*/
                                      (NiSourceTexture **)&state,
                                      ArgList.m_data,
                                      0,
                                      0);
    LOBYTE(v46) = 0xA; /*0x554595*/
    OB_NiSmartPointer_Assign_010201A0((int *)&texture, SourceTexture_010201A0); /*0x55459a*/
    LOBYTE(v46) = 6; /*0x5545a8*/
    if ( state ) /*0x5545ad*/
    {
      v21 = state; /*0x5545af*/
      if ( !InterlockedDecrement((volatile LONG *)&state->parameters.matrices[0].columns) ) /*0x5545b5*/
        (*(void (__thiscall **)(const FaceGenRenderState *, int))v21->parameters.matrices[0].rows)(v21, 1); /*0x5545cb*/
    }
    v22 = texture; /*0x5545cd*/
    if ( texture ) /*0x5545d3*/
    {
      v23 = (FaceGenRenderState *)FormHeapAlloc(0x30u); /*0x5545d7*/
      state = v23; /*0x5545df*/
      LOBYTE(v46) = 0xB; /*0x5545e8*/
      if ( v23 ) /*0x5545ed*/
        v24 = NiTexturingProperty::NiTexturingProperty((NiTexturingProperty *)v23); /*0x5545f6*/
      else
        v24 = 0; /*0x5545fa*/
      LOBYTE(v46) = 6; /*0x5545ff*/
      OB_NiTexturingProperty_SetBaseTexture_010201A0(v24, v22); /*0x554604*/
      OB_NiTexturingProperty_SetClampMode_010201A0(v24, 3); /*0x55460d*/
      NiTexturingProperty_SetBaseMapFilterMode(v24, 2); /*0x554616*/
      if ( NiNode_GetNiPropertyByID(v32, 6) ) /*0x554621*/
      {
        sub_708560((int ***)v32, (volatile LONG **)&state, 6); /*0x554638*/
        NiPointerSlot_Release((void **)&state); /*0x554644*/
      }
      sub_405680(v32, (BSShaderProperty *)v24); /*0x55464e*/
    }
    if ( !NiNode_GetNiPropertyByID(v32, 0) ) /*0x554658*/
    {
      v25 = v32; /*0x554661*/
      v26 = (BSShaderProperty *)sub_550550(); /*0x554665*/
      sub_405680(v25, v26); /*0x55466d*/
    }
    if ( *(_DWORD *)&v32->members.children.numObjs ) /*0x554676*/
    {
      if ( preferBipedGeometry ) /*0x554686*/
      {
        sub_478350(v32, 0); /*0x55468a*/
        v27 = v32; /*0x55468f*/
        v32->members.super.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x554699*/
        v27 = (NiNode *)((char *)v27 + 0x54); /*0x5546a2*/
        v27->members.super.super.super.m_uiRefCount = LODWORD(g_zeroNiPoint3.y); /*0x5546a5*/
        v27->members.super.super.m_pcName = (const char *)LODWORD(g_zeroNiPoint3.z); /*0x5546ae*/
        qmemcpy(&v32->members.super.m_localTransform, &v45, 0x24u); /*0x5546c8*/
        ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))(*bipedNode)->vtbl->AddObject)(*bipedNode, v32, 0); /*0x5546cd*/
      }
      else
      {
        ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))(*skinnedNode)->vtbl->AddObject)(*skinnedNode, v32, 0); /*0x5546e1*/
      }
    }
    else
    {
      qmemcpy(&v32->members.super.m_localTransform, &v45, 0x24u); /*0x5546f1*/
      ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))(*bipedNode)->vtbl->AddObject)(*bipedNode, v32, 0); /*0x554709*/
    }
    v18 = v32; /*0x55470b*/
    if ( v32 ) /*0x554711*/
    {
      v28 = v32; /*0x554713*/
      if ( !InterlockedDecrement((volatile LONG *)&v32->members) ) /*0x554719*/
        v28->vtbl->super.super.super.Destructor((NiRefObject *)v28, 1); /*0x55472f*/
      v18 = 0; /*0x554731*/
      v32 = 0; /*0x554733*/
    }
    if ( v22 ) /*0x554739*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v22->members) ) /*0x55473f*/
        v22->__vftable->super.super.Destructor((NiRefObject *)v22, 1); /*0x554752*/
      texture = 0; /*0x554754*/
LABEL_66:
      v18 = v32; /*0x554758*/
    }
  }
  LOBYTE(v46) = 5; /*0x55475c*/
  if ( v18 ) /*0x554763*/
  {
    v29 = v18; /*0x554765*/
    if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x55476b*/
      v29->vtbl->super.super.super.Destructor((NiRefObject *)v29, 1); /*0x554781*/
  }
  v30 = texture; /*0x554783*/
  LOBYTE(v46) = 4; /*0x554789*/
  if ( texture ) /*0x55478e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&texture->members) ) /*0x554794*/
      v30->__vftable->super.super.Destructor((NiRefObject *)v30, 1); /*0x5547a6*/
  }
  FormHeapFree(0); /*0x5547a9*/
  FormHeapFree(0); /*0x5547af*/
  FormHeapFree((unsigned int)v37.m_data); /*0x5547b9*/
  FormHeapFree((unsigned int)v38.m_data); /*0x5547c3*/
  FormHeapFree((unsigned int)ArgList.m_data); /*0x5547cd*/
}
