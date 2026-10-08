char __cdecl sub_4F8F30(Actor *a1, int a2, int a3, double *a4)
{
  PlayerCharacter *v4; // edi
  void *v5; // eax
  const char *v6; // eax
  void *v8; // eax
  const char *v9; // eax

  *a4 = 0.0; /*0x4f8f37*/
  v4 = 0; /*0x4f8f3f*/
  if ( a1 ) /*0x4f8f43*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f8f4f*/
    {
      v4 = (PlayerCharacter *)a1; /*0x4f8f61*/
      if ( a1->vtbl->IsInCombat(a1, 1) ) /*0x4f8f63*/
        *a4 = 1.0; /*0x4f8f6b*/
    }
  }
  if ( v4 == reference ) /*0x4f8f75*/
    *a4 = (double)PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0); /*0x4f8f89*/
  if ( !MEMORY[0xB361AC] ) /*0x4f8f92*/
    return 1; /*0x4f8f92*/
  if ( 0.0 == *a4 ) /*0x4f8fac*/
  {
    v8 = OblivionDynamicCast( /*0x4f8fda*/
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFullName `RTTI Type Descriptor',
           0);
    if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 ) /*0x4f8feb*/
      v9 = EmptyString; /*0x4f8fed*/
    Interface_ConsolePrint("%s is not in combat", v9); /*0x4f8ff8*/
    return 1; /*0x4f9002*/
  }
  v5 = OblivionDynamicCast( /*0x4f8fae*/
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v5 || (v6 = *((const char **)v5 + 1)) == 0 ) /*0x4f8fbf*/
    v6 = EmptyString; /*0x4f8fc1*/
  Interface_ConsolePrint("%s is in combat", v6); /*0x4f8fcc*/
  return 1; /*0x4f8fd4*/
}
