char __thiscall sub_631D70(HighProcess *this, _DWORD **a2)
{
  TESPackage *v3; // eax
  char result; // al

  if ( a2 && sub_5E6B40(a2) )
  {
    v3 = this->GetCurrentPackage(this);
    if ( v3 && v3->members.type == 0x12 && (_DWORD **)v3[1].members.super.refID == a2 )
      return 1;
  }
  else
  {
    result = 1;
    if ( this->unk220[0] )
      return result;
  }
  return 0;
}
