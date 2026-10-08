// CTreeFileAccess::EndOfFile-style helper. Returns true when byte-buffer begin is null or cursor offset is at/after end-begin.
BOOL __thiscall OB_CTreeFileAccess_IsEOF_010201A0(OB_CTreeFileAccess_010201A0 *this)
{
  int byteBufferBegin; // edx

  byteBufferBegin = this->byteBufferBegin; /*0x787810*/
  return !byteBufferBegin || this->cursorOffset >= (unsigned int)(this->byteBufferEnd - byteBufferBegin); /*0x78782a*/
}
