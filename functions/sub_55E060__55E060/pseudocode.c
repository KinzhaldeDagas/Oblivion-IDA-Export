//
// [2026-10-03 cross-game comparison] Fallout82468728 names the homolog BSTreeManager::UpdateWindMatrices and identifies appTimer.fDelta. Oblivion independently reads strength this+1C and deltaB33E9C; Fallout reads this+14 and its own timer. Four oscillator phases and wind matrix/leaf timer calls establish correspondence; offsets differ. Plugin shadow animation consumes the same post-native update strength/delta without modifying native wind.
void __thiscall BSTreeManager_UpdateWindMatrices(BSTreeManager_OblivionVerifiedLayout *this)
{
  double windSpeed; // st7
  signed int v3; // esi
  long double v4; // st7
  long double v5; // st6
  double v6; // st5
  double v7; // rt2
  float v8; // [esp+4h] [ebp-28h]
  float v9; // [esp+8h] [ebp-24h]
  int v10; // [esp+Ch] [ebp-20h]
  float v11; // [esp+Ch] [ebp-20h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+1Ch] [ebp-10h]
  float v14; // [esp+1Ch] [ebp-10h]
  float v15; // [esp+20h] [ebp-Ch]
  float v16; // [esp+20h] [ebp-Ch]
  float v17; // [esp+20h] [ebp-Ch]
  float v18; // [esp+20h] [ebp-Ch]
  float v19; // [esp+24h] [ebp-8h]
  float v20; // [esp+24h] [ebp-8h]
  float v21; // [esp+24h] [ebp-8h]
  float v22; // [esp+24h] [ebp-8h]
  int v23; // [esp+24h] [ebp-8h]
  int v24; // [esp+24h] [ebp-8h]
  float v25; // [esp+28h] [ebp-4h]
  float v26; // [esp+28h] [ebp-4h]
  float v27; // [esp+28h] [ebp-4h]
  float v28; // [esp+28h] [ebp-4h]
  float v29; // [esp+28h] [ebp-4h]
  float v30; // [esp+28h] [ebp-4h]
  float v31; // [esp+28h] [ebp-4h]
  float v32; // [esp+28h] [ebp-4h]
  float v33; // [esp+28h] [ebp-4h]

  if ( (dword_B39F14[0] & 1) == 0 ) /*0x55e06e*/
  {
    windSpeed = this->windSpeed; /*0x55e070*/
    dword_B39F14[0] |= 1u; /*0x55e073*/
    g_BSTreePreviousWindSpeed = windSpeed; /*0x55e07a*/
  }
  v3 = 0; /*0x55e083*/
  v25 = this->windSpeed * dbl_A65198; /*0x55e08b*/
  v12 = 0.0; /*0x55e091*/
  do /*0x55e1a9*/
  {
    v13 = *(float *)(4 * v3 + 0xB39F00) + *(float *)&MEMORY[0xB33E90][0xC]; /*0x55e0ad*/
    *(float *)(4 * v3 + 0xB39F00) = v13; /*0x55e0b5*/
    if ( 0.0 != this->windSpeed ) /*0x55e0c6*/
      *(float *)(4 * v3 + 0xB39F00) = v13 * g_BSTreePreviousWindSpeed / this->windSpeed; /*0x55e0d1*/
    v14 = this->windSpeed * dbl_A46E48; /*0x55e0e5*/
    v15 = *(float *)(8 * v3 + 0xB12538) * v14 * *(float *)(4 * v3 + 0xB39F00); /*0x55e0fb*/
    v16 = sin(v15); /*0x55e108*/
    v19 = v16; /*0x55e110*/
    v17 = *(float *)(8 * v3 + 0xB1253C) * v14 * *(float *)(4 * v3 + 0xB39F00); /*0x55e126*/
    v18 = cos(v17); /*0x55e133*/
    v4 = v19; /*0x55e142*/
    v5 = v18; /*0x55e146*/
    if ( v3 == 2 ) /*0x55e14a*/
    {
      v20 = fabs(v4); /*0x55e150*/
      v21 = v20 + v12; /*0x55e15c*/
      v6 = v21; /*0x55e160*/
      v22 = fabs(v5); /*0x55e168*/
      v12 = v6 + v22; /*0x55e170*/
    }
    *(float *)&v23 = v5 * v25; /*0x55e181*/
    v10 = v23; /*0x55e189*/
    *(float *)&v24 = v4 * v25; /*0x55e18f*/
    OB_SpeedTreeLeafShader_SetWindMatrix_010201A0(v3++, v24, v10); /*0x55e19b*/
  }
  while ( v3 < 4 ); /*0x55e1a9*/
  v7 = dbl_A2FAA0; /*0x55e1d4*/
  v26 = 1.0 - fLeafRustleSpeedSwayInfluence.value + fLeafRustleSpeedSwayInfluence.value * v12 * v7; /*0x55e1d6*/
  v27 = fLeafRustleTimeScale.value * *(float *)&MEMORY[0xB33E90][0xC] * v26;// Verified: fLeafRustleTimeScale.value is multiplied by frame delta and the leaf wind modulation term, then passed to OB_SpeedTreeLeafShader_UpdateWindScalars. /*0x55e1f0*/
  v11 = v27; /*0x55e1f8*/
  v28 = 1.0 - fLeafRockSpeedSwayInfluence.value + fLeafRockSpeedSwayInfluence.value * v12 * v7; /*0x55e20e*/
  v29 = *(float *)&MEMORY[0xB33E90][0xC] * fLeafRockTimeScale.value * v28;// Verified: fLeafRockTimeScale.value is multiplied by frame delta and the leaf wind modulation term, then passed to OB_SpeedTreeLeafShader_UpdateWindScalars. /*0x55e21e*/
  v9 = v29; /*0x55e226*/
  v30 = 1.0 - fLeafRustleAmountSwayInfluence.value + fLeafRustleAmountSwayInfluence.value * v12 * v7; /*0x55e23c*/
  v31 = v30 * this->windSpeed; /*0x55e247*/
  v8 = v31; /*0x55e24f*/
  v32 = v7 * (v12 * fLeafRockAmountSwayInfluence.value) + 1.0 - fLeafRockAmountSwayInfluence.value; /*0x55e265*/
  v33 = v32 * this->windSpeed; /*0x55e270*/
  OB_SpeedTreeLeafShader_UpdateWindScalars_010201A0(v33, v8, v9, v11); /*0x55e27b*/
  g_BSTreePreviousWindSpeed = this->windSpeed; /*0x55e287*/
}
