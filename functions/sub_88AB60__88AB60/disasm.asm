0x88AB60: push    esi
0x88AB61: mov     esi, [esp+4+arg_0]
0x88AB65: test    esi, esi
0x88AB67: jz      short loc_88ABA9
0x88AB69: mov     eax, [esi]
0x88AB6B: mov     edx, [eax+4]
0x88AB6E: mov     ecx, esi
0x88AB70: call    edx
0x88AB72: test    eax, eax
0x88AB74: jz      short loc_88AB84
0x88AB76: cmp     eax, offset dword_BA7A20
0x88AB7B: jz      short loc_88ABA0
0x88AB7D: mov     eax, [eax+4]
0x88AB80: test    eax, eax
0x88AB82: jnz     short loc_88AB76
0x88AB84: xor     al, al
0x88AB86: neg     al
0x88AB88: sbb     eax, eax
0x88AB8A: and     eax, esi
0x88AB8C: mov     ecx, eax
0x88AB8E: jz      short loc_88ABA9
0x88AB90: mov     eax, [esp+4+arg_4]
0x88AB94: cmp     dword ptr [eax+0Ch], 0
0x88AB98: pop     esi
0x88AB99: jnz     short loc_88ABA4
0x88AB9B: jmp     loc_88F160
0x88ABA0: mov     al, 1
0x88ABA2: jmp     short loc_88AB86
0x88ABA4: jmp     loc_88F0E0
0x88ABA9: pop     esi
0x88ABAA: retn
