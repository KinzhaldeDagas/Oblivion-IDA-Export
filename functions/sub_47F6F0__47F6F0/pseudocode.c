int __cdecl sub_47F6F0(float *a1, float a2)
{
  int v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+8h] [ebp+8h]

  *(float *)&v3 = a1[1] * a1[1] + *a1 * *a1 + a1[2] * a1[2];
  v4 = a2 * a2;
  if ( v4 <= (double)*(float *)&v3 )
    return v4 < (double)*(float *)&v3;
  else
    return 0xFFFFFFFF;
}
