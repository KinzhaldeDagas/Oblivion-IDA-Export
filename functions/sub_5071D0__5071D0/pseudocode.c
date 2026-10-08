void __usercall sub_5071D0(
        double st5_0@<st2>,
        double a2@<st1>,
        double a3@<st0>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a11)
{
  UInt16 v11[2]; // [esp+14h] [ebp-204h] BYREF

  if ( Script_ExtractArgs(a1, a5, a11, a4, a7, a8, l, v11) ) /*0x50722d*/
  {
    if ( *(_DWORD *)&g_TESSaveLoadGame[3].unknown1C[0xC] ) /*0x507257*/
      ShowUIMessageBox( /*0x507275*/
        (char *)MEMORY[0xB38CF0].value,
        st5_0,
        a2,
        a3,
        (char *)v11,
        (int)sub_65DC00,
        1,
        (char *)MEMORY[0xB38CF0].value,
        0);
    else
      ShowUIMessageBox((char *)v11, st5_0, a2, a3, (char *)v11, (int)sub_662ED0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x507289*/
  }
}
