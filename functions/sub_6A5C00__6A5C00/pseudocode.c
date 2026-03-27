signed int __cdecl sub_6A5C00(float *a1, float *a2)
{
  float v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+8h] [ebp+8h]

  v3 = sub_6A5A10((float *)dword_B3C0E4, a1);
  v4 = sub_6A5A10((float *)dword_B3C0E4, a2);
  if ( v4 == v3 )
    return 0;
  if ( v4 <= (double)v3 )
    return 0xFFFFFFFF;
  return 1;
}
