bool __cdecl sub_50CC80(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  char *v8; // esi
  bool result; // al
  BSExtraData *InvestmentGold; // eax
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0; /*0x50cc96*/
  v8 = (char *)OblivionDynamicCast( /*0x50cca3*/
                 a4,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  if ( v8 ) /*0x50ccaa*/
  {
    result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11); /*0x50ccd0*/
    if ( !result ) /*0x50ccda*/
      return result; /*0x50ccda*/
    ExtraDataList_SetInvestmentGold((ExtraDataList *)(v8 + 0x44), *(BSExtraDataVtbl **)v11); /*0x50ccea*/
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v8 + 0x40))(v8, 0x2000); /*0x50ccfb*/
    if ( MEMORY[0xB361AC] ) /*0x50ccfd*/
    {
      InvestmentGold = ExtraDataList_GetInvestmentGold((ExtraDataList *)(v8 + 0x44)); /*0x50cd08*/
      Interface_ConsolePrint(" Actor's base investment gold is  %d ", InvestmentGold); /*0x50cd13*/
    }
  }
  return 1; /*0x50ccdc*/
}
