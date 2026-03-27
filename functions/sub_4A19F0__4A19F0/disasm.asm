0x4A19F0: mov     eax, [esp+arg_0]
0x4A19F4: mov     eax, [eax]
0x4A19F6: test    eax, eax
0x4A19F8: push    esi
0x4A19F9: mov     esi, ecx
0x4A19FB: mov     [esi], eax
0x4A19FD: jz      short loc_4A1A09
0x4A19FF: add     eax, 4
0x4A1A02: push    eax; lpAddend
0x4A1A03: call    dword ptr ds:0A28078h
0x4A1A09: mov     eax, esi
0x4A1A0B: pop     esi
0x4A1A0C: retn    4
