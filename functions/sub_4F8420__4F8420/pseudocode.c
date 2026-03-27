char __cdecl sub_4F8420(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  double v7; // st5
  char *Name; // eax

  if ( !a1 )
    return 1;
  if ( !a1->vtbl->IsActor(a1) )
    return 1;
  v7 = (double)(int)sub_41E980(&a1->member.baseExtraList);
  *a4 = v7;
  if ( !IsConsoleMode )
    return 1;
  Name = TESObjectREFR_GetName(a1);
  Interface_ConsolePrint("%s  has %0.2f investment  gold currently", Name, v7);
  return 1;
}
