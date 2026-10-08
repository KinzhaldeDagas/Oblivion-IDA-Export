// Verified 2026-10-03: x86 ECX receiver and two 4-byte stack arguments; callee RET 8 (or tail jump to that callee). byteCount is 32-bit; previous 8-byte size_t and inferred extra register/stack arguments distorted callers. Buffer cursor is owner +0x14. Wrapper ECX receiver is replaced by global 0x00B33B00 before tail jump.
bool __thiscall TESForm_LoadFormIDFromCurrentSaveGame(TESForm *self, unsigned int *destination, unsigned int byteCount)
{
  return SaveLoad_LoadFormID(g_TESSaveLoadGame, destination, byteCount);
}
