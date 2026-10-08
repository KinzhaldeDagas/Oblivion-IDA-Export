// WaterManager combined water-reflection dispatcher. NiRenderer_Render calls it with the world reflection root and ShadowSceneNode. After exterior/interior water and reflection gates it calls WaterManager_RenderReflectionPass; other branches manage interior/static reflection textures.
void __thiscall WaterManager_RenderCombinedReflectionPasses(
        WaterManager *this,
        NiAVObject *primaryRoot,
        NiAVObject *secondaryRoot)
{
  double v4; // st7
  TESForm *CurrentCell; // eax
  bool v6; // bl
  bool v7; // zf
  WaterShader *v8; // eax
  WaterShader *v9; // esi
  NiSourceTexture *v10; // eax
  WaterShader *v11; // esi
  BSRenderedTexture *ReflectionMap; // esi
  TES *v13; // ecx
  TESWorldSpace *CurrentWorldspace; // eax
  TESWorldSpace *v15; // eax
  NiAVObjectVtbl *ChildNiAvNodeVtbl; // eax
  PlayerCharacter *v17; // ecx
  ExtraDataList *DwordAtOffset40; // eax
  SceneGraph *v19; // ecx
  ExtraDataList *v20; // eax
  double WaterHeight; // st7
  _DWORD *i; // eax
  int v23; // ecx
  NiTPointerList_Node_void *v24; // eax
  unsigned int data; // esi
  NiTPointerList_Node_void *next; // ebx
  int v27; // edi
  LONG (__stdcall *v28)(volatile LONG *); // ebx
  int v29; // edi
  NiTPointerList_Node_void *v30; // edi
  TESObjectCELL *v31; // ecx
  UInt32 *unk40; // ecx
  UInt32 v33; // esi
  int v34; // eax
  TES *v35; // ecx
  NiNode *v36; // ecx
  GridEntry *v37; // eax
  unsigned __int8 *v38; // eax
  CHAR *v39; // eax
  WaterShader *v40; // ecx
  int v41; // eax
  NiTPointerList_Node_void *v42; // ecx
  float v43; // edx
  Sky *GlobalObject; // eax
  Sky *v45; // eax
  float v46; // ecx
  float v47; // edx
  float v48; // eax
  double v49; // st7
  Sky *v50; // eax
  char v51; // al
  TES *v52; // ecx
  Sky *v53; // eax
  double v54; // st7
  Sky *v55; // eax
  double v56; // st7
  TESWaterForm *v57; // eax
  Sky *v58; // eax
  Sky *v59; // eax
  double v60; // st7
  Sky *v61; // eax
  Sky *v62; // eax
  Sky *v63; // eax
  Sky *v64; // eax
  Sky *v65; // eax
  Sky *v66; // eax
  Sky *v67; // eax
  double v68; // st7
  Sky *v69; // eax
  double v70; // st7
  Sky *v71; // eax
  Sky *v72; // eax
  double v73; // st7
  Sky *v74; // eax
  Sky *v75; // eax
  double v76; // st7
  Sky *v77; // eax
  Sky *v78; // eax
  Sky *v79; // eax
  Sky *v80; // eax
  float v81; // [esp+Ch] [ebp-250h]
  float v82; // [esp+Ch] [ebp-250h]
  float v83; // [esp+Ch] [ebp-250h]
  float v84; // [esp+Ch] [ebp-250h]
  float v85; // [esp+Ch] [ebp-250h]
  float v86; // [esp+Ch] [ebp-250h]
  float v87; // [esp+Ch] [ebp-250h]
  float v88; // [esp+Ch] [ebp-250h]
  float v89; // [esp+10h] [ebp-24Ch]
  float v90; // [esp+10h] [ebp-24Ch]
  float v91; // [esp+10h] [ebp-24Ch]
  float v92; // [esp+10h] [ebp-24Ch]
  float v93; // [esp+10h] [ebp-24Ch]
  float v94; // [esp+10h] [ebp-24Ch]
  float v95; // [esp+10h] [ebp-24Ch]
  float v96; // [esp+10h] [ebp-24Ch]
  float v97; // [esp+14h] [ebp-248h]
  float GameHour; // [esp+14h] [ebp-248h]
  float v99; // [esp+14h] [ebp-248h]
  float v100; // [esp+14h] [ebp-248h]
  float v101; // [esp+14h] [ebp-248h]
  float v102; // [esp+14h] [ebp-248h]
  float v103; // [esp+14h] [ebp-248h]
  float v104; // [esp+14h] [ebp-248h]
  float v105; // [esp+14h] [ebp-248h]
  TESObjectCELL *v106; // [esp+2Ch] [ebp-230h]
  float v107; // [esp+2Ch] [ebp-230h]
  float v108; // [esp+2Ch] [ebp-230h]
  NiTPointerList_Node_void *v109[3]; // [esp+30h] [ebp-22Ch] BYREF
  float v110; // [esp+3Ch] [ebp-220h]
  void *shadowMap; // [esp+40h] [ebp-21Ch] BYREF
  char v112[260]; // [esp+44h] [ebp-218h] BYREF
  char ArgList[260]; // [esp+148h] [ebp-114h] BYREF
  unsigned int v114; // [esp+258h] [ebp-4h]

  if ( MEMORY[0xB33E90][0x1398] ) /*0x49e8bb*/
  {
    MEMORY[0xB33E90][0x1398] = 0; /*0x49e8d4*/
    return; /*0x49e8db*/
  }
  if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 ) /*0x49e8ee*/
    return; /*0x49e8ee*/
  if ( reference ) /*0x49e8f4*/
  {
    v4 = (double)dword_B070B0; /*0x49e903*/
    if ( dword_B070B0 < 0 ) /*0x49e90b*/
      v4 = v4 + flt_A2FC78; /*0x49e90d*/
    v97 = v4; /*0x49e914*/
    CurrentCell = sub_65E5E0((TESObjectREFR *)reference, v97); /*0x49e917*/
  }
  else
  {
    CurrentCell = TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x49e924*/
  }
  v106 = (TESObjectCELL *)CurrentCell; /*0x49e92b*/
  if ( CurrentCell ) /*0x49e92f*/
  {
    if ( CurrentCell == *(TESForm **)&MEMORY[0xB33E90][0x1394] ) /*0x49e937*/
      goto LABEL_15; /*0x49e937*/
  }
  else
  {
    if ( *(_DWORD *)&MEMORY[0xB33E90][0x1394] ) /*0x49e93b*/
      goto LABEL_15; /*0x49e942*/
    CurrentCell = TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x49e94a*/
    v106 = (TESObjectCELL *)CurrentCell; /*0x49e94f*/
  }
  MEMORY[0xB33E90][0x138D] = 1; /*0x49e953*/
  *(_DWORD *)&MEMORY[0xB33E90][0x1394] = CurrentCell; /*0x49e95a*/
