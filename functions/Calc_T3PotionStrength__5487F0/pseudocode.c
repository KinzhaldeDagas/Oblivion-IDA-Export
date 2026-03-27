int *__cdecl Calc_T3PotionStrength(
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
  int *result; // eax
  double v12; // [esp+0h] [ebp-8h]
  double v13; // [esp+0h] [ebp-8h]
  float v14; // [esp+14h] [ebp+Ch]
  float v15; // [esp+14h] [ebp+Ch]
  float v16; // [esp+14h] [ebp+Ch]

  v14 = a3 / a2 / fMagicDurMagBaseCostMult;
  v9 = v14;
  v15 = 1.0 / fMagicCostScale;
  v16 = pow(v9, v15);
  v10 = v16;
  result = (int *)(a4 - 1);
  *a1 = v16;
  switch ( a4 )
  {
    case 1:
      if ( a5 )
        goto LABEL_6;
      if ( a9 )
        JUMPOUT(0x548945);
      result = GameSetting_GetSafeFloatPointer((int *)&fPotionT3RetMagMult);
      *a1 = *a1 * a6 * *(float *)result + *a1;
      return result;
    case 2:
      if ( !a5 )
        goto Calc_T3PotionStrength___def_548847;
LABEL_6:
      if ( a9 )
        goto Calc_T3PotionStrength___def_548847;
      *a1 = v10 + v10 * a7 * fPotionT3AleMagMult;
      return result;
    case 3:
      goto LABEL_8;
    case 4:
      if ( a5 || a9 )
        goto LABEL_8;
      v13 = *a1 * a6 * *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT3RetMagMult) * a8;
      result = GameSetting_GetSafeFloatPointer((int *)&fPotionT3CalMagMult);
      *a1 = *(float *)result * v13 + *a1;
      return result;
    case 5:
      if ( !a5 || a9 )
      {
LABEL_8:
        *a1 = v10 + v10 * a8 * fPotionT3CalMagMult;
      }
      else
      {
        v12 = *a1 * a7 * *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT3AleMagMult) * a8;
        result = GameSetting_GetSafeFloatPointer((int *)&fPotionT3CalMagMult);
        *a1 = *(float *)result * v12 + *a1;
      }
      return result;
    default:
Calc_T3PotionStrength___def_548847:
      JUMPOUT(0x548943);
  }
}
