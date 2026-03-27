int __thiscall sub_494ED0(TESObjectREFR *this, UInt32 a2)
{
  int result; // eax

  result = 0;
  if ( a2 < this->member.super.refID )
    return *(_DWORD *)(*(_DWORD *)&this->member.super.type + 4 * a2);
  return result;
}
