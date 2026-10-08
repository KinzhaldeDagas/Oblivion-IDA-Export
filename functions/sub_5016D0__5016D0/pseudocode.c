// SetAV / SetActorValue execute callback. On PlayerCharacter this dispatches to Player_Actor_SetAViBase: direct base-value mutation, UI refresh, and base-change notification; it does not run skill-use or skill-level advancement.
bool __cdecl Cmd_SetAV_Execute(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  void *v9; // eax
  int v10; // [esp+4h] [ebp-8h] BYREF
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0; /*0x501701*/
  v10 = 0; /*0x501709*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11, &v10); /*0x501711*/
  if ( result ) /*0x50171b*/
  {
    v9 = OblivionDynamicCast( /*0x501731*/
           a4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    if ( v9 ) /*0x50173b*/
      (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)v9 + 0x290))(v9, *(_DWORD *)v11, v10);// Player skill SetAV reaches the base setter. requiredSkillExp[21] is rebuilt through Player_OnActorValueBaseChanged, but skillAdv, specialization counts, attribute bonuses, and majorSkillAdvances are not awarded. /*0x501751*/
    return 1; /*0x501753*/
  }
  return result; /*0x50171d*/
}
