// Verified: Cmd_SetGameSetting parses name/value, looks up g_GameSettingsByName and routes string values through Setting_SetStringValue. Its command-table entry at 0xB0B880 contains the SetGameSetting string pointer and function pointer 0x514100, confirming the generic setter is registered.
void __cdecl Cmd_SetGameSetting(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  const char **v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // [esp+0h] [ebp-418h]
  int v12; // [esp+4h] [ebp-414h]
  int v13; // [esp+8h] [ebp-410h]
  UInt32 *a3; // [esp+10h] [ebp-408h] BYREF
  int String; // [esp+14h] [ebp-404h] BYREF
  UInt16 v16[256]; // [esp+214h] [ebp-204h] BYREF

  a3 = a8; /*0x514149*/
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v16, &String) ) /*0x514165*/
  {
    a3 = 0; /*0x514187*/
    NiTMap_GetAt(&g_GameSettingsByName, (int)v16, &a3); /*0x51418f*/
    v8 = (const char **)a3; /*0x514194*/
    if ( a3 ) /*0x51419a*/
    {
      v9 = Setting_GetTypeFromName((char *)a3[1]) - 3; /*0x5141a8*/
      if ( v9 ) /*0x5141ab*/
      {
        v10 = v9 - 2; /*0x5141ad*/
        if ( v10 ) /*0x5141b0*/
        {
          if ( v10 == 1 ) /*0x5141b5*/
            Setting_SetStringValue(v8, (int)&String, v11, v12, v13); /*0x5141cd*/
          else
            Interface_ConsolePrint("GameSetting %s >> UNKNOWN TYPE", v16); /*0x5141c4*/
        }
        else
        {
          *(float *)v8 = atof((const char *)&String); /*0x5141de*/
        }
      }
      else
      {
        *v8 = (const char *)j__atol((const char *)&String); /*0x5141f2*/
      }
    }
    else
    {
      Interface_ConsolePrint("GameSetting %s >> NOT FOUND", v16); /*0x514203*/
    }
  }
}
