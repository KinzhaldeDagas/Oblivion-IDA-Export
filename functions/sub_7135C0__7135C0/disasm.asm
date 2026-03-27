0x7135C0: push    esi
0x7135C1: push    offset stru_B3FC00; lpCriticalSection
0x7135C6: mov     esi, ecx
0x7135C8: call    dword ptr ds:0A2806Ch
0x7135CE: call    dword ptr ds:0A2808Ch
0x7135D4: add     dword ptr ds:0B3FC7Ch, 1
0x7135DB: lea     ecx, [esi+1ECh]
0x7135E1: mov     ds:0B3FC78h, eax
0x7135E6: call    sub_8BCC50
0x7135EB: xor     eax, eax
0x7135ED: mov     [esi+22Ch], eax
0x7135F3: mov     [esi+23Ch], eax
0x7135F9: mov     [esi+230h], eax
0x7135FF: mov     [esi+240h], eax
0x713605: sub     dword ptr ds:0B3FC7Ch, 1
0x71360C: pop     esi
0x71360D: jnz     short loc_713614
0x71360F: mov     ds:0B3FC78h, eax
0x713614: push    offset stru_B3FC00; lpCriticalSection
0x713619: call    dword ptr ds:0A28074h
0x71361F: retn
