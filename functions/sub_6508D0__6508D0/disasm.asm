0x6508D0: mov     edx, ecx
0x6508D2: mov     ecx, [esp+arg_0]
0x6508D6: test    ecx, ecx
0x6508D8: jz      short loc_650917
0x6508DA: mov     eax, [edx+0E4h]
0x6508E0: test    eax, eax
0x6508E2: jz      short loc_650917
0x6508E4: mov     eax, [eax+8]
0x6508E7: movsx   eax, byte ptr [eax+90h]
0x6508EE: cmp     eax, 1
0x6508F1: jz      short loc_65090A
0x6508F3: cmp     eax, 2
0x6508F6: jle     short loc_6508FD
0x6508F8: cmp     eax, 5
0x6508FB: jle     short loc_65090A
0x6508FD: mov     [esp+arg_0], 5
0x650905: jmp     sub_477EC0
0x65090A: mov     [esp+arg_0], 4
0x650912: jmp     sub_477EC0
0x650917: mov     eax, [edx+108h]
0x65091D: retn    4
