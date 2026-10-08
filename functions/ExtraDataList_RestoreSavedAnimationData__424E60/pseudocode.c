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

  ExtraData = BaseExtraList_GetExtraData(a1, kExtraData_SavedMovementData); /*0x424e66*/
  v7 = ExtraData; /*0x424e6b*/
  if ( ExtraData ) /*0x424e6f*/
  {
    if ( *(_DWORD *)&ExtraData[1].members.type ) /*0x424e75*/
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B33B80, (int)&aExtradatalis_3); /*0x424e8a*/
      sub_45A140(g_TESSaveLoadGame, LOBYTE(v7[1].vtbl)); /*0x424e9a*/
      sub_458ED0( /*0x424eae*/
        g_TESSaveLoadGame,
        a2,
        a3,
        a4,
        (TESObjectREFR *)a5,
        *(AnimSequenceSingle **)(a5 + 0xC),
        *(_DWORD *)&v7[1].members.type);
      MemoryHeap_Free_checked(*(void **)&v7[1].members.type); /*0x424ebc*/
      *(_DWORD *)&v7[1].members.type = 0; /*0x424ec1*/
      g_TESSaveLoadGame->currentVersion = g_TESSaveLoadGame->unknown48[0x29]; /*0x424ed0*/
      NiLeaveCriticalSection_0(&unk_B33B80); /*0x424ed8*/
    }
    if ( v7[1].members.next ) /*0x424edd*/
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B33B80, (int)&aExtradatalis_3); /*0x424eed*/
      sub_45A140(g_TESSaveLoadGame, LOBYTE(v7[1].vtbl)); /*0x424efd*/
      sub_459080(g_TESSaveLoadGame, (void (__thiscall *)(NiRefObject *, bool))a5, (int)v7[1].members.next); /*0x424f0d*/
      MemoryHeap_Free_checked(v7[1].members.next); /*0x424f1b*/
      v7[1].members.next = 0; /*0x424f20*/
      g_TESSaveLoadGame->currentVersion = g_TESSaveLoadGame->unknown48[0x29]; /*0x424f35*/
      NiLeaveCriticalSection_0(&unk_B33B80); /*0x424f38*/
    }
    if ( !v7[2].vtbl ) /*0x424f3d*/
    {
      BaseExtraList_RemoveExtraByType(a1, 0x4Bu); /*0x424f47*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x44))(a5, 0x1000000); /*0x424f58*/
    }
  }
  else
  {
    v8 = BaseExtraList_GetExtraData(a1, kExtraData_LastFinishedSequence); /*0x424f64*/
    if ( v8 ) /*0x424f6b*/
    {
      if ( v8[1].vtbl ) /*0x424f6d*/
        sub_4E2F70((void (__thiscall *)(NiRefObject *, bool))a5, 1); /*0x424f79*/
    }
  }
}
