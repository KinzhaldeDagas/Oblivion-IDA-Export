char __cdecl sub_4F4690(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  double v4; // st7

  if ( !a1 ) /*0x4f4697*/
    return 1; /*0x4f4697*/
  if ( !a1->vtbl->IsActor(a1) ) /*0x4f46a3*/
    return 1; /*0x4f46a3*/
  v4 = sub_5E3590((Actor *)a1); /*0x4f46ab*/
  *a4 = v4; /*0x4f46b4*/
  if ( !MEMORY[0xB361AC] ) /*0x4f46b6*/
    return 1; /*0x4f46d8*/
  Interface_ConsolePrint("GetWalkSpeed >> %0.2f", v4); /*0x4f46ca*/
  return 1; /*0x4f46d4*/
}
