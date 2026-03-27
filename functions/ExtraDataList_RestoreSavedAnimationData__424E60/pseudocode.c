void __userpurge ExtraDataList_RestoreSavedAnimationData(
        ExtraDataList *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v7; // esi
  BSExtraData *v8; // eax

  ExtraData = BaseExtraList_GetExtraData(a1, kExtraData_SavedMovementData);
  v7 = ExtraData;
  if ( ExtraData )
  {
    if ( *(_DWORD *)&ExtraData[1].members.type )
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B33B80, (int)&aExtradatalis_3);
      sub_45A140(SaveLoad_CurrentSavegame, LOBYTE(v7[1].vtbl));
      sub_458ED0(
        SaveLoad_CurrentSavegame,
        a2,
        a3,
        a4,
        (TESObjectREFR *)a5,
        *(AnimSequenceSingle **)(a5 + 0xC),
        *(_DWORD *)&v7[1].members.type);
      MemoryHeap_Free_checked(*(void **)&v7[1].members.type);
      *(_DWORD *)&v7[1].members.type = 0;
      LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) = BYTE1(SaveLoad_CurrentSavegame[1].unk01C[1]);
      NiLeaveCriticalSection_0(&stru_B33B80);
    }
    if ( v7[1].members.next )
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B33B80, (int)&aExtradatalis_3);
      sub_45A140(SaveLoad_CurrentSavegame, LOBYTE(v7[1].vtbl));
      sub_459080(SaveLoad_CurrentSavegame, (_DWORD *)a5, (int)v7[1].members.next);
      MemoryHeap_Free_checked(v7[1].members.next);
      v7[1].members.next = 0;
      LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) = BYTE1(SaveLoad_CurrentSavegame[1].unk01C[1]);
      NiLeaveCriticalSection_0(&stru_B33B80);
    }
    if ( !v7[2].vtbl )
    {
      BaseExtraList_RemoveExtraByType(a1, 0x4Bu);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x44))(a5, 0x1000000);
    }
  }
  else
  {
    v8 = BaseExtraList_GetExtraData(a1, kExtraData_LastFinishedSequence);
    if ( v8 )
    {
      if ( v8[1].vtbl )
        sub_4E2F70((void (__thiscall *)(NiRefObject *, bool))a5, 1);
    }
  }
}
