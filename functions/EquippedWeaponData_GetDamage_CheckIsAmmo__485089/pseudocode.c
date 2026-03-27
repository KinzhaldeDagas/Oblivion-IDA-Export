int __usercall EquippedWeaponData_GetDamage_::CheckIsAmmo@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int *a3@<esi>,
        char al0@<al>,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        float a11)
{
  if ( al0 != 0x22 )
    JUMPOUT(0x485125);
  return EquippedWeaponData_GetDamage_::AmmoDamage(a1, a2, a3, a5, a6, a7, a8, a9, a10, a11);
}
