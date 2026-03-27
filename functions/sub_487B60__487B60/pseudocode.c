bool __thiscall sub_487B60(_DWORD *this)
{
  _DWORD **v1; // esi
  TESObjectREFR *v2; // ecx
  bool v3; // bl
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // ebp
  TESContainer_Data *data; // esi
  _DWORD *v7; // eax
  char v8; // dl
  int v9; // eax
  int *i; // esi
  int v11; // edi
  _DWORD **v13; // [esp+10h] [ebp-4h]

  v1 = (_DWORD **)this;
  v2 = (TESObjectREFR *)*(this + 1);
  v3 = 0;
  v13 = v1;
  if ( v2 )
    Container = TESObjectREFR_GetContainer(v2);
  else
    Container = 0;
  p_list = &Container->list;
  if ( Container == (TESContainer *)0xFFFFFFF8 )
    goto LABEL_23;
  do
  {
    data = p_list->data;
    if ( !p_list->data )
      break;
    if ( v3 )
      return v3;
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))data->type->vtbl->Unk_1E)(data->type) )
    {
      v7 = *v13;
      v3 = 1;
      v8 = 1;
      if ( *v13 )
      {
        while ( v8 )
        {
          if ( *v7 && *(TESForm **)(*v7 + 8) == data->type )
            v8 = 0;
          else
            v7 = (_DWORD *)v7[1];
          if ( !v7 )
            goto LABEL_20;
        }
        if ( v7 )
        {
          v9 = *v7;
          if ( v9 )
          {
            if ( !(data->count + *(_DWORD *)(v9 + 4)) )
              v3 = 0;
          }
        }
      }
    }
LABEL_20:
    p_list = p_list->next;
  }
  while ( p_list );
  if ( !v3 )
  {
    v1 = v13;
LABEL_23:
    for ( i = *v1; i; i = (int *)i[1] )
    {
      if ( !i[1] && !*i )
        break;
      if ( v3 )
        break;
      v11 = *i;
      if ( *i )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 8) + 0x78))(*(_DWORD *)(v11 + 8)) )
          v3 = *(_DWORD *)(v11 + 4) > 0;
      }
    }
  }
  return v3;
}
