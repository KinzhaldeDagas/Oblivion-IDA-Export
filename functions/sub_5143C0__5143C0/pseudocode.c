void __cdecl sub_5143C0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  const char **v11; // esi
  int v12; // [esp+0h] [ebp-418h]
  int v13; // [esp+4h] [ebp-414h]
  int v14; // [esp+8h] [ebp-410h]
  UInt32 *a3; // [esp+10h] [ebp-408h] BYREF
  int Str; // [esp+14h] [ebp-404h] BYREF
  char v17[512]; // [esp+214h] [ebp-204h] BYREF

  a3 = a8;
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v17, &Str) )
  {
    a3 = 0;
    sub_50EC30(&INISettingCollection, v17, &a3);
    v11 = (const char **)a3;
    if ( a3 )
    {
      switch ( Setting_GetTypeFromName((char *)a3[1]) )
      {
        case 0:
        case 3:
          *v11 = (const char *)j__atol((const char *)&Str);
          break;
        case 5:
          *(float *)v11 = atof((const char *)&Str);
          break;
        case 6:
          Setting_SetStringValue(v11, (int)&Str, v12, v13, v14);
          break;
        default:
          Interface_ConsolePrint("INISetting %s >> UNKNOWN TYPE", v17);
          break;
      }
    }
    else
    {
      Interface_ConsolePrint("INISetting %s >> NOT FOUND", v17);
    }
  }
}
