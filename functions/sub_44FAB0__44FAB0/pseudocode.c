// Returns whether TESFile fileFlags bit 0x10 is set. Oblivion callers treat this as the optimized-file flag and skip storing currentRecordOffset for optimized records.
bool __thiscall TESFile_GetIsOptimized(_BYTE *this)
{
  return (*(this + 0x3DC) & 0x10) != 0; /*0x44fabb*/
}
