char __usercall sub_5085D0@<al>(
        char bp0@<bpl>,
        double a2@<st7>,
        double st3_0@<st4>,
        double st4_0@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        ParamInfo *a1,
        UInt8 *a9,
        TESObjectREFR *a4,
        TESObjectREFR *a11,
        Script *a12,
        ScriptEventList *l,
        int a14,
        UInt32 *a3)
{
  TESForm *CellAtCellCoord; // esi
  _BYTE *GlobalScriptStateObj; // eax
  InterfaceManager *Singleton; // eax
  UInt16 v19[2]; // [esp+0h] [ebp-Ch] BYREF
  signed int v20; // [esp+4h] [ebp-8h] BYREF
  char ArgList[4]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v19 = 0;
  *(_DWORD *)ArgList = 0;
  v20 = 0;
  if ( !Script_ExtractArgs(a1, a9, a3, a4, a11, a12, l, v19, ArgList, &v20) || !*(_DWORD *)v19 )
    return 0;
  if ( dword_B35B90 )
    sub_4BE5A0((_DWORD *)dword_B35B90);
  if ( dword_B35B8C )
    sub_4BD980((_DWORD *)dword_B35B8C);
  CellAtCellCoord = (TESForm *)TESWorldSpace::GetCellAtCellCoord(*(TESWorldSpace **)v19, *(signed int *)ArgList, v20);
  if ( CellAtCellCoord
    || (CellAtCellCoord = sub_4F1630(*(TESWorldSpace **)v19, a5, a6, a7, *(int *)ArgList, v20)) != 0
    || (CellAtCellCoord = sub_4471D0(0, *(int *)ArgList, v20, *(int ***)v19)) != 0 )
  {
    GlobalScriptStateObj = (_BYTE *)GetGlobalScriptStateObj__(1);
    if ( (char)GlobalScriptStateObj[0x31] > 0 )
    {
      sub_5859C0(GlobalScriptStateObj, bp0, a5, a6, a7);
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_57CFE0((int)Singleton, a5, a6, a7, 3, 0);
    }
    sub_66FD90((int)TESDataHandler_g_PlayerRef, bp0, a2, st3_0, st4_0, a5, a6, a7, 0, (int)CellAtCellCoord);
  }
  TESDataHandler_g_PlayerRef->unk117 = 1;
  return 1;
}
