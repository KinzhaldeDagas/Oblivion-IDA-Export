int __usercall Actor_AttackHandling_::WeaponDamage_@<eax>(
        char a1@<bl>,
        Actor *a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        float *a12,
        int a13,
        int a14,
        EntryData *a15,
        int damageOffset,
        int a17,
        float a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27)
{
  int v27; // eax
  double v28; // st7
  double Damage; // st7
  float v31; // [esp+1Ch] [ebp+18h]

  if ( a2->vtbl->super.super.GetBaseForm((TESObjectREFR *)a2)->member.type != kFormType_Creature /*0x5ff4bc*/
    && !Actor_IsSneaking(a2) )
  {
    if ( LOBYTE(STACK[0x1E8]) ) /*0x5ff4c5*/
    {
      v27 = a2->vtbl->GetActorValue(a2, kActorVal_Marksman); /*0x5ff4de*/
      v28 = Calc_PowerAttackBonus(v27, a23); /*0x5ff4e1*/
    }
    else
    {
      v28 = 1.0; /*0x5ff4eb*/
    }
    *(float *)&damageOffset = v28; /*0x5ff4ed*/
  }
  if ( a12 ) /*0x5ff4f6*/
    Damage = sub_4B9F60(a12); /*0x5ff4fc*/
  else
    Damage = EquippedWeaponData_GetDamage(a15, a2, *(float *)&damageOffset); /*0x5ff510*/
  v31 = Damage; /*0x5ff515*/
  return Actor_AttackHandling_::ApplySneakAttackBonus(
           (int *)a2,
           a1,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           v31,
           a10,
           a11,
           (int)a12,
           a13,
           a14,
           (int)a15,
           damageOffset,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27);
}
