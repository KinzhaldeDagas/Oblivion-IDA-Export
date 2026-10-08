// CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
void *__fastcall OB_CTreeFileAccess_ReadString_010201A0(
        OB_CTreeFileAccess_010201A0 *this,
        int scratch,
        void *outSmallString)
{
  int byteBufferBegin; // eax
  unsigned int cursorOffset; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // edi
  int v10; // ecx

  *((_DWORD *)outSmallString + 6) = 0xF; /*0x78ec51*/
  *((_DWORD *)outSmallString + 5) = 0; /*0x78ec58*/
  *((_BYTE *)outSmallString + 4) = 0; /*0x78ec61*/
  byteBufferBegin = this->byteBufferBegin; /*0x78ec64*/
  cursorOffset = this->cursorOffset; /*0x78ec69*/
  if ( !byteBufferBegin || cursorOffset >= this->byteBufferEnd - byteBufferBegin ) /*0x78ec80*/
    _invalid_parameter_noinfo(); /*0x78ec82*/
  v6 = this->byteBufferBegin; /*0x78ec87*/
  this->cursorOffset += 4; /*0x78ec8a*/
  v7 = *(_DWORD *)(cursorOffset + v6); /*0x78ec8f*/
  if ( v7 > 0 ) /*0x78ec93*/
  {
    v8 = v7; /*0x78ec95*/
    do /*0x78ecce*/
    {
      v9 = this->cursorOffset++; /*0x78ec97*/
      v10 = this->byteBufferBegin; /*0x78ec9e*/
      if ( !v10 || v9 >= this->byteBufferEnd - v10 ) /*0x78ecac*/
        _invalid_parameter_noinfo(); /*0x78ecae*/
      sub_6EDAA0(outSmallString, v9, 1u, *(_BYTE *)(v9 + this->byteBufferBegin)); /*0x78ecc6*/
      --v8; /*0x78eccb*/
    }
    while ( v8 ); /*0x78ecce*/
  }
  return outSmallString; /*0x78ecd2*/
}
