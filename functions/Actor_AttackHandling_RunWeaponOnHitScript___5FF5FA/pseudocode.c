int __usercall Actor_AttackHandling_::RunWeaponOnHitScript_@<eax>(
        int a1@<ebx>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  Script_AddEventToExtraScript(a13, a2 + 0x44, 0x100);
  Script_AddEventToExtraScript(*(_DWORD *)(a1 + 8), a2 + 0x44, 0x100);
  return Actor_AttackHandling_::RunOnHitByScript_();
}
