double __cdecl Calc_ActorBarterFactor_(signed int a1, int a2)
{
  double v2; // st7
  double v3; // st6
  float v5; // [esp+Ch] [ebp+4h]

  v2 = (double)a1; /*0x5481c0*/
  v3 = fCostant_100; /*0x5481c7*/
  if ( v3 < v2 ) /*0x5481d4*/
    v2 = v3; /*0x5481d6*/
  v5 = MEMORY[0xB375A0] - sqrt(fConst_200 - v2) * MEMORY[0xB375B0] - (double)((a2 - 0x32) / 0xA) * MEMORY[0xB37590]; /*0x548221*/
  return (float)(v5 * dbl_A3D8E8); /*0x54823a*/
}
