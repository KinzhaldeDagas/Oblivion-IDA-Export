0x75FB10: mov     eax, [ecx+4]
0x75FB13: test    eax, eax
0x75FB15: push    esi
0x75FB16: mov     esi, [esp+4+arg_0]
0x75FB1A: mov     [esi], eax
0x75FB1C: jz      short loc_75FB28
0x75FB1E: add     eax, 4
0x75FB21: push    eax; lpAddend
0x75FB22: call    dword ptr ds:0A28078h
0x75FB28: mov     eax, esi
0x75FB2A: pop     esi
0x75FB2B: retn    4