LABEL_15:
  if ( byte_B07060 ) /*0x49e95f*/
  {
    v6 = byte_B0703C || MEMORY[0xB33E90][0x1399]; /*0x49e982*/
    if ( !MEMORY[0xB333A0]->currentInteriorCell /*0x49e9a5*/
      && *(_DWORD *)&MEMORY[0xB33E90][0x1390]
      && sub_4ED650(*(_BYTE **)&MEMORY[0xB33E90][0x1390])
      && v6 )
    {
      v7 = unk_B333B8 == 0; /*0x49e9a7*/
      unk_B45DB8 = 0; /*0x49e9ae*/
      if ( v7 ) /*0x49e9b5*/
        WaterManager_RenderReflectionPass(this, primaryRoot, secondaryRoot);// Dispatch the gated WaterManager reflection render for the two scene roots. The callee owns g_bWaterReflectionPassActive for the duration of its dedicated accumulation transaction. /*0x49e9bf*/
    }
    else if ( byte_B0703C ) /*0x49e9c9*/
    {
      v8 = MEMORY[0xB45DCC]; /*0x49e9d6*/
      v7 = MEMORY[0xB45DCC] == 0; /*0x49e9db*/
      unk_B45DB8 = 1; /*0x49e9dd*/
      if ( !v7 && !v8->Unk104[3] ) /*0x49e9ea*/
      {
        _sprintf(v112, "Data\\Textures\\Effects\\interior_refl.dds"); /*0x49ea01*/
        v9 = MEMORY[0xB45DCC]; /*0x49ea0b*/
        v10 = sub_720F80( /*0x49ea25*/
                v112,
                v112,
                v112,
                v112,
                v112,
                v112,
                (int)unk_B43104,
                &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout);
        sub_499360(v9, (int)v10); /*0x49ea30*/
      }
    }
  }
  else
  {
    v11 = MEMORY[0xB45DCC]; /*0x49ea37*/
    v7 = MEMORY[0xB45DCC] == 0; /*0x49ea3d*/
    unk_B45DB8 = 0; /*0x49ea3f*/
    if ( !v7 ) /*0x49ea46*/
    {
      sub_499360(v11, 0); /*0x49ea4c*/
      sub_499270(v11, 0); /*0x49ea55*/
    }
    if ( this->ReflectionMap ) /*0x49ea5a*/
    {
      BSTextureManager__ReturnRenderedTexture( /*0x49ea68*/
        *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
        this->ReflectionMap);
      ReflectionMap = this->ReflectionMap; /*0x49ea6d*/
      if ( ReflectionMap ) /*0x49ea72*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&ReflectionMap->members) ) /*0x49ea78*/
          (*(void (__thiscall **)(BSRenderedTexture *, int))ReflectionMap->vtbl)(ReflectionMap, 1); /*0x49ea8e*/
        this->ReflectionMap = 0; /*0x49ea90*/
      }
    }
  }
  if ( MEMORY[0xB33E90][0x138D] ) /*0x49ea97*/
  {
    if ( TES_GetCurrentCell(MEMORY[0xB333A0]) && sub_43F4D0() && useWaterLOD && OB_RendererGlobalState_010201A0[0x1DE] ) /*0x49eac5*/
    {
      v13 = MEMORY[0xB333A0]; /*0x49eace*/
      if ( MEMORY[0xB333A0]->currentInteriorCell ) /*0x49ead4*/
        goto LABEL_48; /*0x49ead8*/
      CurrentWorldspace = TES::GetCurrentWorldspace(v13); /*0x49eada*/
      if ( !TESWorldSpace::IsNoWaterLOD(CurrentWorldspace) && !MEMORY[0xB33E90][0x1399] && sub_4E9F40() ) /*0x49eaf2*/
      {
        sub_49E280(); /*0x49eafd*/
        goto LABEL_51; /*0x49eb02*/
      }
    }
    v13 = MEMORY[0xB333A0]; /*0x49eb04*/
LABEL_48:
    v15 = TES::GetCurrentWorldspace(v13); /*0x49eb0a*/
    if ( TESWorldSpace::IsNoWaterLOD(v15) ) /*0x49eb11*/
    {
      if ( MEMORY[0xB33E90][0x1399] ) /*0x49eb1a*/
        sub_499E20(); /*0x49eb25*/
    }
  }
