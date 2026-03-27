char __thiscall sub_487930(
        int ****this,
        unsigned __int8 *a2,
        signed int a3,
        int a4,
        signed int *a5,
        bool (__thiscall *a6)(BSExtraData *this, BSExtraData *other),
        void *a7)
{
  TESObjectREFR *v9; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // ebx
  unsigned __int8 *type; // edi
  int v13; // eax
  int v14; // esi
  int count; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // ecx
  int ***v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // [esp+10h] [ebp-4h]
  _DWORD *v25; // [esp+28h] [ebp+14h]

  v24 = 0;
  if ( a6 )
    return sub_487820(this, a6);
  v25 = 0;
  if ( a7 )
    v25 = OblivionDynamicCast(
            a7,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0);
  v9 = (TESObjectREFR *)*(this + 1);
  if ( v9 )
    Container = TESObjectREFR_GetContainer(v9);
  else
    Container = 0;
  p_list = &Container->list;
  if ( Container != (TESContainer *)0xFFFFFFF8 )
  {
    do
    {
      if ( !p_list->next && !p_list->data )
        break;
      type = (unsigned __int8 *)p_list->data->type;
      if ( type )
      {
        if ( a2 )
        {
          if ( type != a2 )
            goto LABEL_23;
        }
        else if ( !a3 || !sub_568370((int)type, a3) )
        {
          goto LABEL_23;
        }
        ContainerExtraData_GetEntryForForm(this, (int)type, 1, 0);
        v14 = v13;
        if ( !v13 )
        {
          if ( v25 )
          {
            v20 = v25[0x16];
            if ( v20 )
              (*(void (__thiscall **)(int, unsigned __int8 *))(*(_DWORD *)v20 + 0x154))(v20, type);
          }
          *a5 = sub_568240(type);
          return 1;
        }
        count = p_list->data->count;
        if ( count < 0 )
          return 1;
        v24 += count + *(_DWORD *)(v14 + 4);
        if ( v25 )
        {
          v16 = v25[0x16];
          if ( v16 )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 0x154))(v16, *(_DWORD *)(v14 + 8));
        }
        *a5 = sub_568240(*(unsigned __int8 **)(v14 + 8));
      }
LABEL_23:
      p_list = p_list->next;
    }
    while ( p_list );
  }
  if ( v24 >= a4 )
    return 1;
  if ( !a2 )
  {
    v21 = *this;
    if ( *this )
    {
      while ( *v21 )
      {
        v22 = (int)(*v21)[2];
        if ( v22 && a3 && sub_568370(v22, a3) && (int)(*v21)[1] >= a4 )
        {
          if ( v25 )
          {
            v23 = v25[0x16];
            if ( v23 )
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)v23 + 0x154))(v23, (*v21)[2]);
          }
          *a5 = sub_568240((unsigned __int8 *)(*v21)[2]);
          return 1;
        }
        v21 = (int ***)v21[1];
        if ( !v21 )
          return 0;
      }
    }
    return 0;
  }
  ContainerExtraData_GetEntryForForm(this, (int)a2, 1, 0);
  v18 = v17;
  if ( !v17 || *(_DWORD *)(v17 + 4) < a4 )
    return 0;
  if ( v25 )
  {
    v19 = v25[0x16];
    if ( v19 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 0x154))(v19, *(_DWORD *)(v17 + 8));
  }
  *a5 = sub_568240(*(unsigned __int8 **)(v18 + 8));
  return 1;
}
