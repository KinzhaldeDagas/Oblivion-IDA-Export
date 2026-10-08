void __thiscall Condition_Load(char *this, Data *a1)
{
  bool v3; // bl

  if ( a1 ) /*0x56a97a*/
  {
    if ( TESFile_GetChunkType(a1) == 0x54445443 || TESFile_GetChunkType(a1) == 0x41445443 ) /*0x56a996*/
    {
      v3 = TESFile_GetChunkType(a1) == 0x54445443; /*0x56a9aa*/
      TESFile_GetChunkData(a1, this, 0x18u);    // Copy the serialized 0x18-byte CTDA/CTDT body directly into ConditionEntry::Data; no function-index bounds or eval-callback validation occurs during load. /*0x56a9ad*/
      *(this + 0x14) = v3; /*0x56a9b2*/
    }
  }
}
