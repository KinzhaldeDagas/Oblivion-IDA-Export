double __cdecl Calc_ActorBarterFactor_(signed int a1, int a2)
{
  double v2; // st7
  double v3; // st6
  float v5; // [esp+Ch] [ebp+4h]

  v2 = (double)a1;
  v3 = fCostant_100;
  if ( v3 < v2 )
    v2 = v3;
  v5 = fBarterBuyBase - sqrt(fConst_200 - v2) * fBarterBuyMult - (double)((a2 - 0x32) / 0xA) * fBarterDispBase;
  return (float)(v5 * dbl_A3D8E8);
}
