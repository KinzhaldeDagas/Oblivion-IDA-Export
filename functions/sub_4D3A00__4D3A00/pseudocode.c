void __userpurge sub_4D3A00(int a1@<ecx>, double a2@<st2>, double a3@<st1>, TESWorldSpace *a4)
{
  TESObjectREFR *v5; // esi
  signed int v6; // edi
  double v7; // st7
  TESObjectCELL *CellAtCellCoord; // eax
  int v9; // eax
  const char *v10; // eax
  int v11; // [esp-18h] [ebp-2Ch]
  const char *v12; // [esp-14h] [ebp-28h]
  int v13; // [esp-10h] [ebp-24h]
  TESObjectREFR **v14; // [esp+4h] [ebp-10h]
  int v15; // [esp+10h] [ebp-4h]

  if ( a4 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
    {
      sub_496EA0((char *)&stru_B35C80, (TESObjectCELL *)a1);
      v14 = (TESObjectREFR **)(a1 + 0x48);
      if ( a1 != 0xFFFFFFB8 )
      {
        do
        {
          v5 = *v14;
          if ( *v14 )
          {
            v6 = (int)*v5->vtbl->GetPos(*v14) >> 0xC;
            v7 = v5->vtbl->GetPos(v5)[1];
            CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(a4, v6, (int)v7 >> 0xC);
            if ( CellAtCellCoord )
            {
              sub_4D35D0(CellAtCellCoord, a2, a3, v7, v5);
            }
            else
            {
              v15 = *(_DWORD *)(a1 + 0xC);
              v9 = ((int (__thiscall *)(TESObjectREFR *, UInt32))v5->vtbl->super.GetEditorName)(
                     v5,
                     v5->member.super.refID);
              v10 = (const char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0xD4))(a1, v15, v9);
              PrintError(
                "Could not find cell (%i, %i) in world '%s' (%08X) to add reference '%s' (%08X) to.",
                v6,
                (int)v7 >> 0xC,
                v10,
                v11,
                v12,
                v13);
            }
          }
          v14 = (TESObjectREFR **)v14[1];
        }
        while ( v14 );
      }
      sub_496F50(&stru_B35C80, (TESObjectCELL *)a1);
    }
  }
}
