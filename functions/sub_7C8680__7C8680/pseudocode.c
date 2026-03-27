float *__cdecl sub_7C8680(float *a1)
{
  float v2[16]; // [esp+4h] [ebp-40h] BYREF

  v2[0] = *a1;
  v2[1] = a1[1];
  v2[2] = a1[2];
  v2[3] = a1[9];
  v2[4] = a1[3];
  v2[5] = a1[4];
  v2[6] = a1[5];
  v2[7] = a1[0xA];
  v2[8] = a1[6];
  v2[9] = a1[7];
  v2[0xA] = a1[8];
  v2[0xB] = a1[0xB];
  v2[0xC] = 0.0;
  v2[0xD] = 0.0;
  v2[0xE] = 0.0;
  v2[0xF] = a1[0xC];
  qmemcpy(&unk_B45560, v2, 0x40u);
  return a1;
}
