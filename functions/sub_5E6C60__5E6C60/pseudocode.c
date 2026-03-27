bool __thiscall sub_5E6C60(Actor *this)
{
  TESForm *v2; // eax
  TESForm *v3; // eax

  if ( !Actor_IsNPC(this) )
    return 0;
  if ( !Actor_IsNPC(this) )
    return 0;
  v2 = this->vtbl->super.super.GetBaseForm(this);
  if ( !v2 || !v2[0xA].member.modlist.next )
    return 0;
  if ( Actor_IsNPC(this) )
  {
    v3 = this->vtbl->super.super.GetBaseForm(this);
    if ( v3 )
      return TESClass::IsGuardClass((TESClass *)v3[0xA].member.modlist.next);
  }
  return TESClass::IsGuardClass(0);
}
