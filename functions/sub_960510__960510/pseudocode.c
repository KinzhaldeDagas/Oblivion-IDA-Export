BOOL __cdecl sub_960510(float a1, int a2, float *a3, int a4, float *a5)
{
  double v5; // st6
  double v6; // st5
  int v7; // esi
  float v8; // ecx
  float v9; // edx
  int v10; // edi
  double v11; // st7
  double v12; // st7
  float v14; // [esp+8h] [ebp-24h]
  float v15; // [esp+8h] [ebp-24h]
  float v16; // [esp+Ch] [ebp-20h]
  float v17; // [esp+Ch] [ebp-20h]
  float v18; // [esp+10h] [ebp-1Ch]
  float v19; // [esp+10h] [ebp-1Ch]
  float v20[6]; // [esp+14h] [ebp-18h] BYREF

  v14 = *a5 - *a3; /*0x960521*/
  v16 = a5[1] - a3[1]; /*0x96052b*/
  v18 = a5[2] - a3[2]; /*0x960535*/
  v5 = v18; /*0x960549*/
  v6 = v16; /*0x960550*/
  if ( g_zeroNiPoint3.x == v14 && g_zeroNiPoint3.y == v6 && g_zeroNiPoint3.z == v5 ) /*0x960576*/
  {
    v10 = a2; /*0x9605e4*/
    v7 = a4; /*0x9605ea*/
    v11 = sub_96FBB0((float *)(a4 + 4), (float *)(a2 + 0x20), (float *)&a2); /*0x9605ff*/
  }
  else
  {
    v7 = a4; /*0x96057c*/
    v8 = *(float *)(a4 + 8); /*0x960585*/
    v9 = *(float *)(a4 + 0xC); /*0x96058a*/
    v10 = a2; /*0x96058f*/
    v15 = v14 * a1; /*0x960593*/
    v20[0] = *(float *)(a4 + 4); /*0x960597*/
    v20[1] = v8; /*0x9605a1*/
    v20[3] = v15; /*0x9605a5*/
    v20[2] = v9; /*0x9605a9*/
    v17 = v6 * a1; /*0x9605ad*/
    v20[4] = v17; /*0x9605bc*/
    v19 = a1 * v5; /*0x9605c4*/
    v20[5] = v19; /*0x9605cc*/
    v11 = sub_96FCD0(v20, (float *)(a2 + 0x20), (float *)&a2, (float *)&a4); /*0x9605da*/
  }
  *(float *)&a2 = v11; /*0x960607*/
  *(float *)&a4 = *(float *)(v10 + 0x38) + *(float *)(v7 + 0x10); /*0x960613*/
  v12 = *(float *)&a2; /*0x960623*/
  *(float *)&a2 = *(float *)&a4 * *(float *)&a4; /*0x960625*/
  return *(float *)&a2 >= v12; /*0x96063b*/
}
