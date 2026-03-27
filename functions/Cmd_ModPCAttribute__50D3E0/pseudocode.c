bool __cdecl Cmd_ModPCAttribute(
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
  int BaseCalcAVi; // eax
  UInt16 v10[2]; // [esp+0h] [ebp-8h] BYREF
  int v11; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0;
  v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11);
  if ( result )
  {
    if ( *(_DWORD *)v10 <= 7u )
    {
      BaseCalcAVi = Actor_GetBaseCalcAVi(*(_DWORD *)v10);
      Player_Actor_SetAViBase(*(_DWORD *)v10, v11 + BaseCalcAVi);
    }
    return 1;
  }
  return result;
}
