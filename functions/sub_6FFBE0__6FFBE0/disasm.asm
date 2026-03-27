0x6FFBE0: push    esi
0x6FFBE1: push    offset stru_B3F600; lpCriticalSection
0x6FFBE6: mov     esi, ecx
0x6FFBE8: call    dword ptr ds:0A2806Ch
0x6FFBEE: call    dword ptr ds:0A2808Ch
0x6FFBF4: add     dword ptr ds:0B3F67Ch, 1
0x6FFBFB: mov     ds:0B3F678h, eax
0x6FFC00: mov     eax, [esp+4+arg_0]
0x6FFC04: cmp     ax, [esi+14h]
0x6FFC08: jnb     short loc_6FFC36
0x6FFC0A: push    eax
0x6FFC0B: mov     ecx, esi
0x6FFC0D: call    sub_6FF480
0x6FFC12: sub     dword ptr ds:0B3F67Ch, 1
0x6FFC19: jnz     short loc_6FFC25
0x6FFC1B: mov     dword ptr ds:0B3F678h, 0
0x6FFC25: push    offset stru_B3F600; lpCriticalSection
0x6FFC2A: call    dword ptr ds:0A28074h
0x6FFC30: mov     al, 1
0x6FFC32: pop     esi
0x6FFC33: retn    4
0x6FFC36: sub     dword ptr ds:0B3F67Ch, 1
0x6FFC3D: jnz     short loc_6FFC49
0x6FFC3F: mov     dword ptr ds:0B3F678h, 0
0x6FFC49: push    offset stru_B3F600; lpCriticalSection
0x6FFC4E: call    dword ptr ds:0A28074h
0x6FFC54: xor     al, al
0x6FFC56: pop     esi
0x6FFC57: retn    4
