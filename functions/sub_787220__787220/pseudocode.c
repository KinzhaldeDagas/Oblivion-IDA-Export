// 2026-05-26 SpeedTreeOBSE: shared stock LOD fade/index resolver. Plugin calls it unmodified for candidate 75002 transition-radius and 75005 transition-factor comparisons; optional writes are limited to caller-side SGeometry+0x38 under explicit INI gates. Not patched.
void __cdecl CSpeedTreeRT__GetTransitionValues(
        float lodLevel,
        unsigned __int16 lodCount,
        float overlapRadius,
        float transitionFactor,
        float curveExponent,
        float targetAlpha,
        float *highAlpha,
        float *lowAlpha,
        __int16 *highLod,
        unsigned __int16 *lowLod)
{
  double v11; // st7
  double v12; // st5
  double v13; // st4
  int v14; // esi
  double v15; // st4
  double v16; // st6
  __int16 v17; // ax
  double v18; // st7
  double v19; // [esp+10h] [ebp-8h]
  float lodLevela; // [esp+1Ch] [ebp+4h]
  float lodCountd; // [esp+20h] [ebp+8h]
  float lodCounte; // [esp+20h] [ebp+8h]
  float lodCountf; // [esp+20h] [ebp+8h]
  float lodCounta; // [esp+20h] [ebp+8h]
  float lodCountg; // [esp+20h] [ebp+8h]
  float lodCountb; // [esp+20h] [ebp+8h]
  float lodCounth; // [esp+20h] [ebp+8h]
  float lodCounti; // [esp+20h] [ebp+8h]
  float lodCountc; // [esp+20h] [ebp+8h]
  float lodCountj; // [esp+20h] [ebp+8h]
  float lodCountk; // [esp+20h] [ebp+8h]

  v11 = (double)lodCount; /*0x787230*/
  lodCountd = 1.0 / v11; /*0x78723a*/
  v12 = 1.0 - lodLevel; /*0x787242*/
  v13 = lodCountd; /*0x787244*/
  lodCounte = v12 / lodCountd; /*0x78724c*/
  v14 = Double_To_SInt32(v11); /*0x78725b*/
  lodCountf = lodCounte - (double)v14; /*0x787265*/
  if ( lodCountf >= (double)kHeadBodyNormalMatchRadius ) /*0x787278*/
    LOWORD(v14) = v14 + 1; /*0x78727a*/
  lodCounta = v12 - v13 * (double)(unsigned __int16)v14; /*0x78728f*/
  if ( !(_WORD)v14 /*0x7872bf*/
    || (_WORD)v14 == lodCount
    || (v15 = lodCounta, lodCountg = fabs(lodCounta), overlapRadius < (double)lodCountg) )
  {
    *highAlpha = targetAlpha; /*0x7873b8*/
    v17 = Double_To_SInt32(v11 * v12); /*0x7873bc*/
    *highLod = v17; /*0x7873c8*/
    if ( v17 >= (__int16)(lodCount - 1) ) /*0x7873d1*/
      v17 = lodCount - 1; /*0x7873d3*/
    v18 = flt_A40098; /*0x7873d6*/
    *highLod = v17; /*0x7873dc*/
    *lowAlpha = v18; /*0x7873e7*/
    *lowLod = 0xFFFF; /*0x7873ea*/
  }
  else
  {
    lodLevela = 1.0 - (overlapRadius - v15) / (overlapRadius + overlapRadius); /*0x7872d7*/
    v19 = 1.0 - transitionFactor; /*0x7872e3*/
    lodCountb = 1.0 - (lodLevela - transitionFactor) / v19; /*0x7872f1*/
    if ( lodCountb >= 1.0 ) /*0x787300*/
      lodCountb = 1.0; /*0x787302*/
    v16 = dbl_A3DDD8 - targetAlpha; /*0x787312*/
    *highLod = v14 - 1; /*0x78731b*/
    lodCounth = 1.0 - lodCountb; /*0x787326*/
    lodCounti = pow(lodCounth, curveExponent); /*0x787337*/
    *highAlpha = lodCounti * v16 + targetAlpha; /*0x78734b*/
    lodCountc = lodLevela / v19; /*0x787355*/
    if ( lodCountc >= 1.0 ) /*0x787364*/
      lodCountc = 1.0; /*0x787366*/
    *lowLod = v14; /*0x787378*/
    lodCountj = 1.0 - lodCountc; /*0x78737d*/
    lodCountk = pow(lodCountj, curveExponent); /*0x78738e*/
    *lowAlpha = lodCountk * v16 + targetAlpha; /*0x7873a4*/
  }
}
