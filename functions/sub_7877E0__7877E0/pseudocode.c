// Oblivion CTreeFileAccess::ParseBool: consumes one byte at cursorOffset, bounds-checks against the owned buffer, advances the cursor, and returns byte != 0. RT4.1 FileAccess.h corroborates the method name.
bool __thiscall OB_CTreeFileAccess_ParseBool_010201A0(OB_CTreeFileAccess_010201A0 *this)
{
  int v1; // ebx
  unsigned int v3; // edi
  int byteBufferBegin; // ecx

  v3 = this->cursorOffset++; /*0x7877e4*/
  byteBufferBegin = this->byteBufferBegin; /*0x7877eb*/
  if ( !byteBufferBegin || v3 >= this->byteBufferEnd - byteBufferBegin ) /*0x7877f9*/
    _invalid_parameter_noinfo(v1, v3, (int)this); /*0x7877fb*/
  return *(_BYTE *)(v3 + this->byteBufferBegin) != 0; /*0x787808*/
}
