float *__cdecl sub_7C8680(float *a1)
{
  float v2[16]; // [esp+4h] [ebp-40h] BYREF

  v2[0] = *a1; /*0x7c868a*/
  v2[1] = a1[1]; /*0x7c8697*/
  v2[2] = a1[2]; /*0x7c86a7*/
  v2[3] = a1[9]; /*0x7c86ae*/
  v2[4] = a1[3]; /*0x7c86b5*/
  v2[5] = a1[4]; /*0x7c86bc*/
  v2[6] = a1[5]; /*0x7c86c3*/
  v2[7] = a1[0xA]; /*0x7c86ca*/
  v2[8] = a1[6]; /*0x7c86d1*/
  v2[9] = a1[7]; /*0x7c86d8*/
  v2[0xA] = a1[8]; /*0x7c86df*/
  v2[0xB] = a1[0xB]; /*0x7c86e6*/
  v2[0xC] = 0.0; /*0x7c86ec*/
  v2[0xD] = 0.0; /*0x7c86f0*/
  v2[0xE] = 0.0; /*0x7c86f4*/
  v2[0xF] = a1[0xC]; /*0x7c86fb*/
  qmemcpy(&unk_B45560, v2, 0x40u); /*0x7c86ff*/
  return a1; /*0x7c8702*/
}
