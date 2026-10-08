bool __cdecl sub_500F70(
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
  bool v9; // zf
  const char *v10; // eax
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  BYTE2(qword_B3BB2C[0x9B]) = BYTE2(qword_B3BB2C[0x9B]) == 0; /*0x500f8c*/
  *(_DWORD *)v11 = 0; /*0x500fa7*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11); /*0x500faf*/
  if ( result ) /*0x500fb9*/
  {
    v9 = MEMORY[0xB361AC] == 0; /*0x500fbd*/
    qword_B3BB2C[0x9C] = *(float *)v11; /*0x500fc7*/
    if ( !v9 ) /*0x500fcc*/
    {
      v10 = "On"; /*0x500fd5*/
      if ( !BYTE2(qword_B3BB2C[0x9B]) ) /*0x500fce*/
        v10 = (const char *)&aOff; /*0x500fdc*/
      Interface_ConsolePrint("AI Detection stats printing is  %s", v10); /*0x500fe7*/
    }
    return 1; /*0x500fef*/
  }
  return result; /*0x500fbb*/
}
