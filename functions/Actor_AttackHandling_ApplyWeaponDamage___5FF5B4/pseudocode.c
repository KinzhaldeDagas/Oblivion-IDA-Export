int __usercall Actor_AttackHandling_::ApplyWeaponDamage_@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int esi0@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24)
{
  float v25; // [esp+4h] [ebp-4h]
  float v26; // [esp+58h] [ebp+50h]

  v25 = (float)(*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(a15 + 0x88) + 0x10))(a15 + 0x88);
  v26 = Calc_DamageToWeapon(v25);
  (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)a3 + 0x2C4))(a3, a1, LODWORD(v26), a2);
  return Actor_AttackHandling_::RunWeaponOnHitScript_(a1, esi0, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}
