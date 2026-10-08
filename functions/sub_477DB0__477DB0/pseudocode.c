// Queues a TESIdleForm for playable ActorAnimData processing. If requested slot/type is 0 or 5, forces completion/action mode to 3; allocates and initializes an AnimIdle, stores it at queued slot +0xD0, then immediately attempts ActorAnimData_ProcessQueuedIdleKF for cache-hit/synchronous readiness.
char __thiscall ActorAnimData_QueueIdle(ActorAnimData *this, UInt32 a2, TESObjectREFR *a3, UInt32 a4, int a5)
{
  IOTask *v7; // eax
  IOTask *KF; // eax

  if ( !a4 || a4 == 5 ) /*0x477de4*/
    a5 = 3; /*0x477de6*/
  v7 = (IOTask *)FormHeapAlloc(0x2Cu); /*0x477ded*/
  if ( v7 ) /*0x477e03*/
    KF = AnimIdle_InitAndLoadKF(v7, a2, a4, (BSTask *)a5, a3, 0); /*0x477e15*/
  else
    KF = 0; /*0x477e1c*/
  this->unkC8[2] = (UInt32)KF; /*0x477e28*/
  return ActorAnimData_ProcessQueuedIdleKF(this); /*0x477e33*/
}
