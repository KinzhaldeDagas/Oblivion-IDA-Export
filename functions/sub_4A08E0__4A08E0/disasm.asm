0x4A08E0: push    esi
0x4A08E1: mov     esi, ds:0B35290h
0x4A08E7: test    esi, esi
0x4A08E9: jz      short loc_4A0911
0x4A08EB: lea     eax, [esi+4]
0x4A08EE: push    eax; lpAddend
0x4A08EF: call    dword ptr ds:0A2807Ch
0x4A08F5: test    eax, eax
0x4A08F7: jnz     short loc_4A0907
0x4A08F9: test    esi, esi
0x4A08FB: jz      short loc_4A0907
0x4A08FD: mov     edx, [esi]
0x4A08FF: mov     eax, [edx]
0x4A0901: push    1
0x4A0903: mov     ecx, esi
0x4A0905: call    eax
0x4A0907: mov     dword ptr ds:0B35290h, 0
0x4A0911: pop     esi
0x4A0912: retn
