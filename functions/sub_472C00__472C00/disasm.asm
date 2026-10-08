0x472C00: push    esi; Attaches a played BSAnimGroupSequence to a ready AnimIdle. Requires phase +0x00 == 1, stores the sequence at +0x10, advances phase to 2 (active), and for dispatch mode +0x04 == 3 starts actor high-process action 0x0B.
0x472C01: mov     esi, ecx
0x472C03: cmp     dword ptr [esi], 1
0x472C06: jz      short loc_472C0E
0x472C08: xor     al, al
0x472C0A: pop     esi
0x472C0B: retn    4
0x472C0E: mov     eax, [esp+4+a2]
0x472C12: push    edi
0x472C13: lea     edi, [esi+10h]
0x472C16: push    eax; a2
0x472C17: mov     ecx, edi; this
0x472C19: call    NiSmartPointer_Set??
0x472C1E: cmp     dword ptr [esi+4], 3
0x472C22: mov     dword ptr [esi], 2
0x472C28: jnz     short loc_472C37
0x472C2A: mov     ecx, [edi]
0x472C2C: push    ecx; sequence
0x472C2D: mov     ecx, [esi+28h]; this
0x472C30: push    0Bh; action
0x472C32: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x472C37: pop     edi
0x472C38: mov     al, 1
0x472C3A: pop     esi
0x472C3B: retn    4
