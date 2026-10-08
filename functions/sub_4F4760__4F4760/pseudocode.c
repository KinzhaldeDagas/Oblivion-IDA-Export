char __cdecl sub_4F4760(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  ExtraLockData *EffectiveDoorLock; // eax

  *a4 = 0.0; /*0x4f476d*/
  if ( a1 ) /*0x4f476f*/
  {
    EffectiveDoorLock = TESObjectREFR_GetEffectiveDoorLock(a1); /*0x4f4771*/
    if ( EffectiveDoorLock ) /*0x4f4778*/
    {
      if ( ExtraLockData_IsLocked(EffectiveDoorLock) ) /*0x4f477c*/
        *a4 = 1.0; /*0x4f4787*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4789*/
    Interface_ConsolePrint("GetLocked >> %0.f", *a4); /*0x4f479f*/
  return 1; /*0x4f47a9*/
}
