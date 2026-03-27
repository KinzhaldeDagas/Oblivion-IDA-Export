TESForm::FormFlags __thiscall sub_4CCBA0(TESObjectCELL *this, char a2)
{
  TESForm::FormFlags flags; // eax
  TESForm::FormFlags result; // eax

  flags = this->members.super.flags;
  if ( a2 )
    result = flags | 0x400;
  else
    result = flags & 0xFFFFFBFF;
  this->members.super.flags = result;
  return result;
}
