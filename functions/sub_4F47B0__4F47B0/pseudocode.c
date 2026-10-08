char __cdecl sub_4F47B0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  ExtraLockData *EffectiveDoorLock; // eax

  *a4 = 0.0; /*0x4f47bd*/
  if ( a1 ) /*0x4f47bf*/
  {
    EffectiveDoorLock = TESObjectREFR_GetEffectiveDoorLock(a1); /*0x4f47c1*/
    if ( EffectiveDoorLock ) /*0x4f47c8*/
      *a4 = (double)ExtraLockData_GetPlayerScaledLockLevel(EffectiveDoorLock); /*0x4f47d9*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f47db*/
    Interface_ConsolePrint("GetLockLevel >> %0.f", *a4); /*0x4f47f1*/
  return 1; /*0x4f47fb*/
}
