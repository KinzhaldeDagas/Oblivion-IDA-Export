int *__cdecl Calc_T1PotionStrength(
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
  int *result; // eax
  double v12; // st7
  double v13; // [esp+4h] [ebp-8h]
  double v14; // [esp+4h] [ebp-8h]
  double v15; // [esp+4h] [ebp-8h]
  double v16; // [esp+4h] [ebp-8h]
  float v17; // [esp+1Ch] [ebp+10h]
  float v18; // [esp+1Ch] [ebp+10h]
  float v19; // [esp+1Ch] [ebp+10h]

  v17 = fPotionT1MagMult * a4 / a3;
  v10 = v17;
  v18 = 1.0 / (fMagicCostScale + 1.0);
  v19 = pow(v10, v18);
  *a1 = v19;
  result = (int *)(a5 - 1);
  *a2 = v19 / fPotionT1MagMult / fMagicDurMagBaseCostMult;
  v12 = a9;
  switch ( a5 )
  {
    case 1:
      if ( a6 )
        goto LABEL_6;
      if ( a10 )
        goto Calc_T1PotionStrength___def_548490;
      *a1 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT1RetMagMult) * a7 * *a1 + *a1;
      result = GameSetting_GetSafeFloatPointer((int *)&fPotionT1RetDurMult);
      *a2 = *(float *)result * a7 * *a2 + *a2;
      return result;
    case 2:
      if ( !a6 )
        goto Calc_T1PotionStrength___def_548490;
LABEL_6:
      if ( a10 )
        goto Calc_T1PotionStrength___def_548490;
      *a1 = fPotionT1AleMagMult * a8 * *a1 + *a1;
      *a2 = a8 * fPotionT1AleDurMult * *a2 + *a2;
      return result;
    case 3:
      goto LABEL_12;
    case 4:
      if ( a6 || a10 )
      {
        *a1 = fPotionT1CalMagMult * a9 * *a1 + *a1;
        *a2 = a9 * fPotionT1CalMagMult * *a2 + *a2;
      }
      else
      {
        v15 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT1RetMagMult) * (*a1 * a7);
        *a1 = *a2 * a9 * *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT1CalMagMult) + v15 + *a1;
        v16 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT1RetDurMult) * (*a2 * a7);
        result = GameSetting_GetSafeFloatPointer((int *)&fPotionT1CalMagMult);
        *a2 = *a2 * a9 * *(float *)result + v16 + *a2;
      }
      return result;
    case 5:
      if ( !a6 || a10 )
      {
        *a1 = fPotionT1CalMagMult * v12 * *a1 + *a1;
        *a2 = fPotionT1CalMagMult * v12 * *a2 + *a2;
      }
      else
      {
        v13 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT1CalMagMult) * a9 * *a1;
        *a1 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT1AleMagMult) * a8 * *a1 + v13 + *a1;
        v14 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT1CalMagMult) * a9 * *a2;
        result = GameSetting_GetSafeFloatPointer((int *)&fPotionT1AleDurMult);
        *a2 = *(float *)result * a8 * *a2 + v14 + *a2;
        v12 = a9;
      }
LABEL_12:
      *a1 = fPotionT1CalMagMult * v12 * *a1 + *a1;
      *a2 = v12 * fPotionT1CalMagMult * *a2 + *a2;
      return result;
    default:
Calc_T1PotionStrength___def_548490:
      JUMPOUT(0x548679);
  }
}
