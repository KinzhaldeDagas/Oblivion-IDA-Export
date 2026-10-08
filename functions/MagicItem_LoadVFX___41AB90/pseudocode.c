// MagicItem VFX resolve/apply path. Ensures referenced spell art and effect-item models are loaded, reports missing spell art, and applies cached model handles to effect settings.
void __thiscall MagicItem_ResolveLoadedVFXModels(char *this)
{
  EffectSetting *FXEffect; // esi
  __int16 v3; // bx
  __int16 v4; // ax
  unsigned int v5; // eax
  __int64 v6; // rax
  volatile LONG *IsModelLoaded; // eax
  char *v8; // edi
  signed int *v9; // esi
  TESForm *NthForm; // edi
  int v11; // eax
  signed int v12; // esi
  char *v13; // eax
  char *v14; // esi
  __int64 v15; // rax
  volatile LONG *v16; // eax
  const char **v17; // eax
  const char **v18; // esi
  int ModelPath; // eax
  int v20; // edx
  volatile LONG *v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  char *v25; // eax
  int v26; // edx
  int *v27; // ebp
  int *i; // esi
  volatile LONG *v29; // eax
  char *v30; // eax
  __int64 v31; // rax
  unsigned int v32; // esi
  int v33; // edi
  const char *v34; // edi
  char *Head; // esi
  char *v36; // ebx
  char *v37; // ebp
  unsigned int v38; // eax
  char *v39; // edi
  volatile LONG *v41; // eax
  char *v42; // eax
  char *v43; // ebx
  char *j; // edi
  const char *v45; // esi
  int v46; // ebp
  char *v47; // eax
  char *v49; // edi
  char *k; // ebp
  unsigned int v52; // eax
  char *v53; // edi
  int v55; // esi
  int v56; // eax
  size_t v57; // [esp-8h] [ebp-158h]
  char *m_data; // [esp-4h] [ebp-154h]
  int v59; // [esp+10h] [ebp-140h]
  __int16 v60; // [esp+14h] [ebp-13Ch]
  char *v61; // [esp+18h] [ebp-138h]
  char *v62; // [esp+1Ch] [ebp-134h]
  char *v63; // [esp+20h] [ebp-130h]
  BSStringT v64; // [esp+24h] [ebp-12Ch] BYREF
  char v65[16]; // [esp+2Ch] [ebp-124h] BYREF
  unsigned int v66; // [esp+148h] [ebp-8h]
  int v67; // [esp+14Ch] [ebp-4h]

  FXEffect = MagicItem_GetFXEffect(this, 0); /*0x41abd6*/
  if ( !sub_419E50(this) ) /*0x41abd8*/
  {
    MagicItem_LoadVFXModels(this, 1); /*0x41abe5*/
    MagicItem_UnloadVFXModels(this, 1); /*0x41abee*/
    goto LABEL_3; /*0x41abee*/
  }
  if ( FXEffect ) /*0x41abfa*/
  {
    v3 = 0; /*0x41ac02*/
    if ( EffectSetting_IsUnkA0Negative(FXEffect) ) /*0x41ac04*/
    {
      EffectSetting_AbsUnkA0((signed int *)FXEffect); /*0x41ac0f*/
      v3 = v4; /*0x41ac14*/
    }
    LOWORD(v5) = FXEffect->model.nifModel.m_dataLen; /*0x41ac16*/
    if ( (_WORD)v5 == 0xFFFF ) /*0x41ac1e*/
      v5 = strlen(FXEffect->model.nifModel.m_data); /*0x41ac23*/
    else
      v5 = (unsigned __int16)v5; /*0x41ac33*/
    if ( v5 ) /*0x41ac38*/
    {
      v6 = ((__int64 (__thiscall *)(TESModel *))FXEffect->model.vtbl->GetModelPath)(&FXEffect->model); /*0x41ac43*/
      IsModelLoaded = (volatile LONG *)ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], SHIDWORD(v6), v6); /*0x41ac4c*/
      if ( IsModelLoaded ) /*0x41ac53*/
        sub_434C00(IsModelLoaded, v3); /*0x41ac58*/
    }
    else if ( FXEffect->effectCode != 0x46464553 ) /*0x41ac69*/
    {
      m_data = EffectSetting_GetName((int)FXEffect, &v64)->m_data; /*0x41ac79*/
      v67 = 0; /*0x41ac7f*/
      PrintError("The %s effect has no associated spell art.", m_data); /*0x41ac8a*/
      v67 = 0xFFFFFFFF; /*0x41ac94*/
      FormHeapFree((unsigned int)v64.m_data); /*0x41ac9f*/
    }
  }
  if ( this ) /*0x41aca9*/
    v8 = this + 0xC; /*0x41acab*/
  else
    v8 = 0; /*0x41acb0*/
  v61 = v8; /*0x41acb6*/
  if ( (*((_DWORD *)v8 + 2) || *((_DWORD *)v8 + 1)) && v8 ) /*0x41acc8*/
  {
    while ( 1 ) /*0x41acd7*/
    {
      v9 = *(signed int **)(*((_DWORD *)v8 + 1) + 0x1C); /*0x41acd7*/
      NthForm = TESForm_LookupByFormID(v9[0x18]); /*0x41ace8*/
      if ( EffectSetting_IsUnkA4Negative(v9) ) /*0x41acea*/
      {
        EffectSetting_AbsUnkA4(v9); /*0x41acf9*/
        v60 = v11; /*0x41ad00*/
        if ( v11 ) /*0x41ad04*/
        {
          if ( NthForm ) /*0x41ad0c*/
          {
            v12 = v9[0x16]; /*0x41ad12*/
            if ( (v12 & 0x10000) != 0 ) /*0x41ad1d*/
            {
              v13 = (char *)OblivionDynamicCast( /*0x41ad2e*/
                              NthForm,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectWEAP `RTTI Type Descriptor',
                              0);
              if ( v13 ) /*0x41ad38*/
              {
                v14 = v13 + 0x30; /*0x41ad3e*/
                if ( OB_CompactString_Length_010201A0(v13 + 0x30) ) /*0x41ad43*/
                {
                  v15 = ((__int64 (__thiscall *)(char *))*(_DWORD *)(*(_DWORD *)v14 + 0x14))(v14); /*0x41ad57*/
                  v16 = (volatile LONG *)ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], SHIDWORD(v15), v15); /*0x41ad60*/
                  if ( v16 ) /*0x41ad67*/
                    goto LABEL_30; /*0x41ad67*/
                }
              }
            }
            else if ( (v12 & 0x20000) != 0 ) /*0x41ad86*/
            {
              v17 = (const char **)OblivionDynamicCast( /*0x41ad97*/
                                     NthForm,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESObjectARMO `RTTI Type Descriptor',
                                     0);
              if ( v17 ) /*0x41ada1*/
              {
                v18 = v17 + 0x19; /*0x41ada7*/
                ModelPath = TESBipedModelForm_GetModelPath(v17 + 0x19, 0); /*0x41adae*/
                v21 = (volatile LONG *)ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], v20, ModelPath); /*0x41adba*/
                if ( v21 ) /*0x41adc1*/
                  sub_434C00(v21, v60); /*0x41adca*/
                v22 = TESBipedModelForm_GetModelPath(v18, 1); /*0x41add3*/
                v16 = (volatile LONG *)ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], v23, v22); /*0x41addf*/
                if ( v16 ) /*0x41ade6*/
LABEL_30:
                  sub_434C00(v16, v60); /*0x41ad6d*/
              }
            }
            else if ( (v12 & 0x40000) != 0 ) /*0x41ae04*/
            {
              if ( NthForm->member.type == kFormType_LeveledCreature ) /*0x41ae0e*/
              {
                TESContainer_constr((TESContainer *)v65); /*0x41ae14*/
                HIDWORD(v57) = v65; /*0x41ae1d*/
                v67 = 1; /*0x41ae26*/
                LOWORD(v24) = Actor_GetLevel((Actor *)reference); /*0x41ae31*/
                TESLeveledList_CalcLeveledForm(&NthForm[1].member.refID, v24, 1); /*0x41ae3a*/
                NthForm = (TESForm *)TESContainer_GetNthForm(&v64.m_dataLen, 0); /*0x41ae4e*/
                v66 = 0xFFFFFFFF; /*0x41ae50*/
                TESContainer_destr(&v64.m_dataLen); /*0x41ae5b*/
              }
              v25 = (char *)OblivionDynamicCast( /*0x41ae6f*/
                              NthForm,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESNPC `RTTI Type Descriptor',
                              0);
              if ( v25 ) /*0x41ae79*/
              {
                v27 = sub_5234F0(v25, 1, 1); /*0x41ae86*/
                for ( i = v27; i; i = (int *)i[1] ) /*0x41ae8c*/
                {
                  if ( !i[1] && !*i ) /*0x41ae98*/
                    break; /*0x41ae9b*/
                  v29 = (volatile LONG *)ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], v26, *i); /*0x41aea6*/
                  if ( v29 ) /*0x41aead*/
                    sub_434C00(v29, v59); /*0x41aeb2*/
                }
                BSSimpleList_Clear(v27); /*0x41aec0*/
                FormHeapFree((unsigned int)v27); /*0x41aec6*/
              }
              v30 = (char *)OblivionDynamicCast( /*0x41aedd*/
                              NthForm,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESCreature `RTTI Type Descriptor',
                              0);
              v62 = v30; /*0x41aee7*/
              if ( v30 ) /*0x41aeeb*/
              {
                v31 = ((__int64 (__thiscall *)(char *))*(_DWORD *)(*((_DWORD *)v30 + 0x2B) + 0x14))(v30 + 0xAC); /*0x41af02*/
                v32 = ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], SHIDWORD(v31), v31); /*0x41af10*/
                if ( v32 ) /*0x41af14*/
                {
                  v33 = v59; /*0x41af1a*/
                  if ( v59 > 0 ) /*0x41af20*/
                  {
                    do /*0x41af36*/
                    {
                      InterlockedIncrement((volatile LONG *)(v32 + 4)); /*0x41af31*/
                      --v33; /*0x41af33*/
                    }
                    while ( v33 ); /*0x41af36*/
                  }
                  v34 = *(const char **)v32; /*0x41af38*/
                  v63 = *(char **)v32; /*0x41af44*/
                  Head = EmbeddedList_GetHead(v62 + 0xEC); /*0x41af51*/
                  strcpy(&v65[0xC], v34); /*0x41af53*/
                  v36 = strrchr(&v65[0xC], 0x5C); /*0x41af6f*/
                  v61 = v36; /*0x41af76*/
                  v37 = Head; /*0x41af7a*/
                  if ( v36 ) /*0x41af7c*/
                  {
                    while ( v37 ) /*0x41af82*/
                    {
                      v36[1] = 0; /*0x41af84*/
                      if ( *(_DWORD *)v37 ) /*0x41af88*/
                      {
                        v38 = *(_DWORD *)v37 + strlen(*(const char **)v37) + 1 - *(_DWORD *)v37; /*0x41af9e*/
                        v39 = &v65[0xB]; /*0x41afa0*/
                        while ( *++v39 ) /*0x41afab*/
                          ; /*0x41afa3*/
                        qmemcpy(v39, *(const void **)v37, v38); /*0x41afb4*/
                        v41 = (volatile LONG *)ModelLoader_IsModelLoaded__( /*0x41afc8*/
                                                 MEMORY[0xB33A1C],
                                                 (int)&v65[0xC],
                                                 (int)&v65[0xC]);
                        if ( v41 ) /*0x41afcf*/
                          sub_434C00(v41, v59); /*0x41afd8*/
                      }
                      v37 = *((char **)v37 + 1); /*0x41afdd*/
                    }
                  }
                  v42 = strrchr(v63, 0x5C); /*0x41afe9*/
                  if ( v42 ) /*0x41aff3*/
                  {
                    LODWORD(v57) = 8; /*0x41aff9*/
                    if ( !_strnicmp(v42 + 1, "Skeleton", v57) ) /*0x41b004*/
                    {
                      v43 = BuildKFListForModelDirectory(v63, 0); /*0x41b021*/
                      for ( j = v43; j; j = *((char **)j + 1) ) /*0x41b027*/
                      {
                        v45 = *(const char **)j; /*0x41b030*/
                        if ( *(_DWORD *)j ) /*0x41b030*/
                        {
                          if ( v59 > 0 ) /*0x41b03b*/
                          {
                            v46 = v59; /*0x41b03d*/
                            do /*0x41b050*/
                            {
                              ModelLoader_LoadKFModelNow(MEMORY[0xB33A1C], v45); /*0x41b048*/
                              --v46; /*0x41b04d*/
                            }
                            while ( v46 ); /*0x41b050*/
                          }
                        }
                        FormHeapFree((unsigned int)v45); /*0x41b053*/
                      }
                      BSSimpleList_Clear(v43); /*0x41b064*/
                      FormHeapFree((unsigned int)v43); /*0x41b06a*/
                      v36 = v61; /*0x41b06f*/
                    }
                  }
                  if ( TESAnimation_HasAnimations((_DWORD *)v62 + 0x25) ) /*0x41b082*/
                  {
                    v36[1] = 0; /*0x41b093*/
                    v47 = &v65[0xB]; /*0x41b097*/
                    while ( *++v47 ) /*0x41b0a8*/
                      ; /*0x41b0a0*/
                    strcpy(v47, "SpecialAnims");// CustomAnimSupport decode: SpecialAnims string use in magic/effect VFX path; effect/model resource handling, not ActorAnimData install. /*0x41b0b6*/
                    v49 = &v65[0xB]; /*0x41b0d1*/
                    while ( *++v49 ) /*0x41b0dc*/
                      ; /*0x41b0d4*/
                    *(_WORD *)v49 = *(_WORD *)SubStr; /*0x41b0eb*/
                    v61 = strrchr(&v65[0xC], 0x5C); /*0x41b0f8*/
                    for ( k = EmbeddedList_GetHead(v62 + 0x94); k; k = *((char **)k + 1) ) /*0x41b105*/
                    {
                      v61[1] = 0; /*0x41b114*/
                      if ( *(_DWORD *)k ) /*0x41b118*/
                      {
                        v52 = *(_DWORD *)k + strlen(*(const char **)k) + 1 - *(_DWORD *)k; /*0x41b12e*/
                        v53 = &v65[0xB]; /*0x41b130*/
                        while ( *++v53 ) /*0x41b13b*/
                          ; /*0x41b133*/
                        qmemcpy(v53, *(const void **)k, v52); /*0x41b144*/
                        if ( v59 > 0 ) /*0x41b14f*/
                        {
                          v55 = v59; /*0x41b151*/
                          do /*0x41b166*/
                          {
                            ModelLoader_LoadKFModelNow(MEMORY[0xB33A1C], &v65[0xC]); /*0x41b15e*/
                            --v55; /*0x41b163*/
                          }
                          while ( v55 ); /*0x41b166*/
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v56 = *((_DWORD *)v61 + 2); /*0x41b16f*/
      if ( !v56 ) /*0x41b178*/
        break; /*0x41b178*/
      v61 = (char *)(v56 - 4); /*0x41b17d*/
      if ( v56 == 4 ) /*0x41b181*/
        break; /*0x41b181*/
      v8 = (char *)(v56 - 4); /*0x41acd0*/
    }
  }
LABEL_3:
  MagicItem_LoadVFX___::Done(); /*0x41abf3*/
}
