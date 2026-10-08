double __cdecl calcMultiplierFromMerchantLevelDispo(signed int merchantileLuckLevelArg, int disposition)
{
  double v2; // st7
  double v3; // st6
  float merchantileLuckLevelArga; // [esp+4h] [ebp+4h]

  v2 = (double)merchantileLuckLevelArg; /*0x548240*/
  v3 = fCostant_100; /*0x548244*/
  if ( v3 < v2 ) /*0x548251*/
    v2 = v3; /*0x548253*/
  merchantileLuckLevelArga = sqrt(fConst_200 - v2) * MEMORY[0xB375B8] /*0x548298*/
                           + MEMORY[0xB375A8]
                           + (double)((disposition - 0x32) / 0xA) * MEMORY[0xB37590];
  return (float)(merchantileLuckLevelArga * dbl_A3D8E8); /*0x5482ae*/
}
