// [Controller decode 2026-07-09] SetSize execute callback. Parses target size and updates actor character-controller target size.
bool __cdecl Cmd_SetSize_Execute(
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
  MobileObject *v9; // eax
  bhkCharacterProxy *CharProxy; // eax
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  *(float *)v11 = 0.0; /*0x50176b*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11); /*0x50178f*/
  if ( result ) /*0x501799*/
  {
    v9 = (MobileObject *)OblivionDynamicCast( /*0x5017ad*/
                           a4,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
    if ( v9 ) /*0x5017b7*/
    {
      CharProxy = MobileObject_GetCharProxy(v9); /*0x5017bb*/
      if ( CharProxy ) /*0x5017c2*/
        bhkCharacterController_SetTargetSize((int)CharProxy, *(float *)v11); /*0x5017ce*/
    }
    return 1; /*0x5017d3*/
  }
  return result; /*0x50179d*/
}
