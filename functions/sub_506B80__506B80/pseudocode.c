bool __cdecl sub_506B80(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  bool v13; // zf
  const char *v14; // ecx
  const char *v15; // eax
  UInt16 v16[2]; // [esp+0h] [ebp-20h] BYREF
  _DWORD v17[7]; // [esp+4h] [ebp-1Ch]

  *(_DWORD *)v16 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v16);
  if ( result )
  {
    v9 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 > 6u )
    {
      if ( IsConsoleMode )
        Interface_ConsolePrint("Shadow object type must be [0,6]");
    }
    else
    {
      v10 = dword_B2C678;
      v11 = 1 << SLOBYTE(v16[0]);
      if ( ((1 << SLOBYTE(v16[0])) & dword_B2C678) != 0 )
        v12 = ~v11 & v10;
      else
        v12 = v11 | v10;
      v13 = IsConsoleMode == 0;
      dword_B2C678 = v12;
      if ( !v13 )
      {
        v17[0] = "Undetermined";
        v17[1] = "Architecture";
        v17[2] = "Furniture";
        v17[3] = "Actors";
        v17[4] = "Items";
        v17[5] = "Misc";
        v17[6] = "Other";
        v14 = (const char *)v17[v9];
        v13 = (v11 & v12) == 0;
        v15 = (const char *)&aOn_0;
        if ( v13 )
          v15 = (const char *)&aOff;
        Interface_ConsolePrint("Shadows %s: %s", v14, v15);
        return 1;
      }
    }
    return 1;
  }
  return result;
}
