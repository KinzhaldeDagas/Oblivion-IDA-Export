UInt32 __thiscall TESForm_FinalizeFormRecord(TESForm *this)
{
  UInt32 result; // eax

  result = (unsigned int)this->member.flags >> 0xE;
  if ( (this->member.flags & 0x4000) == 0 )
    *((_DWORD *)TESForm_Static_FormRecordBuffer + 1) = TESForm_Static_FormRecordSize - 0x14;
  return result;
}
