int *__cdecl Calc_T2PotionStrength(
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
  int *result; // eax
  double v10; // st7
  double v11; // [esp+0h] [ebp-8h]
  double v12; // [esp+0h] [ebp-8h]
  float v13; // [esp+14h] [ebp+Ch]

  result = (int *)(a4 - 1);
  v13 = a3 / a2 / fMagicDurMagBaseCostMult;
  v10 = v13;
  *a1 = v13;
  switch ( a4 )
  {
    case 1:
      if ( a5 )
        goto LABEL_6;
      if ( a9 )
        JUMPOUT(0x5487D6);
      result = GameSetting_GetSafeFloatPointer((int *)&fPotionT2RetDurMult);
      *a1 = *a1 * a6 * *(float *)result + *a1;
      return result;
    case 2:
      if ( !a5 )
        goto Calc_T2PotionStrength___def_5486D0;
LABEL_6:
      if ( a9 )
        goto Calc_T2PotionStrength___def_5486D0;
      *a1 = v10 + v10 * a7 * fPotionT2AleDurMult;
      return result;
    case 3:
      goto LABEL_8;
    case 4:
      if ( a5 || a9 )
        goto LABEL_8;
      v12 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT2RetDurMult) * (*a1 * a6);
      result = GameSetting_GetSafeFloatPointer((int *)&fPotionT2CalDurMult);
      *a1 = *a1 * a8 * *(float *)result + v12 + *a1;
      return result;
    case 5:
      if ( !a5 || a9 )
      {
LABEL_8:
        *a1 = v10 + v10 * a8 * fPotionT2CalDurMult;
      }
      else
      {
        v11 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPotionT2AleDurMult) * (*a1 * a7);
        result = GameSetting_GetSafeFloatPointer((int *)&fPotionT2CalDurMult);
        *a1 = *a1 * a8 * *(float *)result + v11 + *a1;
      }
      return result;
    default:
Calc_T2PotionStrength___def_5486D0:
      JUMPOUT(0x5487D4);
  }
}
