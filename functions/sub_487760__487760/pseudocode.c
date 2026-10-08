int __thiscall sub_487760(TESObjectREFR **this, void *a2)
{
  int result; // eax
  TESObjectREFR *v4; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // esi
  int v7; // ebp
  void *v8; // eax
  int v9; // ebx
  int *v10; // edi
  int v11; // esi
  int v12; // [esp+8h] [ebp-4h]

  result = 0; /*0x487766*/
  v12 = 0; /*0x48776d*/
  if ( a2 ) /*0x487771*/
  {
    v4 = *(this + 1); /*0x487777*/
    if ( v4 ) /*0x48777c*/
      Container = TESObjectREFR_GetContainer(v4); /*0x48777e*/
    else
      Container = 0; /*0x487785*/
    p_list = &Container->list; /*0x487789*/
    v7 = 0; /*0x48778c*/
    if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x487790*/
    {
      do /*0x4877c9*/
      {
        if ( !p_list->next && !p_list->data ) /*0x487798*/
          break; /*0x48779b*/
        v8 = OblivionDynamicCast( /*0x4877b1*/
               p_list->data->type,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESLevItem `RTTI Type Descriptor',
               0);
        if ( v8 ) /*0x4877bb*/
        {
          if ( v8 == a2 ) /*0x4877bf*/
            break; /*0x4877bf*/
          ++v7; /*0x4877c1*/
        }
        p_list = p_list->next; /*0x4877c4*/
      }
      while ( p_list ); /*0x4877c9*/
    }
    v9 = (int)*this; /*0x4877cb*/
    if ( *this ) /*0x4877cb*/
    {
      do /*0x487804*/
      {
        v10 = *(int **)v9; /*0x4877d1*/
        if ( !*(_DWORD *)v9 ) /*0x4877d1*/
          break; /*0x4877d5*/
        v11 = *v10; /*0x4877d7*/
        if ( *v10 ) /*0x4877d7*/
        {
          while ( *(_DWORD *)v11 ) /*0x4877e4*/
          {
            if ( ExtraDataList_GetExtraLeveledItem(*(ExtraDataList **)v11) == v7 ) /*0x4877ed*/
            {
              v12 = v10[2]; /*0x4877fb*/
              break; /*0x4877fb*/
            }
            v11 = *(_DWORD *)(v11 + 4); /*0x4877ef*/
            if ( !v11 ) /*0x4877f4*/
              break; /*0x4877f4*/
          }
        }
        v9 = *(_DWORD *)(v9 + 4); /*0x4877ff*/
      }
      while ( v9 ); /*0x487804*/
    }
    return v12; /*0x487806*/
  }
  return result; /*0x48780c*/
}
