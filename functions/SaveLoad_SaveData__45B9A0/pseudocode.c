// Verified 2026-10-03: x86 ECX receiver and two 4-byte stack arguments; callee RET 8 (or tail jump to that callee). byteCount is 32-bit; previous 8-byte size_t and inferred extra register/stack arguments distorted callers. Buffer cursor is owner +0x14. Wrapper ECX receiver is replaced by global 0x00B33B00 before tail jump.
// Verified comparative link: Fallout 0x825FF070 SaveGameDataOLD has matching copy/cursor semantics. Oblivion ABI established from instructions, not inherited from PowerPC.
void *__thiscall SaveLoad_SaveData(TESSaveLoadGame_SerializationView *self, const void *source, unsigned int byteCount)
{
  UInt32 mainThreadID; // edi
  unsigned int v5; // eax
  void *result; // eax

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45b9a7*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x45b9b4*/
    LOBYTE(v5) = self->flags; /*0x45b9b6*/
  else
    v5 = self->flags >> 0x12; /*0x45b9be*/
  if ( (v5 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))(
      *(_DWORD *)&MEMORY[0xB33E90][0xF00],
      "Error: TESSaveLoadGame::SaveGameData() was called while loading.\n");
  result = memcpy(self->bufferCursor, source, byteCount); /*0x45b9e7*/
  self->bufferCursor += byteCount; /*0x45b9ec*/
  return result; /*0x45b9f2*/
}
