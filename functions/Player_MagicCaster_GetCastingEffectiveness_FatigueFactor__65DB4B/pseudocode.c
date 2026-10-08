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
  int *v9; // esi
  int BaseCalcAVi; // eax
  float v12; // [esp+Ch] [ebp+8h]
  float v13; // [esp+Ch] [ebp+8h]
  float v14; // [esp+1Ch] [ebp+18h]

  v9 = (int *)(a3 - 0x5C); /*0x65db4b*/
  BaseCalcAVi = Actor_GetBaseCalcAVi(v9, a1, a2, (int)v9, 0xA); /*0x65db52*/
  if ( !BaseCalcAVi || BaseCalcAVi == a2 ) /*0x65db67*/
  {
    v12 = 1.0; /*0x65db5b*/
    return Player_MagicCaster_GetCastingEffectiveness_::ArmorFactor(v9, a4, SLOBYTE(v12)); /*0x65db67*/
  }
  else
  {
    v14 = (double)a9 / (double)BaseCalcAVi; /*0x65db72*/
    v13 = Calc_FatigueSpellEffectiveness(v14); /*0x65db82*/
    return Player_MagicCaster_GetCastingEffectiveness_::ArmorFactor(v9, a4, SLOBYTE(v13)); /*0x65db87*/
  }
}
