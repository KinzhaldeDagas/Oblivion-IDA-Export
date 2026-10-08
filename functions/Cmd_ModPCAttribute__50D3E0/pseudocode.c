bool __usercall Cmd_ModPCAttribute@<al>(
        int ebx0@<ebx>,
        int a2@<edi>,
        int esi0@<esi>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  bool result; // al
  int BaseCalcAVi; // eax
  UInt16 v13[2]; // [esp+0h] [ebp-8h] BYREF
  int v14; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0; /*0x50d3e9*/
  v14 = 0; /*0x50d3ec*/
  result = Script_ExtractArgs(a1, a5, a3, a4, argC, a8, l, v13, &v14); /*0x50d419*/
  if ( result ) /*0x50d423*/
  {
    if ( *(_DWORD *)v13 <= 7u ) /*0x50d42f*/
    {
      BaseCalcAVi = Actor_GetBaseCalcAVi((int *)reference, ebx0, a2, esi0, *(int *)v13); /*0x50d438*/
      Player_Actor_SetAViBase((Actor *)reference, *(unsigned int *)v13, v14 + BaseCalcAVi); /*0x50d44e*/
    }
    return 1; /*0x50d453*/
  }
  return result; /*0x50d425*/
}
