// OBLIVION AUTHORITY (2026-08-30): Resizes the 0x14-byte vector<bool>: logicalSize is followed by a 0x10-byte vector<unsigned int> word store; unused high bits in the last word are cleared.
void __thiscall OB_stVectorBool_Resize_010201A0(OB_stVectorBool_010201A0 *this, unsigned int newSize)
{
  unsigned int requestedSize; // ebx
  OB_stVectorBool_010201A0 *v3; // edx
  unsigned int *begin; // ecx
  OB_stVectorUInt32_010201A0 *p_words; // esi
  unsigned int requiredWords; // edi
  char *end; // ebp
  unsigned int v8; // ebx
  char *v9; // ebx
  int tailBitCount; // ebx
  unsigned int *v11; // ecx
  unsigned int tailWordIndex; // edi
  int v14[2]; // [esp+Ch] [ebp-8h] BYREF

  requestedSize = newSize; /*0x7a8984*/
  v3 = this; /*0x7a898b*/
  begin = this->words.begin; /*0x7a8998*/
  p_words = &v3->words; /*0x7a899d*/
  requiredWords = (newSize + 0x1F) >> 5; /*0x7a89a3*/
  if ( begin ) /*0x7a89a8*/
  {
    if ( requiredWords < v3->words.end - begin ) /*0x7a89b4*/
    {
      end = (char *)v3->words.end; /*0x7a89b7*/
      if ( begin > (unsigned int *)end ) /*0x7a89bc*/
        _invalid_parameter_noinfo(newSize, requiredWords, (int)p_words); /*0x7a89be*/
      v8 = (unsigned int)p_words->begin; /*0x7a89c3*/
      if ( (unsigned int *)v8 > p_words->end ) /*0x7a89c9*/
        _invalid_parameter_noinfo(v8, requiredWords, (int)p_words); /*0x7a89cb*/
      v14[1] = v8; /*0x7a89d0*/
      v9 = (char *)(v8 + 4 * requiredWords); /*0x7a89d4*/
      if ( (unsigned int *)v9 > p_words->end || (unsigned int *)v9 < p_words->begin ) /*0x7a89df*/
        _invalid_parameter_noinfo((int)v9, requiredWords, (int)p_words); /*0x7a89e1*/
      OB_stVector4_EraseRange_010201A0(p_words, (int)v9, v14, (int)p_words, v9, (int)p_words, end); /*0x7a89f1*/
      v3 = this; /*0x7a89f6*/
      requestedSize = newSize; /*0x7a89fa*/
    }
  }
  v3->logicalSize = requestedSize; /*0x7a89ff*/
  tailBitCount = requestedSize & 0x1F; /*0x7a8a01*/
  if ( tailBitCount ) /*0x7a8a04*/
  {
    v11 = p_words->begin; /*0x7a8a06*/
    tailWordIndex = requiredWords - 1; /*0x7a8a09*/
    if ( !v11 || tailWordIndex >= p_words->end - v11 ) /*0x7a8a1a*/
      _invalid_parameter_noinfo(tailBitCount, tailWordIndex, (int)p_words); /*0x7a8a1c*/
    p_words->begin[tailWordIndex] &= (1 << tailBitCount) - 1; /*0x7a8a33*/
  }
}
