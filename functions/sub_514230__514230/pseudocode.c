void __cdecl sub_514230(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  int *v11; // esi
  int *v12; // eax
  double v13; // st4
  int *v14; // eax
  int *v15; // eax
  UInt32 *a3; // [esp+18h] [ebp-208h] BYREF
  UInt16 v17[2]; // [esp+1Ch] [ebp-204h] BYREF

  a3 = a8;
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v17) )
  {
    a3 = 0;
    sub_50EC30(&INISettingCollection, (char *)v17, &a3);
    v11 = (int *)a3;
    if ( a3 )
    {
      switch ( Setting_GetTypeFromName((char *)a3[1]) )
      {
        case 0:
          v15 = sub_404DF0(v11);
          Interface_ConsolePrint("INISetting %s >> %i", (const char *)v17, *(_BYTE *)v15 != 0);
          break;
        case 3:
          v12 = sub_403BE0(v11);
          Interface_ConsolePrint("INISetting %s >> %i", (const char *)v17, *v12);
          break;
        case 5:
          v13 = *(float *)GameSetting_GetSafeFloatPointer(v11);
          Interface_ConsolePrint("INISetting %s >> %.2f", (const char *)v17, v13);
          break;
        case 6:
          v14 = sub_403BE0(v11);
          Interface_ConsolePrint("INISetting %s >> '%s'", (const char *)v17, (const char *)*v14);
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
