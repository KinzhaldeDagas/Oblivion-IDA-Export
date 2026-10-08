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
  const char **v8; // esi
  int v9; // [esp+0h] [ebp-418h]
  int v10; // [esp+4h] [ebp-414h]
  char *v11; // [esp+8h] [ebp-410h]
  UInt32 *a3; // [esp+10h] [ebp-408h] BYREF
  int Str; // [esp+14h] [ebp-404h] BYREF
  char v14[512]; // [esp+214h] [ebp-204h] BYREF

  a3 = a8; /*0x514409*/
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v14, &Str) ) /*0x514425*/
  {
    a3 = 0; /*0x514447*/
    sub_50EC30(&INISettingCollection, v14, &a3); /*0x51444f*/
    v8 = (const char **)a3; /*0x514454*/
    if ( a3 ) /*0x51445a*/
    {
      switch ( Setting_GetTypeFromName((char *)a3[1]) ) /*0x51446d*/
      {
        case 0: /*0x51446d*/
        case 3: /*0x51446d*/
          *v8 = (const char *)j__atol((const char *)&Str); /*0x514481*/
          break; /*0x514483*/
        case 5: /*0x51446d*/
          *(float *)v8 = atof((const char *)&Str); /*0x51448f*/
          break; /*0x514494*/
        case 6: /*0x51446d*/
          Setting_SetStringValue(v8, (int)&Str, v9, v10, v11); /*0x51449d*/
          break; /*0x5144a2*/
        default:
          Interface_ConsolePrint("INISetting %s >> UNKNOWN TYPE", v14); /*0x5144b1*/
          break; /*0x5144b1*/
      }
    }
    else
    {
      Interface_ConsolePrint("INISetting %s >> NOT FOUND", v14); /*0x5144c0*/
    }
  }
}
