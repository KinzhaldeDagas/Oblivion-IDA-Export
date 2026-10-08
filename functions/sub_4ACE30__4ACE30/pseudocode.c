// Verified (Oblivion): generic animation helper interpolates from zero through the configured full value to the persistent value across fade-in/full/fade-out intervals; when finished it applies the fade-out interpolation.
double __stdcall TESEffectShader_AnimateValue(
        float currentValue,
        float deltaSeconds,
        float elapsedSeconds,
        bool bFinished,
        float fadeInTime,
        float fadeOutTime,
        float fullTime,
        float fullValue,
        float persistentValue)
{
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st3
  double v13; // st6
  bool v14; // c0
  double v15; // st6
  double v17; // st6
  float bFinishedb; // [esp+18h] [ebp+10h]
  float bFinishedc; // [esp+18h] [ebp+10h]
  float bFinisheda; // [esp+18h] [ebp+10h]
  float bFinishedd; // [esp+18h] [ebp+10h]
  float bFinishede; // [esp+18h] [ebp+10h]
  float bFinishedf; // [esp+18h] [ebp+10h]
  float bFinishedg; // [esp+18h] [ebp+10h]
  float bFinishedh; // [esp+18h] [ebp+10h]
  float bFinishedi; // [esp+18h] [ebp+10h]

  v9 = fullTime; /*0x4ace35*/
  v10 = fadeInTime; /*0x4ace39*/
  v11 = elapsedSeconds; /*0x4ace3d*/
  if ( bFinished && v10 + v9 <= v11 ) /*0x4ace52*/
  {
    if ( fadeOutTime <= 0.0 || (v12 = fullValue - persistentValue, 0.0 == v12) ) /*0x4ace86*/
    {
      v13 = 0.0; /*0x4acec1*/
      bFinisheda = flt_A41AC8; /*0x4acec3*/
    }
    else
    {
      bFinishedb = v12; /*0x4ace88*/
      bFinishedc = fabs(bFinishedb); /*0x4ace92*/
      bFinisheda = 1.0 / fadeOutTime * bFinishedc; /*0x4acea2*/
      v13 = 0.0; /*0x4acea6*/
      if ( flt_A41AC8 > (double)bFinisheda ) /*0x4aceb1*/
        bFinisheda = flt_A41AC8; /*0x4aceb7*/
    }
    bFinishedd = bFinisheda * deltaSeconds; /*0x4aced7*/
    bFinishede = currentValue - bFinishedd; /*0x4acedf*/
    v14 = bFinishede < v13; /*0x4acee7*/
    v15 = bFinishede; /*0x4aceeb*/
    if ( v14 ) /*0x4acef0*/
      return (float)0.0; /*0x4acefc*/
    return (float)v15; /*0x4acef0*/
  }
  if ( v11 >= v10 ) /*0x4acf13*/
  {
    v17 = v11 - v10; /*0x4acf4b*/
    if ( v17 >= v9 ) /*0x4acf54*/
    {
      if ( fadeOutTime <= v17 - v9 ) /*0x4acf78*/
      {
        return persistentValue; /*0x4acfdb*/
      }
      else
      {
        bFinishedg = fullValue - persistentValue; /*0x4acf8f*/
        bFinishedh = fabs(bFinishedg); /*0x4acf99*/
        bFinishedi = currentValue - deltaSeconds / fadeOutTime * bFinishedh; /*0x4acfaf*/
        return (float)Min_Float(persistentValue, bFinishedi); /*0x4acfca*/
      }
    }
    else
    {
      return fullValue; /*0x4acf62*/
    }
  }
  else
  {
    bFinishedf = deltaSeconds / v10 * fullValue + currentValue; /*0x4acf2d*/
    v15 = bFinishedf; /*0x4acf31*/
    if ( bFinishedf <= (double)fullValue ) /*0x4acf3c*/
      return (float)v15; /*0x4acf09*/
    return fullValue; /*0x4acf44*/
  }
}
