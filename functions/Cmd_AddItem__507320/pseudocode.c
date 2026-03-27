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
  int Level; // eax
  const char *v11; // eax
  TESObject *v12; // [esp+10h] [ebp-24h] BYREF
  int a3; // [esp+14h] [ebp-20h] BYREF
  TESContainer v14; // [esp+18h] [ebp-1Ch] BYREF
  int unk; // [esp+30h] [ebp-4h]

  v12 = 0;
  a3 = 0;
  v8 = Script_ExtractArgs(a1, a2, opcodeOffsetPtr, a4, argC, a5, l, &v12, &a3);
  if ( v8 )
  {
    if ( a4 )
    {
      TESContainer_constr(&v14);
      unk = 0;
      v9 = OblivionDynamicCast(
             v12,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
             &TESLevItem `RTTI Type Descriptor',
             0);
      if ( v9 )
      {
        Level = Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, a3);
        TESLeveledList_CalcLeveledForm(v9 + 0x24, Level, (int)&v14);
      }
      else if ( v12 && a3 )
      {
        TESContainer_AddValidatedForm(&v14, v12, a3, 0);
      }
      else
      {
        v11 = a5->super.vtbl->GetEditorName(a5);
        PrintError("AddItem in script '%s' failed to generate an item.", v11);
      }
      TESContainer_CopyContentsToRef(&v14, a4);
      unk = 0xFFFFFFFF;
      TESContainer_destr(&v14);
    }
    return 1;
  }
  return v8;
}
