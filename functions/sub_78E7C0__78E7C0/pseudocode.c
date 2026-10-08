// Oblivion compiler-lowered stVec::operator-: initializes the hidden return object with min(lhs.size,rhs.size), then subtracts components over lhs.size, matching the shipped RT4.1 source semantics (which assume compatible sizes).
OB_stVec_010201A0 *__thiscall OB_stVec_Subtract_010201A0(
        const OB_stVec_010201A0 *this,
        OB_stVec_010201A0 *result,
        const OB_stVec_010201A0 *rhs)
{
  int size; // edx
  int v4; // ebp
  OB_stVec_010201A0 *v5; // eax
  float *v6; // esi
  int v7; // edi
  float *v8; // edx
  double v9; // st7
  int v10; // ecx
  float *v11; // edx
  int v12; // ebp
  double v13; // st7

  size = rhs->size; /*0x78e7c8*/
  v4 = this->size; /*0x78e7cc*/
  if ( v4 < size ) /*0x78e7d3*/
    size = this->size; /*0x78e7d5*/
  v5 = result; /*0x78e7dc*/
  result->data[4] = 0.0; /*0x78e7e0*/
  result->data[3] = 0.0; /*0x78e7e3*/
  v6 = &result->data[2]; /*0x78e7e6*/
  result->data[2] = 0.0; /*0x78e7e9*/
  result->data[1] = 0.0; /*0x78e7eb*/
  result->data[0] = 0.0; /*0x78e7ee*/
  if ( size > 5 ) /*0x78e7f0*/
    size = 5; /*0x78e7f2*/
  v7 = 0; /*0x78e7f7*/
  result->size = size; /*0x78e7fc*/
  if ( v4 >= 4 ) /*0x78e7ff*/
  {
    v4 = this->size; /*0x78e815*/
    v8 = &rhs->data[1]; /*0x78e818*/
    do /*0x78e862*/
    {
      v9 = this->data[v7] - v8[0xFFFFFFFF]; /*0x78e827*/
      v7 += 4; /*0x78e82a*/
      v8 += 4; /*0x78e82d*/
      v6 += 4; /*0x78e830*/
      v6[0xFFFFFFFA] = v9; /*0x78e833*/
      *(float *)((char *)v8 + (char *)result - (char *)rhs - 0x10) = *(float *)((char *)v8 /*0x78e841*/
                                                                              + (char *)this
                                                                              - (char *)rhs
                                                                              - 0x10)
                                                                   - v8[0xFFFFFFFC];
      v6[0xFFFFFFFC] = *(float *)((char *)v6 + (char *)this - (char *)result - 0x10) - v8[0xFFFFFFFD]; /*0x78e855*/
      v6[0xFFFFFFFD] = this->data[v7 - 1] - v8[0xFFFFFFFE]; /*0x78e85f*/
    }
    while ( v7 < v4 - 3 ); /*0x78e862*/
    v5 = result; /*0x78e864*/
  }
  if ( v7 < v4 ) /*0x78e86a*/
  {
    v10 = (char *)this - (char *)rhs; /*0x78e86e*/
    v11 = &rhs->data[v7]; /*0x78e872*/
    v12 = v4 - v7; /*0x78e875*/
    do /*0x78e887*/
    {
      v13 = *(float *)((char *)v11++ + v10); /*0x78e877*/
      --v12; /*0x78e87d*/
      *(float *)((char *)v11 + (char *)v5 - (char *)rhs - 4) = v13 - v11[0xFFFFFFFF]; /*0x78e883*/
    }
    while ( v12 ); /*0x78e887*/
  }
  return v5; /*0x78e889*/
}
