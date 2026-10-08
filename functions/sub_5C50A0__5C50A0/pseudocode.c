char __thiscall sub_5C50A0(_DWORD *this, char arg0)
{
  PlayerCharacter *v3; // ecx
  void (__thiscall *Unk_4C)(TESObjectREFR *); // edx
  tListHair *p_hairs; // esi
  unsigned int v7; // ebp
  TESHair *data; // esi
  char *v9; // eax
  char *v10; // eax
  char *v11; // edx
  Tile *ControlTile; // eax
  char *v13; // eax
  char *v14; // eax
  char *v15; // edx
  Tile *v16; // eax
  unsigned int v17; // ebp
  int v18; // eax
  const char **v19; // eax
  int v20; // eax
  int v21; // ebp
  char *v22; // ecx
  TESNPC *v23; // edi
  const char *v24; // eax
  char *m_data; // esi
  char *v26; // eax
  Ni2DBuffer *v27; // esi
  const char *v28; // eax
  int *SourceTexture_010201A0; // eax
  void (__thiscall ***v30)(_DWORD, int); // esi
  NiRenderedTexture *v31; // edi
  NiTexturingProperty *v32; // eax
  NiTexturingProperty *v33; // esi
  NiNode *v34; // esi
  BSShaderProperty *v35; // eax
  int v36; // eax
  void (__thiscall ***v37)(_DWORD, int); // esi
  int v38; // eax
  int v39; // eax
  NiAVObject *v40; // eax
  NiNode *v41; // esi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v43; // esi
  BOOL v44; // eax
  float *v45; // eax
  int v46; // ecx
  double v47; // st6
  BOOL v48; // eax
  float *v49; // eax
  int v50; // ecx
  double v51; // st6
  NiNode *v52; // eax
  NiAVObject *v53; // eax
  TESNPC *v54; // edi
  NiProperty *v55; // eax
  NiProperty *v56; // esi
  BOOL v57; // eax
  float *v58; // eax
  int v59; // ecx
  double v60; // st6
  BOOL v61; // eax
  float *v62; // eax
  int v63; // ecx
  double v64; // st6
  NiAVObject *v65; // eax
  LONG (__stdcall *v66)(volatile LONG *); // edi
  NiNode *v67; // esi
  void (__thiscall ***v68)(_DWORD, int); // esi
  void (__thiscall ***v69)(_DWORD, int); // esi
  BSStringT v70; // [esp+4h] [ebp-10Ch] BYREF
  BSStringT v71; // [esp+Ch] [ebp-104h] BYREF
  int a2; // [esp+14h] [ebp-FCh]
  int hairLength; // [esp+18h] [ebp-F8h]
  int hairLength_low; // [esp+30h] [ebp-E0h] BYREF
  TESNPC *v75; // [esp+34h] [ebp-DCh]
  NiNode *v76; // [esp+38h] [ebp-D8h] BYREF
  BSStringT v77; // [esp+3Ch] [ebp-D4h] BYREF
  BSStringT v78; // [esp+44h] [ebp-CCh] BYREF
  float v79; // [esp+4Ch] [ebp-C4h]
  float v80; // [esp+50h] [ebp-C0h]
  float v81; // [esp+54h] [ebp-BCh]
  float v82; // [esp+58h] [ebp-B8h]
  int v83; // [esp+5Ch] [ebp-B4h] BYREF
  BSStringT ArgList; // [esp+60h] [ebp-B0h] BYREF
  int v85; // [esp+68h] [ebp-A8h] BYREF
  BSStringT *v86; // [esp+6Ch] [ebp-A4h]
  int v87; // [esp+70h] [ebp-A0h]
  __int16 v88; // [esp+74h] [ebp-9Ch]
  __int16 v89; // [esp+76h] [ebp-9Ah]
  int v90; // [esp+78h] [ebp-98h]
  __int16 v91; // [esp+7Ch] [ebp-94h]
  __int16 v92; // [esp+7Eh] [ebp-92h]
  float v93[9]; // [esp+80h] [ebp-90h] BYREF
  unsigned int a1[24]; // [esp+A4h] [ebp-6Ch] BYREF
  unsigned int v95; // [esp+10Ch] [ebp-4h]

  v75 = (TESNPC *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c50e1*/
  v83 = 0; /*0x5c50e5*/
  v95 = 0; /*0x5c50e9*/
  v85 = 0; /*0x5c50f0*/
  v76 = 0; /*0x5c50f4*/
  ArgList.m_data = 0; /*0x5c50f8*/
  ArgList.m_dataLen = 0; /*0x5c50fc*/
  ArgList.m_bufLen = 0; /*0x5c5101*/
  v78.m_data = 0; /*0x5c5106*/
  *(_DWORD *)&v78.m_dataLen = 0; /*0x5c510a*/
  v77.m_data = 0; /*0x5c5114*/
  *(_DWORD *)&v77.m_dataLen = 0; /*0x5c5118*/
  v90 = 0; /*0x5c5122*/
  v91 = 0; /*0x5c5126*/
  v92 = 0; /*0x5c512b*/
  v87 = 0; /*0x5c5130*/
  v88 = 0; /*0x5c5134*/
  v89 = 0; /*0x5c5139*/
  v3 = reference; /*0x5c513e*/
  Unk_4C = reference->vtbl->super.super.super.Unk_4C; /*0x5c5146*/
  LOBYTE(v95) = 7; /*0x5c514d*/
  if ( !((int (__thiscall *)(PlayerCharacter *, _DWORD))Unk_4C)(v3, 0) ) /*0x5c5155*/
  {
LABEL_2:
    FormHeapFree(0); /*0x5c515b*/
    FormHeapFree(0); /*0x5c5162*/
    FormHeapFree((unsigned int)v77.m_data); /*0x5c516c*/
    v77.m_data = 0; /*0x5c5176*/
    *(_DWORD *)&v77.m_dataLen = 0; /*0x5c517f*/
    FormHeapFree((unsigned int)v78.m_data); /*0x5c5184*/
    v78.m_data = 0; /*0x5c518a*/
    *(_DWORD *)&v78.m_dataLen = 0; /*0x5c5193*/
    FormHeapFree(0); /*0x5c5198*/
    LOBYTE(v95) = 1; /*0x5c51a6*/
    return 0; /*0x5c51ce*/
  }
  if ( arg0 ) /*0x5c51da*/
  {
    p_hairs = &v75->member.form.race->hairs; /*0x5c51ea*/
    v7 = 0xFFFFFFFF; /*0x5c51f0*/
    if ( v75->member.form.race == (TESRace *)0xFFFFFF74 ) /*0x5c51f5*/
      goto LABEL_2; /*0x5c51f5*/
    while ( v7 != *(this + 0x21C) ) /*0x5c5206*/
    {
      if ( p_hairs ) /*0x5c520a*/
      {
        if ( p_hairs->node.data ) /*0x5c520c*/
        {
          if ( sub_51FE80(p_hairs->node.data) ) /*0x5c5212*/
          {
            if ( sub_51FFD0(p_hairs->node.data, (int)v75) ) /*0x5c5222*/
              ++v7; /*0x5c522b*/
          }
        }
      }
      if ( v7 != *(this + 0x21C) ) /*0x5c5234*/
        p_hairs = (tListHair *)p_hairs->node.next; /*0x5c5236*/
      if ( !p_hairs ) /*0x5c523b*/
        goto LABEL_2; /*0x5c523b*/
    }
    if ( !p_hairs ) /*0x5c5244*/
      goto LABEL_2; /*0x5c5244*/
    data = p_hairs->node.data; /*0x5c524a*/
    if ( !data ) /*0x5c524e*/
    {
      FormHeapFree(0); /*0x5c5368*/
      FormHeapFree(0); /*0x5c536e*/
      FormHeapFree((unsigned int)v77.m_data); /*0x5c5378*/
      v77.m_data = 0; /*0x5c5382*/
      *(_DWORD *)&v77.m_dataLen = 0; /*0x5c538b*/
      FormHeapFree((unsigned int)v78.m_data); /*0x5c5390*/
      v78.m_data = 0; /*0x5c5396*/
      *(_DWORD *)&v78.m_dataLen = 0; /*0x5c539f*/
      FormHeapFree(0); /*0x5c53a4*/
      LOBYTE(v95) = 1; /*0x5c53b0*/
      NiPointerSlot_Release((NiD3DVertexShader *)&v76); /*0x5c53b8*/
      LOBYTE(v95) = 0; /*0x5c53c1*/
      NiPointerSlot_Release((NiD3DVertexShader *)&v85); /*0x5c53c8*/
      v95 = 0xFFFFFFFF; /*0x5c53d1*/
      NiPointerSlot_Release((NiD3DVertexShader *)&v83); /*0x5c53dc*/
      return 0; /*0x5c53e3*/
    }
    v9 = *((char **)data + 7); /*0x5c5254*/
    if ( !v9 ) /*0x5c5259*/
      v9 = EmptyString; /*0x5c525b*/
    hairLength = (int)v9; /*0x5c5260*/
    v10 = (char *)g_gameSetting_sHair; /*0x5c5261*/
    a2 = 0xFB4; /*0x5c5266*/
    *(float *)&hairLength_low = COERCE_FLOAT(&v71); /*0x5c5270*/
    BSStringT_constr_str(&v71, v10); /*0x5c5275*/
    v11 = (char *)g_gameSetting_sMain; /*0x5c527a*/
    v86 = &v70; /*0x5c5285*/
    LOBYTE(v95) = 8; /*0x5c528a*/
    BSStringT_constr_str(&v70, v11); /*0x5c5292*/
    LOBYTE(v95) = 7; /*0x5c5299*/
    ControlTile = RaceSexMenu_FindControlTile(this, v70, v71); /*0x5c52a1*/
    Tile_SetString(ControlTile, (_DWORD *)a2, (char *)hairLength); /*0x5c52a8*/
    v13 = *((char **)data + 7); /*0x5c52ad*/
    if ( !v13 ) /*0x5c52b2*/
      v13 = EmptyString; /*0x5c52b4*/
    hairLength = (int)v13; /*0x5c52b9*/
    v14 = (char *)stru_B38FB8; /*0x5c52ba*/
    a2 = 0xFB4; /*0x5c52bf*/
    v86 = &v71; /*0x5c52c9*/
    BSStringT_constr_str(&v71, v14); /*0x5c52ce*/
    v15 = (char *)g_gameSetting_sHair; /*0x5c52d3*/
    *(float *)&hairLength_low = COERCE_FLOAT(&v70); /*0x5c52de*/
    LOBYTE(v95) = 9; /*0x5c52e3*/
    BSStringT_constr_str(&v70, v15); /*0x5c52eb*/
    LOBYTE(v95) = 7; /*0x5c52f2*/
    v16 = RaceSexMenu_FindControlTile(this, v70, v71); /*0x5c52fa*/
    Tile_SetString(v16, (_DWORD *)a2, (char *)hairLength); /*0x5c5301*/
    v75->member.hair = data; /*0x5c530c*/
    sub_5C34D0(this); /*0x5c5312*/
  }
  v17 = 0; /*0x5c532f*/
  hairLength_low = *(unsigned __int16 *)(((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)( /*0x5c5333*/
                                           reference,
                                           0)
                                       + 0xB6);
  if ( *(float *)&hairLength_low != 0.0 )
  {
    while ( 1 )
    {
      v18 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0); /*0x5c534f*/
      v19 = *(unsigned __int16 *)(v18 + 0xB6) > v17 ? *(const char ***)(*(_DWORD *)(v18 + 0xB0) + 4 * v17) : 0;
      if ( !strcmp(v19[2], "FaceGenHair") ) /*0x5c5400*/
        break; /*0x5c5400*/
      if ( ++v17 >= hairLength_low ) /*0x5c540b*/
        goto LABEL_78; /*0x5c540b*/
    }
    v20 = (*((int (__thiscall **)(const char **))*v19 + 4))(v19); /*0x5c541d*/
    v21 = v20; /*0x5c541f*/
    if ( v20 )
    {
      v85 = v20; /*0x5c542d*/
      InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x5c5431*/
      hairLength = (int)v22; /*0x5c543e*/
      if ( arg0 )
      {
        NiMatrix33_InitRotationY(v93, flt_A3721C); /*0x5c5452*/
        v23 = v75; /*0x5c5457*/
        v24 = (const char *)(*(int (__thiscall **)(char *))(*((_DWORD *)v75->member.hair + 9) + 0x14))((char *)v75->member.hair + 0x24); /*0x5c546a*/
        BSStringT_Static_Format(&ArgList, "Meshes\\%s", v24); /*0x5c5477*/
        m_data = ArgList.m_data; /*0x5c547c*/
        hairLength = 1; /*0x5c5483*/
        a2 = 1; /*0x5c5485*/
        *(_DWORD *)&v71.m_dataLen = 0; /*0x5c5487*/
        v71.m_data = sub_550010(&v77, ArgList.m_data); /*0x5c5496*/
        *(_DWORD *)&v70.m_dataLen = m_data; /*0x5c5497*/
        v26 = sub_54FEB0(&v78, m_data); /*0x5c549e*/
        v27 = sub_553620(v26, *(char **)&v70.m_dataLen, v71.m_data, *(char **)&v71.m_dataLen, a2, hairLength); /*0x5c54c5*/
        ArrayConstructor( /*0x5c54c7*/
          (char *)a1,
          0x18u,
          4,
          (void (__thiscall *)(char *))FaceGenMatrix_Construct,
          (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
        LOBYTE(v95) = 0xA; /*0x5c54d6*/
        TESNPC_BuildAbsoluteFaceGenParameters(v23, (FaceGenHeadParameters *)a1); /*0x5c54de*/
        if ( v27 ) /*0x5c54e5*/
          BSFaceGenModel_CreateMorphedGeometry(v27, (const FaceGenHeadParameters *)a1, (NiGeometry **)&v76); /*0x5c54f6*/
        if ( v76 )
        {
          NiObjectNET_SetName((NiObjectNET *)v76, "FaceGenHair"); /*0x5c550c*/
          hairLength_low = SLODWORD(v23->member.hairLength); /*0x5c551b*/
          BSFaceGen_ApplyHairLengthMorph((NiGeometry *)v76, *(float *)&hairLength_low);// Apply the stored TESNPC hairLength when creating FaceGenHair in the Race/Sex menu. /*0x5c5528*/
          if ( (*(_BYTE *)(v21 + 0x18) & 1) != 0 ) /*0x5c5534*/
            v76->members.super.m_flags |= 1u; /*0x5c553a*/
          v28 = *((const char **)v23->member.hair + 0x10); /*0x5c5545*/
          if ( !v28 ) /*0x5c554a*/
            v28 = EmptyString; /*0x5c554c*/
          BSStringT_Static_Format(&ArgList, "Textures\\%s", v28); /*0x5c555c*/
          SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0( /*0x5c5576*/
                                            (UInt32 *)&hairLength_low,
                                            ArgList.m_data,
                                            0,
                                            0);
          LOBYTE(v95) = 0xB; /*0x5c5580*/
          OB_NiSmartPointer_Assign_010201A0(&v83, SourceTexture_010201A0); /*0x5c5588*/
          LOBYTE(v95) = 0xA; /*0x5c5593*/
          if ( *(float *)&hairLength_low != 0.0 ) /*0x5c559b*/
          {
            v30 = (void (__thiscall ***)(_DWORD, int))hairLength_low; /*0x5c559d*/
            if ( !InterlockedDecrement((volatile LONG *)(hairLength_low + 4)) ) /*0x5c55a3*/
              (**v30)(v30, 1); /*0x5c55b9*/
          }
          v31 = (NiRenderedTexture *)v83; /*0x5c55bb*/
          if ( v83 ) /*0x5c55c1*/
          {
            v32 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x5c55c5*/
            v86 = (BSStringT *)v32; /*0x5c55cd*/
            LOBYTE(v95) = 0xC; /*0x5c55d3*/
            if ( v32 ) /*0x5c55db*/
              v33 = NiTexturingProperty::NiTexturingProperty(v32); /*0x5c55e4*/
            else
              v33 = 0; /*0x5c55e8*/
            LOBYTE(v95) = 0xA; /*0x5c55ed*/
            OB_NiTexturingProperty_SetBaseTexture_010201A0(v33, v31); /*0x5c55f5*/
            OB_NiTexturingProperty_SetClampMode_010201A0(v33, 3); /*0x5c55fe*/
            NiTexturingProperty_SetBaseMapFilterMode(v33, 2); /*0x5c5607*/
            if ( NiNode_GetNiPropertyByID(v76, 6) ) /*0x5c5612*/
            {
              sub_708560((int ***)v76, (volatile LONG **)&hairLength_low, 6); /*0x5c5626*/
              NiPointerSlot_Release((NiD3DVertexShader *)&hairLength_low); /*0x5c562f*/
            }
            sub_405680(v76, (BSShaderProperty *)v33); /*0x5c5639*/
          }
          if ( !NiNode_GetNiPropertyByID(v76, 0) ) /*0x5c5643*/
          {
            v34 = v76; /*0x5c564c*/
            v35 = (BSShaderProperty *)sub_550550(); /*0x5c5650*/
            sub_405680(v34, v35); /*0x5c5658*/
          }
          qmemcpy(&v76->members.super.m_localTransform, v93, 0x24u); /*0x5c566d*/
          v36 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0); /*0x5c567e*/
          (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v36 + 0x88))(v36, &hairLength_low, v21); /*0x5c5690*/
          if ( *(float *)&hairLength_low != 0.0 ) /*0x5c5698*/
          {
            v37 = (void (__thiscall ***)(_DWORD, int))hairLength_low; /*0x5c569a*/
            if ( !InterlockedDecrement((volatile LONG *)(hairLength_low + 4)) ) /*0x5c56a0*/
              (**v37)(v37, 1); /*0x5c56b6*/
          }
          v38 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0); /*0x5c56c7*/
          (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)v38 + 0x84))(v38, v76, 1); /*0x5c56da*/
          v39 = ((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)(reference, 0); /*0x5c56eb*/
          v40 = (NiAVObject *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v39 + 0x58))(v39, "FaceGenHair"); /*0x5c56f9*/
          v41 = (NiNode *)v40; /*0x5c56fb*/
          if ( v40 )
          {
            BSShaderManager_AssignShadersRecursive(v40, 1u, 1, 1); /*0x5c570c*/
            NiPropertyByID = NiNode_GetNiPropertyByID(v41, 4); /*0x5c5718*/
            v43 = NiPropertyByID; /*0x5c571d*/
            if ( NiPropertyByID ) /*0x5c5721*/
              v44 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 5; /*0x5c5738*/
            else
              v44 = 0; /*0x5c5723*/
            v45 = v44 ? (float *)v43 : 0;
            if ( v45 )
            {
              v46 = *(_DWORD *)v75->member.hairColorRGB; /*0x5c5746*/
              v75 = (TESNPC *)(unsigned __int8)v46; /*0x5c574f*/
              v47 = dbl_A3DDD8; /*0x5c575a*/
              v79 = (double)(unsigned __int8)v46 / v47; /*0x5c576e*/
              v75 = (TESNPC *)BYTE2(v46); /*0x5c577a*/
              v45[0x2A] = v79; /*0x5c577e*/
              v80 = (double)BYTE1(v46) / v47; /*0x5c5786*/
              v45[0x2B] = v80; /*0x5c578e*/
              v81 = (double)(int)v75 / v47; /*0x5c5798*/
              v82 = 1.0; /*0x5c57a2*/
              v45[0x2C] = v81; /*0x5c57a6*/
              v45[0x2D] = v82; /*0x5c57b0*/
            }
            else
            {
              if ( v43 ) /*0x5c57bd*/
                v48 = (*((int (__thiscall **)(NiProperty *))v43->vtbl + 0x15))(v43) == 0xA; /*0x5c57d4*/
              else
                v48 = 0; /*0x5c57bf*/
              v49 = v48 ? (float *)v43 : 0;
              if ( v49 ) /*0x5c57dc*/
              {
                v50 = *(_DWORD *)v75->member.hairColorRGB; /*0x5c57e2*/
                v75 = (TESNPC *)(unsigned __int8)v50; /*0x5c57eb*/
                v51 = dbl_A3DDD8; /*0x5c57f6*/
                v79 = (double)(unsigned __int8)v50 / v51; /*0x5c580a*/
                v75 = (TESNPC *)BYTE2(v50); /*0x5c5816*/
                v49[0x3C] = v79; /*0x5c581a*/
                v80 = (double)BYTE1(v50) / v51; /*0x5c5822*/
                v49[0x3D] = v80; /*0x5c582a*/
                v81 = (double)(int)v75 / v51; /*0x5c5834*/
                v82 = 1.0; /*0x5c583e*/
                v49[0x3E] = v81; /*0x5c5842*/
                v49[0x3F] = v82; /*0x5c584c*/
              }
            }
          }
          v52 = (NiNode *)((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)( /*0x5c5861*/
                            reference,
                            0);
          NiNode_UpdateDynamicEffectState(v52); /*0x5c5865*/
          v53 = (NiAVObject *)((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)( /*0x5c5879*/
                                reference,
                                0);
          NiAVObject_InitializePropertyState(v53); /*0x5c587d*/
        }
        LOBYTE(v95) = 7; /*0x5c5893*/
        _LN21((char *)a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c589b*/
      }
      else
      {
        v54 = v75; /*0x5c58a5*/
        hairLength_low = SLODWORD(v75->member.hairLength); /*0x5c58af*/
        BSFaceGen_ApplyHairLengthMorph((NiGeometry *)v21, *(float *)&hairLength_low);// Reapply TESNPC hairLength after this Race/Sex menu hair-geometry update. /*0x5c58bb*/
        v55 = NiNode_GetNiPropertyByID((NiNode *)v21, 4); /*0x5c58c7*/
        v56 = v55; /*0x5c58cc*/
        if ( v55 ) /*0x5c58d0*/
          v57 = (*((int (__thiscall **)(NiProperty *))v55->vtbl + 0x15))(v55) == 5; /*0x5c58e7*/
        else
          v57 = 0; /*0x5c58d2*/
        v58 = v57 ? (float *)v56 : 0;
        if ( v58 )
        {
          v59 = *(_DWORD *)v54->member.hairColorRGB; /*0x5c58f1*/
          hairLength_low = (unsigned __int8)v59; /*0x5c58fa*/
          v60 = dbl_A3DDD8; /*0x5c5905*/
          v79 = (double)(unsigned __int8)v59 / v60; /*0x5c5919*/
          hairLength_low = BYTE2(v59); /*0x5c5925*/
          v58[0x2A] = v79; /*0x5c5929*/
          v80 = (double)BYTE1(v59) / v60; /*0x5c5931*/
          v58[0x2B] = v80; /*0x5c5939*/
          v81 = (double)hairLength_low / v60; /*0x5c5943*/
          v82 = 1.0; /*0x5c594d*/
          v58[0x2C] = v81; /*0x5c5951*/
          v58[0x2D] = v82; /*0x5c595b*/
        }
        else
        {
          if ( v56 ) /*0x5c5968*/
            v61 = (*((int (__thiscall **)(NiProperty *))v56->vtbl + 0x15))(v56) == 0xA; /*0x5c597f*/
          else
            v61 = 0; /*0x5c596a*/
          v62 = v61 ? (float *)v56 : 0;
          if ( v62 ) /*0x5c5987*/
          {
            v63 = *(_DWORD *)v54->member.hairColorRGB; /*0x5c5989*/
            hairLength_low = (unsigned __int8)v63; /*0x5c5992*/
            v64 = dbl_A3DDD8; /*0x5c599d*/
            v79 = (double)(unsigned __int8)v63 / v64; /*0x5c59b1*/
            hairLength_low = BYTE2(v63); /*0x5c59bd*/
            v62[0x3C] = v79; /*0x5c59c1*/
            v80 = (double)BYTE1(v63) / v64; /*0x5c59c9*/
            v62[0x3D] = v80; /*0x5c59d1*/
            v81 = (double)hairLength_low / v64; /*0x5c59db*/
            v82 = 1.0; /*0x5c59e5*/
            v62[0x3E] = v81; /*0x5c59e9*/
            v62[0x3F] = v82; /*0x5c59f3*/
          }
        }
      }
      hairLength = 1; /*0x5c59fb*/
      *(float *)&a2 = 0.0; /*0x5c59fe*/
      v65 = (NiAVObject *)((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)( /*0x5c5a10*/
                            reference,
                            0);
      NiAVObject_UpdateNiAVObject(v65, *(float *)&a2, hairLength); /*0x5c5a14*/
    }
  }
LABEL_78:
  FormHeapFree(0); /*0x5c5a19*/
  FormHeapFree(0); /*0x5c5a20*/
  FormHeapFree((unsigned int)v77.m_data); /*0x5c5a2a*/
  v77.m_data = 0; /*0x5c5a34*/
  *(_DWORD *)&v77.m_dataLen = 0; /*0x5c5a3d*/
  FormHeapFree((unsigned int)v78.m_data); /*0x5c5a42*/
  v78.m_data = 0; /*0x5c5a4c*/
  *(_DWORD *)&v78.m_dataLen = 0; /*0x5c5a55*/
  FormHeapFree((unsigned int)ArgList.m_data); /*0x5c5a5a*/
  v66 = InterlockedDecrement; /*0x5c5a63*/
  LOBYTE(v95) = 1; /*0x5c5a6e*/
  if ( v76 ) /*0x5c5a76*/
  {
    v67 = v76; /*0x5c5a78*/
    if ( !v66((volatile LONG *)&v76->members) ) /*0x5c5a7e*/
      v67->vtbl->super.super.super.Destructor((NiRefObject *)v67, 1); /*0x5c5a90*/
  }
  v68 = (void (__thiscall ***)(_DWORD, int))v85; /*0x5c5a92*/
  LOBYTE(v95) = 0; /*0x5c5a98*/
  if ( v85 ) /*0x5c5a9f*/
  {
    if ( !v66((volatile LONG *)(v85 + 4)) ) /*0x5c5aa5*/
      (**v68)(v68, 1); /*0x5c5ab3*/
  }
  v69 = (void (__thiscall ***)(_DWORD, int))v83; /*0x5c5ab5*/
  v95 = 0xFFFFFFFF; /*0x5c5abb*/
  if ( v83 ) /*0x5c5ac6*/
  {
    if ( !v66((volatile LONG *)(v83 + 4)) ) /*0x5c5acc*/
      (**v69)(v69, 1); /*0x5c5ada*/
  }
  return 1; /*0x5c5ade*/
}
