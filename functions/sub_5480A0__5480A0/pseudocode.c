// Oblivion native attribute-bonus lookup. skillIncreaseCount <= 0 returns 1; values >= 10 use iLevelUp10Mult. Constructor defaults: counts 1-4 => x2, 5-7 => x3, 8-9 => x4, 10+ => x5.
SInt32 __cdecl LevelUp_GetAttributeMultiplierFromCount(SInt32 skillIncreaseCount)
{
  SInt32 v1; // ecx
  SInt32 result; // eax
  SInt32 *v3; // ecx
  _DWORD v4[11]; // [esp+0h] [ebp-2Ch]

  v1 = skillIncreaseCount; /*0x5480a3*/
  result = 1; /*0x5480aa*/
  v4[1] = &g_iLevelUp01Mult; /*0x5480af*/
  v4[2] = &g_iLevelUp02Mult; /*0x5480b6*/
  v4[3] = &g_iLevelUp03Mult; /*0x5480be*/
  v4[4] = &g_iLevelUp04Mult; /*0x5480c6*/
  v4[5] = &g_iLevelUp05Mult; /*0x5480ce*/
  v4[6] = &g_iLevelUp06Mult; /*0x5480d6*/
  v4[7] = &g_iLevelUp07Mult; /*0x5480de*/
  v4[8] = &g_iLevelUp08Mult; /*0x5480e6*/
  v4[9] = &g_iLevelUp09Mult; /*0x5480ee*/
  v4[0xA] = &g_iLevelUp10Mult; /*0x5480f6*/
  if ( skillIncreaseCount < 0xA ) /*0x5480fe*/
  {
    if ( skillIncreaseCount <= 0 ) /*0x548109*/
      return result; /*0x548109*/
  }
  else
  {
    v1 = 0xA; /*0x548100*/
  }
  v3 = (SInt32 *)v4[v1]; /*0x54810b*/
  if ( !v3 ) /*0x548111*/
  {
    flt_B35464[0] = 0.0; /*0x548113*/
    v3 = (SInt32 *)flt_B35464; /*0x548119*/
  }
  return *v3; /*0x548120*/
}
