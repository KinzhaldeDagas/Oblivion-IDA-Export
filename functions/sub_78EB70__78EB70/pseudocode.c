// CTreeFileAccess::ParseUInt/ParseLong-style read. Reads the low 4-byte unsigned value and advances by 8 because local SaveLong pads longs with 4 future-expansion bytes.
int __thiscall OB_CTreeFileAccess_ReadPaddedDword_010201A0(OB_CTreeFileAccess_010201A0 *this)
{
  int byteBufferBegin; // ecx
  unsigned int cursorOffset; // edi
  int v4; // eax

  byteBufferBegin = this->byteBufferBegin; /*0x78eb73*/
  cursorOffset = this->cursorOffset; /*0x78eb79*/
  if ( !byteBufferBegin || cursorOffset >= this->byteBufferEnd - byteBufferBegin ) /*0x78eb84*/
    _invalid_parameter_noinfo(); /*0x78eb86*/
  v4 = this->byteBufferBegin; /*0x78eb8b*/
  this->cursorOffset += 8; /*0x78eb8e*/
  return *(_DWORD *)(cursorOffset + v4); /*0x78eb95*/
}
