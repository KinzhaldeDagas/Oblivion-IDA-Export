// Oblivion CTreeFileAccess::PeekToken. Bounds-checks byteBufferBegin/cursorOffset/byteBufferEnd, returns the little-endian dword at the current cursor without advancing it. CTreeEngine::Parse uses the result to detect optional token 0x1B58 before consuming it; RT4.1 FileAccess.cpp corroborates PeekToken after this behavior was established.
unsigned int __thiscall OB_CTreeFileAccess_PeekToken_010201A0(OB_CTreeFileAccess_010201A0 *this)
{
  int v1; // ebx
  int byteBufferBegin; // ecx
  unsigned int cursorOffset; // edi

  byteBufferBegin = this->byteBufferBegin; /*0x78ebf3*/
  cursorOffset = this->cursorOffset; /*0x78ebf9*/
  if ( byteBufferBegin && cursorOffset < this->byteBufferEnd - byteBufferBegin ) /*0x78ec04*/
    return *(_DWORD *)(cursorOffset + byteBufferBegin); /*0x78ec14*/
  _invalid_parameter_noinfo(v1, cursorOffset, (int)this); /*0x78ec06*/
  return *(_DWORD *)(cursorOffset + this->byteBufferBegin); /*0x78ec11*/
}
