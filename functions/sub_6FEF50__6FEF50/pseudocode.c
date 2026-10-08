float *__thiscall sub_6FEF50(float *this, int a2, float a3)
{
  float *v3; // eax
  double v4; // st5
  float *result; // eax
  float v6; // [esp+8h] [ebp-Ch]
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+10h] [ebp-4h]

  v3 = (float *)(*(_DWORD *)(a2 + 0x5C) + 0x1C * LOWORD(a3)); /*0x6fef6d*/
  *v3 = *(this + 0xC) + *v3; /*0x6fef73*/
  v3[1] = *(this + 0xD) + v3[1]; /*0x6fef7b*/
  v3[2] = *(this + 0xE) + v3[2]; /*0x6fef84*/
  v4 = *(this + 6); /*0x6fef95*/
  v6 = *(this + 0xC) * v4; /*0x6fef9b*/
  v7 = *(this + 0xD) * v4; /*0x6fefa4*/
  result = (float *)(*(_DWORD *)(a2 + 0x1C) + 0xC * LOWORD(a3)); /*0x6fefb1*/
  v8 = v4 * *(this + 0xE); /*0x6fefb4*/
  *result = *result - v6; /*0x6fefbe*/
  result[1] = result[1] - v7; /*0x6fefc7*/
  result[2] = result[2] - v8; /*0x6fefd1*/
  return result; /*0x6fefd4*/
}
