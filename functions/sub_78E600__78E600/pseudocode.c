// Oblivion stVec::Magnitude: sums squares over the vector's logical size and returns sqrt(sum). Exact behavior corroborated by RT4.1 Vec.cpp.
float __thiscall OB_stVec_Magnitude_010201A0(const OB_stVec_010201A0 *this)
{
  int size; // edi
  int v2; // esi
  unsigned int v3; // edx
  float *v4; // eax
  double v5; // st7
  double v6; // st7
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+8h] [ebp-4h]
  float v11; // [esp+8h] [ebp-4h]
  float v12; // [esp+8h] [ebp-4h]

  v9 = 0.0; /*0x78e605*/
  size = this->size; /*0x78e609*/
  v2 = 0; /*0x78e60c*/
  if ( size >= 4 ) /*0x78e611*/
  {
    v3 = ((unsigned int)(size - 4) >> 2) + 1; /*0x78e619*/
    v4 = &this->data[2]; /*0x78e61c*/
    v2 = 4 * v3; /*0x78e61f*/
    do /*0x78e670*/
    {
      v5 = v4[0xFFFFFFFE]; /*0x78e626*/
      v4 += 4; /*0x78e629*/
      --v3; /*0x78e62c*/
      v10 = v5 * v5 + v9; /*0x78e644*/
      v11 = v4[0xFFFFFFFB] * v4[0xFFFFFFFB] + v10; /*0x78e654*/
      v12 = v4[0xFFFFFFFC] * v4[0xFFFFFFFC] + v11; /*0x78e660*/
      v9 = v4[0xFFFFFFFD] * v4[0xFFFFFFFD] + v12; /*0x78e66c*/
    }
    while ( v3 ); /*0x78e670*/
  }
  for ( ; v2 < size; v9 = v6 * v6 + v9 ) /*0x78e674*/
    v6 = this->data[v2++]; /*0x78e676*/
  return sqrt(v9); /*0x78e69b*/
}
