char __cdecl sub_4F5650(TESObjectREFR *a1, TESObjectREFR *a2, int a3, double *a4)
{
  TESObjectREFRVtbl *vtbl; // eax
  double v8; // st5
  char *v9; // eax
  char *Name; // [esp-4h] [ebp-18h]

  *a4 = 0.0;
  if ( !a1 )
    return 1;
  vtbl = a1->vtbl;
  *a4 = 0.0;
  if ( !vtbl->IsActor(a1) || !a2 )
    return 1;
  v8 = (double)sub_5E10A0(a1, (int)a2);
  *a4 = v8;
  if ( IsConsoleMode )
  {
    Name = TESObjectREFR_GetName(a2);
    v9 = TESObjectREFR_GetName(a1);
    Interface_ConsolePrint("%s detects %s at level %.02f", v9, Name, v8);
    return 1;
  }
  return 1;
}
