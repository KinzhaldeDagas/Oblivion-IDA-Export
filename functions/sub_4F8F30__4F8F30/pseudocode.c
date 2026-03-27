char __cdecl sub_4F8F30(PlayerCharacter *a1, int a2, int a3, double *a4)
{
  PlayerCharacter *v7; // edi
  void *v8; // eax
  const char *v9; // eax
  void *v11; // eax
  const char *v12; // eax

  *a4 = 0.0;
  v7 = 0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.super.IsActor((TESObjectREFR *)a1) )
    {
      v7 = a1;
      if ( a1->vtbl->super.IsInCombat((Actor *)a1, 1) )
        *a4 = 1.0;
    }
  }
  if ( v7 == TESDataHandler_g_PlayerRef )
    *a4 = (double)PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0);
  if ( !IsConsoleMode )
    return 1;
  if ( 0.0 == *a4 )
  {
    v11 = OblivionDynamicCast(
            v7,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESFullName `RTTI Type Descriptor',
            0);
    if ( !v11 || (v12 = *((const char **)v11 + 1)) == 0 )
      v12 = EmptyString;
    Interface_ConsolePrint("%s is not in combat", v12);
    return 1;
  }
  v8 = OblivionDynamicCast(
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 )
    v9 = EmptyString;
  Interface_ConsolePrint("%s is in combat", v9);
  return 1;
}
