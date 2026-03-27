0x49B6C0: mov     ecx, ds:0B35230h
0x49B6C6: add     ecx, 0ACh ; '¬'
0x49B6CC: call    sub_477EF0
0x49B6D1: mov     eax, ds:0B35230h
0x49B6D6: test    eax, eax
0x49B6D8: jz      short locret_49B704
0x49B6DA: push    esi
0x49B6DB: mov     esi, eax
0x49B6DD: add     eax, 4
0x49B6E0: push    eax; lpAddend
0x49B6E1: call    dword ptr ds:0A2807Ch
0x49B6E7: test    eax, eax
0x49B6E9: jnz     short loc_49B6F9
0x49B6EB: test    esi, esi
0x49B6ED: jz      short loc_49B6F9
0x49B6EF: mov     eax, [esi]
0x49B6F1: mov     edx, [eax]
0x49B6F3: push    1
0x49B6F5: mov     ecx, esi
0x49B6F7: call    edx
0x49B6F9: mov     dword ptr ds:0B35230h, 0
0x49B703: pop     esi
0x49B704: retn
