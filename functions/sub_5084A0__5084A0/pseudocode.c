bool __usercall sub_5084A0@<al>(
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
  bool result; // al
  TESWorldSpace *CurrentWorldspace; // edi
  void *CellAtCellCoord; // esi
  int GlobalScriptStateObj; // eax
  InterfaceManager *Singleton; // eax
  signed int cellY; // [esp+0h] [ebp-8h] BYREF
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)ArgList = 0; /*0x5084cf*/
  cellY = 0; /*0x5084d7*/
  result = Script_ExtractArgs(a1, a11, a3, a4, a13, a14, l, ArgList, &cellY); /*0x5084df*/
  if ( result ) /*0x5084e9*/
  {
    CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x5084fb*/
    if ( CurrentWorldspace || (CurrentWorldspace = (TESWorldSpace *)g_TESDataHandler->worldspaceList.item) != 0 ) /*0x50850b*/
    {
      if ( unk_B35B90 ) /*0x508514*/
        sub_4BE5A0((_DWORD *)unk_B35B90); /*0x50851e*/
      if ( g_DistantLODLoaderTasksByCell ) /*0x508523*/
        sub_4BD980(g_DistantLODLoaderTasksByCell); /*0x50852d*/
      CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(CurrentWorldspace, *(int *)ArgList, cellY); /*0x508544*/
      if ( CellAtCellCoord /*0x50857c*/
        || (CellAtCellCoord = TESWorldSpace_LoadExteriorCellAtCoord(
                                CurrentWorldspace,
                                a5,
                                a6,
                                a7,
                                *(int *)ArgList,
                                cellY)) != 0
        || (CellAtCellCoord = sub_4471D0(0, *(int *)ArgList, cellY, CurrentWorldspace)) != 0 )
      {
        GlobalScriptStateObj = GetGlobalScriptStateObj__(1); /*0x508580*/
        if ( *(char *)(GlobalScriptStateObj + 0x31) > 0 ) /*0x50858c*/
        {
          sub_5859C0((int *)GlobalScriptStateObj, (char)bp0, a5, a6, a7); /*0x508590*/
          Singleton = InterfaceManager_GetSingleton(0, 1); /*0x50859d*/
          sub_57CFE0((int)Singleton, a5, a6, a7, 3, 0); /*0x5085a7*/
        }
        sub_66FD90((TESObjectREFR *)reference, bp0, a2, st3_0, st4_0, a5, a6, a7, a8, a9, 0, *(float *)&CellAtCellCoord); /*0x5085b5*/
      }
      reference->unk117 = 1; /*0x5085c1*/
      return 1; /*0x5085c8*/
    }
    else
    {
      return 0; /*0x50850d*/
    }
  }
  return result; /*0x5084eb*/
}
