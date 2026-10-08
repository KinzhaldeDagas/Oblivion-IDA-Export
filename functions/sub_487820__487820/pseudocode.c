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

  v3 = (TESObjectREFR *)*(this + 1); /*0x487825*/
  v18 = 0; /*0x48782c*/
  if ( v3 ) /*0x487834*/
    Container = TESObjectREFR_GetContainer(v3); /*0x487836*/
  else
    Container = 0; /*0x48783d*/
  p_list = &Container->list; /*0x48783f*/
  if ( p_list ) /*0x487842*/
  {
    do /*0x487844*/
    {
      next = p_list->next; /*0x487844*/
      if ( !next && !p_list->data ) /*0x48784b*/
        break; /*0x48784b*/
      p_count = &p_list->data->count; /*0x48784f*/
      type = p_list->data->type; /*0x487851*/
      if ( type && (bool (__thiscall *)(BSExtraData *, BSExtraData *))type->member.refID == a2 ) /*0x48785f*/
      {
        v9 = (int **)*this; /*0x487861*/
        v10 = 1; /*0x487866*/
        if ( !*this ) /*0x487861*/
          goto LABEL_16; /*0x487861*/
        while ( v10 ) /*0x487872*/
        {
          if ( *v9 && (TESForm *)(*v9)[2] == type ) /*0x48787d*/
            v10 = 0; /*0x48787f*/
          else
            v9 = (int **)v9[1]; /*0x487883*/
          if ( !v9 ) /*0x487888*/
            goto LABEL_16; /*0x487888*/
        }
        if ( v9 ) /*0x4878ac*/
          v11 = *v9; /*0x4878ae*/
        else
LABEL_16:
          v11 = 0; /*0x48788a*/
        v12 = *p_count; /*0x48788c*/
        if ( *p_count < 0 ) /*0x487890*/
          return 1; /*0x487890*/
        if ( v11 && (v13 = v11[1] + v12) != 0 ) /*0x4878a2*/
          v18 += v13; /*0x4878a4*/
        else
          v18 += v12; /*0x4878b2*/
        if ( v18 > 0 ) /*0x4878bb*/
          return 1; /*0x48791f*/
      }
      p_list = next; /*0x4878bd*/
    }
    while ( next ); /*0x487844*/
  }
  v14 = (int **)*this; /*0x4878c3*/
  if ( *this ) /*0x4878c3*/
  {
    do /*0x487910*/
    {
      if ( !v14[1] && !*v14 ) /*0x4878d6*/
        break; /*0x4878d9*/
      for ( i = **v14; i; i = *(_DWORD *)(i + 4) ) /*0x4878e1*/
      {
        v16 = *(ExtraDataList **)i; /*0x4878e3*/
        if ( !*(_DWORD *)i ) /*0x4878e3*/
          break; /*0x4878e3*/
        if ( ExtraDataList_GetReferencePointer(*(ExtraDataList **)i) /*0x487902*/
          && (bool (__thiscall *)(BSExtraData *, BSExtraData *))ExtraDataList_GetReferencePointer(v16)->member.super.refID == a2 )
        {
          return 1; /*0x487902*/
        }
      }
      v14 = (int **)v14[1]; /*0x48790b*/
    }
    while ( v14 ); /*0x487910*/
  }
  return 0; /*0x487912*/
}
