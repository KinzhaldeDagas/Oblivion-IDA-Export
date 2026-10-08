void __usercall sub_5023D0(
        double st0_0@<st7>,
        double a2@<st6>,
        double a3@<st5>,
        double st3_0@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>,
        ParamInfo *a1,
        UInt8 *a10,
        TESObjectREFR *a4,
        TESObjectREFR *a12,
        Script *a13,
        ScriptEventList *l,
        int a15,
        UInt32 *a16)
{
  char *v16; // esi
  void (__stdcall *v17)(LPSTR, LPCSTR); // edi
  int v18; // ecx
  char v19; // al
  _DWORD v20[2]; // [esp+10h] [ebp-310h] BYREF
  int String1; // [esp+18h] [ebp-308h] BYREF
  char Str[512]; // [esp+11Ch] [ebp-204h] BYREF

  v20[1] = a16; /*0x502419*/
  v20[0] = 0; /*0x502435*/
  if ( Script_ExtractArgs(a1, a10, a16, a4, a12, a13, l, Str, v20) ) /*0x50243d*/
  {
    ((void (__userpurge *)(int *, CHAR *, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))lstrcpyA)( /*0x502457*/
      &String1,
      EmptyString,
      a8,
      a7,
      a6,
      a5,
      st3_0,
      a3,
      a2,
      st0_0);
    v16 = strchr(Str, 0x2E); /*0x50246f*/
    if ( v16 ) /*0x502480*/
    {
      v17 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x502482*/
      *v16 = 0; /*0x502488*/
      v17((LPSTR)&String1, Str); /*0x50248b*/
      v17((LPSTR)&String1, ".ess"); /*0x502497*/
      *v16 = 0x2E; /*0x502499*/
    }
    else
    {
      a8 = ((double (__stdcall *)(int *, char *))lstrcatA)(&String1, Str); /*0x50249e*/
    }
    LOBYTE(v18) = v20[0] != 0; /*0x5024ad*/
    TESSaveLoadGame_SaveGame_( /*0x5024ba*/
      (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)g_TESSaveLoadGame,
      st0_0,
      a2,
      a3,
      st3_0,
      a5,
      a6,
      a7,
      a8,
      0,
      (char *)&String1,
      v18);
    if ( v19 ) /*0x5024c1*/
      Interface_ConsolePrint("Game Saved"); /*0x5024c8*/
    else
      Interface_ConsolePrint("You cannot save right now"); /*0x5024cf*/
  }
}
