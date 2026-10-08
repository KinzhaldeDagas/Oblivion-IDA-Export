// Loads an IDLE KF into ActorAnimData without playback. Allocates an AnimIdle for +0xD0, chooses immediate versus queued loading from the native save/load flag 0x800, then calls ActorAnimData_InstallQueuedIdleOnly. The observed caller preloads a furniture-selected TESIdleForm.
char __thiscall ActorAnimData_LoadIdleKFWithoutPlayback(
        AnimSequenceSingle *this,
        UInt32 a2,
        TESObjectREFR *a3,
        UInt32 a4)
{
  IOTask *v5; // eax
  IOTask *KF; // eax
  IOTask *v7; // eax

  if ( (g_TESSaveLoadGame->flags & 0x800) != 0 ) /*0x4762e4*/
  {
    v7 = (IOTask *)FormHeapAlloc(0x2Cu); /*0x47631a*/
    if ( v7 ) /*0x476330*/
    {
      KF = AnimIdle_InitAndLoadKF(v7, a2, a4, 0, a3, 1); /*0x476347*/
      goto LABEL_7; /*0x47634c*/
    }
LABEL_6:
    KF = 0; /*0x47634e*/
    goto LABEL_7; /*0x47634e*/
  }
  v5 = (IOTask *)FormHeapAlloc(0x2Cu); /*0x4762e6*/
  if ( !v5 ) /*0x4762fc*/
    goto LABEL_6; /*0x4762fc*/
  KF = AnimIdle_InitAndLoadKF(v5, a2, a4, 0, a3, 0); /*0x476313*/
LABEL_7:
  *((_DWORD *)this + 0x34) = KF; /*0x476350*/
  return ActorAnimData_InstallQueuedIdleOnly(this); /*0x476365*/
}
