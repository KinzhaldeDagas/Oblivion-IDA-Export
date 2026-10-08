// Build nine Oblivion head-part slots. Slots are Face, sex-specific Ears alternatives, Mouth, TeethLower, TeethUpper, Tongue, EyeLeft, EyeRight. After morphing/attachment, bFixFaceNormals copies nearest normalized normals from FaceGenFace to the active FaceGenEars geometry with the fixed 0.10-unit radius, then hair and race tint are added.
void __cdecl BSFaceGen_BuildHeadGeometryNodes(
        NiNode **bipedNode,
        NiNode **skinnedNode,
        const FaceGenRenderState *state,
        bool preferBipedGeometry)
{
  char *m_data; // esi
  unsigned int partIndex; // ebp
  bool v6; // zf
  void **v7; // eax
  const char **v8; // ecx
  void **data; // edx
  void *v10; // eax
  unsigned __int16 v11; // dx
  const char *v13; // eax
  const FaceGenRenderState *v14; // edi
  char *v15; // eax
  char *v16; // ebp
  char *v17; // edi
  BSFaceGenModelMap *v18; // eax
  BSFaceGenModelMap *v19; // esi
  int v20; // ecx
  int v21; // esi
  int v22; // ecx
  Ni2DBuffer *v23; // esi
  BSFaceGenModel *v24; // eax
  Ni2DBuffer *v25; // eax
  const char *v26; // eax
  int *SourceTexture_010201A0; // eax
  NiRenderedTexture *v28; // edi
  NiTexturingProperty *v29; // eax
  NiTexturingProperty *v30; // esi
  NiNode *v31; // esi
  BSShaderProperty *v32; // eax
  NiObjectNET *NiPropertyByID; // eax
  NiMaterialProperty *v34; // eax
  NiObjectNET *v35; // esi
  NiNode *v36; // eax
  NiNode *v37; // esi
  Ni2DBuffer *v38; // esi
  char *v39; // [esp-4h] [ebp-ACh]
  char *maxDistance; // [esp+0h] [ebp-A8h]
  float v41; // [esp+8h] [ebp-A0h]
  NiNode *v42; // [esp+20h] [ebp-88h] BYREF
  unsigned int nextPartIndex; // [esp+24h] [ebp-84h]
  Ni2DBuffer *v44; // [esp+28h] [ebp-80h] BYREF
  Ni2DBuffer *v45; // [esp+2Ch] [ebp-7Ch] BYREF
  NiGeometry *faceGeometry; // [esp+30h] [ebp-78h]
  NiGeometry *earGeometry; // [esp+34h] [ebp-74h]
  UInt32 v48; // [esp+38h] [ebp-70h] BYREF
  volatile LONG *v49; // [esp+3Ch] [ebp-6Ch] BYREF
  volatile LONG *v50; // [esp+40h] [ebp-68h] BYREF
  void *v51; // [esp+44h] [ebp-64h]
  BSStringT v52; // [esp+48h] [ebp-60h] BYREF
  BSStringT v53; // [esp+50h] [ebp-58h] BYREF
  BSStringT v54; // [esp+58h] [ebp-50h] BYREF
  BSStringT v55; // [esp+60h] [ebp-48h] BYREF
  BSStringT v56; // [esp+68h] [ebp-40h] BYREF
  int v57; // [esp+70h] [ebp-38h]
  __int16 v58; // [esp+74h] [ebp-34h]
  __int16 v59; // [esp+76h] [ebp-32h]
  float v60[9]; // [esp+78h] [ebp-30h] BYREF
  unsigned int v61; // [esp+A4h] [ebp-4h]

  v44 = 0; /*0x555aac*/
  v45 = 0; /*0x555ab0*/
  v61 = 0; /*0x555ab4*/
  v42 = 0; /*0x555abb*/
  m_data = 0; /*0x555abf*/
  faceGeometry = 0; /*0x555ac1*/
  earGeometry = 0; /*0x555ac5*/
  v52.m_data = 0; /*0x555ac9*/
  v52.m_dataLen = 0; /*0x555acd*/
  v52.m_bufLen = 0; /*0x555ad2*/
  v54.m_data = 0; /*0x555ad7*/
  v54.m_dataLen = 0; /*0x555adb*/
  v54.m_bufLen = 0; /*0x555ae0*/
  v53.m_data = 0; /*0x555ae5*/
  v53.m_dataLen = 0; /*0x555ae9*/
  v53.m_bufLen = 0; /*0x555aee*/
  v56.m_data = 0; /*0x555af3*/
  v56.m_dataLen = 0; /*0x555af7*/
  v56.m_bufLen = 0; /*0x555afc*/
  v57 = 0; /*0x555b01*/
  v58 = 0; /*0x555b05*/
  v59 = 0; /*0x555b0a*/
  v55.m_data = 0; /*0x555b0f*/
  v55.m_dataLen = 0; /*0x555b13*/
  v55.m_bufLen = 0; /*0x555b18*/
  v41 = flt_A3721C; /*0x555b28*/
  LOBYTE(v61) = 7; /*0x555b2b*/
  NiMatrix33_InitRotationY(v60, v41); /*0x555b33*/
  partIndex = 0; /*0x555b38*/
  nextPartIndex = 0; /*0x555b3a*/
  do
  {                                             // Slot 2 is the female FaceGenEars model; skip it for male render states.
    if ( partIndex == 2 ) /*0x555b43*/
    {
      v6 = state->isFemale == 0; /*0x555b4c*/
    }
    else
    {
      if ( partIndex != 1 ) /*0x555b54*/
        goto LABEL_7; /*0x555b54*/
      v6 = state->isFemale == 1;                // Slot 1 is the male FaceGenEars model; skip it for female render states. /*0x555b5d*/
    }
    if ( v6 ) /*0x555b60*/
      goto LABEL_98; /*0x555b60*/
LABEL_7:
    if ( !state->headModels.firstFree ) /*0x555b6d*/
      goto LABEL_98; /*0x555b6d*/
    v7 = &state->headModels.data[partIndex]; /*0x555b7f*/
    if ( !*v7 ) /*0x555b7c*/
      goto LABEL_98; /*0x555b7c*/
    v8 = (const char **)*v7; /*0x555b88*/
    LOWORD(v7) = *((_WORD *)*v7 + 4); /*0x555b8a*/
    v7 = (_WORD)v7 == 0xFFFF ? (void **)strlen(v8[1]) : (void **)(unsigned __int16)v7;
    if ( !v7 ) /*0x555bb2*/
      goto LABEL_98; /*0x555bb2*/
    if ( !state->headTextures.firstFree ) /*0x555bbf*/
      goto LABEL_98; /*0x555bbf*/
    data = state->headTextures.data; /*0x555bce*/
    if ( !data[partIndex] ) /*0x555bd4*/
      goto LABEL_98; /*0x555bd4*/
    v10 = data[partIndex]; /*0x555be0*/
    v11 = *((_WORD *)v10 + 4); /*0x555be2*/
    if ( !(v11 == 0xFFFF ? strlen(*((const char **)v10 + 1)) : v11) )
      goto LABEL_98; /*0x555c05*/
    v13 = (const char *)(*((int (__thiscall **)(const char **))*v8 + 5))(v8); /*0x555c10*/
    BSStringT_Static_Format(&v52, "Meshes\\%s", v13); /*0x555c1d*/
    v14 = state; /*0x555c22*/
    if ( !state->renderFlags && !partIndex ) /*0x555c36*/
    {
      m_data = v52.m_data; /*0x555c38*/
      sub_551B40(&v55, v52.m_data); /*0x555c42*/
      if ( !sub_42BDE0(v55.m_data, 0, 0, 0xFFFFFFFF) ) /*0x555c5a*/
        goto LABEL_24; /*0x555c5a*/
      sub_551B40(&v52, m_data); /*0x555c62*/
    }
    m_data = v52.m_data; /*0x555c75*/
LABEL_24:
    switch ( partIndex ) /*0x555c79*/
    {
      case 0u: /*0x555c79*/
      case 1u: /*0x555c79*/
      case 2u: /*0x555c79*/
        maxDistance = sub_5500C0(&v56, m_data); /*0x555c91*/
        v39 = sub_550010(&v53, m_data); /*0x555ca0*/
        v15 = sub_54FEB0(&v54, m_data); /*0x555ca8*/
        v44 = sub_553620(v15, m_data, v39, maxDistance, 1, 0);// Primary head-part slots 0-2 use the direct model-loading path. /*0x555cb9*/
        goto LABEL_62; /*0x555cbd*/
      case 3u: /*0x555c79*/
      case 4u: /*0x555c79*/
      case 5u: /*0x555c79*/
      case 6u: /*0x555c79*/
        v16 = sub_550010(&v53, m_data); /*0x555cd3*/
        v17 = sub_54FEB0(&v54, m_data); /*0x555cdd*/
        v44 = 0; /*0x555cdf*/
        LOBYTE(v61) = 8; /*0x555ce5*/
        if ( !v17 ) /*0x555ced*/
        {
          partIndex = nextPartIndex; /*0x555cef*/
          LOBYTE(v61) = 7; /*0x555cf3*/
          v44 = 0; /*0x555cfb*/
          break; /*0x555cff*/
        }
        if ( !g_faceGenManager ) /*0x555d04*/
          FaceGenManager_EnsureInitialized(); /*0x555d0c*/
        if ( !*((_DWORD *)g_faceGenManager + 0x36B) ) /*0x555d16*/
        {
          v18 = (BSFaceGenModelMap *)FormHeapAlloc(0x20u); /*0x555d24*/
          v51 = v18; /*0x555d2c*/
          LOBYTE(v61) = 9; /*0x555d32*/
          if ( v18 ) /*0x555d3a*/
            v19 = BSFaceGenModelMap::BSFaceGenModelMap(v18); /*0x555d43*/
          else
            v19 = 0; /*0x555d47*/
          v6 = g_faceGenManager == 0; /*0x555d49*/
          LOBYTE(v61) = 8; /*0x555d4f*/
          if ( v6 ) /*0x555d57*/
            FaceGenManager_EnsureInitialized(); /*0x555d59*/
          *((_DWORD *)g_faceGenManager + 0x36B) = v19; /*0x555d64*/
          v20 = *((_DWORD *)g_faceGenManager + 0x36B); /*0x555d70*/
          *(_DWORD *)(v20 + 0x18) = dword_B120EC; /*0x555d7c*/
          sub_5506B0((char *)v20, 0); /*0x555d7f*/
          v21 = dword_B120F4; /*0x555d8a*/
          if ( !g_faceGenManager ) /*0x555d84*/
            FaceGenManager_EnsureInitialized(); /*0x555d92*/
          v22 = *((_DWORD *)g_faceGenManager + 0x36B); /*0x555d9d*/
          *(_DWORD *)(v22 + 0x1C) = v21; /*0x555da4*/
          sub_5506B0((char *)v22, 0); /*0x555da7*/
        }
        if ( !g_faceGenManager ) /*0x555dac*/
          FaceGenManager_EnsureInitialized(); /*0x555db4*/
        if ( sub_5515B0(*((char **)g_faceGenManager + 0x36B), (int)v17, (int *)&v44) )// Secondary parts use the shared BSFaceGenModel cache. /*0x555dca*/
        {
          v23 = v44; /*0x555dd3*/
          if ( !v44->members.width ) /*0x555dd7*/
            sub_559B50(v44, v17, v52.m_data, v16, 0, 0); /*0x555de7*/
          LOBYTE(v61) = 7; /*0x555df0*/
          if ( !InterlockedDecrement((volatile LONG *)&v23->members) ) /*0x555df8*/
            goto LABEL_59; /*0x555e00*/
        }
        else
        {
          v24 = (BSFaceGenModel *)FormHeapAlloc(0x1Cu); /*0x555e17*/
          v51 = v24; /*0x555e1f*/
          LOBYTE(v61) = 0xA; /*0x555e25*/
          if ( v24 ) /*0x555e2d*/
            v25 = (Ni2DBuffer *)BSFaceGenModel::BSFaceGenModel(v24); /*0x555e31*/
          else
            v25 = 0; /*0x555e38*/
          LOBYTE(v61) = 8; /*0x555e3f*/
          NiSmartPointer_Set__(&v44, v25); /*0x555e47*/
          v23 = v44; /*0x555e50*/
          if ( sub_559B50(v44, v17, v52.m_data, v16, 0, 0) )// Load/initialize the cached BSFaceGenModel used for this head part. /*0x555e5b*/
          {
            if ( !g_faceGenManager ) /*0x555e64*/
              FaceGenManager_EnsureInitialized(); /*0x555e6c*/
            sub_551450(*((char **)g_faceGenManager + 0x36B), (int)v17, v23); /*0x555e7f*/
          }
          else if ( v23 ) /*0x555e88*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v23->members) ) /*0x555e8e*/
              (*(void (__thiscall **)(Ni2DBuffer *, int))v23->__vftable)(v23, 1); /*0x555ea0*/
            v23 = 0; /*0x555ea2*/
          }
          LOBYTE(v61) = 7; /*0x555ea6*/
          if ( v23 && !InterlockedDecrement((volatile LONG *)&v23->members) ) /*0x555eb4*/
LABEL_59:
            (*(void (__thiscall **)(Ni2DBuffer *, int))v23->__vftable)(v23, 1); /*0x555ebe*/
        }
        v14 = state; /*0x555ec8*/
        partIndex = nextPartIndex; /*0x555ecf*/
        v44 = v23; /*0x555ed3*/
LABEL_61:
        m_data = v52.m_data; /*0x555ed7*/
LABEL_62:
        if ( !v44 || !BSFaceGenModel_CreateMorphedGeometry(v44, &v14->parameters, (NiGeometry **)&v42) || !v42 ) /*0x555f00*/
          break;                                // Common clone/EGM deformation path for every active head-part slot: Face, Ears, Mouth, TeethLower, TeethUpper, Tongue, EyeLeft, and EyeRight. No per-part normal regeneration follows. /*0x555f00*/
        NiObjectNET_SetName((NiObjectNET *)v42, (char *)v14->nodeNames.data[partIndex]); /*0x555f10*/
        if ( partIndex ) /*0x555f17*/
        {
          if ( partIndex == 1 || partIndex == 2 ) /*0x555f2b*/
            earGeometry = (NiGeometry *)v42;    // Capture the one active sex-specific FaceGenEars geometry as the normal-stitch target. /*0x555f31*/
        }
        else
        {
          faceGeometry = (NiGeometry *)v42;     // Capture the generated slot-0 FaceGenFace geometry as the normal-stitch source. /*0x555f1d*/
        }
        v26 = *((const char **)v14->headTextures.data[partIndex] + 1); /*0x555f3e*/
        if ( !v26 ) /*0x555f43*/
          v26 = EmptyString; /*0x555f45*/
        BSStringT_Static_Format(&v52, "Textures\\%s", v26); /*0x555f55*/
        m_data = v52.m_data; /*0x555f5a*/
        SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0(&v48, v52.m_data, 0, 0); /*0x555f6f*/
        LOBYTE(v61) = 0xB; /*0x555f79*/
        OB_NiSmartPointer_Assign_010201A0((int *)&v45, SourceTexture_010201A0); /*0x555f81*/
        LOBYTE(v61) = 7; /*0x555f8a*/
        NiPointerSlot_Release((NiD3DVertexShader *)&v48); /*0x555f92*/
        v28 = (NiRenderedTexture *)v45; /*0x555f97*/
        if ( v45 ) /*0x555f9d*/
        {
          v29 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x555fa1*/
          v51 = v29; /*0x555fa9*/
          LOBYTE(v61) = 0xC; /*0x555faf*/
          if ( v29 ) /*0x555fb7*/
            v30 = NiTexturingProperty::NiTexturingProperty(v29); /*0x555fc0*/
          else
            v30 = 0; /*0x555fc4*/
          LOBYTE(v61) = 7; /*0x555fc9*/
          OB_NiTexturingProperty_SetBaseTexture_010201A0(v30, v28); /*0x555fd1*/
          if ( NiNode_GetNiPropertyByID(v42, 6) ) /*0x555fdc*/
          {
            sub_708560((int ***)v42, &v49, 6); /*0x555ff0*/
            NiPointerSlot_Release((NiD3DVertexShader *)&v49); /*0x555ff9*/
          }
          sub_405680(v42, (BSShaderProperty *)v30); /*0x556003*/
          m_data = v52.m_data; /*0x556008*/
          partIndex = nextPartIndex; /*0x55600c*/
        }
        if ( partIndex == 5 || partIndex == 4 ) /*0x556018*/
        {
          if ( NiNode_GetNiPropertyByID(v42, 0) ) /*0x55601f*/
          {
            sub_708560((int ***)v42, &v50, 0); /*0x556032*/
            NiPointerSlot_Release((NiD3DVertexShader *)&v50); /*0x55603b*/
          }
          v31 = v42; /*0x556040*/
          v32 = (BSShaderProperty *)sub_550550(); /*0x556044*/
          sub_405680(v31, v32); /*0x55604c*/
          m_data = v52.m_data; /*0x556051*/
          partIndex = nextPartIndex; /*0x556055*/
        }
        if ( partIndex <= 2 ) /*0x55605b*/
        {
          NiPropertyByID = (NiObjectNET *)NiNode_GetNiPropertyByID(v42, 2); /*0x55606d*/
          if ( NiPropertyByID ) /*0x556074*/
          {
            NiObjectNET_SetName(NiPropertyByID, "skin"); /*0x55607d*/
          }
          else
          {
            v34 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x556086*/
            v51 = v34; /*0x55608e*/
            LOBYTE(v61) = 0xD; /*0x556094*/
            if ( v34 ) /*0x55609c*/
              v35 = (NiObjectNET *)NiMaterialProperty::NiMaterialProperty(v34); /*0x5560a5*/
            else
              v35 = 0; /*0x5560a9*/
            LOBYTE(v61) = 7; /*0x5560b2*/
            NiObjectNET_SetName(v35, "skin"); /*0x5560ba*/
            sub_405680(v42, (BSShaderProperty *)v35); /*0x5560c4*/
            m_data = v52.m_data; /*0x5560c9*/
            partIndex = nextPartIndex; /*0x5560cd*/
          }
        }
        if ( *(_DWORD *)&v42->members.children.numObjs ) /*0x5560d5*/
        {
          if ( !preferBipedGeometry ) /*0x5560e5*/
          {
            ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))(*skinnedNode)->vtbl->AddObject)(*skinnedNode, v42, 0); /*0x55614f*/
            goto LABEL_97; /*0x556151*/
          }
          sub_478350(v42, 0); /*0x5560e9*/
          v36 = v42; /*0x5560ee*/
          v42->members.super.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x5560f8*/
          v36 = (NiNode *)((char *)v36 + 0x54); /*0x556101*/
          v36->members.super.super.super.m_uiRefCount = LODWORD(g_zeroNiPoint3.y); /*0x556104*/
          v36->members.super.super.m_pcName = (const char *)LODWORD(g_zeroNiPoint3.z); /*0x556114*/
          qmemcpy(&v42->members.super.m_localTransform, v60, 0x24u); /*0x556127*/
          ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))(*bipedNode)->vtbl->AddObject)(*bipedNode, v42, 0); /*0x556139*/
        }
        else
        {
          qmemcpy(&v42->members.super.m_localTransform, v60, 0x24u); /*0x55615f*/
          ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))(*bipedNode)->vtbl->AddObject)(*bipedNode, v42, 0); /*0x556177*/
        }
        m_data = v52.m_data; /*0x556179*/
        partIndex = nextPartIndex; /*0x55617d*/
