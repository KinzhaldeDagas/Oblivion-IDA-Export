double __cdecl Calc_Disposition(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        float a13)
{
  char v13; // bl
  int v14; // esi
  int v15; // ebp
  int v16; // edi
  int v17; // eax
  double v18; // st6
  double v19; // st6
  int v20; // eax
  int v21; // eax
  double result; // st7
  int v23; // [esp+8h] [ebp+8h]
  int v24; // [esp+1Ch] [ebp+1Ch]
  int v25; // [esp+20h] [ebp+20h]
  int v26; // [esp+24h] [ebp+24h]
  int v27; // [esp+28h] [ebp+28h]
  float v28; // [esp+34h] [ebp+34h]

  v13 = LOBYTE(a13); /*0x546291*/
  v14 = 0; /*0x546295*/
  v15 = Double_To_SInt32( /*0x546299*/
          ((double)a2 * flt_B36778[0x16] + flt_B36778[0x14] + (double)a1 * flt_B36778[0x12] + flt_B36778[0x10])
        * dbl_A2FAA0);
  if ( !LOBYTE(a13) ) /*0x54629b*/
    v14 = Double_To_SInt32((double)a4 * flt_B36778[0x18]); /*0x5462ac*/
  v28 = 0.0; /*0x5462b2*/
  if ( !v13 ) /*0x5462b6*/
    v28 = ((double)a3 * flt_B36778[0x1E] + flt_B36778[0x1A]) * (flt_B36778[0x1A] * (double)a5); /*0x5462d2*/
  v16 = 0; /*0x5462d6*/
  v23 = 0; /*0x5462da*/
  if ( !v13 ) /*0x5462de*/
  {
    v16 = Double_To_SInt32(((double)a3 * flt_B36778[0x24] + flt_B36778[0x22]) * ((double)a6 * flt_B36778[0x20])); /*0x546301*/
    v23 = v16; /*0x546303*/
  }
  v24 = Double_To_SInt32((double)a7 * flt_B36778[0x26]); /*0x546320*/
  v26 = Double_To_SInt32(((double)a9 * flt_B36778[0x28] + flt_B36778[0x2A]) * (flt_B36778[0x28] * (double)a8)); /*0x54633f*/
  v25 = Double_To_SInt32((double)a10 * flt_B36778[0x2E]); /*0x546352*/
  v17 = Double_To_SInt32((double)a11 * flt_B36778[0x30]); /*0x54635c*/
  v18 = g_GameSettingStringPointers_B36CD8[8]; /*0x546365*/
  v27 = v17; /*0x54636b*/
  if ( v18 >= v28 ) /*0x546376*/
  {
    v19 = v18 * dbl_A3D360; /*0x546380*/
    if ( v19 > v28 ) /*0x54638f*/
      v28 = v19; /*0x546391*/
  }
  else
  {
    v28 = g_GameSettingStringPointers_B36CD8[8]; /*0x54637a*/
  }
  v20 = LODWORD(g_GameSettingStringPointers_B36CD8[4]); /*0x546399*/
  if ( v14 > SLODWORD(g_GameSettingStringPointers_B36CD8[4]) || (v20 = -v20, v14 < v20) ) /*0x5463a6*/
    v14 = v20; /*0x5463a8*/
  v21 = LODWORD(g_GameSettingStringPointers_B36CD8[6]); /*0x5463aa*/
  if ( v16 > SLODWORD(g_GameSettingStringPointers_B36CD8[6]) || (v21 = -v21, v16 < v21) ) /*0x5463b7*/
    v23 = v21; /*0x5463b9*/
  result = (double)(v15 + v14) + v28 + (double)v23 + (double)v24 + (double)v26 + (double)v25 + (double)v27 + (double)a12; /*0x5463e3*/
  Double_To_SInt32(result); /*0x5463e7*/
  return result;
}
