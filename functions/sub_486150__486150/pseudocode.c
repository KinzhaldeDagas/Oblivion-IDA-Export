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

  v4 = (TESObjectREFR *)*(this + 1); /*0x486154*/
  if ( v4 ) /*0x48615b*/
    Container = TESObjectREFR_GetContainer(v4); /*0x48615d*/
  else
    Container = 0; /*0x486164*/
  p_list = &Container->list; /*0x48616a*/
  type = 0; /*0x48616d*/
  if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x486171*/
  {
    do /*0x4861db*/
    {
      if ( type ) /*0x486175*/
        break; /*0x486175*/
      type = p_list->data->type; /*0x486179*/
      if ( type && sub_568240((unsigned __int8 *)p_list->data->type) == a2 ) /*0x48618d*/
      {
        v8 = (_DWORD *)*this; /*0x48618f*/
        v9 = 1; /*0x486193*/
        if ( !*this ) /*0x48618f*/
          goto LABEL_15; /*0x48618f*/
        while ( v9 ) /*0x486199*/
        {
          if ( *v8 && *(TESForm **)(*v8 + 8) == type ) /*0x4861a4*/
            v9 = 0; /*0x4861a6*/
          else
            v8 = (_DWORD *)v8[1]; /*0x4861aa*/
          if ( !v8 ) /*0x4861af*/
            goto LABEL_15; /*0x4861af*/
        }
        if ( v8 && (v10 = *v8) != 0 ) /*0x4861c2*/
        {
          v11 = *(_DWORD *)(v10 + 4) + p_list->data->count; /*0x4861cb*/
          if ( v11 ) /*0x4861cd*/
            *a3 = v11; /*0x4861cf*/
        }
        else
        {
LABEL_15:
          *a3 = p_list->data->count; /*0x4861b5*/
        }
      }
      else
      {
        type = 0; /*0x4861d4*/
      }
      p_list = p_list->next; /*0x4861d6*/
    }
    while ( p_list ); /*0x4861db*/
  }
  v12 = (_DWORD *)*this; /*0x4861dd*/
  if ( *this )
  {
    do
    {
      if ( type ) /*0x4861e5*/
        break; /*0x4861e5*/
      type = *(TESForm **)(*v12 + 8); /*0x4861e9*/
      if ( type && sub_568240(*(unsigned __int8 **)(*v12 + 8)) == a2 )
      {
        v13 = (TESObjectREFR *)*(this + 1); /*0x4861ff*/
        v14 = v13 ? TESObjectREFR_GetContainer(v13) : 0;
        if ( !TESContainer_HasForm(v14, type) ) /*0x486212*/
        {
          v15 = *(_DWORD *)(*v12 + 4); /*0x48621d*/
          if ( v15 > 0 ) /*0x486222*/
            *a3 = v15; /*0x486224*/
        }
      }
      else
      {
        type = 0; /*0x486229*/
      }
      v12 = (_DWORD *)v12[1]; /*0x48622b*/
    }
    while ( v12 );
  }
  return type; /*0x486232*/
}
