char __cdecl sub_4F5900(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f590e*/
  if ( a1 ) /*0x4f5910*/
  {
    if ( a1->vtbl->IsActor(a1) && Actor_IsGhost((Actor *)a1) ) /*0x4f5924*/
      *a4 = 1.0; /*0x4f592f*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f5931*/
    Interface_ConsolePrint("GetGhost >> %0.2f", *a4); /*0x4f5947*/
  return 1; /*0x4f594f*/
}
