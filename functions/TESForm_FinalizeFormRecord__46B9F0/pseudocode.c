UInt32 __thiscall TESForm_FinalizeFormRecord(TESForm *this)
{
  UInt32 result; // eax

  result = (unsigned int)this->member.flags >> 0xE; /*0x46b9f3*/
  if ( (this->member.flags & 0x4000) == 0 ) /*0x46b9f8*/
    *((_DWORD *)MEMORY[0xB33C14] + 1) = MEMORY[0xB33C18] - 0x14; /*0x46ba09*/
  return result; /*0x46ba0c*/
}
