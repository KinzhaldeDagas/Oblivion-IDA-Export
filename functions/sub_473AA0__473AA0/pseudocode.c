// Whole ActorAnimData sequence reset. Clears all active slots, deactivates current/controller sequences, restores current and queued key sentinels, resets root motion and idle ownership, clears controlled-block links, then runs the controller-sequence reset/rebind phase. Not safe as scoped replacement cleanup.
void __thiscall ActorAnimData_ResetAllSequences(_DWORD *this, int a2)
{
  int v3; // eax
  BSAnimGroupSequence *v4; // eax
  bool v5; // zf
  NiControllerManager *v6; // ecx

  ActorAnimData_ClearSlot((ActorAnimData *)this, 4, 0.0); /*0x473aab*/
  ActorAnimData_ClearSlot((ActorAnimData *)this, 0, 0.0); /*0x473aba*/
  ActorAnimData_ClearSlot((ActorAnimData *)this, 1, 0.0); /*0x473ac9*/
  ActorAnimData_ClearSlot((ActorAnimData *)this, 2, 0.0); /*0x473ad8*/
  if ( *(this + 0x26) ) /*0x473add*/
  {
    v3 = *(this + 0x2B); /*0x473ae7*/
    if ( v3 ) /*0x473aef*/
    {
      if ( *(_DWORD *)(v3 + 0x44) ) /*0x473af1*/
      {
        v4 = *(BSAnimGroupSequence **)(v3 + 0x58); /*0x473af7*/
        if ( v4 ) /*0x473afc*/
          BSAnimGroupSequence_Deactivate(v4, 0.0); /*0x473b05*/
        if ( *(_DWORD *)(*(this + 0x2B) + 0x44) == 5 ) /*0x473b14*/
          NiControllerManager_DeactivateTransitionSources((_DWORD *)*(this + 0x26), 0.0); /*0x473b22*/
        NiControllerSequence_Deactivate((NiControllerSequence *)*(this + 0x2B), 0.0, 0); /*0x473b35*/
      }
    }
  }
  *(this + 0x2B) = 0; /*0x473b3f*/
  *((_WORD *)this + 0x21) = 0xFF; /*0x473b49*/
  *((_WORD *)this + 0x3B) = 0xFF; /*0x473b4d*/
  *(this + 0x15) = 0xFFFFFFFF; /*0x473b54*/
  ActorAnimData_ResetRootMotion((int)this); /*0x473b5b*/
  if ( *(this + 0x33) ) /*0x473b60*/
    AnimIdle_DestroyAndRelease(this, (char **)this + 0x33); /*0x473b72*/
  v5 = *(this + 0x34) == 0; /*0x473b77*/
  *(this + 0x33) = 0; /*0x473b7e*/
  if ( !v5 ) /*0x473b8a*/
    AnimIdle_DestroyAndRelease(this, (char **)this + 0x34); /*0x473b8f*/
  *(this + 0x34) = 0; /*0x473b9e*/
  *(this + 0x2C) = 0; /*0x473ba4*/
  ActorAnimData_ClearSlot((ActorAnimData *)this, 4, 0.0); /*0x473bae*/
  v6 = (NiControllerManager *)*(this + 0x26); /*0x473bb3*/
  if ( v6 ) /*0x473bbc*/
    NiControllerManager_DeactivateAllSequences(v6, 0.0); /*0x473bc4*/
  sub_473120((_DWORD *)*(this + 1)); /*0x473bcd*/
  sub_4730B0(this); /*0x473bd7*/
  ActorAnimData_ResetControllerSequences((ActorAnimData *)this, 1); /*0x473be0*/
}
