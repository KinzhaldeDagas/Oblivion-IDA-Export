int __usercall EquippedWeaponData_GetDamage_::AmmoDamage@<eax>(
        int a1@<edi>,
        Actor *a2@<esi>,
        float a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8,
        float a9)
{
  int v10; // eax
  int v12; // [esp-8h] [ebp-28h]
  int v13; // [esp-4h] [ebp-24h]
  int v14; // [esp+4h] [ebp-1Ch]
  int v15; // [esp+24h] [ebp+4h]
  float FatigueFraction; // [esp+40h] [ebp+20h]

  a2->vtbl->GetAV_F(a2, kActorVal_Luck);
  ((double (__thiscall *)(Actor *, int))a2->vtbl->GetAV_F)(a2, 3);
  FatigueFraction = Actor_GetFatigueFraction(a2);
  *(float *)&v15 = a2->vtbl->GetAV_F(a2, kActorVal_Marksman);
  v14 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(a1 + 0x74) + 0x10))(a1 + 0x74);
  v13 = Double_To_SInt32(a5);
  v12 = Double_To_SInt32(*(float *)&a4);
  v10 = Double_To_SInt32(*(float *)&v15);
  Calc_WeaponDamage(v10, v12, v13, a9, v14, 1.0, FatigueFraction, 0.0);
  return EquippedWeaponData_GetDamage_::AddAttackBonus_(v15, a4);
}
