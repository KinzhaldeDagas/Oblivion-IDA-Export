0x7203F0: cmp     byte ptr ds:0B256CCh, 0
0x7203F7: push    esi
0x7203F8: mov     esi, ecx
0x7203FA: jz      short loc_720444
0x7203FC: push    offset stru_B3FC00; lpCriticalSection
0x720401: call    dword ptr ds:0A2806Ch
0x720407: call    dword ptr ds:0A2808Ch
0x72040D: add     dword ptr ds:0B3FC7Ch, 1
0x720414: mov     ds:0B3FC78h, eax
0x720419: mov     eax, [esi]
0x72041B: mov     edx, [eax+5Ch]
0x72041E: mov     ecx, esi
0x720420: call    edx
0x720422: sub     dword ptr ds:0B3FC7Ch, 1
0x720429: jnz     short loc_720435
0x72042B: mov     dword ptr ds:0B3FC78h, 0
0x720435: pop     esi
0x720436: mov     [esp+arg_0], offset stru_B3FC00
0x72043E: jmp     dword ptr ds:0A28074h
0x720444: pop     esi
0x720445: retn    4
