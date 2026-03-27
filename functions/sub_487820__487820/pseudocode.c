char __thiscall sub_487820(int ****this, bool (__thiscall *a2)(BSExtraData *this, BSExtraData *other))
{
  TESObjectREFR *v3; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // eax
  TESContainer_Entry *next; // ebx
  int *p_count; // edi
  TESForm *type; // esi
  int **v9; // eax
  char v10; // dl
  int *v11; // eax
  int v12; // ecx
  int v13; // eax
  int **v14; // ebx
  int i; // esi
  ExtraDataList *v16; // edi
  int v18; // [esp+10h] [ebp-4h]

  v3 = (TESObjectREFR *)*(this + 1);
  v18 = 0;
  if ( v3 )
    Container = TESObjectREFR_GetContainer(v3);
  else
    Container = 0;
  p_list = &Container->list;
  if ( p_list )
  {
    do
    {
      next = p_list->next;
      if ( !next && !p_list->data )
        break;
      p_count = &p_list->data->count;
      type = p_list->data->type;
      if ( type && (bool (__thiscall *)(BSExtraData *, BSExtraData *))type->member.refID == a2 )
      {
        v9 = (int **)*this;
        v10 = 1;
        if ( !*this )
          goto LABEL_16;
        while ( v10 )
        {
          if ( *v9 && (TESForm *)(*v9)[2] == type )
            v10 = 0;
          else
            v9 = (int **)v9[1];
          if ( !v9 )
            goto LABEL_16;
        }
        if ( v9 )
          v11 = *v9;
        else
LABEL_16:
          v11 = 0;
        v12 = *p_count;
        if ( *p_count < 0 )
          return 1;
        if ( v11 && (v13 = v11[1] + v12) != 0 )
          v18 += v13;
        else
          v18 += v12;
        if ( v18 > 0 )
          return 1;
      }
      p_list = next;
    }
    while ( next );
  }
  v14 = (int **)*this;
  if ( *this )
  {
    do
    {
      if ( !v14[1] && !*v14 )
        break;
      for ( i = **v14; i; i = *(_DWORD *)(i + 4) )
      {
        v16 = *(ExtraDataList **)i;
        if ( !*(_DWORD *)i )
          break;
        if ( ExtraDataList_GetReferencePointer(*(ExtraDataList **)i)
          && ExtraDataList_GetReferencePointer(v16)[1].CompareTo == a2 )
        {
          return 1;
        }
      }
      v14 = (int **)v14[1];
    }
    while ( v14 );
  }
  return 0;
}
