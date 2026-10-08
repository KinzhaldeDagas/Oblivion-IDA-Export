0x477E50: push    esi; Starts a ready queued idle as an actor action. Processes/promotes/plays through ActorAnimData_ProcessQueuedIdleKF; on success stores the actor ref at AnimIdle +0x28 and invokes high-process action 0x0B with the sequence at +0x10.
0x477E51: mov     esi, ecx
0x477E53: call    ActorAnimData_ProcessQueuedIdleKF; Processes playable queued-IDLE state. If +0xD0 exists it must be phase 1, then cleanup/promotion moves it to current +0xCC. Requires current phase 1, installs its KFModel, resolves the parsed encoded group, plays through ActorAnimData_PlayEncodedGroup using stored slot/type +0x0C, and attaches the returned sequence; failures mark phase 3.
0x477E58: test    al, al
0x477E5A: jz      short loc_477E80
0x477E5C: mov     eax, [esi+0CCh]
0x477E62: mov     ecx, [esp+4+arg_0]; this
0x477E66: mov     [eax+28h], ecx
0x477E69: mov     edx, [esi+0CCh]
0x477E6F: mov     eax, [edx+10h]
0x477E72: push    eax; sequence
0x477E73: push    0Bh; action
0x477E75: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x477E7A: mov     al, 1
0x477E7C: pop     esi
0x477E7D: retn    4
0x477E80: xor     al, al
0x477E82: pop     esi
0x477E83: retn    4
