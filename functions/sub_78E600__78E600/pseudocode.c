double __thiscall sub_78E600(float *this)
{
  int v1; // edi
  int v2; // esi
  unsigned int v3; // edx
  float *v4; // eax
  double v5; // st7
  double v6; // st7
  float v8; // [esp+8h] [ebp-4h]
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+8h] [ebp-4h]
  float v11; // [esp+8h] [ebp-4h]

  v8 = 0.0;
  v1 = *((_DWORD *)this + 5);
  v2 = 0;
  if ( v1 >= 4 )
  {
    v3 = ((unsigned int)(v1 - 4) >> 2) + 1;
    v4 = this + 2;
    v2 = 4 * v3;
    do
    {
      v5 = v4[0xFFFFFFFE];
      v4 += 4;
      --v3;
      v9 = v5 * v5 + v8;
      v10 = v4[0xFFFFFFFB] * v4[0xFFFFFFFB] + v9;
      v11 = v4[0xFFFFFFFC] * v4[0xFFFFFFFC] + v10;
      v8 = v4[0xFFFFFFFD] * v4[0xFFFFFFFD] + v11;
    }
    while ( v3 );
  }
  for ( ; v2 < v1; v8 = v6 * v6 + v8 )
    v6 = *(this + v2++);
  return (float)sqrt(v8);
}
