bool __cdecl sub_962CF0(float a1, float *a2, int a3, float *a4)
{
  double v5; // st6
  double v6; // st5
  double v7; // st7
  float v9; // [esp+10h] [ebp-5Ch]
  float v10; // [esp+14h] [ebp-58h]
  float v11; // [esp+18h] [ebp-54h]
  float v12[20]; // [esp+1Ch] [ebp-50h] BYREF
  float v13; // [esp+74h] [ebp+8h]
  float v14; // [esp+74h] [ebp+8h]
  float v15; // [esp+74h] [ebp+8h]
  float v16; // [esp+74h] [ebp+8h]
  float v17; // [esp+74h] [ebp+8h]
  float v18; // [esp+74h] [ebp+8h]

  v9 = a4[1] - a2[1]; /*0x962d01*/
  v10 = a4[2] - a2[2]; /*0x962d0a*/
  v11 = a4[3] - a2[3]; /*0x962d14*/
  v5 = v10; /*0x962d1b*/
  v6 = v9; /*0x962d23*/
  v7 = v11; /*0x962d38*/
  v13 = a2[6] * v11 + a2[5] * v10 + v9 * a2[4]; /*0x962d3c*/
  v14 = fabs(v13); /*0x962d46*/
  if ( a2[0xD] >= (double)v14 ) /*0x962d58*/
  {
    v15 = a2[8] * v5 + a2[7] * v6 + a2[9] * v7; /*0x962d6d*/
    v16 = fabs(v15); /*0x962d77*/
    if ( a2[0xE] >= (double)v16 ) /*0x962d89*/
    {
      v17 = v7 * a2[0xC] + v5 * a2[0xB] + v6 * a2[0xA]; /*0x962d9c*/
      v18 = fabs(v17); /*0x962da6*/
      if ( a2[0xF] >= (double)v18 ) /*0x962db8*/
        return 1; /*0x962dba*/
    }
  }
  sub_974250(v12, (int)a2, (int)a4, a1, flt_A37080, flt_A79DB4, 0x20); /*0x962dec*/
  sub_96F160(v12); /*0x962dff*/
  return NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)v12) == 3 /*0x962dbc*/
      || NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)v12) == 2;
}
