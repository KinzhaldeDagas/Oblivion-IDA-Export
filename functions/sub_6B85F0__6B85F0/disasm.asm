0x6B85F0: mov     eax, [ecx]
0x6B85F2: test    eax, eax
0x6B85F4: jz      short loc_6B860A
0x6B85F6: mov     eax, [eax+4]
0x6B85F9: test    eax, eax
0x6B85FB: mov     [ecx], eax
0x6B85FD: jz      short loc_6B860A
0x6B85FF: cmp     dword ptr [eax], 0
0x6B8602: jz      short loc_6B860A
0x6B8604: mov     eax, 1
0x6B8609: retn
0x6B860A: xor     eax, eax
0x6B860C: retn
