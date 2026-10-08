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
  float *v8; // esi
  float *v9; // eax
  double v10; // st7
  float *v11; // eax
  float *v12; // eax
  UInt32 *a3; // [esp+18h] [ebp-208h] BYREF
  UInt16 v14[2]; // [esp+1Ch] [ebp-204h] BYREF

  a3 = a8; /*0x514279*/
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v14) ) /*0x51428d*/
  {
    a3 = 0; /*0x5142ac*/
    sub_50EC30(&INISettingCollection, (char *)v14, &a3); /*0x5142b4*/
    v8 = (float *)a3; /*0x5142b9*/
    if ( a3 ) /*0x5142bf*/
    {
      switch ( Setting_GetTypeFromName((char *)a3[1]) ) /*0x5142da*/
      {
        case 0: /*0x5142da*/
          v12 = sub_404DF0(v8); /*0x514345*/
          Interface_ConsolePrint("INISetting %s >> %i", (const char *)v14, *(_BYTE *)v12 != 0); /*0x51435c*/
          break; /*0x514364*/
        case 3: /*0x5142da*/
          v9 = sub_403BE0(v8); /*0x5142e3*/
          Interface_ConsolePrint("INISetting %s >> %i", (const char *)v14, *(_DWORD *)v9); /*0x5142f5*/
          break; /*0x5142fd*/
        case 5: /*0x5142da*/
          v10 = *GameSetting_GetSafeFloatPointer(v8); /*0x514309*/
          Interface_ConsolePrint("INISetting %s >> %.2f", (const char *)v14, v10); /*0x51431b*/
          break; /*0x514323*/
        case 6: /*0x5142da*/
          v11 = sub_403BE0(v8); /*0x514327*/
          Interface_ConsolePrint("INISetting %s >> '%s'", (const char *)v14, *(const char **)v11); /*0x514339*/
          break; /*0x514341*/
        default:
          Interface_ConsolePrint("INISetting %s >> UNKNOWN TYPE", v14); /*0x514370*/
          break; /*0x514370*/
      }
    }
    else
    {
      Interface_ConsolePrint("INISetting %s >> NOT FOUND", v14); /*0x51437c*/
    }
  }
}
