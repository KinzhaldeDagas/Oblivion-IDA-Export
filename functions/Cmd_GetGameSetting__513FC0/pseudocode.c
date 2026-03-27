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
  float *v10; // esi
  int v11; // eax
  int v12; // eax
  const char *v13; // eax
  int v14; // edx
  void *l; // [esp+18h] [ebp-20Ch] BYREF
  UInt32 *a3; // [esp+1Ch] [ebp-208h]
  UInt16 v17; // [esp+20h] [ebp-204h] BYREF

  a3 = a8;
  l = a6;
  *a7 = 0.0;
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, a6, &v17) )
  {
    l = 0;
    NiTMap_GetAt(&dword_B35574, (int)&v17, &l);
    v10 = (float *)l;
    if ( l )
    {
      v11 = Setting_GetTypeFromName(*((char **)l + 1)) - 3;
      if ( v11 )
      {
        v12 = v11 - 2;
        if ( v12 )
        {
          if ( v12 == 1 )
            Interface_ConsolePrint("GameSetting %s >> '%s'", *((_DWORD *)v10 + 1), *(_DWORD *)v10);
          else
            Interface_ConsolePrint("GameSetting %s >> UNKNOWN TYPE", *((const char **)v10 + 1));
        }
        else
        {
          v13 = *((const char **)v10 + 1);
          *a7 = *v10;
          Interface_ConsolePrint("GameSetting %s >> %.2f", v13, *v10);
        }
      }
      else
      {
        v14 = *((_DWORD *)v10 + 1);
        *a7 = (double)*(int *)v10;
        Interface_ConsolePrint("GameSetting %s >> %i", v14, *(_DWORD *)v10);
      }
    }
    else
    {
      Interface_ConsolePrint("GameSetting %s >> NOT FOUND", &v17);
    }
  }
}
