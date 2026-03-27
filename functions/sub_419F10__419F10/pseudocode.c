char __thiscall sub_419F10(char *this, char a2)
{
  unsigned int v3; // eax
  int FXEffect; // esi
  int v5; // eax
  char *v6; // edi
  _DWORD *v7; // eax
  TESForm *NthForm; // edi
  int v9; // eax
  char *v10; // eax
  char *v11; // esi
  int v12; // eax
  _WORD *v13; // eax
  _WORD *v14; // esi
  int ModelPath; // eax
  int v16; // eax
  int Level; // eax
  char *v18; // eax
  _DWORD *v19; // ebp
  _DWORD *i; // esi
  char *v21; // eax
  char *v22; // edi
  char *v23; // esi
  int v24; // eax
  char *v25; // ebx
  int v26; // esi
  char *v27; // ecx
  int v28; // ebp
  unsigned int v29; // eax
  char *v30; // edi
  char *v32; // eax
  unsigned int *v33; // ebp
  unsigned int *j; // esi
  unsigned int v35; // edi
  char *v36; // eax
  _WORD *v38; // edi
  char v39; // al
  int k; // ebp
  unsigned int v41; // eax
  char *v42; // edi
  bool v44; // zf
  size_t v46; // [esp-4h] [ebp-150h]
  bool v47; // [esp+17h] [ebp-135h]
  char *v48; // [esp+18h] [ebp-134h]
  char *v49; // [esp+18h] [ebp-134h]
  char *v50; // [esp+1Ch] [ebp-130h]
  _DWORD *v51; // [esp+20h] [ebp-12Ch]
  char *v52; // [esp+24h] [ebp-128h]
  TESContainer v53; // [esp+28h] [ebp-124h] BYREF
  char Str[260]; // [esp+38h] [ebp-114h] BYREF
  unsigned int v55; // [esp+148h] [ebp-4h]

  LOBYTE(v3) = sub_419D90(this);
  if ( (_BYTE)v3 )
  {
    FXEffect = MagicItem_GetFXEffect(this, 0);
    LOBYTE(v3) = sub_419E50(this);
    v47 = (_BYTE)v3 != 0;
    if ( FXEffect )
    {
      LOWORD(v3) = *(_WORD *)(FXEffect + 0x20);
      if ( (_WORD)v3 == 0xFFFF )
        v3 = strlen(*(const char **)(FXEffect + 0x1C));
      else
        v3 = (unsigned __int16)v3;
      if ( v3 )
      {
        if ( !v47 )
        {
          v5 = (*(int (__thiscall **)(int))(*(_DWORD *)(FXEffect + 0x18) + 0x14))(FXEffect + 0x18);
          QueuedModelLoader_RemoveModel(v5, a2, 1);
        }
        LOBYTE(v3) = EffectSetting_ReduceUnkA0((_DWORD *)FXEffect);
      }
    }
    if ( this )
      v6 = this + 0xC;
    else
      v6 = 0;
    v50 = v6;
    if ( *((_DWORD *)v6 + 2) || *((_DWORD *)v6 + 1) )
    {
      if ( v6 )
      {
        while ( 1 )
        {
          v7 = *(_DWORD **)(*((_DWORD *)v6 + 1) + 0x1C);
          v51 = v7;
          if ( (v7[0x16] & 0x70000) != 0 )
          {
            if ( !v47 )
            {
              NthForm = TESForm_LookupByFormID(v7[0x18]);
              if ( NthForm )
              {
                v9 = v51[0x16];
                if ( (v9 & 0x10000) != 0 )
                {
                  v10 = (char *)OblivionDynamicCast(
                                  NthForm,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESObjectWEAP `RTTI Type Descriptor',
                                  0);
                  if ( v10 )
                  {
                    v11 = v10 + 0x30;
                    if ( sub_449190((int)(v10 + 0x30)) )
                    {
                      v12 = (*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 0x14))(v11);
                      QueuedModelLoader_RemoveModel(v12, a2, 1);
                    }
                  }
                }
                else if ( (v9 & 0x20000) != 0 )
                {
                  v13 = OblivionDynamicCast(
                          NthForm,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectARMO `RTTI Type Descriptor',
                          0);
                  if ( v13 )
                  {
                    v14 = v13 + 0x32;
                    ModelPath = TESBipedModelForm_GetModelPath(v13 + 0x32, 0);
                    QueuedModelLoader_RemoveModel(ModelPath, a2, 1);
                    v16 = TESBipedModelForm_GetModelPath(v14, 1);
                    QueuedModelLoader_RemoveModel(v16, a2, 1);
                  }
                }
                else if ( (v9 & 0x40000) != 0 )
                {
                  if ( NthForm->member.type == kFormType_LeveledCreature )
                  {
                    TESContainer_constr(&v53);
                    v55 = 0;
                    Level = Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, 1);
                    TESLeveledList_CalcLeveledForm(&NthForm[1].member.refID, Level, (int)&v53);
                    NthForm = (TESForm *)TESContainer_GetNthForm(&v53, 0);
                    v55 = 0xFFFFFFFF;
                    TESContainer_destr(&v53);
                  }
                  v18 = (char *)OblivionDynamicCast(
                                  NthForm,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESNPC `RTTI Type Descriptor',
                                  0);
                  if ( v18 )
                  {
                    v19 = sub_5234F0(v18, 1, 1);
                    for ( i = v19; i; i = (_DWORD *)i[1] )
                    {
                      if ( !i[1] && !*i )
                        break;
                      QueuedModelLoader_RemoveModel(*i, a2, 1);
                    }
                    BSSimpleList_Clear(v19);
                    FormHeapFree((unsigned int)v19);
                  }
                  v21 = (char *)OblivionDynamicCast(
                                  NthForm,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESCreature `RTTI Type Descriptor',
                                  0);
                  v52 = v21;
                  if ( v21 )
                  {
                    v22 = v21;
                    v23 = v21 + 0xAC;
                    v24 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v21 + 0x2B) + 0x14))((_DWORD *)v21 + 0x2B);
                    QueuedModelLoader_RemoveModel(v24, a2, 1);
                    v25 = (char *)(*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v23 + 0x14))((_DWORD *)v22 + 0x2B);
                    v26 = sub_6899C0(v22 + 0xEC);
                    strcpy(Str, v25);
                    v27 = strrchr(Str, 0x5C);
                    v48 = v27;
                    v28 = v26;
                    if ( v27 )
                    {
                      while ( v28 )
                      {
                        v27[1] = 0;
                        if ( *(_DWORD *)v28 )
                        {
                          v29 = *(_DWORD *)v28 + strlen(*(const char **)v28) + 1 - *(_DWORD *)v28;
                          v30 = (char *)&v53.list.next + 3;
                          while ( *++v30 )
                            ;
                          qmemcpy(v30, *(const void **)v28, v29);
                          QueuedModelLoader_RemoveModel(Str, a2, 1);
                          v27 = v48;
                        }
                        v28 = *(_DWORD *)(v28 + 4);
                      }
                    }
                    v32 = strrchr(v25, 0x5C);
                    if ( v32 )
                    {
                      LODWORD(v46) = 8;
                      if ( !_strnicmp(v32 + 1, "Skeleton", v46) )
                      {
                        v33 = (unsigned int *)sub_435830(v25, 0);
                        for ( j = v33; j; j = (unsigned int *)j[1] )
                        {
                          v35 = *j;
                          if ( *j )
                            sub_438540(ModelLoaderPtr, v35, a2);
                          FormHeapFree(v35);
                        }
                        BSSimpleList_Clear(v33);
                        FormHeapFree((unsigned int)v33);
                      }
                    }
                    if ( TESAnimation_HasAnimations((_DWORD *)v52 + 0x25) )
                    {
                      v48[1] = 0;
                      v36 = (char *)&v53.list.next + 3;
                      while ( *++v36 )
                        ;
                      strcpy(v36, "SpecialAnims");
                      v38 = (_WORD *)((char *)&v53.list.next + 3);
                      do
                      {
                        v39 = *((_BYTE *)v38 + 1);
                        v38 = (_WORD *)((char *)v38 + 1);
                      }
                      while ( v39 );
                      *v38 = *(_WORD *)SubStr;
                      v49 = strrchr(Str, 0x5C);
                      for ( k = sub_6899C0(v52 + 0x94); k; k = *(_DWORD *)(k + 4) )
                      {
                        v49[1] = 0;
                        if ( *(_DWORD *)k )
                        {
                          v41 = *(_DWORD *)k + strlen(*(const char **)k) + 1 - *(_DWORD *)k;
                          v42 = (char *)&v53.list.next + 3;
                          while ( *++v42 )
                            ;
                          qmemcpy(v42, *(const void **)k, v41);
                          sub_438540(ModelLoaderPtr, (int)Str, a2);
                        }
                      }
                    }
                  }
                }
              }
            }
            EffectSetting_ReduceUnkA4(v51);
            if ( !EffectSetting_IsUnkA4Positive(v51)
              && !EffectSetting_IsUnkA4Negative(v51)
              && (v51[0x16] & 0x40000) != 0 )
            {
              --dword_B33518;
            }
          }
          v3 = *((_DWORD *)v50 + 2);
          if ( !v3 )
            break;
          v44 = v3 == 4;
          v3 -= 4;
          v50 = (char *)v3;
          if ( v44 )
            break;
          v6 = (char *)v3;
        }
      }
    }
  }
  return v3;
}
