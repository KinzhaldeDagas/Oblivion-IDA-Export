0x6348E0: push    ecx
0x6348E1: mov     eax, [ecx+118h]
0x6348E7: test    eax, eax
0x6348E9: push    esi
0x6348EA: mov     esi, [esp+8+arg_0]
0x6348EE: mov     [esp+8+var_4], 0
0x6348F6: mov     [esi], eax
0x6348F8: jz      short loc_634904
0x6348FA: add     eax, 4
0x6348FD: push    eax; lpAddend
0x6348FE: call    dword ptr ds:0A28078h
0x634904: mov     eax, esi
0x634906: pop     esi
0x634907: pop     ecx
0x634908: retn    4
