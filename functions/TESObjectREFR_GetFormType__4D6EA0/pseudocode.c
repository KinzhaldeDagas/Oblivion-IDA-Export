signed int __thiscall TESObjectREFR_GetFormType(TESChildCELL *this)
{
  TESForm::FormType v2; // al

  if ( (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) ) /*0x4d6eb1*/
  {
    *(_DWORD *)&v2 = *(unsigned __int8 *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) /*0x4d6ec7*/
                                        + offsetof(TESFormMembr, flags))
                   - kFormType_NPC;
    if ( !*(_DWORD *)&v2 ) /*0x4d6eca*/
      return kFormType_ACHR; /*0x4d6ee0*/
    if ( *(_DWORD *)&v2 == 1 ) /*0x4d6ecf*/
      return kFormType_ACRE; /*0x4d6ed8*/
  }
  return kFormType_REFR; /*0x4d6ed1*/
}
