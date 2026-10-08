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

  v1 = (_DWORD **)this; /*0x487b64*/
  v2 = (TESObjectREFR *)*(this + 1); /*0x487b66*/
  v3 = 0; /*0x487b69*/
  v13 = v1; /*0x487b6e*/
  if ( v2 ) /*0x487b72*/
    Container = TESObjectREFR_GetContainer(v2); /*0x487b74*/
  else
    Container = 0; /*0x487b7b*/
  p_list = &Container->list; /*0x487b7d*/
  if ( Container == (TESContainer *)0xFFFFFFF8 ) /*0x487b82*/
    goto LABEL_23; /*0x487b82*/
  do /*0x487be6*/
  {
    data = p_list->data; /*0x487b84*/
    if ( !p_list->data ) /*0x487b84*/
      break; /*0x487b89*/
    if ( v3 ) /*0x487b8d*/
      return v3; /*0x487b8d*/
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))data->type->vtbl->Unk_1E)(data->type) ) /*0x487b9b*/
    {
      v7 = *v13; /*0x487ba5*/
      v3 = 1; /*0x487bac*/
      v8 = 1; /*0x487bae*/
      if ( *v13 ) /*0x487ba5*/
      {
        while ( v8 ) /*0x487bb4*/
        {
          if ( *v7 && *(TESForm **)(*v7 + 8) == data->type ) /*0x487bbf*/
            v8 = 0; /*0x487bc1*/
          else
            v7 = (_DWORD *)v7[1]; /*0x487bc5*/
          if ( !v7 ) /*0x487bca*/
            goto LABEL_20; /*0x487bca*/
        }
        if ( v7 ) /*0x487bd0*/
        {
          v9 = *v7; /*0x487bd2*/
          if ( v9 ) /*0x487bd6*/
          {
            if ( !(data->count + *(_DWORD *)(v9 + 4)) ) /*0x487bdb*/
              v3 = 0; /*0x487bdf*/
          }
        }
      }
    }
LABEL_20:
    p_list = p_list->next; /*0x487be1*/
  }
  while ( p_list ); /*0x487be6*/
  if ( !v3 ) /*0x487bea*/
  {
    v1 = v13; /*0x487bec*/
LABEL_23:
    for ( i = *v1; i; i = (int *)i[1] ) /*0x487bf4*/
    {
      if ( !i[1] && !*i ) /*0x487bfc*/
        break; /*0x487bff*/
      if ( v3 ) /*0x487c03*/
        break; /*0x487c03*/
      v11 = *i; /*0x487c05*/
      if ( *i ) /*0x487c05*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 8) + 0x78))(*(_DWORD *)(v11 + 8)) ) /*0x487c13*/
          v3 = *(_DWORD *)(v11 + 4) > 0; /*0x487c1f*/
      }
    }
  }
  return v3; /*0x487c28*/
}
