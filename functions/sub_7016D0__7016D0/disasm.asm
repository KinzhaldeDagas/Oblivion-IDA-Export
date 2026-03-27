0x7016D0: push    ecx
0x7016D1: mov     eax, [ecx+0B0h]
0x7016D7: test    eax, eax
0x7016D9: push    esi
0x7016DA: mov     esi, [esp+8+arg_0]
0x7016DE: mov     [esp+8+var_4], 0
0x7016E6: mov     [esi], eax
0x7016E8: jz      short loc_7016F4
0x7016EA: add     eax, 4
0x7016ED: push    eax; lpAddend
0x7016EE: call    dword ptr ds:0A28078h
0x7016F4: mov     eax, esi
0x7016F6: pop     esi
0x7016F7: pop     ecx
0x7016F8: retn    4
