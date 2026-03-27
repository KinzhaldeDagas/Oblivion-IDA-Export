float *__cdecl sub_539850(float *a1, float *a2)
{
  float v3; // [esp+4h] [ebp-8h]
  float v4; // [esp+4h] [ebp-8h]
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+8h] [ebp-4h]
  float v7; // [esp+8h] [ebp-4h]
  float v8; // [esp+8h] [ebp-4h]

  v3 = a2[3];
  v6 = a2[6];
  *a1 = *a2;
  a1[1] = v3;
  a1[2] = v6;
  v4 = a2[4];
  v7 = a2[7];
  a1[4] = a2[1];
  a1[5] = v4;
  a1[6] = v7;
  v5 = a2[5];
  v8 = a2[8];
  a1[8] = a2[2];
  a1[9] = v5;
  a1[0xA] = v8;
  return a1;
}
