char __cdecl sub_4F4F50(Actor *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f4f5e*/
  if ( a1 ) /*0x4f4f60*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f4f6c*/
      *a4 = (double)(unsigned __int16)Actor_GetLevel(a1); /*0x4f4f84*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4f86*/
    Interface_ConsolePrint("GetLevel >> %0.2f", *a4); /*0x4f4f9c*/
  return 1; /*0x4f4fa4*/
}
