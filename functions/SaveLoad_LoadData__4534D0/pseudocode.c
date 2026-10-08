// Verified 2026-10-03: x86 ECX receiver and two 4-byte stack arguments; callee RET 8 (or tail jump to that callee). byteCount is 32-bit; previous 8-byte size_t and inferred extra register/stack arguments distorted callers. Buffer cursor is owner +0x14. Wrapper ECX receiver is replaced by global 0x00B33B00 before tail jump.
// Verified comparative link: Fallout 0x825FF0B8 LoadGameDataOLD has matching copy/cursor semantics. Oblivion ABI established from instructions, not inherited from PowerPC.
void *__thiscall SaveLoad_LoadData(TESSaveLoadGame_SerializationView *self, void *destination, unsigned int byteCount)
{
  void *result; // eax

  result = memcpy(destination, self->bufferCursor, byteCount);// EngineIssues review: central save-record LoadData memcpy reads from save cursor and advances it without an active record-buffer bounds check. /*0x4534e2*/
  self->bufferCursor += byteCount; /*0x4534e7*/
  return result; /*0x4534ed*/
}
