0x6EBF20: push    offset stru_B3EC80; lpCriticalSection
0x6EBF25: call    dword ptr ds:0A2806Ch
0x6EBF2B: call    dword ptr ds:0A2808Ch
0x6EBF31: add     dword ptr ds:0B3ECFCh, 1
0x6EBF38: cmp     dword ptr ds:0B24FF0h, 0
0x6EBF3F: mov     ds:0B3ECF8h, eax
0x6EBF44: jnz     short loc_6EBF65
0x6EBF46: mov     eax, ds:0B24FF4h
0x6EBF4B: push    eax
0x6EBF4C: mov     ecx, offset dword_B24FE8
0x6EBF51: call    sub_6EBE50
0x6EBF56: mov     ecx, ds:0B24FF4h
0x6EBF5C: lea     edx, [ecx+ecx]
0x6EBF5F: mov     ds:0B24FF4h, edx
0x6EBF65: mov     ecx, ds:0B24FF0h
0x6EBF6B: mov     eax, ds:0B24FE8h
0x6EBF70: sub     ecx, 1
0x6EBF73: push    esi
0x6EBF74: mov     esi, [eax]
0x6EBF76: mov     ds:0B24FF0h, ecx
0x6EBF7C: mov     ecx, [eax+ecx*4]
0x6EBF7F: mov     [eax], ecx
0x6EBF81: sub     dword ptr ds:0B3ECFCh, 1
0x6EBF88: jnz     short loc_6EBF94
0x6EBF8A: mov     dword ptr ds:0B3ECF8h, 0
0x6EBF94: push    offset stru_B3EC80; lpCriticalSection
0x6EBF99: call    dword ptr ds:0A28074h
0x6EBF9F: mov     eax, esi
0x6EBFA1: pop     esi
0x6EBFA2: retn
