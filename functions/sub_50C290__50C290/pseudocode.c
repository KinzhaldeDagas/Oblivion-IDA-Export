bool __cdecl sub_50C290(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  _BYTE *v8; // esi
  bool result; // al
  int v10; // eax
  double v11; // [esp-4h] [ebp-10h]
  UInt16 v12[2]; // [esp+8h] [ebp-4h] BYREF

  v8 = OblivionDynamicCast( /*0x50c2ab*/
         a4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( v8 ) /*0x50c2b2*/
  {
    *a7 = 1.0; /*0x50c2be*/
    *(_DWORD *)v12 = 0; /*0x50c2e0*/
    result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12); /*0x50c2e8*/
    if ( !result ) /*0x50c2f2*/
      return result; /*0x50c2f2*/
    v10 = *(_DWORD *)v12; /*0x50c2f8*/
    v8[0xC8] = *(_DWORD *)v12 != 0; /*0x50c301*/
    if ( MEMORY[0xB361AC] ) /*0x50c307*/
    {
      LODWORD(v11) = v10; /*0x50c310*/
      Interface_ConsolePrint("SetForceRun >> %0.2f", v11); /*0x50c316*/
    }
  }
  return 1; /*0x50c2f4*/
}
