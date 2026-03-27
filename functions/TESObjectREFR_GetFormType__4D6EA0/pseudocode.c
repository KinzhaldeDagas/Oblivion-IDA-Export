signed int __thiscall TESObjectREFR_GetFormType(TESChildCELL *this)
{
  TESForm::FormType v2; // al

  if ( (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) )
  {
    *(_DWORD *)&v2 = *(unsigned __int8 *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this)
                                        + offsetof(TESFormMembr, flags))
                   - kFormType_NPC;
    if ( !*(_DWORD *)&v2 )
      return kFormType_ACHR;
    if ( *(_DWORD *)&v2 == 1 )
      return kFormType_ACRE;
  }
  return kFormType_REFR;
}
