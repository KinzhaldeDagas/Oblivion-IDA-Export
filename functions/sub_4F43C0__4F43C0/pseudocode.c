char __cdecl sub_4F43C0(TESObjectREFR *a1, TESObjectREFR *a2, int a3, double *a4)
{
  if ( a1 ) /*0x4f43cb*/
  {
    if ( a2 ) /*0x4f43d3*/
      *a4 = TesObjectREF_GetDistance(a1, a2, 1); /*0x4f43dd*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f43df*/
    Interface_ConsolePrint("GetDistance >> %0.2f", *a4); /*0x4f43f5*/
  return 1; /*0x4f43ff*/
}
