double __userpurge Player_MagicCaster_GetCastingEffectiveness_::FatigueFactor@<st0>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        float a5,
        int a6,
        int a7,
        int a8,
        signed int a9)
{
  int BaseCalcAVi; // eax
  float v11; // [esp+Ch] [ebp+8h]
  float v12; // [esp+Ch] [ebp+8h]
  float v13; // [esp+1Ch] [ebp+18h]

  BaseCalcAVi = Actor_GetBaseCalcAVi((int *)(a3 - 0x5C), a1, a2, a3 - 0x5C, 0xA);
  if ( !BaseCalcAVi || BaseCalcAVi == a2 )
  {
    v11 = 1.0;
    return Player_MagicCaster_GetCastingEffectiveness_::ArmorFactor(a4, SLOBYTE(v11));
  }
  else
  {
    v13 = (double)a9 / (double)BaseCalcAVi;
    v12 = Calc_FatigueSpellEffectiveness(v13);
    return Player_MagicCaster_GetCastingEffectiveness_::ArmorFactor(a4, SLOBYTE(v12));
  }
}
