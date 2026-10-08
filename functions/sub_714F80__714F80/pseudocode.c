float *__cdecl sub_714F80(float *a1, float a2, float *a3, float *a4, float *a5, float *a6)
{
  float *v6; // eax
  float *v8; // [esp+Ch] [ebp-28h]
  int v9[4]; // [esp+14h] [ebp-20h] BYREF
  int v10[4]; // [esp+24h] [ebp-10h] BYREF
  float v11; // [esp+3Ch] [ebp+8h]

  v8 = sub_72FC00((float *)v9, a2, a4, a5); /*0x714fab*/
  v6 = sub_72FC00((float *)v10, a2, a3, a6); /*0x714fbb*/
  v11 = (1.0 - a2) * (a2 + a2); /*0x714fd9*/
  sub_72FC00(a1, v11, v6, v8); /*0x714fe5*/
  return a1; /*0x714ff0*/
}
