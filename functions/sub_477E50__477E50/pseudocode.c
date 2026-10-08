// Starts a ready queued idle as an actor action. Processes/promotes/plays through ActorAnimData_ProcessQueuedIdleKF; on success stores the actor ref at AnimIdle +0x28 and invokes high-process action 0x0B with the sequence at +0x10.
char __thiscall ActorAnimData_StartQueuedIdleAction(ActorAnimData *this, PlayerCharacter *a2)
{
  if ( !ActorAnimData_ProcessQueuedIdleKF(this) ) /*0x477e53*/
    return 0; /*0x477e80*/
  *(_DWORD *)(this->unkC8[1] + 0x28) = a2; /*0x477e66*/
  Actor_SetCurrentActionWithBowVisualCleanup(a2, 0xB, *(_DWORD *)(this->unkC8[1] + 0x10)); /*0x477e75*/
  return 1; /*0x477e7c*/
}
