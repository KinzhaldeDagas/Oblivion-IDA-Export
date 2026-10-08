// CTreeFileAccess-style memory reader constructor. Copies supplied SPT bytes into an owned byte vector; cursor starts at byte offset 0.
OB_CTreeFileAccess_010201A0 *__thiscall OB_CTreeFileAccess_ctor_copy_010201A0(
        OB_CTreeFileAccess_010201A0 *this,
        const unsigned __int8 *buffer,
        int bufferSize)
{
  int v4; // esi
  int *p_vectorCookieOrAlloc; // edi
  int v6; // ecx

  v4 = 0; /*0x78d62b*/
  p_vectorCookieOrAlloc = &this->vectorCookieOrAlloc; /*0x78d62d*/
  this->cursorOffset = 0; /*0x78d630*/
  this->byteBufferBegin = 0; /*0x78d633*/
  this->byteBufferEnd = 0; /*0x78d636*/
  this->byteBufferCapacity = 0; /*0x78d639*/
  OB_stVectorByte_ResizeFill_010201A0((OB_stVectorByte_010201A0 *)&this->vectorCookieOrAlloc, bufferSize, 0); /*0x78d648*/
  if ( bufferSize > 0 ) /*0x78d64f*/
  {
    do /*0x78d678*/
    {
      v6 = p_vectorCookieOrAlloc[1]; /*0x78d651*/
      if ( !v6 || v4 >= (unsigned int)(p_vectorCookieOrAlloc[2] - v6) ) /*0x78d65f*/
        _invalid_parameter_noinfo(); /*0x78d661*/
      *(_BYTE *)(v4 + p_vectorCookieOrAlloc[1]) = buffer[v4]; /*0x78d670*/
      ++v4; /*0x78d673*/
    }
    while ( v4 < bufferSize ); /*0x78d678*/
  }
  return this; /*0x78d67c*/
}
