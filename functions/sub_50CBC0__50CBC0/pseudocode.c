bool __cdecl sub_50CBC0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  void *v8; // eax
  void *v9; // eax
  _WORD *v10; // esi
  bool result; // al
  UInt16 v12[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v12 = 0; /*0x50cbd6*/
  v8 = OblivionDynamicCast( /*0x50cbde*/
         a4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( v8 ) /*0x50cbe8*/
  {
    v9 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 0x170))(v8); /*0x50cc06*/
    v10 = OblivionDynamicCast( /*0x50cc0e*/
            v9,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESNPC `RTTI Type Descriptor',
            0);
    if ( v10 ) /*0x50cc15*/
    {
      result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12); /*0x50cc3b*/
      if ( !result ) /*0x50cc45*/
        return result; /*0x50cc45*/
      TESActorBaseData_SetBarterGold(v10 + 0x12, v12[0]); /*0x50cc53*/
    }
    if ( MEMORY[0xB361AC] ) /*0x50cc58*/
      Interface_ConsolePrint(" Actor's base barter gold is  %d ", (unsigned __int16)v10[0x18]); /*0x50cc6b*/
  }
  return 1; /*0x50cc47*/
}
