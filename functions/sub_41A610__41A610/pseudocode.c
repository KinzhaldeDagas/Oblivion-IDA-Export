// MagicItem VFX model preload path. Walks spell art and effect-item VFX model references and asks the model loader to load/cache required art resources.
void __thiscall MagicItem_LoadVFXModels(char *this, char a2)
{
  EffectSetting *FXEffect; // esi
  unsigned int v4; // eax
  const char *v5; // eax
  char *v6; // edi
  int *v7; // eax
  TESForm *NthForm; // edi
  int v9; // eax
  char *v10; // eax
  char *v11; // esi
  const char *v12; // eax
  const char **v13; // eax
  const char **v14; // esi
  const char *ModelPath; // eax
  const char *v16; // eax
  int v17; // eax
  char *v18; // eax
  const char **v19; // ebp
  const char **i; // esi
  char *v21; // eax
  char *v22; // edi
  char *v23; // esi
  const char *v24; // eax
  char *v25; // ebx
  char *Head; // esi
  char *v27; // ecx
  char *v28; // ebp
  unsigned int v29; // eax
  char *v30; // edi
  char *v32; // eax
  char *v33; // ebp
  char *j; // esi
  const char *v35; // edi
  char *v36; // eax
  _WORD *v38; // edi
  char v39; // al
  char *v40; // ebx
  char *k; // ebp
  unsigned int v42; // eax
  char *v43; // edi
  int v45; // eax
  size_t v46; // [esp-8h] [ebp-154h]
  char v47; // [esp+17h] [ebp-135h]
  int *v48; // [esp+18h] [ebp-134h]
  char *v49; // [esp+1Ch] [ebp-130h]
  char *v50; // [esp+20h] [ebp-12Ch]
  int v51; // [esp+24h] [ebp-128h] BYREF
  TESContainer v52; // [esp+28h] [ebp-124h] BYREF
  unsigned int v53; // [esp+144h] [ebp-8h]
  int v54; // [esp+148h] [ebp-4h]

  FXEffect = MagicItem_GetFXEffect(this, 0); /*0x41a65c*/
  if ( a2 || sub_419CF0(this) ) /*0x41a662*/
  {
    v47 = 1; /*0x41a6a3*/
  }
  else
  {
    if ( !sub_419E50(this) ) /*0x41a674*/
    {
      sub_438300((int)this, (int)FXEffect, 0); /*0x41a6b4*/
      return; /*0x41a6b9*/
    }
    v47 = 0; /*0x41a676*/
  }
  if ( FXEffect ) /*0x41a67d*/
  {
    if ( v47 ) /*0x41a684*/
    {
      LOWORD(v4) = FXEffect->model.nifModel.m_dataLen; /*0x41a686*/
      if ( (_WORD)v4 == 0xFFFF ) /*0x41a68e*/
        v4 = strlen(FXEffect->model.nifModel.m_data); /*0x41a693*/
      else
        v4 = (unsigned __int16)v4; /*0x41a6be*/
      if ( v4 ) /*0x41a6c3*/
      {
        v5 = FXEffect->model.vtbl->GetModelPath(&FXEffect->model); /*0x41a6d4*/
        ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v5, 0, 0, 1); /*0x41a6dd*/
      }
    }
    EffectSetting_ExtendUnkA0((int *)FXEffect); /*0x41a6e4*/
  }
  if ( this ) /*0x41a6eb*/
    v6 = this + 0xC; /*0x41a6ed*/
  else
    v6 = 0; /*0x41a6f2*/
  v49 = v6; /*0x41a6f8*/
  if ( *((_DWORD *)v6 + 2) || *((_DWORD *)v6 + 1) ) /*0x41a6fe*/
  {
    if ( v6 ) /*0x41a70a*/
    {
      do /*0x41ab5b*/
      {
        v7 = *(int **)(*((_DWORD *)v6 + 1) + 0x1C); /*0x41a713*/
        v48 = v7; /*0x41a71d*/
        if ( (v7[0x16] & 0x70000) != 0 ) /*0x41a721*/
        {
          if ( v47 ) /*0x41a72c*/
          {
            NthForm = TESForm_LookupByFormID(v7[0x18]); /*0x41a73b*/
            if ( NthForm ) /*0x41a742*/
            {
              v9 = v48[0x16]; /*0x41a74c*/
              if ( (v9 & 0x10000) != 0 ) /*0x41a757*/
              {
                v10 = (char *)OblivionDynamicCast( /*0x41a768*/
                                NthForm,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &TESObjectWEAP `RTTI Type Descriptor',
                                0);
                if ( v10 ) /*0x41a772*/
                {
                  v11 = v10 + 0x30; /*0x41a778*/
                  if ( OB_CompactString_Length_010201A0(v10 + 0x30) ) /*0x41a77d*/
                  {
                    v12 = (const char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 0x14))(v11); /*0x41a797*/
                    ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v12, 0, 0, 1); /*0x41a7a0*/
                  }
                }
              }
              else if ( (v9 & 0x20000) != 0 ) /*0x41a7b2*/
              {
                v13 = (const char **)OblivionDynamicCast( /*0x41a7c3*/
                                       NthForm,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESObjectARMO `RTTI Type Descriptor',
                                       0);
                if ( v13 ) /*0x41a7cd*/
                {
                  v14 = v13 + 0x19; /*0x41a7d7*/
                  ModelPath = (const char *)TESBipedModelForm_GetModelPath(v13 + 0x19, 0); /*0x41a7e0*/
                  ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], ModelPath, 0, 0, 1); /*0x41a7ec*/
                  v16 = (const char *)TESBipedModelForm_GetModelPath(v14, 1); /*0x41a7fb*/
                  ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v16, 0, 0, 1); /*0x41a807*/
                }
              }
              else if ( (v9 & 0x40000) != 0 ) /*0x41a816*/
              {
                if ( NthForm->member.type == kFormType_LeveledCreature ) /*0x41a820*/
                {
                  TESContainer_constr(&v52); /*0x41a826*/
                  HIDWORD(v46) = &v52; /*0x41a835*/
                  v54 = 0; /*0x41a838*/
                  LOWORD(v17) = Actor_GetLevel((Actor *)reference); /*0x41a843*/
                  TESLeveledList_CalcLeveledForm(&NthForm[1].member.refID, v17, 1); /*0x41a84c*/
                  NthForm = (TESForm *)TESContainer_GetNthForm(&v51, 0); /*0x41a860*/
                  v53 = 0xFFFFFFFF; /*0x41a862*/
                  TESContainer_destr(&v51); /*0x41a86d*/
                }
                v18 = (char *)OblivionDynamicCast( /*0x41a881*/
                                NthForm,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &TESNPC `RTTI Type Descriptor',
                                0);
                if ( v18 ) /*0x41a88b*/
                {
                  v19 = (const char **)sub_5234F0(v18, 1, 1); /*0x41a898*/
                  for ( i = v19; i; i = (const char **)i[1] ) /*0x41a89e*/
                  {
                    if ( !i[1] && !*i ) /*0x41a8a6*/
                      break; /*0x41a8a9*/
                    ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], *i, 0, 0, 1); /*0x41a8ba*/
                  }
                  BSSimpleList_Clear(v19); /*0x41a8c8*/
                  FormHeapFree((unsigned int)v19); /*0x41a8ce*/
                }
                v21 = (char *)OblivionDynamicCast( /*0x41a8e5*/
                                NthForm,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &TESCreature `RTTI Type Descriptor',
                                0);
                v49 = v21; /*0x41a8ef*/
                if ( v21 ) /*0x41a8f3*/
                {
                  v22 = v21; /*0x41a8f9*/
                  v23 = v21 + 0xAC; /*0x41a906*/
                  v24 = (const char *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v21 + 0x2B) + 0x14))((_DWORD *)v21 + 0x2B); /*0x41a912*/
                  ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v24, 0, 0, 1); /*0x41a91b*/
                  v25 = (char *)(*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v23 + 0x14))((_DWORD *)v22 + 0x2B); /*0x41a92f*/
                  Head = EmbeddedList_GetHead(v22 + 0xEC); /*0x41a93a*/
                  strcpy((char *)&v52.list.next, v25); /*0x41a93c*/
                  v27 = strrchr((const char *)&v52.list.next, 0x5C); /*0x41a958*/
                  v50 = v27; /*0x41a95f*/
                  v28 = Head; /*0x41a963*/
                  if ( v27 ) /*0x41a965*/
                  {
                    while ( v28 ) /*0x41a969*/
                    {
                      v27[1] = 0; /*0x41a96b*/
                      if ( *(_DWORD *)v28 ) /*0x41a96f*/
                      {
                        v29 = *(_DWORD *)v28 + strlen(*(const char **)v28) + 1 - *(_DWORD *)v28; /*0x41a985*/
                        v30 = (char *)&v52.list.data + 3; /*0x41a987*/
                        while ( *++v30 ) /*0x41a998*/
                          ; /*0x41a990*/
                        qmemcpy(v30, *(const void **)v28, v29); /*0x41a9a1*/
                        ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], (const char *)&v52.list.next, 0, 0, 1); /*0x41a9bb*/
                        v27 = v50; /*0x41a9c0*/
                      }
                      v28 = *((char **)v28 + 1); /*0x41a9c4*/
                    }
                  }
                  v32 = strrchr(v25, 0x5C); /*0x41a9cc*/
                  if ( v32 ) /*0x41a9d6*/
                  {
                    LODWORD(v46) = 8; /*0x41a9d8*/
                    if ( !_strnicmp(v32 + 1, "Skeleton", v46) ) /*0x41a9e3*/
                    {
                      v33 = BuildKFListForModelDirectory(v25, 0); /*0x41a9fc*/
                      for ( j = v33; j; j = *((char **)j + 1) ) /*0x41aa02*/
                      {
                        v35 = *(const char **)j; /*0x41aa04*/
                        if ( *(_DWORD *)j ) /*0x41aa04*/
                          ModelLoader_LoadKFModelNow(MEMORY[0xB33A1C], *(const char **)j); /*0x41aa11*/
                        FormHeapFree((unsigned int)v35); /*0x41aa17*/
                      }
                      BSSimpleList_Clear(v33); /*0x41aa28*/
                      FormHeapFree((unsigned int)v33); /*0x41aa2e*/
                    }
                  }
                  if ( TESAnimation_HasAnimations((_DWORD *)v49 + 0x25) ) /*0x41aa42*/
                  {
                    v50[1] = 0; /*0x41aa53*/
                    v36 = (char *)&v52.list.data + 3; /*0x41aa5b*/
                    while ( *++v36 ) /*0x41aa68*/
                      ; /*0x41aa60*/
                    strcpy(v36, "SpecialAnims");// CustomAnimSupport decode: SpecialAnims string use in magic/effect VFX path; not a native actor animation override map. /*0x41aa76*/
                    v38 = (_WORD *)((char *)&v52.list.data + 3); /*0x41aa91*/
                    do /*0x41aa9c*/
                    {
                      v39 = *((_BYTE *)v38 + 1); /*0x41aa94*/
                      v38 = (_WORD *)((char *)v38 + 1); /*0x41aa97*/
                    }
                    while ( v39 ); /*0x41aa9c*/
                    *v38 = *(_WORD *)SubStr; /*0x41aaab*/
                    v40 = strrchr((const char *)&v52.list.next, 0x5C); /*0x41aab8*/
                    for ( k = EmbeddedList_GetHead(v49 + 0x94); k; k = *((char **)k + 1) ) /*0x41aac3*/
                    {
                      v40[1] = 0; /*0x41aac5*/
                      if ( *(_DWORD *)k ) /*0x41aac9*/
                      {
                        v42 = *(_DWORD *)k + strlen(*(const char **)k) + 1 - *(_DWORD *)k; /*0x41aadf*/
                        v43 = (char *)&v52.list.data + 3; /*0x41aae1*/
                        while ( *++v43 ) /*0x41aaec*/
                          ; /*0x41aae4*/
                        qmemcpy(v43, *(const void **)k, v42); /*0x41aaf5*/
                        ModelLoader_LoadKFModelNow(MEMORY[0xB33A1C], (const char *)&v52.list.next); /*0x41ab09*/
                      }
                    }
                  }
                }
              }
            }
          }
          if ( !EffectSetting_IsUnkA4Positive(v48) && !EffectSetting_IsUnkA4Negative(v48) && (v48[0x16] & 0x40000) != 0 ) /*0x41ab37*/
            ++unk_B33518; /*0x41ab39*/
          EffectSetting_ExtendUnkA4(v48); /*0x41ab42*/
          v6 = v49; /*0x41ab47*/
        }
        v45 = *((_DWORD *)v6 + 2); /*0x41ab4b*/
        if ( !v45 ) /*0x41ab50*/
          break; /*0x41ab50*/
        v6 = (char *)(v45 - 4); /*0x41ab52*/
        v49 = (char *)(v45 - 4); /*0x41ab57*/
      }
      while ( v45 != 4 ); /*0x41ab5b*/
    }
  }
}
