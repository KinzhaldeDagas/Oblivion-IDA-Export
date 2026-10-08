char __thiscall sub_4846D0(TESForm *this)
{
  TESForm *vtbl; // esi

  vtbl = (TESForm *)this->vtbl; /*0x4846d1*/
  if ( this->vtbl ) /*0x4846d1*/
  {
    while ( vtbl->vtbl ) /*0x4846db*/
    {
      if ( sub_41DEF0((TESForm *)vtbl->vtbl) ) /*0x4846dd*/
        return 1; /*0x4846f1*/
      vtbl = *(TESForm **)&vtbl->member.type; /*0x4846e6*/
      if ( !vtbl ) /*0x4846eb*/
        return 0; /*0x4846eb*/
    }
  }
  return 0; /*0x4846ef*/
}
