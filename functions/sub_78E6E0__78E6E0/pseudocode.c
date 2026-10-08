// Oblivion compiler-lowered stVec::operator+: initializes the hidden return object with min(lhs.size,rhs.size), then adds components over lhs.size, matching the shipped RT4.1 source semantics (which assume compatible sizes).
OB_stVec_010201A0 *__thiscall OB_stVec_Add_010201A0(
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
  float *v10; // edx
  int v11; // ebp
  double v12; // st7

  size = rhs->size; /*0x78e6e8*/
  v4 = this->size; /*0x78e6ec*/
  if ( v4 < size ) /*0x78e6f3*/
    size = this->size; /*0x78e6f5*/
  v5 = result; /*0x78e6fc*/
  result->data[4] = 0.0; /*0x78e700*/
  result->data[3] = 0.0; /*0x78e703*/
  v6 = &result->data[2]; /*0x78e706*/
  result->data[2] = 0.0; /*0x78e709*/
  result->data[1] = 0.0; /*0x78e70b*/
  result->data[0] = 0.0; /*0x78e70e*/
  if ( size > 5 ) /*0x78e710*/
    size = 5; /*0x78e712*/
  v7 = 0; /*0x78e717*/
  result->size = size; /*0x78e71c*/
  if ( v4 >= 4 ) /*0x78e71f*/
  {
    v4 = this->size; /*0x78e735*/
    v8 = &this->data[1]; /*0x78e738*/
    do /*0x78e782*/
    {
      v9 = rhs->data[v7] + v8[0xFFFFFFFF]; /*0x78e747*/
      v7 += 4; /*0x78e74a*/
      v8 += 4; /*0x78e74d*/
      v6 += 4; /*0x78e750*/
      v6[0xFFFFFFFA] = v9; /*0x78e753*/
      *(float *)((char *)v8 + (char *)result - (char *)this - 0x10) = *(float *)((char *)v8 /*0x78e761*/
                                                                               + (char *)rhs
                                                                               - (char *)this
                                                                               - 0x10)
                                                                    + v8[0xFFFFFFFC];
      v6[0xFFFFFFFC] = *(float *)((char *)v6 + (char *)rhs - (char *)result - 0x10) + v8[0xFFFFFFFD]; /*0x78e775*/
      v6[0xFFFFFFFD] = rhs->data[v7 - 1] + v8[0xFFFFFFFE]; /*0x78e77f*/
    }
    while ( v7 < v4 - 3 ); /*0x78e782*/
    v5 = result; /*0x78e784*/
  }
  if ( v7 < v4 ) /*0x78e78a*/
  {
    v10 = &this->data[v7]; /*0x78e792*/
    v11 = v4 - v7; /*0x78e795*/
    do /*0x78e7a7*/
    {
      v12 = *(float *)((char *)v10++ + (char *)rhs - (char *)this); /*0x78e797*/
      --v11; /*0x78e79d*/
      *(float *)((char *)v10 + (char *)v5 - (char *)this - 4) = v12 + v10[0xFFFFFFFF]; /*0x78e7a3*/
    }
    while ( v11 ); /*0x78e7a7*/
  }
  return v5; /*0x78e7a9*/
}
