// Actor_IsGuardClass: true only for NPCs whose base TESClass is a guard class. StartCombat uses this to decide alarm/guard handling.
bool __thiscall Actor_IsGuardClass(Actor *this)
{
  TESForm *v2; // eax
  TESForm *v3; // eax

  if ( !Actor_IsNPC(this) ) /*0x5e6c63*/
    return 0; /*0x5e6c63*/
  if ( !Actor_IsNPC(this) ) /*0x5e6c6e*/
    return 0; /*0x5e6c6e*/
  v2 = this->vtbl->super.super.GetBaseForm(this); /*0x5e6c81*/
  if ( !v2 || !v2[0xA].member.modlist.next ) /*0x5e6c87*/
    return 0; /*0x5e6cc3*/
  if ( Actor_IsNPC(this) ) /*0x5e6c92*/
  {
    v3 = this->vtbl->super.super.GetBaseForm(this); /*0x5e6ca5*/
    if ( v3 ) /*0x5e6ca9*/
      return TESClass::IsGuardClass((TESClass *)v3[0xA].member.modlist.next); /*0x5e6cb4*/
  }
  return TESClass::IsGuardClass(0); /*0x5e6cb3*/
}
