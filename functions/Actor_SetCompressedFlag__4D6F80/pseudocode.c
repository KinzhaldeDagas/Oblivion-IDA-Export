TESForm::FormFlags __thiscall Actor::SetCompressedFlag(Actor *this, char a2)
{
  TESForm::FormFlags flags; // eax
  TESForm::FormFlags result; // eax

  flags = this->members.super.super.super.flags; /*0x4d6f85*/
  if ( a2 ) /*0x4d6f88*/
    result = flags | kFormFlags_Compressed; /*0x4d6f8a*/
  else
    result = flags & ~kFormFlags_Compressed; /*0x4d6f95*/
  this->members.super.super.super.flags = result; /*0x4d6f8f*/
  return result; /*0x4d6f92*/
}
