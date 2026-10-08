bool __cdecl sub_505C80(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  _BYTE *v8; // esi
  bool result; // al
  char *v10; // eax
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0; /*0x505c96*/
  v8 = OblivionDynamicCast( /*0x505ca3*/
         a4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( !v8 || (result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11)) ) /*0x505cd0*/
  {
    if ( MEMORY[0xB361AC] ) /*0x505ce0*/
    {
      v10 = sub_5FAA70(v8); /*0x505ceb*/
      Interface_ConsolePrint("Actor Barter Gold is  %d ", v10); /*0x505cf6*/
    }
    return 1; /*0x505cff*/
  }
  return result; /*0x505cdc*/
}
