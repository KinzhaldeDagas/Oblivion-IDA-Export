char __cdecl sub_4F7EF0(Actor *a1, int a2, int a3, double *a4)
{
  TESPackage *CurrentPackage; // eax

  *a4 = dbl_A3D360; /*0x4f7f02*/
  if ( a1 ) /*0x4f7f04*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f7f10*/
    {
      CurrentPackage = Actor::GetCurrentPackage(a1); /*0x4f7f18*/
      if ( CurrentPackage ) /*0x4f7f1f*/
      {
        if ( CurrentPackage->members.type == kPackageType_Trespass ) /*0x4f7f25*/
          *a4 = (double)*(int *)&CurrentPackage[1].members.super.type; /*0x4f7f2a*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f7f2c*/
    Interface_ConsolePrint("Procedure >> %0.2f", *a4); /*0x4f7f42*/
  return 1; /*0x4f7f4a*/
}
