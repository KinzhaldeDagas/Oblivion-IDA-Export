unsigned int __thiscall sub_8AC640(float *this, __m128 *a2)
{
  int v3; // ebp
  unsigned int result; // eax
  signed int v5; // esi
  __m128 *v6; // edi
  double v7; // st7
  float v8; // [esp+Ch] [ebp-8h]
  unsigned int v9; // [esp+10h] [ebp-4h]

  v3 = *((_DWORD *)this + 0x1E);
  result = 0xFFFFFFFF;
  v5 = 0;
  v9 = 0xFFFFFFFF;
  v8 = 0.1;
  if ( v3 > 0 )
  {
    v6 = *((__m128 **)this + 0x1D);
    do
    {
      v7 = sub_8ABF70(this, a2, v6);
      if ( v7 < v8 )
      {
        v8 = v7;
        v9 = v5;
      }
      ++v5;
      v6 += 3;
    }
    while ( v5 < v3 );
    return v9;
  }
  return result;
}
