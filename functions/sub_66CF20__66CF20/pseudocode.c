void __usercall sub_66CF20(PlayerCharacter *a1@<ecx>, int a2@<edi>, double a3@<st0>)
{
  void (__thiscall *Unk_6F)(MobileObject *, UInt32); // edx

  a1->DisableFading = 1;
  if ( flt_B36B78 > (double)*((float *)&qword_B3BB20 + 1) )
    *((float *)&qword_B3BB20 + 1) = flt_B36B78;
  if ( !a1->isThirdPerson )
  {
    a1->unk58A = 1;
    TogglePOV(a1, 0);
  }
  Unk_6F = a1->vtbl->super.super.Unk_6F;
  a1->isWakeUpPackage = 1;
  ((void (__usercall *)(PlayerCharacter *@<ecx>, _DWORD, double@<st0>))Unk_6F)(a1, 0, a3);
  sub_611D70((Actor *)a1, a2);
}
