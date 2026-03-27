TESForm::FormFlags __thiscall Actor::SetCompressedFlag(Actor *this, char a2)
{
  TESForm::FormFlags flags; // eax
  TESForm::FormFlags result; // eax

  flags = this->members.super.super.super.flags;
  if ( a2 )
    result = flags | kFormFlags_Compressed;
  else
    result = flags & ~kFormFlags_Compressed;
  this->members.super.super.super.flags = result;
  return result;
}
