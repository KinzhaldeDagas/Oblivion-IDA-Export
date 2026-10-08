bool __cdecl Cmd_AddItem(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *result,
        UInt32 *opcodeOffsetPtr)
{
  bool v8; // al
  _BYTE *v9; // esi
  int v10; // eax
  const char *v11; // eax
  int v12; // [esp-8h] [ebp-3Ch]
  TESObject *v13; // [esp+10h] [ebp-24h] BYREF
  int a3; // [esp+14h] [ebp-20h] BYREF
  TESContainer v15; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v16; // [esp+2Ch] [ebp-8h]
  int unk; // [esp+30h] [ebp-4h]

  v13 = 0; /*0x507373*/
  a3 = 0; /*0x50737b*/
  v8 = Script_ExtractArgs(a1, a2, opcodeOffsetPtr, a4, argC, a5, l, &v13, &a3); /*0x507383*/
  if ( v8 ) /*0x50738d*/
  {
    if ( a4 ) /*0x5073a4*/
    {
      TESContainer_constr(&v15); /*0x5073ae*/
      unk = 0; /*0x5073c6*/
      v9 = OblivionDynamicCast( /*0x5073d3*/
             v13,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
             &TESLevItem `RTTI Type Descriptor',
             0);
      if ( v9 ) /*0x5073da*/
      {
        v12 = a3; /*0x5073eb*/
        LOWORD(v10) = Actor_GetLevel((Actor *)reference); /*0x5073ec*/
        TESLeveledList_CalcLeveledForm(v9 + 0x24, v10, v12); /*0x5073f5*/
      }
      else if ( v13 && a3 ) /*0x50740a*/
      {
        TESContainer_AddValidatedForm(&v15, v13, a3, 0); /*0x507414*/
      }
      else
      {
        v11 = a5->super.vtbl->GetEditorName(a5); /*0x507425*/
        PrintError("AddItem in script '%s' failed to generate an item.", v11); /*0x50742d*/
      }
      TESContainer_CopyContentsToRef(&a3, a4); /*0x50743a*/
      v16 = 0xFFFFFFFF; /*0x507443*/
      TESContainer_destr(&a3); /*0x50744b*/
    }
    return 1; /*0x507450*/
  }
  return v8; /*0x50738f*/
}
