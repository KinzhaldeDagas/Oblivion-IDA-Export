0x9264D0: push    esi
0x9264D1: mov     esi, ecx
0x9264D3: call    sub_8A7720
0x9264D8: mov     eax, [esp+4+arg_0]
0x9264DC: push    eax
0x9264DD: mov     eax, [esp+8+arg_4]
0x9264E1: lea     ecx, [eax+eax*4]
0x9264E4: lea     ecx, [esi+ecx*4+40h]
0x9264E8: call    sub_9263E0
0x9264ED: mov     eax, [esi+6Ch]
0x9264F0: test    eax, eax
0x9264F2: jz      short loc_926502
0x9264F4: dec     eax
0x9264F5: push    1; lReleaseCount
0x9264F7: lea     ecx, [esi+70h]
0x9264FA: mov     [esi+6Ch], eax
0x9264FD: call    ReleaseSemaphore_0
0x926502: push    esi; lpCriticalSection
0x926503: call    dword ptr ds:0A28074h
0x926509: pop     esi
0x92650A: retn    8
