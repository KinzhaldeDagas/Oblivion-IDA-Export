float *__thiscall sub_8BDC60(_DWORD *this, float *a2)
{
  double v4; // st7
  int v5; // eax
  int v6; // eax
  float *result; // eax
  int v8; // esi
  float v9; // [esp+Ch] [ebp+4h]
  float v10; // [esp+Ch] [ebp+4h]

  sub_89FD10(this, a2); /*0x8bdc69*/
  v4 = 0.0; /*0x8bdc6e*/
  if ( this && (v5 = *(this + 2)) != 0 ) /*0x8bdc79*/
    v9 = *(float *)(v5 + 0x34); /*0x8bdc7e*/
  else
    v9 = 0.0; /*0x8bdc84*/
  a2[9] = v9; /*0x8bdc8e*/
  if ( this && (v6 = *(this + 2)) != 0 ) /*0x8bdc98*/
    result = (float *)(v6 + 0x20); /*0x8bdc9a*/
  else
    result = &flt_B2F080; /*0x8bdc9f*/
  a2[4] = *result; /*0x8bdca8*/
  a2[5] = result[1]; /*0x8bdcae*/
  a2[6] = result[2]; /*0x8bdcb4*/
  a2[7] = result[3]; /*0x8bdcba*/
  if ( this ) /*0x8bdcbd*/
  {
    v8 = *(this + 2); /*0x8bdcbf*/
    if ( v8 ) /*0x8bdcc4*/
      v4 = *(float *)(v8 + 0x30); /*0x8bdcc8*/
  }
  v10 = v4; /*0x8bdccb*/
  a2[8] = v10; /*0x8bdcd3*/
  return result; /*0x8bdcd6*/
}
