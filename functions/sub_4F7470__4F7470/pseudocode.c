char __cdecl sub_4F7470(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f7476*/
  if ( reference->unk5C0 ) /*0x4f747e*/
    *a4 = 1.0; /*0x4f7489*/
  if ( MEMORY[0xB361AC] )
    Interface_ConsolePrint("GetPlayerControlsDisabled: %0.2f", *a4);
  return 1; /*0x4f74ab*/
}
