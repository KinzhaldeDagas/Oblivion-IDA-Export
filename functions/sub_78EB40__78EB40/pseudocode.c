// CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
int __thiscall OB_CTreeFileAccess_ReadDword_010201A0(OB_CTreeFileAccess_010201A0 *this)
{
  int v1; // ebx
  int byteBufferBegin; // ecx
  unsigned int cursorOffset; // edi
  int v5; // eax

  byteBufferBegin = this->byteBufferBegin; /*0x78eb43*/
  cursorOffset = this->cursorOffset; /*0x78eb49*/
  if ( !byteBufferBegin || cursorOffset >= this->byteBufferEnd - byteBufferBegin ) /*0x78eb54*/
    _invalid_parameter_noinfo(v1, cursorOffset, (int)this); /*0x78eb56*/
  v5 = this->byteBufferBegin; /*0x78eb5b*/
  this->cursorOffset += 4; /*0x78eb5e*/
  return *(_DWORD *)(cursorOffset + v5); /*0x78eb65*/
}
