void __thiscall sub_488100(int this, char a2, char a3)
{
  TESObjectREFR *v5; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // esi
  TESForm *type; // edi
  int v9; // eax
  int v10; // ebp
  int *v11; // ecx
  char v12; // al
  int v13; // ecx
  int v14; // ecx
  int *v15; // ebp
  int v16; // edi
  TESForm *v17; // esi
  TESObjectREFR *v18; // ecx
  TESObjectREFR *v19; // ecx
  TESContainer *v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // [esp+10h] [ebp-4h]

  v5 = *(TESObjectREFR **)(this + 4);
  v23 = 0;
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
      type = p_list->data->type;
      if ( (a2 || !((unsigned __int8 (__thiscall *)(TESForm *))type->vtbl->Unk_1E)(type))
        && (a3 || type->member.refID != 0xF) )
      {
        sub_470520(type);
        v10 = v9;
        if ( v9 != 0xFFFFFFFF )
        {
          if ( v9 )
          {
            v11 = *(int **)this;
            v12 = 1;
            if ( !*(_DWORD *)this )
              goto LABEL_23;
            while ( v12 )
            {
              if ( *v11 && *(TESForm **)(*v11 + 8) == type )
                v12 = 0;
              else
                v11 = (int *)v11[1];
              if ( !v11 )
              {
                v23 += v10 * p_list->data->count;
                goto LABEL_26;
              }
            }
            if ( v11 && (v13 = *v11) != 0 )
            {
              v14 = p_list->data->count + *(_DWORD *)(v13 + 4);
              if ( v14 )
                v23 += v10 * v14;
            }
            else
            {
LABEL_23:
              v23 += v10 * p_list->data->count;
            }
          }
        }
      }
LABEL_26:
      p_list = p_list->next;
    }
    while ( p_list );
  }
  v15 = *(int **)this;
  if ( *(_DWORD *)this )
  {
    do
    {
      v16 = *v15;
      if ( !*v15 )
        break;
      v17 = *(TESForm **)(v16 + 8);
      if ( v17 )
      {
        v18 = *(TESObjectREFR **)(this + 4);
        if ( !v18
          || !TESObjectREFR_GetContainer(v18)
          || ((v19 = *(TESObjectREFR **)(this + 4)) == 0 ? (v20 = 0) : (v20 = TESObjectREFR_GetContainer(v19)),
              !TESContainer_HasForm(v20, v17)) )
        {
          if ( (a2 || !((unsigned __int8 (__thiscall *)(TESForm *))v17->vtbl->Unk_1E)(v17))
            && (a3 || v17->member.refID != 0xF) )
          {
            sub_470520(v17);
            if ( v21 != 0xFFFFFFFF )
            {
              if ( v21 )
              {
                v22 = *(_DWORD *)(v16 + 4);
                if ( v22 )
                  v23 += v21 * v22;
              }
            }
          }
        }
      }
      v15 = (int *)v15[1];
    }
    while ( v15 );
  }
}
