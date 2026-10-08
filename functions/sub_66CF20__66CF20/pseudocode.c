void __usercall sub_66CF20(PlayerCharacter *a1@<ecx>, int a2@<edi>, double a3@<st0>)
{
  void (__thiscall *Unk_6F)(MobileObject *, UInt32); // edx

  a1->DisableFading = 1; /*0x66cf23*/
  if ( unk_B36B78 > (double)*(float *)&unk_B3BB24.vtbl ) /*0x66cf3f*/
    *(float *)&unk_B3BB24.vtbl = unk_B36B78; /*0x66cf41*/
  if ( !a1->isThirdPerson ) /*0x66cf4b*/
  {
    a1->unk58A = 1; /*0x66cf56*/
    TogglePOV(a1, 0); /*0x66cf5d*/
  }
  Unk_6F = a1->vtbl->super.super.Unk_6F; /*0x66cf64*/
  a1->isWakeUpPackage = 1; /*0x66cf6e*/
  ((void (__usercall *)(PlayerCharacter *@<ecx>, _DWORD, double@<st0>))Unk_6F)(a1, 0, a3); /*0x66cf75*/
  sub_611D70((Actor *)a1, a2); /*0x66cf7a*/
}