LABEL_97:
        v44 = 0; /*0x556181*/
        NiSmartPointer_Set__(&v45, 0); /*0x55618a*/
        NiSmartPointer_Set__((Ni2DBuffer **)&v42, 0); /*0x556194*/
        break; /*0x556194*/
      default:
        goto LABEL_61;                          // Dispatch the current one of nine Oblivion head-part slots. This address is ordinary control flow inside the function, not a function boundary.
    }
LABEL_98:
    nextPartIndex = ++partIndex; /*0x55619f*/
  }
  while ( partIndex < 9 );
  if ( bFixFaceNormals )                        // Optional seam correction is gated by the INI setting bFixFaceNormals:General (default false in the executable). /*0x5561a9*/
  {
    if ( faceGeometry ) /*0x5561b7*/
    {
      if ( earGeometry ) /*0x5561bf*/
        NiGeometry_CopyNearestVertexNormals(faceGeometry, earGeometry, kFaceEarNormalMatchRadius, 0, 0);// Native face seam repair: copy normalized nearest normals FaceGenFace -> active FaceGenEars at a fixed 0.10-unit radius. This is the sole head-builder call site. /*0x5561cf*/
    }
  }
  if ( state->hair ) /*0x5561de*/
    BSFaceGen_BuildHairGeometryNodes(bipedNode, skinnedNode, state, preferBipedGeometry);// Attach the selected hair after all generated facial geometries have been built. /*0x5561fc*/
  if ( state->raceFaceTextureData ) /*0x556204*/
  {
    if ( state->raceFaceTintData ) /*0x55620c*/
      sub_5547F0(bipedNode, skinnedNode, &state->parameters, preferBipedGeometry);// Apply race texture/tint inputs from the completed FaceGenRenderState. /*0x55622d*/
  }
  FormHeapFree((unsigned int)v55.m_data); /*0x55623a*/
  FormHeapFree(0); /*0x556240*/
  FormHeapFree((unsigned int)v56.m_data); /*0x55624a*/
  FormHeapFree((unsigned int)v53.m_data); /*0x556254*/
  FormHeapFree((unsigned int)v54.m_data); /*0x55625e*/
  FormHeapFree((unsigned int)m_data); /*0x556264*/
  LOBYTE(v61) = 0; /*0x556272*/
  if ( v42 ) /*0x556279*/
  {
    v37 = v42; /*0x55627b*/
    if ( !InterlockedDecrement((volatile LONG *)&v42->members) ) /*0x556281*/
      v37->vtbl->super.super.super.Destructor((NiRefObject *)v37, 1); /*0x556297*/
  }
  v38 = v45; /*0x556299*/
  v61 = 0xFFFFFFFF; /*0x55629f*/
  if ( v45 ) /*0x5562aa*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v45->members) ) /*0x5562b0*/
      (*(void (__thiscall **)(Ni2DBuffer *, int))v38->__vftable)(v38, 1); /*0x5562c2*/
  }
}
