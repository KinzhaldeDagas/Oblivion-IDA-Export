// positive sp value has been detected, the output may be wrong!
char __userpurge sub_4B6925@<al>(
        ActorAnimData *a1@<eax>,
        int a2@<edx>,
        char a3@<ch>,
        int a4@<ebp>,
        TESObjectREFR *a5@<edi>,
        int a6@<esi>,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  ExtraLock *LockExtraOnLinkedDoorChain; // eax
  char v13; // [esp-24h] [ebp-24h]
  char v14; // [esp-20h] [ebp-20h]

  *(_BYTE *)(a4 + 0x6A0B74C0) = __ROL1__(*(_BYTE *)(a4 + 0x6A0B74C0), 1); /*0x4b6925*/
  *(_BYTE *)(a2 + 1) += a3; /*0x4b692b*/
  ActorAnimData_CleanupOrPromoteQueuedIdles(a1, v13, v14); /*0x4b6930*/
  sub_520F00((int)MEMORY[0xB35EC8]); /*0x4b693c*/
  sub_520F40(1); /*0x4b6943*/
  sub_520F20(1); /*0x4b694a*/
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a6 + 0x58) + 0x48))(*(_DWORD *)(a6 + 0x58), a6); /*0x4b695b*/
  sub_520F00(0); /*0x4b695f*/
  sub_520F40(0); /*0x4b6966*/
  sub_520F20(0xFFFFFFFF); /*0x4b696d*/
  LockExtraOnLinkedDoorChain = TESObjectREFR_FindLockExtraOnLinkedDoorChain(a5); /*0x4b6977*/
  if ( LockExtraOnLinkedDoorChain ) /*0x4b697e*/
  {
    ExtraLock_ClearLockedFlag(LockExtraOnLinkedDoorChain); /*0x4b6982*/
    TESObjectREFR_MarkLockDataAsModified(a5); /*0x4b6989*/
  }
  return 0; /*0x4b6997*/
}