LABEL_51:
  if ( byte_B0703C || MEMORY[0xB33E90][0x1399] ) /*0x49eb33*/
  {
    if ( reference && Shared_GetDwordAtOffset40(reference) ) /*0x49eb4e*/
    {
      ChildNiAvNodeVtbl = SceneGraph_GetChildNiAvNodeVtbl((SceneGraph *)g_WorldSceneReceiverRoot); /*0x49eb61*/
      v17 = reference; /*0x49eb6c*/
      *(double *)&v109[1] = *(float *)&ChildNiAvNodeVtbl[1].super.Unk_03; /*0x49eb77*/
      DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v17); /*0x49eb7b*/
      if ( TESObjectCELL_GetWaterHeight(DwordAtOffset40) <= *(double *)&v109[1] ) /*0x49eb90*/
      {
        MEMORY[0xB33E90][0x138C] = 0; /*0x49ebc0*/
        unk_B42CE2 = 0; /*0x49ebc7*/
        MEMORY[0xB43164] = 0; /*0x49ebce*/
      }
      else
      {
        v19 = (SceneGraph *)g_WorldSceneReceiverRoot; /*0x49eb92*/
        MEMORY[0xB33E90][0x138C] = 1;           // USe water006.pso (near and lod) instead of water001.pso (near) / water012.pso (lod) /*0x49eb98*/
        unk_B42CE2 = 1; /*0x49eb9f*/
        MEMORY[0xB43164] = 1; /*0x49eba6*/
        unk_B4314C = *(float *)&SceneGraph_GetChildNiAvNodeVtbl(v19)[1].super.Unk_03; /*0x49ebb8*/
      }
      v20 = (ExtraDataList *)Shared_GetDwordAtOffset40(reference); /*0x49ebdb*/
      WaterHeight = TESObjectCELL_GetWaterHeight(v20); /*0x49ebe2*/
      unk_B42CE4 = Double_To_SInt32(WaterHeight); /*0x49ebec*/
      unk_B42CE1 = 1; /*0x49ebf1*/
    }
    else
    {
      unk_B42CE1 = 0; /*0x49ebfa*/
    }
    if ( byte_B07050 ) /*0x49ec01*/
    {
      if ( OB_RendererGlobalState_010201A0[0xA5] ) /*0x49ec0e*/
      {
        if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x49ec22*/
        {
          WateRsurfacEPass(this, (NiCamera *)primaryRoot); /*0x49ec2b*/
          for ( i = (_DWORD *)this->unk34; i; *(float *)(v23 + 0x18) = 1.0 ) /*0x49ec35*/
          {
            v23 = i[2]; /*0x49ec39*/
            i = (_DWORD *)*i; /*0x49ec3c*/
          }
          v109[0] = (NiTPointerList_Node_void *)this->unk34; /*0x49ec4c*/
          v24 = v109[0]; /*0x49ec47*/
          if ( v109[0] ) /*0x49ec50*/
          {
            do /*0x49ed5a*/
            {
              data = (unsigned int)v24->data; /*0x49ec56*/
              v7 = *(_BYTE *)(data + 0x10) == 0; /*0x49ec59*/
              next = v24->next; /*0x49ec5d*/
              shadowMap = v24->next; /*0x49ec5f*/
              if ( v7 ) /*0x49ec63*/
              {
                if ( byte_B07090 ) /*0x49ed3f*/
                  WaterGeometryPAss(this, (float *)data, 0); /*0x49ed4d*/
              }
              else
              {
                if ( *(_DWORD *)(data + 8) ) /*0x49ec69*/
                  BSTextureManager__ReturnRenderedTexture( /*0x49ec77*/
                    *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
                    *(BSRenderedTexture **)(data + 8));
                if ( *(_DWORD *)(data + 0xC) ) /*0x49ec7c*/
                  BSTextureManager__ReturnRenderedTexture( /*0x49ec8a*/
                    *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
                    *(BSRenderedTexture **)(data + 0xC));
                v27 = *(_DWORD *)(data + 8); /*0x49ec8f*/
                v28 = InterlockedDecrement; /*0x49ec94*/
                if ( v27 ) /*0x49ec9a*/
                {
                  if ( !v28((volatile LONG *)(v27 + 4)) ) /*0x49eca0*/
                    (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x49ecb2*/
                  *(_DWORD *)(data + 8) = 0; /*0x49ecb4*/
                }
                v29 = *(_DWORD *)(data + 0xC); /*0x49ecbb*/
                if ( v29 ) /*0x49ecc0*/
                {
                  if ( !v28((volatile LONG *)(v29 + 4)) ) /*0x49ecc6*/
                    (**(void (__thiscall ***)(int, int))v29)(v29, 1); /*0x49ecd8*/
                  *(_DWORD *)(data + 0xC) = 0; /*0x49ecda*/
                }
                NiTPointerList_RemoveNode((BSTextureManager *)&this->unk30, v109); /*0x49ece9*/
                (*(void (__thiscall **)(_DWORD, NiTPointerList_Node_void **, _DWORD))(**(_DWORD **)&MEMORY[0xB33E90][0x13A0] /*0x49ed05*/
                                                                                    + 0x88))(
                  *(_DWORD *)&MEMORY[0xB33E90][0x13A0],
                  &v109[1],
                  *(_DWORD *)(data + 4));
                if ( v109[1] ) /*0x49ed0d*/
                {
                  v30 = v109[1]; /*0x49ed0f*/
                  if ( !v28((volatile LONG *)&v109[1]->prev) ) /*0x49ed15*/
                    ((void (__thiscall *)(NiTPointerList_Node_void *, int))v30->next->next)(v30, 1); /*0x49ed27*/
                }
                sub_4993B0((_BYTE *)data); /*0x49ed2b*/
                FormHeapFree(data); /*0x49ed31*/
                next = (NiTPointerList_Node_void *)shadowMap; /*0x49ed36*/
              }
              v24 = next; /*0x49ed54*/
              v109[0] = next; /*0x49ed56*/
            }
            while ( next ); /*0x49ed5a*/
          }
        }
      }
    }
    if ( !MEMORY[0xB33E90][0x138D] ) /*0x49ed62*/
      goto LABEL_115; /*0x49ed62*/
    MEMORY[0xB33E90][0x138D] = 0; /*0x49ed74*/
    if ( v106 && TESObjectCELL::GetWaterForm(v106) ) /*0x49ed7e*/
    {
      v31 = v106; /*0x49ed87*/
    }
    else if ( *(_DWORD *)&MEMORY[0xB33E90][0x1390] || (v31 = *(TESObjectCELL **)&MEMORY[0xB33E90][0x1394]) == 0 ) /*0x49ed93*/
    {
      v31 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x49eda8*/
    }
    *(_DWORD *)&MEMORY[0xB33E90][0x1390] = TESObjectCELL::GetWaterForm(v31); /*0x49edaf*/
    unk40 = (UInt32 *)this->unk40; /*0x49edb4*/
    if ( unk40 ) /*0x49edb9*/
    {
      if ( SoundHandle::IsPlaying(unk40) ) /*0x49edbb*/
      {
        sub_6B7240((int *)this->unk40); /*0x49edc7*/
        sub_6B73C0((int *)this->unk40); /*0x49edcf*/
        v33 = this->unk40; /*0x49edd4*/
        if ( v33 ) /*0x49edd9*/
        {
          sub_6B73E0((_DWORD *)this->unk40); /*0x49eddd*/
          FormHeapFree(v33); /*0x49ede3*/
        }
        this->unk40 = 0; /*0x49edeb*/
      }
    }
    if ( *(_DWORD *)&MEMORY[0xB33E90][0x1390] ) /*0x49edee*/
    {
      v34 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x1390] + 0x38); /*0x49edf7*/
      if ( v34 ) /*0x49edfc*/
        this->unk40 = (UInt32)OSGLobals_PlaySound((int *)MEMORY[0xB33398]->sound, *(void **)(v34 + 0xC), 0x12, 0); /*0x49ee13*/
    }
    if ( !byte_B07050 || !OB_RendererGlobalState_010201A0[0xA5] ) /*0x49ee23*/
    {
LABEL_115:
      v41 = *((_DWORD *)Sky_CreateOrGetGlobalObject()->sun->membr.SunBillboard + 7); /*0x49ef11*/
      v42 = *(NiTPointerList_Node_void **)(v41 + 0x58); /*0x49ef22*/
      v109[1] = *(NiTPointerList_Node_void **)(v41 + 0x54); /*0x49ef25*/
      v43 = *(float *)(v41 + 0x5C); /*0x49ef29*/
      v109[2] = v42; /*0x49ef2c*/
      v110 = v43; /*0x49ef34*/
      Vector3_NormalizeInPlace((float *)&v109[1]); /*0x49ef38*/
      unk_B45DF4 = *(float *)&v109[1]; /*0x49ef43*/
      unk_B45DF8 = *(float *)&v109[2]; /*0x49ef4d*/
      unk_B45DFC = v110; /*0x49ef57*/
      GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x49ef5d*/
      unk_B45E00 = sub_544B00(GlobalObject->sun) * fCostant_100; /*0x49ef70*/
      v45 = Sky_CreateOrGetGlobalObject(); /*0x49ef76*/
      v46 = *(float *)&v45->unk03C[0xC]; /*0x49ef7b*/
      v47 = *(float *)&v45->unk03C[0xD]; /*0x49ef7e*/
      v48 = *(float *)&v45->unk03C[0xE]; /*0x49ef81*/
      v109[1] = (NiTPointerList_Node_void *)LODWORD(v46); /*0x49ef84*/
      unk_B45E04 = v46; /*0x49ef8c*/
      v109[2] = (NiTPointerList_Node_void *)LODWORD(v47); /*0x49ef92*/
      v110 = v48; /*0x49ef9a*/
      unk_B45E08 = v47; /*0x49ef9e*/
      unk_B45E0C = v110; /*0x49efa8*/
      v49 = 0.0; /*0x49efae*/
      if ( 0.0 != unk_B45E00 ) /*0x49efbb*/
      {
        v50 = Sky_CreateOrGetGlobalObject(); /*0x49efbf*/
        v49 = sub_544B00(v50->sun); /*0x49efc7*/
      }
      v51 = MEMORY[0xB33E90][0x138C]; /*0x49efcc*/
      unk_B45E10 = v49; /*0x49efd1*/
      if ( v51 ) /*0x49efd9*/
        unk_B45E10 = 0.0; /*0x49efdd*/
      v52 = MEMORY[0xB333A0]; /*0x49efe3*/
      unk_B45DBB = v51; /*0x49efe9*/
      if ( !v52->currentInteriorCell ) /*0x49efee*/
      {
        *(double *)&v109[1] = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f001*/
        v53 = Sky_CreateOrGetGlobalObject(); /*0x49f005*/
        v54 = sub_4991C0(v53); /*0x49f00c*/
        if ( v54 < *(double *)&v109[1] ) /*0x49f01a*/
        {
          *(double *)&v109[1] = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f02a*/
          v55 = Sky_CreateOrGetGlobalObject(); /*0x49f02e*/
          v56 = sub_499200(v55); /*0x49f035*/
          if ( v56 >= *(double *)&v109[1] ) /*0x49f043*/
          {
            if ( *(_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x1390] + 0xA4) /*0x49f062*/
              && (v57 = *(TESWaterForm **)(*(_DWORD *)&MEMORY[0xB33E90][0x1390] + 0xA4)) != 0 )
            {
              this->WaterForm2 = v57; /*0x49f06d*/
              GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f076*/
              v58 = Sky_CreateOrGetGlobalObject(); /*0x49f079*/
              v89 = sub_499200(v58); /*0x49f086*/
              v59 = Sky_CreateOrGetGlobalObject(); /*0x49f089*/
              v81 = sub_4991C0(v59); /*0x49f098*/
              if ( sub_410EB0(0.0, 1.0, v81, v89, GameHour) >= dbl_A2FC68 ) /*0x49f0ba*/
              {
                v99 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f0cb*/
                v61 = Sky_CreateOrGetGlobalObject(); /*0x49f0ce*/
                v90 = sub_499200(v61); /*0x49f0db*/
                v62 = Sky_CreateOrGetGlobalObject(); /*0x49f0de*/
                v82 = sub_4991C0(v62); /*0x49f0ed*/
                v60 = sub_410EB0(0.0, 1.0, v82, v90, v99); /*0x49f0fc*/
              }
              else
              {
                v60 = 0.0; /*0x49f0bc*/
              }
              *(float *)v109 = v60; /*0x49f104*/
              if ( *(float *)v109 <= dbl_A2F928 ) /*0x49f117*/
              {
                v100 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f13a*/
                v63 = Sky_CreateOrGetGlobalObject(); /*0x49f13d*/
                v91 = sub_499200(v63); /*0x49f14a*/
                v64 = Sky_CreateOrGetGlobalObject(); /*0x49f14d*/
                v83 = sub_4991C0(v64); /*0x49f15c*/
                if ( sub_410EB0(0.0, 1.0, v83, v91, v100) >= dbl_A2FC68 ) /*0x49f17e*/
                {
                  v101 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f1a1*/
                  v65 = Sky_CreateOrGetGlobalObject(); /*0x49f1a4*/
                  v92 = sub_499200(v65); /*0x49f1b1*/
                  v66 = Sky_CreateOrGetGlobalObject(); /*0x49f1b4*/
                  v84 = sub_4991C0(v66); /*0x49f1c3*/
                  v107 = sub_410EB0(0.0, 1.0, v84, v92, v101); /*0x49f1d7*/
                  this->unk2C = v107; /*0x49f1e2*/
                  this->unk28 = 1; /*0x49f1e5*/
                }
                else
                {
                  this->unk28 = 1; /*0x49f182*/
                  this->unk2C = 0.0; /*0x49f18e*/
                }
              }
              else
              {
                this->unk28 = 1; /*0x49f11b*/
                this->unk2C = 1.0; /*0x49f127*/
              }
            }
            else
            {
              this->unk28 = 0; /*0x49f1f0*/
              this->unk2C = 0.0; /*0x49f1f4*/
            }
            goto LABEL_147; /*0x49f12a*/
          }
        }
        *(double *)&v109[1] = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f206*/
        v67 = Sky_CreateOrGetGlobalObject(); /*0x49f20a*/
        v68 = sub_499140(v67); /*0x49f211*/
        if ( v68 < *(double *)&v109[1] ) /*0x49f21f*/
        {
          *(double *)&v109[1] = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f22f*/
          v69 = Sky_CreateOrGetGlobalObject(); /*0x49f233*/
          v70 = sub_499180(v69); /*0x49f23a*/
          if ( v70 >= *(double *)&v109[1] ) /*0x49f248*/
          {
            v102 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f259*/
            v71 = Sky_CreateOrGetGlobalObject(); /*0x49f25c*/
            v93 = sub_499180(v71); /*0x49f269*/
            v72 = Sky_CreateOrGetGlobalObject(); /*0x49f26c*/
            v85 = sub_499140(v72); /*0x49f27b*/
            if ( sub_410EB0(0.0, 1.0, v85, v93, v102) >= dbl_A2FC68 ) /*0x49f29d*/
            {
              v103 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f2ae*/
              v74 = Sky_CreateOrGetGlobalObject(); /*0x49f2b1*/
              v94 = sub_499180(v74); /*0x49f2be*/
              v75 = Sky_CreateOrGetGlobalObject(); /*0x49f2c1*/
              v86 = sub_499140(v75); /*0x49f2d0*/
              v73 = sub_410EB0(0.0, 1.0, v86, v94, v103); /*0x49f2df*/
            }
            else
            {
              v73 = 0.0; /*0x49f29f*/
            }
            *(float *)v109 = v73; /*0x49f2e7*/
            if ( *(float *)v109 <= dbl_A2F928 ) /*0x49f2fa*/
            {
              v104 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f30e*/
              v77 = Sky_CreateOrGetGlobalObject(); /*0x49f311*/
              v95 = sub_499180(v77); /*0x49f31e*/
              v78 = Sky_CreateOrGetGlobalObject(); /*0x49f321*/
              v87 = sub_499140(v78); /*0x49f330*/
              if ( sub_410EB0(0.0, 1.0, v87, v95, v104) >= dbl_A2FC68 ) /*0x49f352*/
              {
                v105 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x49f363*/
                v79 = Sky_CreateOrGetGlobalObject(); /*0x49f366*/
                v96 = sub_499180(v79); /*0x49f373*/
                v80 = Sky_CreateOrGetGlobalObject(); /*0x49f376*/
                v88 = sub_499140(v80); /*0x49f385*/
                v76 = sub_410EB0(0.0, 1.0, v88, v96, v105); /*0x49f394*/
              }
              else
              {
                v76 = 0.0; /*0x49f354*/
              }
            }
            else
            {
              v76 = 1.0; /*0x49f2fc*/
            }
            v108 = v76; /*0x49f39c*/
            this->unk28 = 1; /*0x49f3a0*/
            this->unk2C = v108; /*0x49f3a8*/
            this->WaterForm2 = *(TESWaterForm **)&MEMORY[0xB33E90][0x1390]; /*0x49f3b1*/
            goto LABEL_147; /*0x49f3b4*/
          }
        }
        if ( !this->WaterForm2 ) /*0x49f3b9*/
        {
LABEL_147:
          if ( this->unk2C > 0.0 && this->unk28 ) /*0x49f3d7*/
          {
            sub_499570(this, &this->WaterForm2->vtbl, this->unk2C, 0); /*0x49f3ed*/
            if ( 1.0 == this->unk2C ) /*0x49f3fc*/
              this->unk28 = 0; /*0x49f3fe*/
          }
          else
          {
            sub_499570(this, 0, 0.0, this->unk29); /*0x49f410*/
          }
          sub_49AD00((int **)this); /*0x49f417*/
          return; /*0x49f417*/
        }
        this->unk29 = 1; /*0x49f3bd*/
        this->unk2C = 0.0; /*0x49f3c1*/
        this->unk28 = 0; /*0x49f3c4*/
      }
      this->WaterForm2 = 0; /*0x49f3c8*/
      goto LABEL_147; /*0x49f3c8*/
    }
    v35 = MEMORY[0xB333A0]; /*0x49ee30*/
    if ( MEMORY[0xB333A0]->currentInteriorCell ) /*0x49ee36*/
    {
      v36 = **((NiNode ***)v35->waterNodeData + 2); /*0x49ee41*/
    }
    else
    {
      if ( !v106 ) /*0x49ee47*/
        goto LABEL_112; /*0x49ee47*/
      v37 = sub_43FAB0(v35, v106); /*0x49ee4a*/
      if ( !v37 ) /*0x49ee51*/
        goto LABEL_112; /*0x49ee51*/
      v36 = *(NiNode **)v37->info[1].unk00; /*0x49ee5b*/
    }
    if ( NiNode_GetNiPropertyByID(v36, 4) ) /*0x49ee5f*/
    {
      v38 = *(unsigned __int8 **)(*(_DWORD *)&MEMORY[0xB33E90][0x1390] + 0x30); /*0x49ee6d*/
      if ( !v38 ) /*0x49ee72*/
        v38 = (unsigned __int8 *)EmptyString; /*0x49ee74*/
      MEMORY[0xB45DBA] = CRT_StricmpLocaleDispatch("lava", v38) == 0; /*0x49ee8c*/
    }
LABEL_112:
    if ( *(_DWORD *)&MEMORY[0xB33E90][0x1390] ) /*0x49ee92*/
    {
      if ( sub_4EDD90(*(_DWORD **)&MEMORY[0xB33E90][0x1390]) ) /*0x49ee9c*/
      {
        v39 = sub_4EDD90(*(_DWORD **)&MEMORY[0xB33E90][0x1390]); /*0x49eeab*/
        _sprintf(ArgList, "%s\\%s", "Textures", v39); /*0x49eec3*/
        OB_TES_LoadOrFindSourceTexture_010201A0((UInt32 *)&shadowMap, ArgList, 1, 0); /*0x49eee1*/
        v40 = MEMORY[0xB45DCC]; /*0x49eeea*/
        v114 = 0; /*0x49eef1*/
        ShadowSceneLight_SetShadowMap((ShadowSceneLight_DecodedLayout *)v40, shadowMap); /*0x49eef8*/
        v114 = 0xFFFFFFFF; /*0x49ef01*/
        NiPointerSlot_Release((NiD3DVertexShader *)&shadowMap); /*0x49ef0c*/
      }
    }
    goto LABEL_115; /*0x49ef0c*/
  }
}
