void __thiscall sub_487C30(_DWORD *this, TESForm *a2, int a3)
{
  int v4; // eax
  TESObjectREFR *v5; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // edi
  int v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // eax

  ContainerExtraData_GetEntryForForm((_DWORD **)this, (int)a2, 1, a3);
  if ( !v4 && !a3 )
  {
    v5 = (TESObjectREFR *)*(this + 1);
    if ( v5 )
      Container = TESObjectREFR_GetContainer(v5);
    else
      Container = 0;
    p_list = &Container->list;
    if ( Container != (TESContainer *)0xFFFFFFF8 )
    {
      do
      {
        if ( !p_list->next && !p_list->data )
          break;
        if ( p_list->data->type == a2 )
        {
          v8 = FormHeapAlloc(0xCu);
          v9 = (_DWORD *)v8;
          if ( v8 )
          {
            *(_DWORD *)(v8 + 8) = a2;
            v10 = (_DWORD *)FormHeapAlloc(8u);
            if ( v10 )
            {
              *v10 = 0;
              v10[1] = 0;
              *v9 = v10;
            }
            else
            {
              *v9 = 0;
            }
            v9[1] = 0;
          }
          else
          {
            v9 = 0;
          }
          v9[1] = p_list->data->count;
        }
        p_list = p_list->next;
      }
      while ( p_list );
    }
  }
}
