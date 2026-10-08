char __thiscall sub_631D70(HighProcess *this, _DWORD **a2)
{
  TESPackage *v3; // eax
  char result; // al

  if ( a2 && Actor_IsInDialogueProcedure(a2) ) /*0x631d81*/
  {
    v3 = this->GetCurrentPackage(this); /*0x631d94*/
    if ( v3 && v3->members.type == kPackageType_Dialogue && (_DWORD **)v3[1].members.super.refID == a2 ) /*0x631da3*/
      return 1; /*0x631daa*/
  }
  else
  {
    result = 1; /*0x631db4*/
    if ( this->unk220[0] ) /*0x631dad*/
      return result; /*0x631db6*/
  }
  return 0; /*0x631da5*/
}
