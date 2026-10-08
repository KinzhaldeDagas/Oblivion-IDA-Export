// MagicItem VFX model unload path. Walks spell art and effect-item VFX model references (weapons, armor, NPC/creature models, etc.) and removes them from the queued model loader/cache.
char __thiscall MagicItem_UnloadVFXModels(char *this, char a2)
{
  unsigned int v3; // eax
  EffectSetting *FXEffect; // esi
  int v5; // eax
  char *v6; // edi
  char *v7; // eax
  TESForm *NthForm; // edi
  int v9; // eax
  char *v10; // eax
  char *v11; // esi
  int v12; // eax
  const char **v13; // eax
  const char **v14; // esi
  int ModelPath; // eax
  int v16; // eax
  int v17; // eax
  char *v18; // eax
  int *v19; // ebp
  int *i; // esi
  char *v21; // eax
  char *v22; // edi
  char *v23; // esi
  int v24; // eax
  char *v25; // ebx
  char *Head; // esi
  char *v27; // ecx
  char *v28; // ebp
  unsigned int v29; // eax
  char *v30; // edi
  char *v32; // eax
  char *v33; // ebp
  unsigned int *v34; // esi
  unsigned int v35; // edi
  char *v36; // eax
  char *v38; // edi
  char *j; // ebp
  unsigned int v41; // eax
  char *v42; // edi
  bool v44; // zf
  size_t v46; // [esp-8h] [ebp-154h]
  char *v47; // [esp+14h] [ebp-138h]
  char *v48; // [esp+1Ch] [ebp-130h]
  char *v49; // [esp+20h] [ebp-12Ch]
  int v50; // [esp+24h] [ebp-128h] BYREF
  char v51[16]; // [esp+28h] [ebp-124h] BYREF
  unsigned int v52; // [esp+144h] [ebp-8h]
  int v53; // [esp+148h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+14Ch] [ebp+0h]

  LOBYTE(v3) = sub_419D90(this); /*0x419f4d*/
  if ( (_BYTE)v3 ) /*0x419f54*/
  {
    FXEffect = MagicItem_GetFXEffect(this, 0); /*0x419f65*/
    LOBYTE(v3) = sub_419E50(this); /*0x419f6c*/
    HIBYTE(v47) = (_BYTE)v3 != 0; /*0x419f75*/
    if ( FXEffect ) /*0x419f7c*/
    {
      LOWORD(v3) = FXEffect->model.nifModel.m_dataLen; /*0x419f7e*/
      if ( (_WORD)v3 == 0xFFFF ) /*0x419f86*/
        v3 = strlen(FXEffect->model.nifModel.m_data); /*0x419f8b*/
      else
        v3 = (unsigned __int16)v3; /*0x419f9d*/
      if ( v3 ) /*0x419fa2*/
      {
        if ( !HIBYTE(v47) ) /*0x419fa9*/
        {
          v5 = (int)FXEffect->model.vtbl->GetModelPath(&FXEffect->model); /*0x419fbe*/
          QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v5, a2, 1); /*0x419fc7*/
        }
        LOBYTE(v3) = EffectSetting_ReduceUnkA0(FXEffect); /*0x419fce*/
      }
    }
    if ( this ) /*0x419fd5*/
      v6 = this + 0xC; /*0x419fd7*/
    else
      v6 = 0; /*0x419fdc*/
    v48 = v6; /*0x419fe2*/
    if ( *((_DWORD *)v6 + 2) || *((_DWORD *)v6 + 1) ) /*0x419fe8*/
    {
      if ( v6 ) /*0x419ff4*/
      {
        while ( 1 ) /*0x41a007*/
        {
          v7 = *(char **)(*((_DWORD *)v6 + 1) + 0x1C); /*0x41a007*/
          v49 = v7; /*0x41a011*/
          if ( (*((_DWORD *)v7 + 0x16) & 0x70000) != 0 ) /*0x41a015*/
          {
            if ( !HIBYTE(v47) ) /*0x41a020*/
            {
              NthForm = TESForm_LookupByFormID(*((_DWORD *)v7 + 0x18)); /*0x41a031*/
              if ( NthForm ) /*0x41a038*/
              {
                v9 = *((_DWORD *)v49 + 0x16); /*0x41a042*/
                if ( (v9 & 0x10000) != 0 ) /*0x41a04d*/
                {
                  v10 = (char *)OblivionDynamicCast( /*0x41a05e*/
                                  NthForm,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESObjectWEAP `RTTI Type Descriptor',
                                  0);
                  if ( v10 ) /*0x41a068*/
                  {
                    v11 = v10 + 0x30; /*0x41a06e*/
                    if ( OB_CompactString_Length_010201A0(v10 + 0x30) ) /*0x41a073*/
                    {
                      v12 = (*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 0x14))(v11); /*0x41a091*/
                      QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v12, a2, 1); /*0x41a09a*/
                    }
                  }
                }
                else if ( (v9 & 0x20000) != 0 ) /*0x41a0ac*/
                {
                  v13 = (const char **)OblivionDynamicCast( /*0x41a0bd*/
                                         NthForm,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESObjectARMO `RTTI Type Descriptor',
                                         0);
                  if ( v13 ) /*0x41a0c7*/
                  {
                    v14 = v13 + 0x19; /*0x41a0d6*/
                    ModelPath = TESBipedModelForm_GetModelPath(v13 + 0x19, 0); /*0x41a0de*/
                    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], ModelPath, a2, 1); /*0x41a0ea*/
                    v16 = TESBipedModelForm_GetModelPath(v14, 1); /*0x41a0f6*/
                    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v16, a2, 1); /*0x41a102*/
                  }
                }
                else if ( (v9 & 0x40000) != 0 ) /*0x41a111*/
                {
                  if ( NthForm->member.type == kFormType_LeveledCreature ) /*0x41a11b*/
                  {
                    TESContainer_constr((TESContainer *)v51); /*0x41a121*/
                    HIDWORD(v46) = v51; /*0x41a130*/
                    v53 = 0; /*0x41a133*/
                    LOWORD(v17) = Actor_GetLevel((Actor *)reference); /*0x41a13e*/
                    TESLeveledList_CalcLeveledForm(&NthForm[1].member.refID, v17, 1); /*0x41a147*/
                    NthForm = (TESForm *)TESContainer_GetNthForm(&v50, 0); /*0x41a15b*/
                    v52 = 0xFFFFFFFF; /*0x41a15d*/
                    TESContainer_destr(&v50); /*0x41a168*/
                  }
                  v18 = (char *)OblivionDynamicCast( /*0x41a17c*/
                                  NthForm,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESNPC `RTTI Type Descriptor',
                                  0);
                  if ( v18 ) /*0x41a186*/
                  {
                    v19 = sub_5234F0(v18, 1, 1); /*0x41a193*/
                    for ( i = v19; i; i = (int *)i[1] ) /*0x41a199*/
                    {
                      if ( !i[1] && !*i ) /*0x41a1a8*/
                        break; /*0x41a1ab*/
                      QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], *i, (char)retaddr, 1); /*0x41a1b9*/
                    }
                    BSSimpleList_Clear(v19); /*0x41a1c7*/
                    FormHeapFree((unsigned int)v19); /*0x41a1cd*/
                  }
                  v21 = (char *)OblivionDynamicCast( /*0x41a1e4*/
                                  NthForm,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESCreature `RTTI Type Descriptor',
                                  0);
                  v49 = v21; /*0x41a1ee*/
                  if ( v21 ) /*0x41a1f2*/
                  {
                    v22 = v21; /*0x41a1ff*/
                    v23 = v21 + 0xAC; /*0x41a20a*/
                    v24 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v21 + 0x2B) + 0x14))((_DWORD *)v21 + 0x2B); /*0x41a215*/
                    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v24, (char)retaddr, 1); /*0x41a21e*/
                    v25 = (char *)(*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v23 + 0x14))((_DWORD *)v22 + 0x2B); /*0x41a232*/
                    Head = EmbeddedList_GetHead(v22 + 0xEC); /*0x41a23d*/
                    strcpy(&v51[0xC], v25); /*0x41a23f*/
                    v27 = strrchr(&v51[0xC], 0x5C); /*0x41a25b*/
                    v47 = v27; /*0x41a262*/
                    v28 = Head; /*0x41a266*/
                    if ( v27 ) /*0x41a268*/
                    {
                      while ( v28 ) /*0x41a272*/
                      {
                        v27[1] = 0; /*0x41a274*/
                        if ( *(_DWORD *)v28 ) /*0x41a278*/
                        {
                          v29 = *(_DWORD *)v28 + strlen(*(const char **)v28) + 1 - *(_DWORD *)v28; /*0x41a28e*/
                          v30 = &v51[0xB]; /*0x41a290*/
                          while ( *++v30 ) /*0x41a29b*/
                            ; /*0x41a293*/
                          qmemcpy(v30, *(const void **)v28, v29); /*0x41a2ab*/
                          QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)&v51[0xC], (char)retaddr, 1); /*0x41a2c2*/
                          v27 = v47; /*0x41a2c7*/
                        }
                        v28 = *((char **)v28 + 1); /*0x41a2cb*/
                      }
                    }
                    v32 = strrchr(v25, 0x5C); /*0x41a2d3*/
                    if ( v32 ) /*0x41a2dd*/
                    {
                      LODWORD(v46) = 8; /*0x41a2df*/
                      if ( !_strnicmp(v32 + 1, "Skeleton", v46) ) /*0x41a2ea*/
                      {
                        v33 = BuildKFListForModelDirectory(v25, 0); /*0x41a303*/
                        v34 = (unsigned int *)v33; /*0x41a307*/
                        if ( v33 ) /*0x41a309*/
                        {
                          do /*0x41a333*/
                          {
                            v35 = *v34; /*0x41a312*/
                            if ( *v34 ) /*0x41a312*/
                              ModelLoader_ReleaseModelPath(MEMORY[0xB33A1C], v35, (char)retaddr); /*0x41a320*/
                            FormHeapFree(v35); /*0x41a326*/
                            v34 = (unsigned int *)v34[1]; /*0x41a32b*/
                          }
                          while ( v34 ); /*0x41a333*/
                        }
                        BSSimpleList_Clear(v33); /*0x41a337*/
                        FormHeapFree((unsigned int)v33); /*0x41a33d*/
                      }
                    }
                    if ( TESAnimation_HasAnimations((_DWORD *)v49 + 0x25) ) /*0x41a351*/
                    {
                      v47[1] = 0; /*0x41a366*/
                      v36 = &v51[0xB]; /*0x41a36a*/
                      while ( *++v36 ) /*0x41a378*/
                        ; /*0x41a370*/
                      strcpy(v36, "SpecialAnims");// CustomAnimSupport decode: SpecialAnims string use in magic/effect VFX path; not an actor ActorAnimData/KFFZ install path. /*0x41a386*/
                      v38 = &v51[0xB]; /*0x41a3a1*/
                      while ( *++v38 ) /*0x41a3ac*/
                        ; /*0x41a3a4*/
                      *(_WORD *)v38 = *(_WORD *)SubStr; /*0x41a3bc*/
                      v47 = strrchr(&v51[0xC], 0x5C); /*0x41a3c9*/
                      for ( j = EmbeddedList_GetHead(v49 + 0x94); j; j = *((char **)j + 1) ) /*0x41a3d6*/
                      {
                        v47[1] = 0; /*0x41a3e4*/
                        if ( *(_DWORD *)j ) /*0x41a3e8*/
                        {
                          v41 = *(_DWORD *)j + strlen(*(const char **)j) + 1 - *(_DWORD *)j; /*0x41a3fe*/
                          v42 = &v51[0xB]; /*0x41a400*/
                          while ( *++v42 ) /*0x41a40b*/
                            ; /*0x41a403*/
                          qmemcpy(v42, *(const void **)j, v41); /*0x41a414*/
                          ModelLoader_ReleaseModelPath(MEMORY[0xB33A1C], (int)&v51[0xC], (char)retaddr); /*0x41a429*/
                        }
                      }
                    }
                  }
                }
              }
            }
            EffectSetting_ReduceUnkA4(v49); /*0x41a43b*/
            if ( !EffectSetting_IsUnkA4Positive(v49) /*0x41a45e*/
              && !EffectSetting_IsUnkA4Negative(v49)
              && (*((_DWORD *)v49 + 0x16) & 0x40000) != 0 )
            {
              --unk_B33518; /*0x41a460*/
            }
          }
          v3 = *((_DWORD *)v48 + 2); /*0x41a46b*/
          if ( !v3 ) /*0x41a470*/
            break; /*0x41a470*/
          v44 = v3 == 4; /*0x41a472*/
          v3 -= 4; /*0x41a472*/
          v48 = (char *)v3; /*0x41a475*/
          if ( v44 ) /*0x41a479*/
            break; /*0x41a479*/
          v6 = (char *)v3; /*0x41a000*/
        }
      }
    }
  }
  return v3; /*0x41a47f*/
}
