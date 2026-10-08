// Oblivion compiler-lowered stVec::operator*(float): initializes the hidden return object with lhs.size and scales every active component. Exact behavior corroborated by RT4.1 Vec.cpp.
OB_stVec_010201A0 *__thiscall OB_stVec_Scale_010201A0(
        const OB_stVec_010201A0 *this,
        OB_stVec_010201A0 *result,
        float scalar)
{
  OB_stVec_010201A0 *v3; // eax
  const OB_stVec_010201A0 *v4; // ebp
  int size; // ebx
  int v6; // ecx
  float *v7; // edx
  double v8; // st7
  int v9; // ecx
  float *v10; // edi
  int v11; // ebp
  unsigned int v12; // esi
  double v13; // st5
  int v14; // ebp
  float *v15; // edx
  int v16; // ebx
  double v17; // st6
  const OB_stVec_010201A0 *v18; // [esp+8h] [ebp-4h]

  v3 = result; /*0x78e8a3*/
  result->data[4] = 0.0; /*0x78e8a8*/
  result->data[3] = 0.0; /*0x78e8ac*/
  v4 = this; /*0x78e8af*/
  result->data[2] = 0.0; /*0x78e8b1*/
  size = this->size; /*0x78e8b4*/
  result->data[1] = 0.0; /*0x78e8b7*/
  v6 = size; /*0x78e8ba*/
  result->data[0] = 0.0; /*0x78e8bc*/
  v7 = &result->data[1]; /*0x78e8c1*/
  v18 = v4; /*0x78e8c4*/
  if ( size > 5 ) /*0x78e8c8*/
    v6 = 5; /*0x78e8ca*/
  v8 = scalar; /*0x78e8cf*/
  result->size = v6; /*0x78e8d3*/
  v9 = 0; /*0x78e8d6*/
  if ( size >= 4 ) /*0x78e8db*/
  {
    v10 = &v4->data[3]; /*0x78e8e4*/
    v11 = (char *)v4 - (char *)result; /*0x78e8ea*/
    v12 = ((unsigned int)(size - 4) >> 2) + 1; /*0x78e8ec*/
    v9 = 4 * v12; /*0x78e8ef*/
    do /*0x78e920*/
    {
      v7 += 4; /*0x78e8f9*/
      v13 = v10[0xFFFFFFFD] * v8; /*0x78e8fc*/
      v10 += 4; /*0x78e8fe*/
      --v12; /*0x78e901*/
      v7[0xFFFFFFFB] = v13; /*0x78e904*/
      v7[0xFFFFFFFC] = *(float *)((char *)v7 + v11 - 0x10) * v8; /*0x78e90d*/
      v7[0xFFFFFFFD] = v10[0xFFFFFFFB] * v8; /*0x78e915*/
      v7[0xFFFFFFFE] = v10[0xFFFFFFFC] * v8; /*0x78e91d*/
    }
    while ( v12 ); /*0x78e920*/
    v4 = v18; /*0x78e922*/
  }
  if ( v9 < size ) /*0x78e92c*/
  {
    v14 = (char *)v4 - (char *)result; /*0x78e92e*/
    v15 = &result->data[v9]; /*0x78e930*/
    v16 = size - v9; /*0x78e933*/
    do /*0x78e943*/
    {
      v17 = *(float *)((char *)v15++ + v14); /*0x78e935*/
      --v16; /*0x78e93b*/
      v15[0xFFFFFFFF] = v17 * v8; /*0x78e940*/
    }
    while ( v16 ); /*0x78e943*/
  }
  return v3; /*0x78e948*/
}
