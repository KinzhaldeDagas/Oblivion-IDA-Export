float *__thiscall sub_8BE190(__m128 **this, int a2)
{
  __m128 *v3; // eax
  float *result; // eax
  double v5; // st7
  int v6; // esi
  float v7; // [esp+Ch] [ebp-34h]
  float v8; // [esp+Ch] [ebp-34h]
  __m128 v9; // [esp+10h] [ebp-30h] BYREF
  __m128 v10; // [esp+20h] [ebp-20h] BYREF

  sub_89FD10(this, (_DWORD *)a2);
  if ( this )
  {
    v3 = *(this + 2);
    if ( v3 )
    {
      v9 = v3[2];
      v10 = v3[3];
    }
  }
  sub_47DCD0((float *)(a2 + 0x10), &v9);
  result = sub_47DCD0((float *)(a2 + 0x10), &v10);
  v5 = 0.0;
  if ( this && (result = (float *)*(this + 2)) != 0 )
    v7 = result[0x10];
  else
    v7 = 0.0;
  *(float *)(a2 + 0x30) = v7;
  if ( this )
  {
    v6 = (int)*(this + 2);
    if ( v6 )
      v5 = *(float *)(v6 + 0x44);
  }
  v8 = v5;
  *(float *)(a2 + 0x34) = v8;
  return result;
}
