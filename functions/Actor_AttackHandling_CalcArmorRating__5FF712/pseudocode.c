int __usercall Actor_AttackHandling_::CalcArmorRating@<eax>(
        int a1@<esi>,
        int ebp0@<ebp>,
        int edi0@<edi>,
        double a4@<st1>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        float a16,
        float a17,
        float a18,
        float a19)
{
  double v20; // st6
  float v22; // [esp+38h] [ebp+38h]

  if ( BYTE2(a11) ) /*0x5ff718*/
  {
    v20 = 0.0; /*0x5ff71a*/
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x348))(a1);// Physical-hit armor path first calls actor vtbl+0x348 and compares armor rating against 100; if >=100, vanilla uses factor 1.0 before the later max-reduction cap. AVU replaces the call with its modified armor wrapper. /*0x5ff728*/
    if ( a4 >= fCostant_100 ) /*0x5ff735*/
      a4 = flt_A2FE7C; /*0x5ff745*/
    else
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x348))(a1);// Physical-hit armor path second actor vtbl+0x348 call used when armor rating is below 100, then divided by 100 to produce damage-reduction factor. AVU replaces the call with its modified armor wrapper. /*0x5ff741*/
    *(float *)&a12 = a4; /*0x5ff74b*/
    v20 = *(float *)&a12 / fCostant_100; /*0x5ff753*/
  }
  v22 = v20; /*0x5ff759*/
  if ( g_GameSettingStringPointers_B36CD8[0x72] >= (double)v22 )// Physical-hit final armor-reduction cap. Vanilla caps the factor against fArmorRatingMax; AVU detours this so the final cap tracks fMaxArmorRating / 100 after its armor-rating DR/cap rewrite. /*0x5ff770*/
    return Actor_AttackHandling_::CalcDamageToArmor( /*0x5ff779*/
             ebp0,
             edi0,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             v22,
             a19);
  else
    return Actor_AttackHandling_::CalcDamageToArmor( /*0x5ff776*/
             ebp0,
             edi0,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             g_GameSettingStringPointers_B36CD8[0x72],
             a19);
}
