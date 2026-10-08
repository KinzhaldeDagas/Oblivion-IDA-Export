// Verified 2026-10-03: x86 ECX receiver and two 4-byte stack arguments; callee RET 8 (or tail jump to that callee). byteCount is 32-bit; previous 8-byte size_t and inferred extra register/stack arguments distorted callers. Buffer cursor is owner +0x14. Wrapper ECX receiver is replaced by global 0x00B33B00 before tail jump.
// Verified control-flow repair: original body is 0x45BA00..0x45BAB0. Seven falsely separate functions at 0x45BA40/5F/65/74/80/93/A2 are internal branch targets with shared saved registers and RET 8 epilogues; no external entry xrefs found. Labels and preexisting comments retained. Returns true iff a nonzero encoded ID resolves to zero; always advances cursor by byteCount. This changes analysis only, not executable bytes.
bool __thiscall SaveLoad_LoadFormID(
        TESSaveLoadGame_SerializationView *self,
        unsigned int *destination,
        unsigned int byteCount)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  NiTLargeArrayUInt32 *irefTable; // eax
  bool v8; // [esp+Fh] [ebp-1h]

  v8 = 0; /*0x45ba14*/
  memcpy(destination, self->bufferCursor, byteCount);// EngineIssues review: SaveLoad_LoadFormID copies from save cursor before form-ID translation without an active record-buffer bounds check. /*0x45ba19*/
  if ( self->useIrefEncoding ) /*0x45ba21*/
  {
    v4 = 0; /*0x45ba31*/
    if ( byteCount >> 2 ) /*0x45ba29*/
    {
      do /*0x45ba7e*/
      {
        v5 = destination[v4]; /*0x45ba40*/
        if ( !TESDataHandler_IsFormIDCreated_(v5) ) /*0x45ba4a*/
        {
          irefTable = self->irefTable; /*0x45ba53*/
          if ( v5 <= irefTable->count ) /*0x45ba59*/
            v5 = irefTable->data[v5]; /*0x45ba62*/
          else
            v5 = 0; /*0x45ba5b*/
        }
        if ( destination[v4] ) /*0x45ba65*/
        {
          if ( !v5 ) /*0x45ba6d*/
            v8 = 1; /*0x45ba6f*/
        }
        destination[v4++] = v5; /*0x45ba74*/
      }
      while ( v4 < byteCount >> 2 ); /*0x45ba7e*/
      self->bufferCursor += byteCount; /*0x45ba84*/
      return v8; /*0x45ba87*/
    }
    else
    {
      self->bufferCursor += byteCount; /*0x45ba93*/
      return 0; /*0x45ba96*/
    }
  }
  else
  {
    self->bufferCursor += byteCount; /*0x45baa2*/
    return 0; /*0x45baa5*/
  }
}
