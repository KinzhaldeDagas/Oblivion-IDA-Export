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

  v4 = (TESObjectREFR *)*(this + 1); /*0x486243*/
  if ( v4 ) /*0x48624a*/
    Container = TESObjectREFR_GetContainer(v4); /*0x48624c*/
  else
    Container = 0; /*0x486253*/
  p_list = &Container->list; /*0x486256*/
  v7 = 0; /*0x486259*/
  if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x48625d*/
  {
    do /*0x4862cd*/
    {
      if ( v7 ) /*0x486262*/
        break; /*0x486262*/
      p_count = &p_list->data->count; /*0x486264*/
      if ( !p_list->data ) /*0x486264*/
        break; /*0x486268*/
      v7 = p_count[1]; /*0x48626a*/
      if ( v7 && *(unsigned __int8 *)(v7 + 4) == a2 ) /*0x486279*/
      {
        v9 = (_DWORD *)*this; /*0x48627b*/
        v10 = 1; /*0x486280*/
        if ( !*this ) /*0x48627b*/
          goto LABEL_16; /*0x48627b*/
        while ( v10 ) /*0x486286*/
        {
          if ( *v9 && *(_DWORD *)(*v9 + 8) == v7 ) /*0x486291*/
            v10 = 0; /*0x486293*/
          else
            v9 = (_DWORD *)v9[1]; /*0x486297*/
          if ( !v9 ) /*0x48629c*/
            goto LABEL_16; /*0x48629c*/
        }
        if ( v9 && (v11 = *v9) != 0 ) /*0x4862b0*/
        {
          v12 = *(_DWORD *)(v11 + 4) + *p_count; /*0x4862b7*/
          if ( v12 ) /*0x4862bc*/
            *a3 = v12; /*0x4862c2*/
        }
        else
        {
LABEL_16:
          *a3 = *p_count; /*0x4862a4*/
        }
      }
      else
      {
        v7 = 0; /*0x4862c6*/
      }
      p_list = p_list->next; /*0x4862c8*/
    }
    while ( p_list ); /*0x4862cd*/
  }
  v13 = (_DWORD *)*this; /*0x4862cf*/
  if ( *this )
  {
    do
    {
      if ( v7 ) /*0x4862d9*/
        break; /*0x4862d9*/
      if ( !*v13 ) /*0x4862db*/
        break; /*0x4862df*/
      v7 = *(_DWORD *)(*v13 + 8); /*0x4862e1*/
      if ( v7 && *(unsigned __int8 *)(v7 + 4) == a2 )
      {
        v14 = (TESObjectREFR *)*(this + 1); /*0x4862f2*/
        v15 = v14 ? TESObjectREFR_GetContainer(v14) : 0;
        if ( !TESContainer_HasForm(v15, (TESForm *)v7) ) /*0x486305*/
        {
          v16 = *(_DWORD *)(*v13 + 4); /*0x486310*/
          if ( v16 > 0 ) /*0x486315*/
            *a3 = v16; /*0x48631b*/
        }
      }
      else
      {
        v7 = 0; /*0x48631f*/
      }
      v13 = (_DWORD *)v13[1]; /*0x486321*/
    }
    while ( v13 );
  }
  return v7; /*0x48632a*/
}
