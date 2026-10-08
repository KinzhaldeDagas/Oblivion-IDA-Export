float *__cdecl Calc_T1PotionStrength(
        float *a1,
        float *a2,
        float a3,
        float a4,
        int a5,
        char a6,
        float a7,
        float a8,
        float a9,
        char a10)
{
  long double v10; // st7
  float *result; // eax
  double v12; // st7
  double v13; // [esp+4h] [ebp-8h]
  double v14; // [esp+4h] [ebp-8h]
  double v15; // [esp+4h] [ebp-8h]
  double v16; // [esp+4h] [ebp-8h]
  float v17; // [esp+1Ch] [ebp+10h]
  float v18; // [esp+1Ch] [ebp+10h]
  float v19; // [esp+1Ch] [ebp+10h]

  v17 = MEMORY[0xB379E0] * a4 / a3; /*0x548433*/
  v10 = v17; /*0x548437*/
  v18 = 1.0 / (flt_B37ED0[0xE8] + 1.0); /*0x548447*/
  v19 = pow(v10, v18); /*0x548454*/
  *a1 = v19; /*0x548470*/
  result = (float *)(a5 - 1); /*0x548472*/
  *a2 = v19 / MEMORY[0xB379E0] / MEMORY[0xB37DD8]; /*0x548484*/
  v12 = a9; /*0x54848c*/
  switch ( a5 ) /*0x548490*/
  {
    case 1: /*0x548490*/
      if ( a6 ) /*0x54849e*/
        goto LABEL_6; /*0x54849e*/
      if ( a10 ) /*0x5484a5*/
        goto Calc_T1PotionStrength___def_548490; /*0x5484a5*/
      *a1 = *GameSetting_GetSafeFloatPointer(MEMORY[0xB379E8]) * a7 * *a1 + *a1; /*0x5484c4*/
      result = GameSetting_GetSafeFloatPointer(MEMORY[0xB379F0]); /*0x5484c6*/
      *a2 = *result * a7 * *a2 + *a2; /*0x5484d6*/
      return result; /*0x5484dc*/
    case 2: /*0x548490*/
      if ( !a6 ) /*0x5484e4*/
        goto Calc_T1PotionStrength___def_548490; /*0x5484e4*/
LABEL_6:
      if ( a10 ) /*0x5484ef*/
        goto Calc_T1PotionStrength___def_548490; /*0x5484ef*/
      *a1 = MEMORY[0xB37A08] * a8 * *a1 + *a1; /*0x54850d*/
      *a2 = a8 * MEMORY[0xB37A10] * *a2 + *a2; /*0x54851a*/
      return result;
    case 3: /*0x548490*/
      goto LABEL_12;
    case 4: /*0x548490*/
      if ( a6 || a10 ) /*0x5485e1*/
      {
        *a1 = MEMORY[0xB379F8] * a9 * *a1 + *a1; /*0x548665*/
        *a2 = a9 * MEMORY[0xB379F8] * *a2 + *a2; /*0x548672*/
      }
      else
      {
        v15 = *GameSetting_GetSafeFloatPointer(MEMORY[0xB379E8]) * (*a1 * a7); /*0x5485fc*/
        *a1 = *a2 * a9 * *GameSetting_GetSafeFloatPointer(&MEMORY[0xB379F8]) + v15 + *a1; /*0x548618*/
        v16 = *GameSetting_GetSafeFloatPointer(MEMORY[0xB379F0]) * (*a2 * a7); /*0x54862e*/
        result = GameSetting_GetSafeFloatPointer(&MEMORY[0xB379F8]); /*0x548632*/
        *a2 = *a2 * a9 * *result + v16 + *a2; /*0x548646*/
      }
      return result; /*0x54864c*/
    case 5: /*0x548490*/
      if ( !a6 || a10 ) /*0x54852d*/
      {
        *a1 = MEMORY[0xB379F8] * v12 * *a1 + *a1; /*0x5485a3*/
        *a2 = MEMORY[0xB379F8] * v12 * *a2 + *a2; /*0x5485b1*/
      }
      else
      {
        v13 = *GameSetting_GetSafeFloatPointer(&MEMORY[0xB379F8]) * a9 * *a1; /*0x548548*/
        *a1 = *GameSetting_GetSafeFloatPointer(&MEMORY[0xB37A08]) * a8 * *a1 + v13 + *a1; /*0x548564*/
        v14 = *GameSetting_GetSafeFloatPointer(&MEMORY[0xB379F8]) * a9 * *a2; /*0x548578*/
        result = GameSetting_GetSafeFloatPointer(&MEMORY[0xB37A10]); /*0x54857c*/
        *a2 = *result * a8 * *a2 + v14 + *a2; /*0x54858f*/
        v12 = a9; /*0x548591*/
      }
LABEL_12:
      *a1 = MEMORY[0xB379F8] * v12 * *a1 + *a1; /*0x5485b3*/
      *a2 = v12 * MEMORY[0xB379F8] * *a2 + *a2; /*0x5485cc*/
      return result; /*0x5485d2*/
    default:
Calc_T1PotionStrength___def_548490:
      JUMPOUT(0x548679); /*0x548679*/
  }
}
