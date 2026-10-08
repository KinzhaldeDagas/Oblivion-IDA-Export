TESContainer *__thiscall TESObjectREFR_GetContainer(TESObjectREFR *this)
{
  TESForm::FormType v2; // al
  TESContainer *v3; // eax
  TESContainer *v5; // eax

  if ( !this->vtbl->GetBaseForm(this) ) /*0x4d6d52*/
    return 0; /*0x4d6da2*/
  *(_DWORD *)&v2 = this->vtbl->GetBaseForm(this)->member.type; /*0x4d6d60*/
  if ( *(_DWORD *)&v2 != kFormType_Container ) /*0x4d6d67*/
  {
    if ( (unsigned int)(*(_DWORD *)&v2 - 0x23) <= 1 ) /*0x4d6d6f*/
    {
      v3 = (TESContainer *)this->vtbl->GetBaseForm(this); /*0x4d6d7b*/
      if ( v3 ) /*0x4d6d7f*/
        return (TESContainer *)((char *)v3 + 0x44); /*0x4d6d86*/
      return 0; /*0x4d6d7f*/
    }
    return 0; /*0x4d6d6f*/
  }
  v5 = (TESContainer *)this->vtbl->GetBaseForm(this); /*0x4d6d96*/
  if ( !v5 ) /*0x4d6d9a*/
    return 0; /*0x4d6d8b*/
  return (TESContainer *)((char *)v5 + 0x24); /*0x4d6d81*/
}
