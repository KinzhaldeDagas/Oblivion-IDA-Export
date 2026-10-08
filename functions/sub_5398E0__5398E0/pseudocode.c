int __cdecl sub_5398E0(int a1, float *a2)
{
  double v2; // rt0
  __int128 v4; // [esp+10h] [ebp-20h]

  sub_539850((float *)a1, a2); /*0x5398fe*/
  v2 = hkFactor; /*0x539915*/
  *(float *)&v4 = a2[9] * v2; /*0x539919*/
  *((float *)&v4 + 1) = a2[0xA] * v2; /*0x539922*/
  *((float *)&v4 + 2) = v2 * a2[0xB]; /*0x53992a*/
  *(__int128 *)(a1 + 0x30) = v4; /*0x539933*/
  return a1; /*0x539937*/
}
