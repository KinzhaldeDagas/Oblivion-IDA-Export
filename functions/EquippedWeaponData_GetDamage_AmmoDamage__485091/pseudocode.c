double __usercall EquippedWeaponData_GetDamage_::AmmoDamage@<st0>(
        int a1@<edi>,
        Actor *a2@<esi>,
        int a3@<ebx>,
        float a4,
        float a5,
        float a6,
        float a7,
        int a8,
        int a9,
        float a10)
{
  int v10; // eax
  double result; // st7
  int v12; // [esp-8h] [ebp-28h]
  int v13; // [esp-4h] [ebp-24h]
  int v14; // [esp+4h] [ebp-1Ch]
  int v15; // [esp+24h] [ebp+4h]
  float FatigueFraction; // [esp+40h] [ebp+20h]

  a2->vtbl->GetAV_F(a2, kActorVal_Luck); /*0x48509d*/
  ((double (__thiscall *)(Actor *, int))a2->vtbl->GetAV_F)(a2, 3); /*0x4850af*/
  FatigueFraction = Actor_GetFatigueFraction(a2, a3, a1); /*0x4850bc*/
  *(float *)&v15 = a2->vtbl->GetAV_F(a2, kActorVal_Marksman); /*0x4850ce*/
  v14 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(a1 + 0x74) + 0x10))(a1 + 0x74); /*0x4850f2*/
  v13 = Double_To_SInt32(a6); /*0x485108*/
  v12 = Double_To_SInt32(a5); /*0x485112*/
  v10 = Double_To_SInt32(*(float *)&v15); /*0x485113*/
  result = Calc_WeaponDamage(v10, v12, v13, a10, v14, 1.0, FatigueFraction, 0.0); /*0x485119*/
  EquippedWeaponData_GetDamage_::AddAttackBonus_(v15, a5); /*0x48511f*/
  return result;
}
