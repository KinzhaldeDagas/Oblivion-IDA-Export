TESContainer *__thiscall TESObjectREFR_GetContainer(TESObjectREFR *this)
{
  TESForm::FormType v2; // al
  TESContainer *v3; // eax
  TESContainer *v5; // eax

  if ( !this->vtbl->GetBaseForm(this) )
    return 0;
  *(_DWORD *)&v2 = this->vtbl->GetBaseForm(this)->member.type;
  if ( *(_DWORD *)&v2 != kFormType_Container )
  {
    if ( (unsigned int)(*(_DWORD *)&v2 - 0x23) <= 1 )
    {
      v3 = (TESContainer *)this->vtbl->GetBaseForm(this);
      if ( v3 )
        return (TESContainer *)((char *)v3 + 0x44);
      return 0;
    }
    return 0;
  }
  v5 = (TESContainer *)this->vtbl->GetBaseForm(this);
  if ( !v5 )
    return 0;
  return (TESContainer *)((char *)v5 + 0x24);
}
