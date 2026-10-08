float *__cdecl sub_539850(float *a1, float *a2)
{
  float v3; // [esp+4h] [ebp-8h]
  float v4; // [esp+4h] [ebp-8h]
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+8h] [ebp-4h]
  float v7; // [esp+8h] [ebp-4h]
  float v8; // [esp+8h] [ebp-4h]

  v3 = a2[3]; /*0x539863*/
  v6 = a2[6]; /*0x53986a*/
  *a1 = *a2; /*0x539871*/
  a1[1] = v3; /*0x539877*/
  a1[2] = v6; /*0x53987e*/
  v4 = a2[4]; /*0x53988a*/
  v7 = a2[7]; /*0x539891*/
  a1[4] = a2[1]; /*0x539898*/
  a1[5] = v4; /*0x53989f*/
  a1[6] = v7; /*0x5398a6*/
  v5 = a2[5]; /*0x5398b2*/
  v8 = a2[8]; /*0x5398b9*/
  a1[8] = a2[2]; /*0x5398c0*/
  a1[9] = v5; /*0x5398c7*/
  a1[0xA] = v8; /*0x5398ce*/
  return a1; /*0x5398d1*/
}
