// CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
float __thiscall OB_CTreeFileAccess_ReadFloat_010201A0(OB_CTreeFileAccess_010201A0 *this)
{
  int byteBufferBegin; // ecx
  unsigned int cursorOffset; // edi
  int v4; // eax

  byteBufferBegin = this->byteBufferBegin; /*0x78eb13*/
  cursorOffset = this->cursorOffset; /*0x78eb19*/
  if ( !byteBufferBegin || cursorOffset >= this->byteBufferEnd - byteBufferBegin ) /*0x78eb24*/
    _invalid_parameter_noinfo(); /*0x78eb26*/
  v4 = this->byteBufferBegin; /*0x78eb2b*/
  this->cursorOffset += 4; /*0x78eb2e*/
  return *(float *)(v4 + cursorOffset); /*0x78eb36*/
}
