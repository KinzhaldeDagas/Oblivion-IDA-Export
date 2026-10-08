void __thiscall sub_488100(_DWORD *this, char a2, char a3)
{
  TESObjectREFR *v4; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // esi
  TESForm *type; // edi
  int Value; // eax
  int v9; // ebp
  int *v10; // ecx
  char v11; // al
  int v12; // ecx
  int v13; // ecx
  int *v14; // ebp
  int v15; // edi
  TESForm *v16; // esi
  TESObjectREFR *v17; // ecx
  TESObjectREFR *v18; // ecx
  TESContainer *v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // [esp+10h] [ebp-4h]

  v4 = (TESObjectREFR *)*(this + 1); /*0x488105*/
  v22 = 0; /*0x48810c*/
  if ( v4 ) /*0x488114*/
    Container = TESObjectREFR_GetContainer(v4); /*0x488116*/
  else
    Container = 0; /*0x48811d*/
  p_list = &Container->list; /*0x48811f*/
  if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x488124*/
  {
    do /*0x4881d6*/
    {
      if ( !p_list->next && !p_list->data ) /*0x488136*/
        break; /*0x488139*/
      type = p_list->data->type; /*0x488146*/
      if ( (a2 || !((unsigned __int8 (__thiscall *)(TESForm *))type->vtbl->Unk_1E)(type)) /*0x488163*/
        && (a3 || type->member.refID != 0xF) )
      {
        Value = TESForm_GetValue(type); /*0x488166*/
        v9 = Value; /*0x48816b*/
        if ( Value != 0xFFFFFFFF ) /*0x488173*/
        {
          if ( Value ) /*0x488177*/
          {
            v10 = (int *)*this; /*0x488179*/
            v11 = 1; /*0x48817d*/
            if ( !*this ) /*0x488179*/
              goto LABEL_23; /*0x488179*/
            while ( v11 ) /*0x488183*/
            {
              if ( *v10 && *(TESForm **)(*v10 + 8) == type ) /*0x48818e*/
                v11 = 0; /*0x488190*/
              else
                v10 = (int *)v10[1]; /*0x488194*/
              if ( !v10 ) /*0x488199*/
              {
                v22 += v9 * p_list->data->count; /*0x4881a2*/
                goto LABEL_26; /*0x4881a6*/
              }
            }
            if ( v10 && (v12 = *v10) != 0 ) /*0x4881b0*/
            {
              v13 = p_list->data->count + *(_DWORD *)(v12 + 4); /*0x4881c6*/
              if ( v13 ) /*0x4881c8*/
                v22 += v9 * v13; /*0x4881cd*/
            }
            else
            {
LABEL_23:
              v22 += v9 * p_list->data->count; /*0x4881b9*/
            }
          }
        }
      }
LABEL_26:
      p_list = p_list->next; /*0x4881d1*/
    }
    while ( p_list ); /*0x4881d6*/
  }
  v14 = (int *)*this; /*0x4881dc*/
  if ( *this )
  {
    do
    {
      v15 = *v14; /*0x4881e6*/
      if ( !*v14 ) /*0x4881e6*/
        break; /*0x4881eb*/
      v16 = *(TESForm **)(v15 + 8); /*0x4881ed*/
      if ( v16 )
      {
        v17 = (TESObjectREFR *)*(this + 1); /*0x4881f4*/
        if ( !v17
          || !TESObjectREFR_GetContainer(v17)
          || ((v18 = (TESObjectREFR *)*(this + 1)) == 0 ? (v19 = 0) : (v19 = TESObjectREFR_GetContainer(v18)),
              !TESContainer_HasForm(v19, v16)) )
        {
          if ( (a2 || !((unsigned __int8 (__thiscall *)(TESForm *))v16->vtbl->Unk_1E)(v16)) /*0x48823f*/
            && (a3 || v16->member.refID != 0xF) )
          {
            v20 = TESForm_GetValue(v16); /*0x488242*/
            if ( v20 != 0xFFFFFFFF ) /*0x48824d*/
            {
              if ( v20 ) /*0x488251*/
              {
                v21 = *(_DWORD *)(v15 + 4); /*0x488253*/
                if ( v21 ) /*0x488258*/
                  v22 += v20 * v21; /*0x48825d*/
              }
            }
          }
        }
      }
      v14 = (int *)v14[1]; /*0x488261*/
    }
    while ( v14 );
  }
}
