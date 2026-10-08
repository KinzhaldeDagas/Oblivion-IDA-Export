// CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
float *__thiscall OB_CTreeFileAccess_ReadVec3_010201A0(OB_CTreeFileAccess_010201A0 *this, float *outVec3)
{
  int i; // edi
  int byteBufferBegin; // ecx
  unsigned int cursorOffset; // ebx
  int v6; // eax

  outVec3[2] = 0.0; /*0x78eba9*/
  outVec3[1] = 0.0; /*0x78ebac*/
  *outVec3 = 0.0; /*0x78ebb0*/
  for ( i = 0; i < 3; ++i ) /*0x78ebb5*/
  {
    byteBufferBegin = this->byteBufferBegin; /*0x78ebb7*/
    cursorOffset = this->cursorOffset; /*0x78ebbc*/
    if ( !byteBufferBegin || cursorOffset >= this->byteBufferEnd - byteBufferBegin ) /*0x78ebc7*/
      _invalid_parameter_noinfo(); /*0x78ebc9*/
    v6 = this->byteBufferBegin; /*0x78ebce*/
    this->cursorOffset += 4; /*0x78ebd1*/
    outVec3[i] = *(float *)(v6 + cursorOffset); /*0x78ebd9*/
  }
  return outVec3; /*0x78ebe6*/
}
