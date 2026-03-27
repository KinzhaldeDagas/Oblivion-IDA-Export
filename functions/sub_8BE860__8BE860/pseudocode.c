float *__thiscall sub_8BE860(__m128 **this, int a2)
{
  __m128 *v4; // eax
  __m128 *v5; // eax
  float *result; // eax
  double v7; // st7
  int v8; // esi
  float v9; // [esp+Ch] [ebp+4h]
  float v10; // [esp+Ch] [ebp+4h]

  sub_89E060(this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 0x28) = 1;
  if ( this && (v4 = *(this + 2)) != 0 )
    v5 = v4 + 2;
  else
    v5 = (__m128 *)&stru_BA7A40;
  result = sub_47DCD0((float *)(a2 + 0x10), v5);
  v7 = 0.0;
  if ( this && (result = (float *)*(this + 2)) != 0 )
    v9 = result[0xD];
  else
    v9 = 0.0;
  *(float *)(a2 + 0x24) = v9;
  if ( this )
  {
    v8 = (int)*(this + 2);
    if ( v8 )
      v7 = *(float *)(v8 + 0x30);
  }
  v10 = v7;
  *(float *)(a2 + 0x20) = v10;
  return result;
}
