double __cdecl Calc_BaseMagickaCost(float a1, int a2, int a3, int a4, float a5)
{
  double v5; // st7
  double v6; // st7
  float v8; // [esp+0h] [ebp-4h]
  int v9; // [esp+Ch] [ebp+8h]
  float v10; // [esp+10h] [ebp+Ch]
  int v11; // [esp+10h] [ebp+Ch]
  int v12; // [esp+10h] [ebp+Ch]
  float v13; // [esp+18h] [ebp+14h]

  v5 = (double)a2 * fMagicAreaBaseCostMult;
  if ( v5 <= 1.0 )
    v5 = 1.0;
  v8 = v5;
  v6 = 1.0;
  if ( a3 )
    v10 = (float)a3;
  else
    v10 = 1.0;
  *(float *)&v9 = fMagicDurMagBaseCostMult * a1 * v10;
  if ( a4 )
  {
    *(float *)&v11 = pow((double)a4, fMagicCostScale);
    v6 = 1.0;
  }
  else
  {
    *(float *)&v11 = 1.0;
  }
  *(float *)&v12 = *(float *)&v9 * v8 * *(float *)&v11;
  if ( LOBYTE(a5) )
    v6 = fMagicRangeTargetCostMult;
  v13 = v6;
  return (float)(v13 * *(float *)&v12);
}
