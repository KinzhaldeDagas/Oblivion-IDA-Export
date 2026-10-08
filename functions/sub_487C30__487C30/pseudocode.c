void __thiscall sub_487C30(ExtraContainerChanges_Data *this, TESForm *form, unsigned int referenceFormIDOrZero)
{
  TESObjectREFR *owner; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // edi
  int v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // eax

  if ( !ContainerExtraData_GetEntryForForm(this, form, 1, referenceFormIDOrZero) && !referenceFormIDOrZero ) /*0x487c75*/
  {
    owner = this->owner; /*0x487c7b*/
    if ( owner ) /*0x487c80*/
      Container = TESObjectREFR_GetContainer(owner); /*0x487c82*/
    else
      Container = 0; /*0x487c89*/
    p_list = &Container->list; /*0x487c8b*/
    if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x487c90*/
    {
      do /*0x487d00*/
      {
        if ( !p_list->next && !p_list->data ) /*0x487c97*/
          break; /*0x487c99*/
        if ( p_list->data->type == form ) /*0x487ca4*/
        {
          v7 = FormHeapAlloc(0xCu); /*0x487ca8*/
          v8 = (_DWORD *)v7; /*0x487cad*/
          if ( v7 ) /*0x487cbc*/
          {
            *(_DWORD *)(v7 + 8) = form; /*0x487cc4*/
            v9 = (_DWORD *)FormHeapAlloc(8u); /*0x487cc7*/
            if ( v9 ) /*0x487cd1*/
            {
              *v9 = 0; /*0x487cd3*/
              v9[1] = 0; /*0x487cd5*/
              *v8 = v9; /*0x487cd8*/
            }
            else
            {
              *v8 = 0; /*0x487ce1*/
            }
            v8[1] = 0; /*0x487cda*/
          }
          else
          {
            v8 = 0; /*0x487ce8*/
          }
          v8[1] = p_list->data->count; /*0x487cf8*/
        }
        p_list = p_list->next; /*0x487cfb*/
      }
      while ( p_list ); /*0x487d00*/
    }
  }
}
