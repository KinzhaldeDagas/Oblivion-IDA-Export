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

  if ( Script_ExtractArgs(a1, a5, a11, a4, a7, a8, l, v11) )
  {
    if ( SaveLoad_CurrentSavegame[5].unk030[0] )
      ShowUIMessageBox(sOk, (char)v11, st5_0, a2, a3, (const char *)v11, (int)sub_65DC00, 1, (const char *)sOk, 0);
    else
      ShowUIMessageBox((int)v11, (char)v11, st5_0, a2, a3, (const char *)v11, (int)sub_662ED0, 1, (const char *)sOk, 0);
  }
}
