BSExtraData *__thiscall ExtraDataList_RestoreSavedHavokData(ExtraDataList *this, _DWORD *a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi

  result = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData); /*0x424f96*/
  v4 = result; /*0x424f9b*/
  if ( result ) /*0x424f9f*/
  {
    if ( result[2].vtbl ) /*0x424fa5*/
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B33B80, (int)&aExtradatalis_4); /*0x424fba*/
      sub_45A140(g_TESSaveLoadGame, LOBYTE(v4[1].vtbl)); /*0x424fca*/
      sub_459370(g_TESSaveLoadGame, a2, (int)v4[2].vtbl); /*0x424fda*/
      MemoryHeap_Free_checked(v4[2].vtbl); /*0x424fe8*/
      v4[2].vtbl = 0; /*0x424fed*/
      g_TESSaveLoadGame->currentVersion = g_TESSaveLoadGame->unknown48[0x29]; /*0x424ffc*/
      result = (BSExtraData *)NiLeaveCriticalSection_0(&unk_B33B80); /*0x425004*/
    }
    if ( !*(_DWORD *)&v4[1].members.type && !v4[1].members.next ) /*0x42500f*/
    {
      BaseExtraList_RemoveExtraByType(this, 0x4Bu); /*0x425019*/
      return (BSExtraData *)(*(int (__thiscall **)(_DWORD *, int))(*a2 + 0x44))(a2, 0x1000000); /*0x42502a*/
    }
  }
  return result; /*0x42502d*/
}
