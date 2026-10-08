bool __usercall sub_5011F0@<al>(
        double st5_0@<st2>,
        double a2@<st1>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a3)
{
  bool result; // al
  _BYTE *v12; // eax
  void **v13; // eax
  char *Name; // eax
  int v15; // eax
  bool v16; // zf
  const char *v17; // eax
  const char *v18; // [esp-8h] [ebp-Ch]
  UInt16 v19[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v19 = 0; /*0x50121a*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v19); /*0x501222*/
  if ( result ) /*0x50122c*/
  {
    v12 = *(_BYTE **)v19; /*0x501231*/
    if ( *(_DWORD *)v19 /*0x501254*/
      || (v12 = OblivionDynamicCast(
                  a4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0),
          (*(_DWORD *)v19 = v12) != 0) )
    {
      v12[0x78] = v12[0x78] == 0; /*0x50125d*/
      if ( MEMORY[0xB361AC] ) /*0x501260*/
      {
        v13 = (void **)"On"; /*0x501271*/
        if ( !*(_BYTE *)(*(_DWORD *)v19 + 0x78) ) /*0x50126d*/
          v13 = &aOff; /*0x501278*/
        v18 = (const char *)v13; /*0x50127d*/
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)v19); /*0x50127e*/
        Interface_ConsolePrint("%s processing is  %s", Name, v18); /*0x501289*/
        return 1; /*0x501295*/
      }
    }
    else
    {
      v15 = LOBYTE(qword_B3BB2C[0x9B]) == 0; /*0x50129d*/
      v16 = MEMORY[0xB361AC] == 0; /*0x5012a0*/
      LOBYTE(qword_B3BB2C[0x9B]) = v15; /*0x5012a7*/
      if ( !v16 ) /*0x5012ac*/
      {
        v16 = (_BYTE)v15 == 0; /*0x5012ae*/
        v17 = "On"; /*0x5012b0*/
        if ( v16 ) /*0x5012b5*/
          v17 = (const char *)&aOff; /*0x5012b7*/
        Interface_ConsolePrint("All AI Processing is  %s", v17); /*0x5012c2*/
        LOBYTE(v15) = LOBYTE(qword_B3BB2C[0x9B]); /*0x5012c7*/
      }
      if ( !(_BYTE)v15 ) /*0x5012d1*/
        sub_675880((int)&qword_B3BB2C[0x75], st5_0, a2); /*0x5012d8*/
    }
    return 1; /*0x5012dd*/
  }
  return result; /*0x501230*/
}
