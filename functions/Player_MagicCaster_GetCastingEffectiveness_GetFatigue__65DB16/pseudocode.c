double __usercall Player_MagicCaster_GetCastingEffectiveness_::GetFatigue@<st0>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        double a4@<st0>,
        int a5,
        float a6,
        int a7,
        int a8,
        int a9,
        signed int a10)
{
  int v10; // edi
  int v12; // edi

  if ( *(float *)&a9 <= a4 )
  {
    v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)(a3 - 0x5C) + 0x284))(a3 - 0x5C, 0xA, a2);
    return Player_MagicCaster_GetCastingEffectiveness_::FatigueFactor(a1, v12, a3, a5, a6, a7, v12, a9, a10);
  }
  else
  {
    v10 = Double_To_SInt32(*(float *)&a9);
    return Player_MagicCaster_GetCastingEffectiveness_::FatigueFactor(a1, v10, a3, a5, a6, a7, a8, v10, a10);
  }
}
