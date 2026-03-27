void __usercall EquippedWeaponData_GetDamage(
        int a1@<ecx>,
        int a2@<ebp>,
        int *a3,
        int a4,
        float a5,
        double a6,
        int a7,
        float a8,
        int a9,
        float a10,
        float a11,
        float a12)
{
  int v12; // edi
  char v13; // al

  v12 = *(_DWORD *)(a1 + 8);
  v13 = *(_BYTE *)(v12 + 4);
  if ( v13 == 0x21 )
    EquippedWeaponData_GetDamage_::WeaponDamage(
      a1,
      a2,
      v12,
      a3,
      flt_A30634,
      (int)a3,
      a4,
      a5,
      a6,
      *(float *)&a7,
      a8,
      a9,
      a10,
      a11,
      a12);
  else
    EquippedWeaponData_GetDamage_::CheckIsAmmo(
      a1,
      v12,
      a3,
      v13,
      *(float *)&a3,
      *(float *)&a4,
      a5,
      *(float *)&a6,
      SHIDWORD(a6),
      a7,
      a8);
}
