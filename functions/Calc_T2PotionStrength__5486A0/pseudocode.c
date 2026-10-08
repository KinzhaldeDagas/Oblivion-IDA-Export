float *__cdecl Calc_T2PotionStrength(
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
  float *result; // eax
  double v10; // st7
  double v11; // [esp+0h] [ebp-8h]
  double v12; // [esp+0h] [ebp-8h]
  float v13; // [esp+14h] [ebp+Ch]

  result = (float *)(a4 - 1); /*0x5486b4*/
  v13 = a3 / a2 / MEMORY[0xB37DD8]; /*0x5486c0*/
  v10 = v13; /*0x5486c4*/
  *a1 = v13; /*0x5486c8*/
  switch ( a4 ) /*0x5486d0*/
  {
    case 1: /*0x5486d0*/
      if ( a5 ) /*0x5486dc*/
        goto LABEL_6; /*0x5486dc*/
      if ( a9 ) /*0x5486e5*/
        JUMPOUT(0x5487D6); /*0x5487d6*/
      result = GameSetting_GetSafeFloatPointer(MEMORY[0xB37A18]); /*0x5486f0*/
      *a1 = *a1 * a6 * *result + *a1; /*0x5486ff*/
      return result; /*0x548705*/
    case 2: /*0x5486d0*/
      if ( !a5 ) /*0x54870b*/
        goto Calc_T2PotionStrength___def_5486D0; /*0x54870b*/
LABEL_6:
      if ( a9 ) /*0x548716*/
        goto Calc_T2PotionStrength___def_5486D0; /*0x548716*/
      *a1 = v10 + v10 * a7 * MEMORY[0xB37A28]; /*0x54872a*/
      return result;
    case 3: /*0x5486d0*/
      goto LABEL_8;
    case 4: /*0x5486d0*/
      if ( a5 || a9 ) /*0x548799*/
        goto LABEL_8; /*0x548799*/
      v12 = *GameSetting_GetSafeFloatPointer(MEMORY[0xB37A18]) * (*a1 * a6); /*0x5487b6*/
      result = GameSetting_GetSafeFloatPointer(&MEMORY[0xB37A20]); /*0x5487ba*/
      *a1 = *a1 * a8 * *result + v12 + *a1; /*0x5487cd*/
      return result; /*0x5487d3*/
    case 5: /*0x5486d0*/
      if ( !a5 || a9 ) /*0x548752*/
      {
LABEL_8:
        *a1 = v10 + v10 * a8 * MEMORY[0xB37A20]; /*0x548731*/
      }
      else
      {
        v11 = *GameSetting_GetSafeFloatPointer(&MEMORY[0xB37A28]) * (*a1 * a7); /*0x54876f*/
        result = GameSetting_GetSafeFloatPointer(&MEMORY[0xB37A20]); /*0x548773*/
        *a1 = *a1 * a8 * *result + v11 + *a1; /*0x548786*/
      }
      return result; /*0x54878c*/
    default:
Calc_T2PotionStrength___def_5486D0:
      JUMPOUT(0x5487D4); /*0x5487d4*/
  }
}
