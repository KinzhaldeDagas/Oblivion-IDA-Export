bool __cdecl sub_5061B0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v8; // esi
  bool result; // al
  char *Name; // eax
  UInt16 v11[2]; // [esp+4h] [ebp-8h] BYREF
  float v12; // [esp+8h] [ebp-4h] BYREF

  v12 = flt_A30634;
  v8 = arg8;
  *(_DWORD *)v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, arg8, a4, a5, l, v11, &v12);
  if ( result )
  {
    if ( !arg8 )
      v8 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    sub_678E70((int *)&ActorProcessManager_ptr, (int)v8, *(LONG *)v11);
    if ( TESObjectREFR_GetName(v8) )
    {
      Name = TESObjectREFR_GetName(v8);
      Interface_ConsolePrint("Shader effect has been removed from %s", Name);
    }
    else
    {
      Interface_ConsolePrint("Shader effect has been removed from reference");
    }
    return 1;
  }
  return result;
}
