void __thiscall TESContainer_GetBestWeapon(void *this, int a2, int a3, int a4, float a5, int a6, float a7)
{
  if ( this == (void *)0xFFFFFFF8 )
    TESContainer_GetBestWeapon_::Return(a2);
  else
    TESContainer_GetBestWeapon_::ContentLoop(a2, a3, a4, a5, a6, a7);
}
