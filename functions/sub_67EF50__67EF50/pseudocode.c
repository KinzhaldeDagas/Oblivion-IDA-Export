double __cdecl sub_67EF50(char *a1, char *a2)
{
  float *v2; // esi
  float *v3; // eax
  float v5; // [esp+4h] [ebp-10h]
  float v6; // [esp+8h] [ebp-Ch]
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+10h] [ebp-4h]
  float v9; // [esp+18h] [ebp+4h]

  v5 = flt_A32048;
  if ( a1 )
  {
    if ( a2 )
    {
      v2 = (float *)sub_4BEF40(a2);
      v3 = (float *)sub_4BEF40(a1);
      v6 = *v3 - *v2;
      v7 = v3[1] - v2[1];
      v8 = v3[2] - v2[2];
      v9 = v6 * v6 + v7 * v7 + v8 * v8;
      return (float)sqrt(v9);
    }
  }
  return v5;
}
