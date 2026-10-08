void __thiscall TESContainer_GetBestWeapon(void *this, int *a2, int a3, int a4, float a5, int a6, float a7)
{
  if ( this == (void *)0xFFFFFFF8 ) /*0x469ac4*/
    TESContainer_GetBestWeapon_::Return(0, (int)a2); /*0x469ac4*/
  else
    TESContainer_GetBestWeapon_::ContentLoop(a2, (int)this + 8); /*0x469acd*/
}
