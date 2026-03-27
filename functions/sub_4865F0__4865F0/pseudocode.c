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

  v3 = (TESObjectREFR *)*(this + 1);
  v4 = 0;
  v23 = 0;
  if ( v3 )
    Container = TESObjectREFR_GetContainer(v3);
  else
    Container = 0;
  p_list = &Container->list;
  if ( Container != (TESContainer *)0xFFFFFFF8 )
  {
    while ( 1 )
    {
      if ( !p_list->next && !p_list->data || v4 )
        goto LABEL_30;
      v7 = (char *)OblivionDynamicCast(
                     p_list->data->type,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                     &AlchemyItem `RTTI Type Descriptor',
                     0);
      v8 = (_DWORD *)*this;
      v9 = 1;
      if ( !*this )
        break;
      while ( v9 )
      {
        if ( *v8 && *(char **)(*v8 + 8) == v7 )
          v9 = 0;
        else
          v8 = (_DWORD *)v8[1];
        if ( !v8 )
          goto LABEL_15;
      }
      if ( !v8 )
        break;
      v10 = *v8;
      if ( !v10 )
        goto LABEL_20;
      count = p_list->data->count;
      if ( count + *(_DWORD *)(v10 + 4) > 0 || count < 0 )
        goto LABEL_20;
LABEL_29:
      p_list = p_list->next;
      v4 = v23;
      if ( !p_list )
        goto LABEL_30;
    }
LABEL_15:
    v10 = 0;
LABEL_20:
    if ( v7 )
    {
      v12 = v7 + 0x30;
      if ( v12 )
      {
        while ( *((_DWORD *)v12 + 2) || *((_DWORD *)v12 + 1) )
        {
          if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v12 + 1) + 0x1C) + 0x98) == a2 )
          {
            v23 = v10;
            goto LABEL_29;
          }
          v13 = *((_DWORD *)v12 + 2);
          if ( v13 )
          {
            v12 = (char *)(v13 - 4);
            if ( v12 )
              continue;
          }
          goto LABEL_29;
        }
      }
    }
    goto LABEL_29;
  }
LABEL_30:
  v14 = (_DWORD *)*this;
  if ( *this )
  {
    while ( (v14[1] || *v14) && !v4 )
    {
      v16 = (TESForm *)OblivionDynamicCast(
                         *(void **)(*v14 + 8),
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &AlchemyItem `RTTI Type Descriptor',
                         0);
      v17 = *v14;
      v18 = v16;
      if ( v16 )
      {
        if ( *(_DWORD *)(v17 + 4) )
        {
          v19 = (TESObjectREFR *)*(this + 1);
          v20 = v19 ? TESObjectREFR_GetContainer(v19) : 0;
          if ( !TESContainer_HasForm(v20, v18) )
          {
            v21 = v18 + 2;
            if ( v18 != (TESForm *)0xFFFFFFD0 )
            {
              while ( v21->member.flags || *(_DWORD *)&v21->member.type )
              {
                if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v21->member.type + 0x1C) + 0x98) == a2 )
                {
                  v23 = v17;
                  break;
                }
                flags = v21->member.flags;
                if ( flags )
                {
                  v21 = (TESForm *)(flags - 4);
                  if ( v21 )
                    continue;
                }
                break;
              }
            }
          }
        }
      }
      v14 = (_DWORD *)v14[1];
      if ( !v14 )
        return v23;
      v4 = v23;
    }
  }
  return v4;
}
