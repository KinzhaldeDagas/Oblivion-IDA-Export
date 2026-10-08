// Verified 2026-10-03: x86 ECX receiver and two 4-byte stack arguments; callee RET 8 (or tail jump to that callee). byteCount is 32-bit; previous 8-byte size_t and inferred extra register/stack arguments distorted callers. Buffer cursor is owner +0x14. Wrapper ECX receiver is replaced by global 0x00B33B00 before tail jump.
void __thiscall SaveLoad_SaveFormID(
        TESSaveLoadGame_SerializationView *self,
        const unsigned int *source,
        unsigned int byteCount)
{
  UInt32 mainThreadID; // edi
  unsigned int v5; // eax
  unsigned int i; // edi
  unsigned int FormIDToIRef; // eax

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45f7a8*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x45f7b5*/
    LOBYTE(v5) = self->flags; /*0x45f7b7*/
  else
    v5 = self->flags >> 0x12; /*0x45f7bf*/
  if ( (v5 & 1) != 0 )
    (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))(
      *(_DWORD *)&MEMORY[0xB33E90][0xF00],
      "Error: TESSaveLoadGame::SaveGameData() was called while loading.\n");
  for ( i = 0; i < byteCount >> 2; ++i ) /*0x45f7de*/
  {
    if ( self->useIrefEncoding ) /*0x45f7f0*/
      FormIDToIRef = SaveLoad_FormIDToIRef(self, source[i]); /*0x45f7fd*/
    else
      FormIDToIRef = source[i]; /*0x45f804*/
    *(_DWORD *)self->bufferCursor = FormIDToIRef; /*0x45f80b*/
    self->bufferCursor += 4; /*0x45f80d*/
  }
}
