0x62A010: push    ebp
0x62A011: push    esi
0x62A012: mov     esi, [esp+8+arg_0]
0x62A016: mov     ebp, ecx
0x62A018: mov     ecx, esi; this
0x62A01A: call    Actor__GetDeadState; Exact Actor accessor: returns Actor.members.DeadState at absolute Actor+0xB0. The social-conversation scans reject value 3. This corrects a false Microsoft Concurrency symbol collision.
0x62A01F: cmp     eax, 5
0x62A022: jz      loc_62A0CF
0x62A028: mov     eax, [esi]
0x62A02A: mov     edx, [eax+1A0h]
0x62A030: mov     ecx, esi
0x62A032: call    edx
0x62A034: test    al, al
0x62A036: jnz     loc_62A0CF
0x62A03C: mov     ecx, esi; this
0x62A03E: call    Actor__GetDeadState; Exact Actor accessor: returns Actor.members.DeadState at absolute Actor+0xB0. The social-conversation scans reject value 3. This corrects a false Microsoft Concurrency symbol collision.
0x62A043: cmp     eax, 3
0x62A046: jz      loc_62A0CF
0x62A04C: mov     eax, [esi]
0x62A04E: mov     edx, [eax+19Ch]
0x62A054: mov     ecx, esi
0x62A056: call    edx
0x62A058: test    al, al
0x62A05A: jnz     short loc_62A0CF
0x62A05C: mov     ecx, esi; this
0x62A05E: call    Actor__GetCurrentPackage; Returns Actor.process->GetCurrentPackage when a process exists. Random-conversation setup uses it to share the newly created DialoguePackage with the partner actor.
0x62A063: test    eax, eax
0x62A065: jz      short loc_62A074
0x62A067: mov     ecx, esi; this
0x62A069: call    Actor__GetCurrentPackage; Returns Actor.process->GetCurrentPackage when a process exists. Random-conversation setup uses it to share the newly created DialoguePackage with the partner actor.
0x62A06E: test    byte ptr [eax+1Fh], 1
0x62A072: jnz     short loc_62A0CF
0x62A074: mov     eax, [esi]
0x62A076: mov     edx, [eax+164h]
0x62A07C: push    ebx
0x62A07D: mov     ecx, esi
0x62A07F: call    edx
0x62A081: mov     ebx, eax
0x62A083: test    ebx, ebx
0x62A085: jz      short loc_62A0CE
0x62A087: mov     ecx, ebx
0x62A089: call    ActorAnimData_IsIdleInactive; Idle inactive predicate used by IsIdlePlaying. False while a queued/current idle remains active or pending; true when no current idle remains or the current idle reached terminal state 3.
0x62A08E: test    al, al
0x62A090: jz      short loc_62A0CE
0x62A092: mov     eax, [ebp+0]
0x62A095: mov     edx, [eax+0CCh]
0x62A09B: push    edi
0x62A09C: mov     ecx, ebp
0x62A09E: call    edx
0x62A0A0: mov     ecx, ds:0B362C0h
0x62A0A6: push    eax
0x62A0A7: push    esi
0x62A0A8: call    TESIdleForm_FindIdleForActor; Idle root lookup for actor model path; rejects final candidate when ANAM high bit is set but model path is not .kf.
0x62A0AD: mov     edi, eax
0x62A0AF: test    edi, edi
0x62A0B1: jz      short loc_62A0CD
0x62A0B3: push    2; int
0x62A0B5: mov     ecx, edi
0x62A0B7: call    TESIdleForm_GetQueuedAnimType; Returns TESIdleForm ANAM byte at +0x38 masked with 0x7F. This low-seven-bit value is passed as the queued idle slot/type; the high bit is handled separately by native idle selection.
0x62A0BC: push    eax; int
0x62A0BD: push    esi; int
0x62A0BE: push    edi; int
0x62A0BF: mov     ecx, ebx; this
0x62A0C1: call    ActorAnimData_QueueIdle; Queues a TESIdleForm for playable ActorAnimData processing. If requested slot/type is 0 or 5, forces completion/action mode to 3; allocates and initializes an AnimIdle, stores it at queued slot +0xD0, then immediately attempts ActorAnimData_ProcessQueuedIdleKF for cache-hit/synchronous readiness.
0x62A0C6: mov     byte ptr [ebp+0C8h], 0
0x62A0CD: pop     edi
0x62A0CE: pop     ebx
0x62A0CF: pop     esi
0x62A0D0: pop     ebp
0x62A0D1: retn    4
