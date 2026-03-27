0x75E2E0: push    offset stru_B41D80; lpCriticalSection
0x75E2E5: call    dword ptr ds:0A2806Ch
0x75E2EB: call    dword ptr ds:0A2808Ch
0x75E2F1: add     dword ptr ds:0B41DFCh, 1
0x75E2F8: cmp     dword ptr ds:0B28C64h, 0
0x75E2FF: mov     ds:0B41DF8h, eax
0x75E304: jnz     short loc_75E325
0x75E306: mov     eax, ds:0B28C68h
0x75E30B: push    eax
0x75E30C: mov     ecx, offset dword_B28C5C
0x75E311: call    sub_75E240
0x75E316: mov     ecx, ds:0B28C68h
0x75E31C: lea     edx, [ecx+ecx]
0x75E31F: mov     ds:0B28C68h, edx
0x75E325: mov     ecx, ds:0B28C64h
0x75E32B: mov     eax, ds:0B28C5Ch
0x75E330: sub     ecx, 1
0x75E333: push    esi
0x75E334: mov     esi, [eax]
0x75E336: mov     ds:0B28C64h, ecx
0x75E33C: mov     ecx, [eax+ecx*4]
0x75E33F: mov     [eax], ecx
0x75E341: sub     dword ptr ds:0B41DFCh, 1
0x75E348: jnz     short loc_75E354
0x75E34A: mov     dword ptr ds:0B41DF8h, 0
0x75E354: push    offset stru_B41D80; lpCriticalSection
0x75E359: call    dword ptr ds:0A28074h
0x75E35F: mov     eax, esi
0x75E361: pop     esi
0x75E362: retn
