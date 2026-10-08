0x5049F0: mov     eax, [esp+arg_8]
0x5049F4: test    eax, eax
0x5049F6: jz      short loc_504A0B
0x5049F8: mov     ecx, [esp+arg_18]
0x5049FC: push    ecx
0x5049FD: push    0
0x5049FF: push    0
0x504A01: push    eax
0x504A02: call    CmdHelper_IsIdlePlaying; IsIdlePlaying command helper. Looks up target ActorAnimData and returns 1.0 only when ActorAnimData_IsIdleInactive reports false; prints the result in console mode.
0x504A07: add     esp, 10h
0x504A0A: retn
0x504A0B: mov     al, 1
0x504A0D: retn
