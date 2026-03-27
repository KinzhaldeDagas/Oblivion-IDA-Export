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
  BSExtraData *v10; // eax
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0;
  v8 = (char *)OblivionDynamicCast(
                 a4,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  if ( v8 )
  {
    result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11);
    if ( !result )
      return result;
    sub_41F420((ExtraDataList *)(v8 + 0x44), *(BSExtraDataVtbl **)v11);
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v8 + 0x40))(v8, 0x2000);
    if ( IsConsoleMode )
    {
      v10 = sub_41E980((ExtraDataList *)(v8 + 0x44));
      Interface_ConsolePrint(" Actor's base investment gold is  %d ", v10);
    }
  }
  return 1;
}
