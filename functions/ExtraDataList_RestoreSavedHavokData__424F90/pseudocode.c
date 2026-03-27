BSExtraData *__thiscall ExtraDataList_RestoreSavedHavokData(ExtraDataList *this, _DWORD *a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi

  result = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData);
  v4 = result;
  if ( result )
  {
    if ( result[2].vtbl )
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B33B80, (int)&aExtradatalis_4);
      sub_45A140(SaveLoad_CurrentSavegame, LOBYTE(v4[1].vtbl));
      sub_459370(SaveLoad_CurrentSavegame, a2, (int)v4[2].vtbl);
      MemoryHeap_Free_checked(v4[2].vtbl);
      v4[2].vtbl = 0;
      LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) = BYTE1(SaveLoad_CurrentSavegame[1].unk01C[1]);
      result = (BSExtraData *)NiLeaveCriticalSection_0(&stru_B33B80);
    }
    if ( !*(_DWORD *)&v4[1].members.type && !v4[1].members.next )
    {
      BaseExtraList_RemoveExtraByType(this, 0x4Bu);
      return (BSExtraData *)(*(int (__thiscall **)(_DWORD *, int))(*a2 + 0x44))(a2, 0x1000000);
    }
  }
  return result;
}
