double __cdecl calcMultiplierFromMerchantLevelDispo(signed int merchantileLuckLevelArg, int disposition)
{
  double v2; // st7
  double v3; // st6
  float merchantileLuckLevelArga; // [esp+4h] [ebp+4h]

  v2 = (double)merchantileLuckLevelArg;
  v3 = fCostant_100;
  if ( v3 < v2 )
    v2 = v3;
  merchantileLuckLevelArga = sqrt(fConst_200 - v2) * fBarterSellMult
                           + fBarterSellBase
                           + (double)((disposition - 0x32) / 0xA) * fBarterDispBase;
  return (float)(merchantileLuckLevelArga * dbl_A3D8E8);
}
