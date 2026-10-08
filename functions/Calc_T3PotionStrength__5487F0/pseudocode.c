float *__cdecl Calc_T3PotionStrength(
        float *a1,
        float a2,
        float a3,
        int a4,
        char a5,
        float a6,
        float a7,
        float a8,
        char a9)
{
  long double v9; // st7
  double v10; // st7
  float *result; // eax
  double v12; // [esp+0h] [ebp-8h]
  double v13; // [esp+0h] [ebp-8h]
  float v14; // [esp+14h] [ebp+Ch]
  float v15; // [esp+14h] [ebp+Ch]
  float v16; // [esp+14h] [ebp+Ch]

  v14 = a3 / a2 / MEMORY[0xB37DD8]; /*0x548802*/
  v9 = v14; /*0x548806*/
  v15 = 1.0 / flt_B37ED0[0xE8]; /*0x548814*/
  v16 = pow(v9, v15); /*0x548821*/
  v10 = v16; /*0x548835*/
  result = (float *)(a4 - 1); /*0x548839*/
  *a1 = v16; /*0x54883f*/
  switch ( a4 ) /*0x548847*/
  {
    case 1: /*0x548847*/
      if ( a5 ) /*0x548853*/
        goto LABEL_6; /*0x548853*/
      if ( a9 ) /*0x54885c*/
        JUMPOUT(0x548945); /*0x548945*/
      result = GameSetting_GetSafeFloatPointer(MEMORY[0xB37A30]); /*0x548867*/
      *a1 = *a1 * a6 * *result + *a1; /*0x548876*/
      return result; /*0x54887c*/
    case 2: /*0x548847*/
      if ( !a5 ) /*0x548882*/
        goto Calc_T3PotionStrength___def_548847; /*0x548882*/
LABEL_6:
      if ( a9 ) /*0x54888d*/
        goto Calc_T3PotionStrength___def_548847; /*0x54888d*/
      *a1 = v10 + v10 * a7 * MEMORY[0xB37A40]; /*0x5488a1*/
      return result;
    case 3: /*0x548847*/
      goto LABEL_8;
    case 4: /*0x548847*/
      if ( a5 || a9 ) /*0x54890c*/
        goto LABEL_8; /*0x54890c*/
      v13 = *a1 * a6 * *GameSetting_GetSafeFloatPointer(MEMORY[0xB37A30]) * a8; /*0x54892b*/
      result = GameSetting_GetSafeFloatPointer(&MEMORY[0xB37A38]); /*0x54892f*/
      *a1 = *result * v13 + *a1; /*0x54893c*/
      return result; /*0x548942*/
    case 5: /*0x548847*/
      if ( !a5 || a9 ) /*0x5488c9*/
      {
LABEL_8:
        *a1 = v10 + v10 * a8 * MEMORY[0xB37A38]; /*0x5488a8*/
      }
      else
      {
        v12 = *a1 * a7 * *GameSetting_GetSafeFloatPointer(&MEMORY[0xB37A40]) * a8; /*0x5488e8*/
        result = GameSetting_GetSafeFloatPointer(&MEMORY[0xB37A38]); /*0x5488ec*/
        *a1 = *result * v12 + *a1; /*0x5488f9*/
      }
      return result; /*0x5488ff*/
    default:
Calc_T3PotionStrength___def_548847:
      JUMPOUT(0x548943); /*0x548943*/
  }
}
