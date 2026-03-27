char __cdecl sub_4F5BB0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectREFR *v7; // esi
  int v8; // eax
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
    if ( Actor_IsNPC((Actor *)v7) )
    {
      v8 = (int)v7->vtbl->GetBaseForm(v7);
      if ( v8 )
      {
        if ( v8 == dword_B361C4 )
          *a4 = 1.0;
      }
      if ( IsConsoleMode )
      {
        if ( 0.0 != *a4 )
        {
          Name = TESObjectREFR_GetName(v7);
          Interface_ConsolePrint("%s  crime victim ", Name);
          return 1;
        }
        v11 = TESObjectREFR_GetName(v7);
        Interface_ConsolePrint("%s  is not a crime victim ", v11);
      }
    }
  }
  return 1;
}
