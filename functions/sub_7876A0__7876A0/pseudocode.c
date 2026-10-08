// Oblivion checked-vector size helper for 0x54-byte SIdvLeafTexture records: returns (end-begin)/0x54 or zero for null storage.
unsigned int __thiscall OB_stVector_SIdvLeafTexture_Size_010201A0(const OB_stVector_SIdvLeafTexture_010201A0 *this)
{
  unsigned int result; // eax

  result = (unsigned int)this->begin; /*0x7876a0*/
  if ( result ) /*0x7876a5*/
    return (int)((int)this->end - result) / 0x54; /*0x7876bc*/
  return result; /*0x7876a7*/
}
