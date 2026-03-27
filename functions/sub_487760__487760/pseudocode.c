int __thiscall sub_487760(TESObjectREFR **this, void *a2)
{
  int result; // eax
  TESObjectREFR *v4; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // esi
  BSExtraDataVtbl *v7; // ebp
  void *v8; // eax
  TESObjectREFR *i; // ebx
  int *vtbl; // edi
  int v11; // esi
  int v12; // [esp+8h] [ebp-4h]

  result = 0;
  v12 = 0;
  if ( a2 )
  {
    v4 = *(this + 1);
    if ( v4 )
      Container = TESObjectREFR_GetContainer(v4);
    else
      Container = 0;
    p_list = &Container->list;
    v7 = 0;
    if ( Container != (TESContainer *)0xFFFFFFF8 )
    {
      do
      {
        if ( !p_list->next && !p_list->data )
          break;
        v8 = OblivionDynamicCast(
               p_list->data->type,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESLevItem `RTTI Type Descriptor',
               0);
        if ( v8 )
        {
          if ( v8 == a2 )
            break;
          v7 = (BSExtraDataVtbl *)((char *)v7 + 1);
        }
        p_list = p_list->next;
      }
      while ( p_list );
    }
    for ( i = *this; i; i = *(TESObjectREFR **)&i->member.super.type )
    {
      vtbl = (int *)i->vtbl;
      if ( !i->vtbl )
        break;
      v11 = *vtbl;
      if ( *vtbl )
      {
        while ( *(_DWORD *)v11 )
        {
          if ( ExtraDataList_GetExtraLeveledItem(*(ExtraDataList **)v11) == v7 )
          {
            v12 = vtbl[2];
            break;
          }
          v11 = *(_DWORD *)(v11 + 4);
          if ( !v11 )
            break;
        }
      }
    }
    return v12;
  }
  return result;
}
