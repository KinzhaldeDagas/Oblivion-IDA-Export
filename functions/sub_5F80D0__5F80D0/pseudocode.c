int __thiscall sub_5F80D0(Actor *this)
{
  int result; // eax
  TESPackage *v3; // eax
  TESPackage *v4; // esi

  result = this->members.super.process->GetProcessLevel(this->members.super.process); /*0x5f80fd*/
  if ( result < 2 ) /*0x5f8102*/
  {
    v3 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f8106*/
    v4 = 0; /*0x5f8112*/
    if ( v3 ) /*0x5f811a*/
      v4 = TESPackage::TESPackage(v3); /*0x5f8123*/
    TESPackage_SetType_(v4, 0x1E); /*0x5f8131*/
    v4->members.packageFlags |= 4u; /*0x5f8136*/
    sub_5672A0(v4); /*0x5f813c*/
    Actor_AddPackage_(this, v4, 1, 1); /*0x5f8148*/
    return ((int (__thiscall *)(LowProcess *))this->members.super.process->InitUnk1A8Val)(this->members.super.process); /*0x5f8158*/
  }
  return result; /*0x5f815a*/
}
