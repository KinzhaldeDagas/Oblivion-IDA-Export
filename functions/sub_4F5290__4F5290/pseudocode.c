char __cdecl sub_4F5290(Actor *a1, int a2, int a3, double *a4)
{
  double v5; // [esp+10h] [ebp-8h]

  *a4 = 0.0; /*0x4f52a1*/
  if ( a1 ) /*0x4f52a3*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f52af*/
    {
      v5 = (double)sub_5E4420(a1); /*0x4f52ce*/
      if ( ((double (__thiscall *)(Actor *))a1->vtbl->Unk_94)(a1) <= v5 ) /*0x4f52dd*/
        *a4 = 1.0; /*0x4f52e1*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f52e3*/
    Interface_ConsolePrint("Can Pay Crime Gold >> %0.2f", *a4); /*0x4f52f9*/
  return 1; /*0x4f5301*/
}
