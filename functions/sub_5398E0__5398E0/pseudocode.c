int __cdecl sub_5398E0(int a1, float *a2)
{
  double v2; // rt0
  __int128 v4; // [esp+10h] [ebp-20h]

  sub_539850((float *)a1, a2);
  v2 = hkFactor;
  *(float *)&v4 = a2[9] * v2;
  *((float *)&v4 + 1) = a2[0xA] * v2;
  *((float *)&v4 + 2) = v2 * a2[0xB];
  *(__int128 *)(a1 + 0x30) = v4;
  return a1;
}
