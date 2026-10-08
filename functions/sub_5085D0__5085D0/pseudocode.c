char __usercall sub_5085D0@<al>(
        char *bp0@<ebp>,
        double a2@<st7>,
        double st3_0@<st4>,
        double st4_0@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        double a8@<st6>,
        double a9@<st5>,
        ParamInfo *a1,
        UInt8 *a11,
        TESObjectREFR *a4,
        TESObjectREFR *a13,
        Script *a14,
        ScriptEventList *l,
        int a16,
        UInt32 *a3)
{
  void *CellAtCellCoord; // esi
  int GlobalScriptStateObj; // eax
  InterfaceManager *Singleton; // eax
  UInt16 v21[2]; // [esp+0h] [ebp-Ch] BYREF
  signed int cellY; // [esp+4h] [ebp-8h] BYREF
  char ArgList[4]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v21 = 0; /*0x508605*/
  *(_DWORD *)ArgList = 0; /*0x50860d*/
  cellY = 0; /*0x508615*/
  if ( !Script_ExtractArgs(a1, a11, a3, a4, a13, a14, l, v21, ArgList, &cellY) || !*(_DWORD *)v21 ) /*0x508633*/
    return 0; /*0x508629*/
  if ( unk_B35B90 ) /*0x508635*/
    sub_4BE5A0((_DWORD *)unk_B35B90); /*0x50863f*/
  if ( g_DistantLODLoaderTasksByCell ) /*0x508644*/
    sub_4BD980(g_DistantLODLoaderTasksByCell); /*0x50864e*/
  CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(*(TESWorldSpace **)v21, *(int *)ArgList, cellY); /*0x508667*/
  if ( CellAtCellCoord /*0x5086a5*/
    || (CellAtCellCoord = TESWorldSpace_LoadExteriorCellAtCoord(
                            *(TESWorldSpace **)v21,
                            a5,
                            a6,
                            a7,
                            *(int *)ArgList,
                            cellY)) != 0
    || (CellAtCellCoord = sub_4471D0(0, *(int *)ArgList, cellY, *(TESWorldSpace **)v21)) != 0 )
  {
    GlobalScriptStateObj = GetGlobalScriptStateObj__(1); /*0x5086a9*/
    if ( *(char *)(GlobalScriptStateObj + 0x31) > 0 ) /*0x5086b5*/
    {
      sub_5859C0((int *)GlobalScriptStateObj, (char)bp0, a5, a6, a7); /*0x5086b9*/
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5086c6*/
      sub_57CFE0((int)Singleton, a5, a6, a7, 3, 0); /*0x5086d0*/
    }
    sub_66FD90((TESObjectREFR *)reference, bp0, a2, st3_0, st4_0, a5, a6, a7, a8, a9, 0, *(float *)&CellAtCellCoord); /*0x5086de*/
  }
  reference->unk117 = 1; /*0x5086e9*/
  return 1; /*0x50862b*/
}
