int __thiscall TESForm_IsOffLimits(TESForm *this)
{
  int result; // eax

  result = (unsigned int)this->member.flags >> 0x11;
  LOBYTE(result) = (this->member.flags & 0x20000) != 0;
  return result;
}
