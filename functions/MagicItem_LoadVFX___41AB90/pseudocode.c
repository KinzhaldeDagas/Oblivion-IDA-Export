int __thiscall MagicItem_LoadVFX__(char *this)
{
  int FXEffect; // esi
  __int16 v4; // bx
  __int16 v5; // ax
  unsigned int v6; // eax
  __int64 v7; // rax
  volatile LONG *IsModelLoaded; // eax
  _DWORD *v9; // edi
  signed int *v10; // esi
  TESForm *NthForm; // edi
  int v12; // eax
  signed int v13; // esi
  char *v14; // eax
  char *v15; // esi
  __int64 v16; // rax
  volatile LONG *v17; // eax
  _WORD *v18; // eax
  _WORD *v19; // esi
  int ModelPath; // eax
  int v21; // edx
  volatile LONG *v22; // eax
  int v23; // eax
  int v24; // edx
  int Level; // eax
  char *v26; // eax
  int v27; // edx
  int *v28; // ebp
  int *i; // esi
  volatile LONG *v30; // eax
  char *v31; // eax
  __int64 v32; // rax
  unsigned int v33; // esi
  int v34; // edi
  char *v35; // edi
  int v36; // esi
  char *v37; // ebx
  int v38; // ebp
  unsigned int v39; // eax
  char *v40; // edi
  volatile LONG *v42; // eax
  char *v43; // eax
  _WORD *v44; // ebx
  _WORD *j; // edi
  const char *v46; // esi
  int v47; // ebp
  char *v48; // eax
  _WORD *v50; // edi
  char v51; // al
  int k; // ebp
  unsigned int v53; // eax
  char *v54; // edi
  int v56; // esi
  int v57; // eax
  size_t v58; // [esp-4h] [ebp-154h]
  char *m_data; // [esp-4h] [ebp-154h]
  int v60; // [esp+14h] [ebp-13Ch]
  _DWORD *v61; // [esp+18h] [ebp-138h]
  char *v62; // [esp+1Ch] [ebp-134h]
  char *v63; // [esp+1Ch] [ebp-134h]
  char *v64; // [esp+20h] [ebp-130h]
  BSStringT v65; // [esp+24h] [ebp-12Ch] BYREF
  TESContainer v66; // [esp+2Ch] [ebp-124h] BYREF
  char Str[260]; // [esp+3Ch] [ebp-114h] BYREF
  int v68; // [esp+14Ch] [ebp-4h]

  FXEffect = MagicItem_GetFXEffect(this, 0);
  if ( !sub_419E50(this) )
  {
    sub_41A610(this, 1);
    sub_419F10(this, 1);
    return MagicItem_LoadVFX___::Done();
  }
  if ( FXEffect )
  {
    v4 = 0;
    if ( EffectSetting_IsUnkA0Negative((_DWORD *)FXEffect) )
    {
      EffectSetting_AbsUnkA0((signed int *)FXEffect);
      v4 = v5;
    }
    LOWORD(v6) = *(_WORD *)(FXEffect + 0x20);
    if ( (_WORD)v6 == 0xFFFF )
      v6 = strlen(*(const char **)(FXEffect + 0x1C));
    else
      v6 = (unsigned __int16)v6;
    if ( v6 )
    {
      v7 = ((__int64 (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)(FXEffect + 0x18) + 0x14))(FXEffect + 0x18);
      IsModelLoaded = (volatile LONG *)ModelLoader_IsModelLoaded__(ModelLoaderPtr, SHIDWORD(v7), v7);
      if ( IsModelLoaded )
        sub_434C00(IsModelLoaded, v4);
    }
    else if ( *(_DWORD *)(FXEffect + 0x98) != 0x46464553 )
    {
      m_data = EffectSetting_GetName(FXEffect, &v65)->m_data;
      v68 = 0;
      PrintError("The %s effect has no associated spell art.", m_data);
      v68 = 0xFFFFFFFF;
      FormHeapFree((unsigned int)v65.m_data);
    }
  }
  if ( this )
    v9 = this + 0xC;
  else
    v9 = 0;
  v61 = v9;
  if ( (v9[2] || v9[1]) && v9 )
  {
    while ( 1 )
    {
      v10 = *(signed int **)(v9[1] + 0x1C);
      NthForm = TESForm_LookupByFormID(v10[0x18]);
      if ( EffectSetting_IsUnkA4Negative(v10) )
      {
        EffectSetting_AbsUnkA4(v10);
        v60 = v12;
        if ( v12 )
        {
          if ( NthForm )
          {
            v13 = v10[0x16];
            if ( (v13 & 0x10000) != 0 )
            {
              v14 = (char *)OblivionDynamicCast(
                              NthForm,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectWEAP `RTTI Type Descriptor',
                              0);
              if ( v14 )
              {
                v15 = v14 + 0x30;
                if ( sub_449190((int)(v14 + 0x30)) )
                {
                  v16 = ((__int64 (__thiscall *)(char *))*(_DWORD *)(*(_DWORD *)v15 + 0x14))(v15);
                  v17 = (volatile LONG *)ModelLoader_IsModelLoaded__(ModelLoaderPtr, SHIDWORD(v16), v16);
                  if ( v17 )
                    goto LABEL_30;
                }
              }
            }
            else if ( (v13 & 0x20000) != 0 )
            {
              v18 = OblivionDynamicCast(
                      NthForm,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESObjectARMO `RTTI Type Descriptor',
                      0);
              if ( v18 )
              {
                v19 = v18 + 0x32;
                ModelPath = TESBipedModelForm_GetModelPath(v18 + 0x32, 0);
                v22 = (volatile LONG *)ModelLoader_IsModelLoaded__(ModelLoaderPtr, v21, ModelPath);
                if ( v22 )
                  sub_434C00(v22, v60);
                v23 = TESBipedModelForm_GetModelPath(v19, 1);
                v17 = (volatile LONG *)ModelLoader_IsModelLoaded__(ModelLoaderPtr, v24, v23);
                if ( v17 )
LABEL_30:
                  sub_434C00(v17, v60);
              }
            }
            else if ( (v13 & 0x40000) != 0 )
            {
              if ( NthForm->member.type == kFormType_LeveledCreature )
              {
                TESContainer_constr(&v66);
                v68 = 1;
                Level = Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, 1);
                TESLeveledList_CalcLeveledForm(&NthForm[1].member.refID, Level, (int)&v66);
                NthForm = (TESForm *)TESContainer_GetNthForm(&v66, 0);
                v68 = 0xFFFFFFFF;
                TESContainer_destr(&v66);
              }
              v26 = (char *)OblivionDynamicCast(
                              NthForm,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESNPC `RTTI Type Descriptor',
                              0);
              if ( v26 )
              {
                v28 = sub_5234F0(v26, 1, 1);
                for ( i = v28; i; i = (int *)i[1] )
                {
                  if ( !i[1] && !*i )
                    break;
                  v30 = (volatile LONG *)ModelLoader_IsModelLoaded__(ModelLoaderPtr, v27, *i);
                  if ( v30 )
                    sub_434C00(v30, v60);
                }
                BSSimpleList_Clear(v28);
                FormHeapFree((unsigned int)v28);
              }
              v31 = (char *)OblivionDynamicCast(
                              NthForm,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESCreature `RTTI Type Descriptor',
                              0);
              v64 = v31;
              if ( v31 )
              {
                v32 = ((__int64 (__thiscall *)(char *))*(_DWORD *)(*((_DWORD *)v31 + 0x2B) + 0x14))(v31 + 0xAC);
                v33 = ModelLoader_IsModelLoaded__(ModelLoaderPtr, SHIDWORD(v32), v32);
                if ( v33 )
                {
                  v34 = v60;
                  if ( v60 > 0 )
                  {
                    do
                    {
                      InterlockedIncrement((volatile LONG *)(v33 + 4));
                      --v34;
                    }
                    while ( v34 );
                  }
                  v65.m_data = *(char **)v33;
                  v35 = v65.m_data;
                  v36 = sub_6899C0(v64 + 0xEC);
                  strcpy(Str, v35);
                  v37 = strrchr(Str, 0x5C);
                  v62 = v37;
                  v38 = v36;
                  if ( v37 )
                  {
                    while ( v38 )
                    {
                      v37[1] = 0;
                      if ( *(_DWORD *)v38 )
                      {
                        v39 = *(_DWORD *)v38 + strlen(*(const char **)v38) + 1 - *(_DWORD *)v38;
                        v40 = (char *)&v66.list.next + 3;
                        while ( *++v40 )
                          ;
                        qmemcpy(v40, *(const void **)v38, v39);
                        v42 = (volatile LONG *)ModelLoader_IsModelLoaded__(ModelLoaderPtr, (int)Str, (int)Str);
                        if ( v42 )
                          sub_434C00(v42, v60);
                      }
                      v38 = *(_DWORD *)(v38 + 4);
                    }
                  }
                  v43 = strrchr(v65.m_data, 0x5C);
                  if ( v43 )
                  {
                    LODWORD(v58) = 8;
                    if ( !_strnicmp(v43 + 1, "Skeleton", v58) )
                    {
                      v44 = sub_435830(v65.m_data, 0);
                      for ( j = v44; j; j = *((_WORD **)j + 1) )
                      {
                        v46 = *(const char **)j;
                        if ( *(_DWORD *)j )
                        {
                          if ( v60 > 0 )
                          {
                            v47 = v60;
                            do
                            {
                              sub_439FF0(ModelLoaderPtr, v46);
                              --v47;
                            }
                            while ( v47 );
                          }
                        }
                        FormHeapFree((unsigned int)v46);
                      }
                      BSSimpleList_Clear(v44);
                      FormHeapFree((unsigned int)v44);
                      v37 = v62;
                    }
                  }
                  if ( TESAnimation_HasAnimations((_DWORD *)v64 + 0x25) )
                  {
                    v37[1] = 0;
                    v48 = (char *)&v66.list.next + 3;
                    while ( *++v48 )
                      ;
                    strcpy(v48, "SpecialAnims");
                    v50 = (_WORD *)((char *)&v66.list.next + 3);
                    do
                    {
                      v51 = *((_BYTE *)v50 + 1);
                      v50 = (_WORD *)((char *)v50 + 1);
                    }
                    while ( v51 );
                    *v50 = *(_WORD *)SubStr;
                    v63 = strrchr(Str, 0x5C);
                    for ( k = sub_6899C0(v64 + 0x94); k; k = *(_DWORD *)(k + 4) )
                    {
                      v63[1] = 0;
                      if ( *(_DWORD *)k )
                      {
                        v53 = *(_DWORD *)k + strlen(*(const char **)k) + 1 - *(_DWORD *)k;
                        v54 = (char *)&v66.list.next + 3;
                        while ( *++v54 )
                          ;
                        qmemcpy(v54, *(const void **)k, v53);
                        if ( v60 > 0 )
                        {
                          v56 = v60;
                          do
                          {
                            sub_439FF0(ModelLoaderPtr, Str);
                            --v56;
                          }
                          while ( v56 );
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
      v57 = v61[2];
      if ( !v57 )
        return MagicItem_LoadVFX___::Done();
      v61 = (_DWORD *)(v57 - 4);
      if ( v57 == 4 )
        return MagicItem_LoadVFX___::Done();
      v9 = (_DWORD *)(v57 - 4);
    }
  }
  return MagicItem_LoadVFX___::Done();
}
