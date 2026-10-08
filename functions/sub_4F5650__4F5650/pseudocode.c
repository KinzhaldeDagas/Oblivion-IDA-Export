char __cdecl sub_4F5650(TESObjectREFR *a1, TESObjectREFR *a2, int a3, double *a4)
{
  TESObjectREFRVtbl *vtbl; // eax
  double v5; // st7
  char *v6; // eax
  char *Name; // [esp-4h] [ebp-18h]

  *a4 = 0.0; /*0x4f5657*/
  if ( !a1 ) /*0x4f5660*/
    return 1; /*0x4f56cc*/
  vtbl = a1->vtbl; /*0x4f5662*/
  *a4 = 0.0; /*0x4f5664*/
  if ( !vtbl->IsActor(a1) || !a2 ) /*0x4f567b*/
    return 1; /*0x4f567b*/
  v5 = (double)sub_5E10A0(a1, (int)a2); /*0x4f5689*/
  *a4 = v5; /*0x4f568d*/
  if ( MEMORY[0xB361AC] ) /*0x4f568f*/
  {
    Name = TESObjectREFR_GetName(a2); /*0x4f56a5*/
    v6 = TESObjectREFR_GetName(a1); /*0x4f56a8*/
    Interface_ConsolePrint("%s detects %s at level %.02f", v6, Name, v5); /*0x4f56b3*/
    return 1; /*0x4f56c0*/
  }
  return 1; /*0x4f56bc*/
}
