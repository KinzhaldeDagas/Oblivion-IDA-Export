int __thiscall sub_5F80D0(Actor *this)
{
  int result; // eax
  TESPackage *v3; // eax
  TESPackage *v4; // esi

  result = this->members.super.process->GetProcessLevel(this->members.super.process);
  if ( result < 2 )
  {
    v3 = (TESPackage *)FormHeapAlloc(0x3Cu);
    v4 = 0;
    if ( v3 )
      v4 = TESPackage::TESPackage(v3);
    TESPackage_SetType_(v4, 0x1E);
    v4->members.packageFlags |= 4u;
    sub_5672A0(v4);
    Actor_AddPackage_(this, v4, 1, 1);
    return ((int (__thiscall *)(LowProcess *))this->members.super.process->InitUnk1A8Val)(this->members.super.process);
  }
  return result;
}
