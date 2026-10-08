// Verified function body: Cmd_GetGameSetting parses a key and looks up g_GameSettingsByName, formatting string settings for output. Candidate availability only: no direct reference to this function or its "GetGameSetting" string was found in the inspected command table, so do not claim it is registered/reachable as a console command.
void __cdecl Cmd_GetGameSetting(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *a6,
        double *a7,
        UInt32 *a8)
{
  float *v8; // esi
  int v9; // eax
  int v10; // eax
  const char *v11; // eax
  int v12; // edx
  void *l; // [esp+18h] [ebp-20Ch] BYREF
  UInt32 *a3; // [esp+1Ch] [ebp-208h]
  UInt16 v15; // [esp+20h] [ebp-204h] BYREF

  a3 = a8; /*0x51400b*/
  l = a6; /*0x514014*/
  *a7 = 0.0; /*0x514024*/
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, a6, &v15) ) /*0x514030*/
  {
    l = 0; /*0x51404f*/
    NiTMap_GetAt(&g_GameSettingsByName, (int)&v15, &l); /*0x514057*/
    v8 = (float *)l; /*0x51405c*/
    if ( l )                                    // MorrowindDialogueText: Cmd_GetGameSetting reads dword_B35574 setting map; string settings are printed via setting value pointer. /*0x514062*/
    {
      v9 = Setting_GetTypeFromName(*((char **)l + 1)) - 3; /*0x514070*/
      if ( v9 ) /*0x514073*/
      {
        v10 = v9 - 2; /*0x514075*/
        if ( v10 ) /*0x514078*/
        {
          if ( v10 == 1 ) /*0x51407d*/
            Interface_ConsolePrint("GameSetting %s >> '%s'", *((_DWORD *)v8 + 1), *(_DWORD *)v8); /*0x51409e*/
          else
            Interface_ConsolePrint("GameSetting %s >> UNKNOWN TYPE", *((const char **)v8 + 1)); /*0x514088*/
        }
        else
        {
          v11 = *((const char **)v8 + 1); /*0x5140a2*/
          *a7 = *v8; /*0x5140a5*/
          Interface_ConsolePrint("GameSetting %s >> %.2f", v11, *v8); /*0x5140b5*/
        }
      }
      else
      {
        v12 = *((_DWORD *)v8 + 1); /*0x5140c1*/
        *a7 = (double)*(int *)v8; /*0x5140c4*/
        Interface_ConsolePrint("GameSetting %s >> %i", v12, *(_DWORD *)v8); /*0x5140cf*/
      }
    }
    else
    {
      Interface_ConsolePrint("GameSetting %s >> NOT FOUND", &v15); /*0x5140dd*/
    }
  }
}
