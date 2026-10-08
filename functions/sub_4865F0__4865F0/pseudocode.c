int __thiscall sub_4865F0(_DWORD *this, int a2)
{
  TESObjectREFR *v3; // ecx
  int v4; // ebx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // esi
  char *v7; // eax
  _DWORD *v8; // ecx
  char v9; // bl
  int v10; // ecx
  int count; // edx
  char *v12; // eax
  int v13; // eax
  _DWORD *v14; // edi
  TESForm *v16; // eax
  int v17; // ebx
  TESForm *v18; // esi
  TESObjectREFR *v19; // ecx
  TESContainer *v20; // eax
  TESForm *v21; // eax
  TESForm::FormFlags flags; // eax
  int v23; // [esp+10h] [ebp-4h]

  v3 = (TESObjectREFR *)*(this + 1); /*0x4865f5*/
  v4 = 0; /*0x4865f8*/
  v23 = 0; /*0x4865fe*/
  if ( v3 ) /*0x486602*/
    Container = TESObjectREFR_GetContainer(v3); /*0x486604*/
  else
    Container = 0; /*0x48660b*/
  p_list = &Container->list; /*0x48660d*/
  if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x486612*/
  {
    while ( 1 ) /*0x486618*/
    {
      if ( !p_list->next && !p_list->data || v4 ) /*0x486629*/
        goto LABEL_30; /*0x486629*/
      v7 = (char *)OblivionDynamicCast( /*0x486641*/
                     p_list->data->type,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                     &AlchemyItem `RTTI Type Descriptor',
                     0);
      v8 = (_DWORD *)*this; /*0x486646*/
      v9 = 1; /*0x48664e*/
      if ( !*this ) /*0x486646*/
        break; /*0x486646*/
      while ( v9 ) /*0x486654*/
      {
        if ( *v8 && *(char **)(*v8 + 8) == v7 ) /*0x48665f*/
          v9 = 0; /*0x486661*/
        else
          v8 = (_DWORD *)v8[1]; /*0x486665*/
        if ( !v8 ) /*0x48666a*/
          goto LABEL_15; /*0x48666a*/
      }
      if ( !v8 ) /*0x486672*/
        break; /*0x486672*/
      v10 = *v8; /*0x486674*/
      if ( !v10 ) /*0x486678*/
        goto LABEL_20; /*0x486678*/
      count = p_list->data->count; /*0x48667c*/
      if ( count + *(_DWORD *)(v10 + 4) > 0 || count < 0 ) /*0x486689*/
        goto LABEL_20; /*0x486689*/
LABEL_29:
      p_list = p_list->next; /*0x4866c4*/
      v4 = v23; /*0x4866c9*/
      if ( !p_list ) /*0x4866cd*/
        goto LABEL_30; /*0x4866cd*/
    }
LABEL_15:
    v10 = 0; /*0x48666c*/
LABEL_20:
    if ( v7 ) /*0x48668d*/
    {
      v12 = v7 + 0x30; /*0x48668f*/
      if ( v12 ) /*0x486692*/
      {
        while ( *((_DWORD *)v12 + 2) || *((_DWORD *)v12 + 1) ) /*0x48669e*/
        {
          if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v12 + 1) + 0x1C) + 0x98) == a2 ) /*0x4866b0*/
          {
            v23 = v10; /*0x4866c0*/
            goto LABEL_29; /*0x4866c0*/
          }
          v13 = *((_DWORD *)v12 + 2); /*0x4866b2*/
          if ( v13 ) /*0x4866b7*/
          {
            v12 = (char *)(v13 - 4); /*0x4866b9*/
            if ( v12 ) /*0x4866bc*/
              continue; /*0x4866bc*/
          }
          goto LABEL_29; /*0x4866bc*/
        }
      }
    }
    goto LABEL_29; /*0x48669e*/
  }
LABEL_30:
  v14 = (_DWORD *)*this; /*0x4866d3*/
  if ( *this )
  {
    while ( (v14[1] || *v14) && !v4 )
    {
      v16 = (TESForm *)OblivionDynamicCast( /*0x486709*/
                         *(void **)(*v14 + 8),
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &AlchemyItem `RTTI Type Descriptor',
                         0);
      v17 = *v14; /*0x48670e*/
      v18 = v16; /*0x486710*/
      if ( v16 )
      {
        if ( *(_DWORD *)(v17 + 4) )
        {
          v19 = (TESObjectREFR *)*(this + 1); /*0x48671f*/
          v20 = v19 ? TESObjectREFR_GetContainer(v19) : 0;
          if ( !TESContainer_HasForm(v20, v18) ) /*0x486732*/
          {
            v21 = v18 + 2; /*0x48673b*/
            if ( v18 != (TESForm *)0xFFFFFFD0 ) /*0x486740*/
            {
              while ( v21->member.flags || *(_DWORD *)&v21->member.type ) /*0x48674c*/
              {
                if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v21->member.type + 0x1C) + 0x98) == a2 ) /*0x48675e*/
                {
                  v23 = v17; /*0x48676e*/
                  break; /*0x48676e*/
                }
                flags = v21->member.flags; /*0x486760*/
                if ( flags ) /*0x486765*/
                {
                  v21 = (TESForm *)(flags - 4); /*0x486767*/
                  if ( v21 ) /*0x48676a*/
                    continue; /*0x48676a*/
                }
                break; /*0x48676a*/
              }
            }
          }
        }
      }
      v14 = (_DWORD *)v14[1]; /*0x486772*/
      if ( !v14 ) /*0x486777*/
        return v23; /*0x48677d*/
      v4 = v23; /*0x4866e4*/
    }
  }
  return v4; /*0x4866da*/
}
