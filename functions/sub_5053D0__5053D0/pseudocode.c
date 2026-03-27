void __cdecl sub_5053D0(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  TESObjectREFR *v9; // eax
  TESObjectREFR *v10; // esi
  double v11; // st6
  char *Name; // eax

  v9 = (TESObjectREFR *)OblivionDynamicCast(
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v10 = v9;
  if ( v9 )
  {
    v11 = (double)(unsigned __int8)sub_6760D0((int)&ActorProcessManager_ptr, (int)v9);
    *a7 = v11;
    if ( IsConsoleMode )
    {
      Name = TESObjectREFR_GetName(v10);
      if ( 0.0 == v11 )
      {
        Interface_ConsolePrint(" %s is not detected", Name);
        sub_505450();
      }
      else
      {
        Interface_ConsolePrint(" %s is detected", Name);
      }
    }
  }
}
