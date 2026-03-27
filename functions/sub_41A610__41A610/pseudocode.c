// positive sp value has been detected, the output may be wrong!
void __thiscall sub_41A610(char *this, char a2)
{
  int FXEffect; // esi
  unsigned int v4; // eax
  const char *v5; // eax
  char *v6; // edi
  int v7; // eax
  TESForm *NthForm; // edi
  int v9; // eax
  char *v10; // eax
  char *v11; // esi
  const char *v12; // eax
  _WORD *v13; // eax
  _WORD *v14; // esi
  const char *ModelPath; // eax
  const char *v16; // eax
  int Level; // eax
  char *v18; // eax
  const char **v19; // ebp
  const char **i; // esi
  char *v21; // eax
  char *v22; // edi
  char *v23; // esi
  const char *v24; // eax
  char *v25; // ebx
  int v26; // esi
  BaseFormComponentVtbl *vtbl; // ecx
  int v28; // ebp
  unsigned int v29; // eax
  char *v30; // edi
  char *v32; // eax
  _WORD *v33; // ebp
  _WORD *j; // esi
  const char *v35; // edi
  char *v36; // eax
  char *v38; // edi
  char *v40; // ebx
  int k; // ebp
  unsigned int v42; // eax
  char *v43; // edi
  int v45; // eax
  size_t v46; // [esp-4h] [ebp-150h]
  char v47; // [esp+13h] [ebp-139h]
  int v48; // [esp+14h] [ebp-138h]
  int *v49; // [esp+18h] [ebp-134h]
  char *v50; // [esp+1Ch] [ebp-130h]
  char *v51; // [esp+20h] [ebp-12Ch]
  TESContainer v52; // [esp+24h] [ebp-128h] BYREF
  char v53; // [esp+37h] [ebp-115h] BYREF
  char Str[4]; // [esp+38h] [ebp-114h] BYREF
  int v55; // [esp+144h] [ebp-8h]
  unsigned int v56; // [esp+148h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+14Ch] [ebp+0h]

  FXEffect = MagicItem_GetFXEffect(this, 0);
  if ( (_BYTE)retaddr || sub_419CF0(this) )
  {
    v47 = 1;
  }
  else
  {
    if ( !sub_419E50(this) )
    {
      sub_438300((int)this, FXEffect, 0);
      return;
    }
    v47 = 0;
  }
  if ( FXEffect )
  {
    if ( v47 )
    {
      LOWORD(v4) = *(_WORD *)(FXEffect + 0x20);
      if ( (_WORD)v4 == 0xFFFF )
        v4 = strlen(*(const char **)(FXEffect + 0x1C));
      else
        v4 = (unsigned __int16)v4;
      if ( v4 )
      {
        v5 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(FXEffect + 0x18) + 0x14))(FXEffect + 0x18);
        sub_439EB0((int *)ModelLoaderPtr, v5, 0, 0, 1);
      }
    }
    EffectSetting_ExtendUnkA0((int *)FXEffect);
  }
  if ( this )
    v6 = this + 0xC;
  else
    v6 = 0;
  v49 = (int *)v6;
  if ( *((_DWORD *)v6 + 2) || *((_DWORD *)v6 + 1) )
  {
    if ( v6 )
    {
      do
      {
        v7 = *(_DWORD *)(*((_DWORD *)v6 + 1) + 0x1C);
        v48 = v7;
        if ( (*(_DWORD *)(v7 + 0x58) & 0x70000) != 0 )
        {
          if ( v47 )
          {
            NthForm = TESForm_LookupByFormID(*(_DWORD *)(v7 + 0x60));
            if ( NthForm )
            {
              v9 = *(_DWORD *)(v48 + 0x58);
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
                    v12 = (const char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 0x14))(v11);
                    sub_439EB0((int *)ModelLoaderPtr, v12, 0, 0, 1);
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
                  ModelPath = (const char *)TESBipedModelForm_GetModelPath(v13 + 0x32, 0);
                  sub_439EB0((int *)ModelLoaderPtr, ModelPath, 0, 0, 1);
                  v16 = (const char *)TESBipedModelForm_GetModelPath(v14, 1);
                  sub_439EB0((int *)ModelLoaderPtr, v16, 0, 0, 1);
                }
              }
              else if ( (v9 & 0x40000) != 0 )
              {
                if ( NthForm->member.type == kFormType_LeveledCreature )
                {
                  TESContainer_constr(&v52);
                  v55 = 0;
                  Level = Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, 1);
                  TESLeveledList_CalcLeveledForm(&NthForm[1].member.refID, Level, v46);
                  NthForm = (TESForm *)TESContainer_GetNthForm(&v52.type, 0);
                  v56 = 0xFFFFFFFF;
                  TESContainer_destr(&v52.type);
                }
                v18 = (char *)OblivionDynamicCast(
                                NthForm,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &TESNPC `RTTI Type Descriptor',
                                0);
                if ( v18 )
                {
                  v19 = (const char **)sub_5234F0(v18, 1, 1);
                  for ( i = v19; i; i = (const char **)i[1] )
                  {
                    if ( !i[1] && !*i )
                      break;
                    sub_439EB0((int *)ModelLoaderPtr, *i, 0, 0, 1);
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
                v51 = v21;
                if ( v21 )
                {
                  v22 = v21;
                  v23 = v21 + 0xAC;
                  v24 = (const char *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v21 + 0x2B) + 0x14))((_DWORD *)v21 + 0x2B);
                  sub_439EB0((int *)ModelLoaderPtr, v24, 0, 0, 1);
                  v25 = (char *)(*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v23 + 0x14))((_DWORD *)v22 + 0x2B);
                  v26 = sub_6899C0(v22 + 0xEC);
                  strcpy(Str, v25);
                  vtbl = (BaseFormComponentVtbl *)strrchr(Str, 0x5C);
                  v52.vtbl = vtbl;
                  v28 = v26;
                  if ( vtbl )
                  {
                    while ( v28 )
                    {
                      BYTE1(vtbl->InitializeComponent) = 0;
                      if ( *(_DWORD *)v28 )
                      {
                        v29 = *(_DWORD *)v28 + strlen(*(const char **)v28) + 1 - *(_DWORD *)v28;
                        v30 = &v53;
                        while ( *++v30 )
                          ;
                        qmemcpy(v30, *(const void **)v28, v29);
                        sub_439EB0((int *)ModelLoaderPtr, Str, 0, 0, 1);
                        vtbl = v52.vtbl;
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
                      v33 = sub_435830(v25, 0);
                      for ( j = v33; j; j = *((_WORD **)j + 1) )
                      {
                        v35 = *(const char **)j;
                        if ( *(_DWORD *)j )
                          sub_439FF0(ModelLoaderPtr, *(const char **)j);
                        FormHeapFree((unsigned int)v35);
                      }
                      BSSimpleList_Clear(v33);
                      FormHeapFree((unsigned int)v33);
                    }
                  }
                  if ( TESAnimation_HasAnimations((_DWORD *)v51 + 0x25) )
                  {
                    BYTE1(v52.vtbl->InitializeComponent) = 0;
                    v36 = &v53;
                    while ( *++v36 )
                      ;
                    strcpy(v36, "SpecialAnims");
                    v38 = &v53;
                    while ( *++v38 )
                      ;
                    *(_WORD *)v38 = *(_WORD *)SubStr;
                    v40 = strrchr(Str, 0x5C);
                    for ( k = sub_6899C0(v51 + 0x94); k; k = *(_DWORD *)(k + 4) )
                    {
                      v40[1] = 0;
                      if ( *(_DWORD *)k )
                      {
                        v42 = *(_DWORD *)k + strlen(*(const char **)k) + 1 - *(_DWORD *)k;
                        v43 = &v53;
                        while ( *++v43 )
                          ;
                        qmemcpy(v43, *(const void **)k, v42);
                        sub_439FF0(ModelLoaderPtr, Str);
                      }
                    }
                  }
                }
              }
            }
          }
          if ( !EffectSetting_IsUnkA4Positive(v49) && !EffectSetting_IsUnkA4Negative(v49) && (v49[0x16] & 0x40000) != 0 )
            ++dword_B33518;
          EffectSetting_ExtendUnkA4(v49);
          v6 = v50;
        }
        v45 = *((_DWORD *)v6 + 2);
        if ( !v45 )
          break;
        v6 = (char *)(v45 - 4);
        v50 = (char *)(v45 - 4);
      }
      while ( v45 != 4 );
    }
  }
}
