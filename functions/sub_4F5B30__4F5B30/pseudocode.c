char __cdecl sub_4F5B30(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectREFR *v7; // esi
  char v8; // al
  char *Name; // eax
  char *v11; // eax

  v7 = 0;
  if ( a1 )
  {
    if ( a1->vtbl->IsActor(a1) )
      v7 = a1;
  }
  *a4 = 0.0;
  if ( v7 )
  {
    sub_4DB760(v7);
    if ( v8 )
      *a4 = 1.0;
    if ( IsConsoleMode )
    {
      if ( 0.0 != *a4 )
      {
        Name = TESObjectREFR_GetName(v7);
        Interface_ConsolePrint("%s  is evil ", Name);
        return 1;
      }
      v11 = TESObjectREFR_GetName(v7);
      Interface_ConsolePrint("%s  is not evil ", v11);
    }
  }
  return 1;
}
