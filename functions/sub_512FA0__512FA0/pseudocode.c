bool __cdecl sub_512FA0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v8; // edi
  bool result; // al
  unsigned int v10; // eax
  LONG v11; // eax
  char *Name; // eax
  UInt16 v13[2]; // [esp+4h] [ebp-8h] BYREF
  float v14; // [esp+8h] [ebp-4h] BYREF

  v14 = flt_A30634;
  v8 = arg8;
  *(_DWORD *)v13 = 0;
  result = Script_ExtractArgs(a1, a2, a3, arg8, a4, a5, l, v13, &v14);
  if ( result )
  {
    if ( !arg8 )
      v8 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    if ( *(_DWORD *)v13 )
    {
      LOWORD(v10) = *(_WORD *)(*(_DWORD *)v13 + 0x20);
      if ( (_WORD)v10 == 0xFFFF )
        v10 = strlen(*(const char **)(*(_DWORD *)v13 + 0x1C));
      else
        v10 = (unsigned __int16)v10;
      if ( v10 )
      {
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)v13 + 0x18) + 0x14))(*(_DWORD *)v13 + 0x18);
        sub_678F50((int *)&ActorProcessManager_ptr, (int)v8, v11);
      }
    }
    if ( IsConsoleMode )
    {
      if ( TESObjectREFR_GetName(v8) )
      {
        Name = TESObjectREFR_GetName(v8);
        Interface_ConsolePrint("Visual effect has been removed from %s", Name);
        return 1;
      }
      Interface_ConsolePrint("Visual effect has been removed from reference");
    }
    return 1;
  }
  return result;
}
