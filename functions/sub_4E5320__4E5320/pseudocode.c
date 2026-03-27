int __cdecl sub_4E5320(float *a1)
{
  int v2; // edx
  int result; // eax
  int v4; // [esp+10h] [ebp+4h]

  v4 = (int)*a1;
  v2 = (int)a1[1] >> 9;
  result = 0;
  if ( (unsigned int)((v4 >> 9) + 0x7FFF) <= 0xFFFD && (unsigned int)(v2 + 0x7FFF) <= 0xFFFD )
    return (unsigned __int16)v2 | (v4 >> 9 << 0x10);
  return result;
}
