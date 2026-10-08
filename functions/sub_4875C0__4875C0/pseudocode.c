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

  v2 = (TESObjectREFR *)*(this + 1); /*0x4875c4*/
  v3 = 0; /*0x4875c8*/
  if ( v2 ) /*0x4875cd*/
    Container = TESObjectREFR_GetContainer(v2); /*0x4875cf*/
  else
    Container = 0; /*0x4875d6*/
  p_list = &Container->list; /*0x4875d8*/
  if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x4875dd*/
  {
    do /*0x487637*/
    {
      if ( !p_list->next && !p_list->data ) /*0x4875e6*/
        break; /*0x4875e9*/
      type = p_list->data->type; /*0x4875ed*/
      if ( type && sub_469980((int)p_list->data->type) ) /*0x4875f5*/
      {
        v7 = (_DWORD *)*this; /*0x487601*/
        v8 = 1; /*0x487605*/
        if ( !*this ) /*0x487601*/
          goto LABEL_16; /*0x487601*/
        while ( v8 ) /*0x487612*/
        {
          if ( *v7 && *(TESForm **)(*v7 + 8) == type ) /*0x48761d*/
            v8 = 0; /*0x48761f*/
          else
            v7 = (_DWORD *)v7[1]; /*0x487623*/
          if ( !v7 ) /*0x487628*/
            goto LABEL_16; /*0x487628*/
        }
        if ( v7 && (v14 = *v7) != 0 ) /*0x487687*/
        {
          v3 += p_list->data->count + *(_DWORD *)(v14 + 4); /*0x487690*/
        }
        else
        {
LABEL_16:
          v3 += p_list->data->count; /*0x48762a*/
          if ( v3 < 0 ) /*0x48762e*/
            v3 = -v3; /*0x487630*/
        }
      }
      p_list = p_list->next; /*0x487632*/
    }
    while ( p_list ); /*0x487637*/
  }
  v9 = (_DWORD *)*this; /*0x487639*/
  if ( *this )
  {
    do
    {
      if ( !v9[1] && !*v9 ) /*0x487646*/
        break; /*0x487649*/
      v10 = *(TESForm **)(*v9 + 8); /*0x48764d*/
      if ( v10 )
      {
        if ( sub_469980(*(_DWORD *)(*v9 + 8)) )
        {
          v11 = (TESObjectREFR *)*(this + 1); /*0x487661*/
          if ( !v11
            || !TESObjectREFR_GetContainer(v11)
            || ((v12 = (TESObjectREFR *)*(this + 1)) == 0 ? (v13 = 0) : (v13 = TESObjectREFR_GetContainer(v12)),
                !TESContainer_HasForm(v13, v10) && *(int *)(*v9 + 4) > 0) )
          {
            v3 += *(_DWORD *)(*v9 + 4); /*0x4876ac*/
          }
        }
      }
      v9 = (_DWORD *)v9[1]; /*0x4876af*/
    }
    while ( v9 );
  }
  return v3; /*0x4876b6*/
}
