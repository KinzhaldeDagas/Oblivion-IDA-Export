TESForm::FormFlags __thiscall sub_4CCBA0(TESObjectCELL *this, char a2)
{
  TESForm::FormFlags flags; // eax
  TESForm::FormFlags result; // eax

  flags = this->members.super.flags; /*0x4ccba5*/
  if ( a2 ) /*0x4ccba8*/
    result = flags | 0x400; /*0x4ccbaa*/
  else
    result = flags & 0xFFFFFBFF; /*0x4ccbb5*/
  this->members.super.flags = result; /*0x4ccbaf*/
  return result; /*0x4ccbb2*/
}
