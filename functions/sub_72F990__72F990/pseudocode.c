float *__cdecl sub_72F990(float *a1, float a2, float *a3)
{
  float v5; // [esp+4h] [ebp-10h]
  float v6; // [esp+8h] [ebp-Ch]
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+20h] [ebp+Ch]
  float v9; // [esp+20h] [ebp+Ch]
  float v10; // [esp+20h] [ebp+Ch]
  float v11; // [esp+20h] [ebp+Ch]

  v8 = a3[3] * a2;
  v7 = v8;
  v9 = a3[2] * a2;
  v6 = v9;
  v10 = a3[1] * a2;
  v5 = v10;
  v11 = a2 * *a3;
  sub_714C40(a1, v11, v5, v6, v7);
  return a1;
}
