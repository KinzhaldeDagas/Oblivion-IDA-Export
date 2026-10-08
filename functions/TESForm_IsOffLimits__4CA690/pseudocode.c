int __thiscall TESForm_IsOffLimits(TESForm *this)
{
  int result; // eax

  result = (unsigned int)this->member.flags >> 0x11; /*0x4ca693*/
  LOBYTE(result) = (this->member.flags & 0x20000) != 0; /*0x4ca696*/
  return result; /*0x4ca698*/
}
