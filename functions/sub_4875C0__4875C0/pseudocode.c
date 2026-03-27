int __thiscall sub_4875C0(_DWORD *this)
{
  TESObjectREFR *v2; // ecx
  int v3; // ebp
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // esi
  TESForm *type; // edi
  _DWORD *v7; // eax
  char v8; // dl
  _DWORD *v9; // esi
  TESForm *v10; // edi
  TESObjectREFR *v11; // ecx
  TESObjectREFR *v12; // ecx
  TESContainer *v13; // eax
  int v14; // eax

  v2 = (TESObjectREFR *)*(this + 1);
  v3 = 0;
  if ( v2 )
    Container = TESObjectREFR_GetContainer(v2);
  else
    Container = 0;
  p_list = &Container->list;
  if ( Container != (TESContainer *)0xFFFFFFF8 )
  {
    do
    {
      if ( !p_list->next && !p_list->data )
        break;
      type = p_list->data->type;
      if ( type && sub_469980((int)p_list->data->type) )
      {
        v7 = (_DWORD *)*this;
        v8 = 1;
        if ( !*this )
          goto LABEL_16;
        while ( v8 )
        {
          if ( *v7 && *(TESForm **)(*v7 + 8) == type )
            v8 = 0;
          else
            v7 = (_DWORD *)v7[1];
          if ( !v7 )
            goto LABEL_16;
        }
        if ( v7 && (v14 = *v7) != 0 )
        {
          v3 += p_list->data->count + *(_DWORD *)(v14 + 4);
        }
        else
        {
LABEL_16:
          v3 += p_list->data->count;
          if ( v3 < 0 )
            v3 = -v3;
        }
      }
      p_list = p_list->next;
    }
    while ( p_list );
  }
  v9 = (_DWORD *)*this;
  if ( *this )
  {
    do
    {
      if ( !v9[1] && !*v9 )
        break;
      v10 = *(TESForm **)(*v9 + 8);
      if ( v10 )
      {
        if ( sub_469980(*(_DWORD *)(*v9 + 8)) )
        {
          v11 = (TESObjectREFR *)*(this + 1);
          if ( !v11
            || !TESObjectREFR_GetContainer(v11)
            || ((v12 = (TESObjectREFR *)*(this + 1)) == 0 ? (v13 = 0) : (v13 = TESObjectREFR_GetContainer(v12)),
                !TESContainer_HasForm(v13, v10) && *(int *)(*v9 + 4) > 0) )
          {
            v3 += *(_DWORD *)(*v9 + 4);
          }
        }
      }
      v9 = (_DWORD *)v9[1];
    }
    while ( v9 );
  }
  return v3;
}
