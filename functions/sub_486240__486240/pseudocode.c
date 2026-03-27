int __thiscall sub_486240(_DWORD *this, int a2, int *a3)
{
  TESObjectREFR *v4; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // ebx
  int v7; // edi
  int *p_count; // esi
  _DWORD *v9; // eax
  char v10; // dl
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // esi
  TESObjectREFR *v14; // ecx
  TESContainer *v15; // eax
  int v16; // eax

  v4 = (TESObjectREFR *)*(this + 1);
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
      if ( v7 )
        break;
      p_count = &p_list->data->count;
      if ( !p_list->data )
        break;
      v7 = p_count[1];
      if ( v7 && *(unsigned __int8 *)(v7 + 4) == a2 )
      {
        v9 = (_DWORD *)*this;
        v10 = 1;
        if ( !*this )
          goto LABEL_16;
        while ( v10 )
        {
          if ( *v9 && *(_DWORD *)(*v9 + 8) == v7 )
            v10 = 0;
          else
            v9 = (_DWORD *)v9[1];
          if ( !v9 )
            goto LABEL_16;
        }
        if ( v9 && (v11 = *v9) != 0 )
        {
          v12 = *(_DWORD *)(v11 + 4) + *p_count;
          if ( v12 )
            *a3 = v12;
        }
        else
        {
LABEL_16:
          *a3 = *p_count;
        }
      }
      else
      {
        v7 = 0;
      }
      p_list = p_list->next;
    }
    while ( p_list );
  }
  v13 = (_DWORD *)*this;
  if ( *this )
  {
    do
    {
      if ( v7 )
        break;
      if ( !*v13 )
        break;
      v7 = *(_DWORD *)(*v13 + 8);
      if ( v7 && *(unsigned __int8 *)(v7 + 4) == a2 )
      {
        v14 = (TESObjectREFR *)*(this + 1);
        v15 = v14 ? TESObjectREFR_GetContainer(v14) : 0;
        if ( !TESContainer_HasForm(v15, (TESForm *)v7) )
        {
          v16 = *(_DWORD *)(*v13 + 4);
          if ( v16 > 0 )
            *a3 = v16;
        }
      }
      else
      {
        v7 = 0;
      }
      v13 = (_DWORD *)v13[1];
    }
    while ( v13 );
  }
  return v7;
}
