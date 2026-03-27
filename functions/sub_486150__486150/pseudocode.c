TESForm *__thiscall sub_486150(_DWORD *this, int a2, int *a3)
{
  TESObjectREFR *v4; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // edi
  TESForm *type; // esi
  _DWORD *v8; // eax
  char v9; // dl
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // edi
  TESObjectREFR *v13; // ecx
  TESContainer *v14; // eax
  int v15; // eax

  v4 = (TESObjectREFR *)*(this + 1);
  if ( v4 )
    Container = TESObjectREFR_GetContainer(v4);
  else
    Container = 0;
  p_list = &Container->list;
  type = 0;
  if ( Container != (TESContainer *)0xFFFFFFF8 )
  {
    do
    {
      if ( type )
        break;
      type = p_list->data->type;
      if ( type && sub_568240((unsigned __int8 *)p_list->data->type) == a2 )
      {
        v8 = (_DWORD *)*this;
        v9 = 1;
        if ( !*this )
          goto LABEL_15;
        while ( v9 )
        {
          if ( *v8 && *(TESForm **)(*v8 + 8) == type )
            v9 = 0;
          else
            v8 = (_DWORD *)v8[1];
          if ( !v8 )
            goto LABEL_15;
        }
        if ( v8 && (v10 = *v8) != 0 )
        {
          v11 = *(_DWORD *)(v10 + 4) + p_list->data->count;
          if ( v11 )
            *a3 = v11;
        }
        else
        {
LABEL_15:
          *a3 = p_list->data->count;
        }
      }
      else
      {
        type = 0;
      }
      p_list = p_list->next;
    }
    while ( p_list );
  }
  v12 = (_DWORD *)*this;
  if ( *this )
  {
    do
    {
      if ( type )
        break;
      type = *(TESForm **)(*v12 + 8);
      if ( type && sub_568240(*(unsigned __int8 **)(*v12 + 8)) == a2 )
      {
        v13 = (TESObjectREFR *)*(this + 1);
        v14 = v13 ? TESObjectREFR_GetContainer(v13) : 0;
        if ( !TESContainer_HasForm(v14, type) )
        {
          v15 = *(_DWORD *)(*v12 + 4);
          if ( v15 > 0 )
            *a3 = v15;
        }
      }
      else
      {
        type = 0;
      }
      v12 = (_DWORD *)v12[1];
    }
    while ( v12 );
  }
  return type;
}
