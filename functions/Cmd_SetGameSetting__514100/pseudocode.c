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
  const char **v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // [esp+0h] [ebp-418h]
  int v14; // [esp+4h] [ebp-414h]
  int v15; // [esp+8h] [ebp-410h]
  UInt32 *a3; // [esp+10h] [ebp-408h] BYREF
  int String; // [esp+14h] [ebp-404h] BYREF
  UInt16 v18[256]; // [esp+214h] [ebp-204h] BYREF

  a3 = a8;
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v18, &String) )
  {
    a3 = 0;
    NiTMap_GetAt(&dword_B35574, (int)v18, &a3);
    v10 = (const char **)a3;
    if ( a3 )
    {
      v11 = Setting_GetTypeFromName((char *)a3[1]) - 3;
      if ( v11 )
      {
        v12 = v11 - 2;
        if ( v12 )
        {
          if ( v12 == 1 )
            Setting_SetStringValue(v10, (int)&String, v13, v14, v15);
          else
            Interface_ConsolePrint("GameSetting %s >> UNKNOWN TYPE", v18);
        }
        else
        {
          *(float *)v10 = atof((const char *)&String);
        }
      }
      else
      {
        *v10 = (const char *)j__atol((const char *)&String);
      }
    }
    else
    {
      Interface_ConsolePrint("GameSetting %s >> NOT FOUND", v18);
    }
  }
}
