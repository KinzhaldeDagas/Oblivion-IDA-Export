double __cdecl AI_CalculateWeaponAndEnchantmentThreat(
        _DWORD *a1,
        int a2,
        float a3,
        int a4,
        int a5,
        int a6,
        float a7,
        float a8)
{
  double result; // st7
  int v9; // ecx
  float v10; // [esp+18h] [ebp-8h]
  float v11; // [esp+1Ch] [ebp-4h]
  float v12; // [esp+1Ch] [ebp-4h]
  int v13; // [esp+24h] [ebp+4h]
  float v14; // [esp+24h] [ebp+4h]

  result = 0.0; /*0x547143*/
  v10 = 0.0; /*0x54714a*/
  if ( a1 ) /*0x547150*/
  {
    if ( TESHealthForm_GetHealthForForm(a1) ) /*0x547159*/
    {
      v9 = (*(unsigned __int16 (__thiscall **)(_DWORD *))(a1[0x22] + 0x10))(a1 + 0x22); /*0x547184*/
      if ( a8 != kTerrainLODQuadRayDirectionZ ) /*0x547190*/
        v9 = Double_To_SInt32(a8); /*0x547197*/
      v11 = Calc_WeaponDamage(a4, a5, a6, a7, v9, a3, 1.0, 0.0); /*0x5471cc*/
      *(float *)&v13 = 0.0; /*0x5471d9*/
      if ( a2 ) /*0x5471df*/
      {                                         // Engine combat threat adds hostile enchantment magicka cost to physical weapon damage using separate combat-style weights.
        if ( EffectItemList_HasHostile((_DWORD *)(a2 + 0xC)) ) /*0x5471e6*/
        {
          v14 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(a2 + 0xC))(a2 + 0xC, 0); /*0x5471f9*/
          *(float *)&v13 = g_GameSettingStringPointers_B36CD8[0x12] * v14; /*0x547207*/
        }
      }
      v12 = g_GameSettingStringPointers_B36CD8[0xA] * v11; /*0x54721d*/
      return (float)(v12 + *(float *)&v13); /*0x547229*/
    }
    return v10; /*0x54722d*/
  }
  return result; /*0x547231*/
}
