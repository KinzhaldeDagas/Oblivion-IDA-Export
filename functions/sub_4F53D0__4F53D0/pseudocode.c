char __cdecl sub_4F53D0(Actor *a1, int a2, int a3, double *a4)
{
  TESObjectCELL *DwordAtOffset40; // eax

  *a4 = 0.0; /*0x4f53de*/
  if ( a1 ) /*0x4f53e0*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f53ec*/
    {
      if ( Shared_GetDwordAtOffset40(a1) ) /*0x4f53f4*/
      {
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x4f5400*/
        if ( TESObjectCELL_IsOwnedByActor(DwordAtOffset40, a1) ) /*0x4f5407*/
          *a4 = 1.0; /*0x4f5412*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f5414*/
    Interface_ConsolePrint("Is in owned cell value %0.2f", *a4); /*0x4f542a*/
  return 1; /*0x4f5432*/
}
