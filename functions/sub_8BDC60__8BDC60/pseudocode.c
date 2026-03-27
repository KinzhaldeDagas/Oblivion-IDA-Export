float *__thiscall sub_8BDC60(_DWORD *this, float *a2)
{
  double v4; // st7
  int v5; // eax
  int v6; // eax
  float *result; // eax
  int v8; // esi
  float v9; // [esp+Ch] [ebp+4h]
  float v10; // [esp+Ch] [ebp+4h]

  sub_89FD10(this, a2);
  v4 = 0.0;
  if ( this && (v5 = *(this + 2)) != 0 )
    v9 = *(float *)(v5 + 0x34);
  else
    v9 = 0.0;
  a2[9] = v9;
  if ( this && (v6 = *(this + 2)) != 0 )
    result = (float *)(v6 + 0x20);
  else
    result = &flt_B2F080;
  a2[4] = *result;
  a2[5] = result[1];
  a2[6] = result[2];
  a2[7] = result[3];
  if ( this )
  {
    v8 = *(this + 2);
    if ( v8 )
      v4 = *(float *)(v8 + 0x30);
  }
  v10 = v4;
  a2[8] = v10;
  return result;
}
