0x98C1C2: push    0Ch
0x98C1C4: call    __lock
0x98C1C9: pop     ecx
0x98C1CA: mov     dword ptr [ebp-4], 1
0x98C1D1: mov     edi, [esi+6Ch]
0x98C1D4: test    edi, edi
0x98C1D6: jz      short loc_98C1FB
0x98C1D8: push    edi; lpAddend
0x98C1D9: call    ___removelocaleref
0x98C1DE: pop     ecx
0x98C1DF: cmp     edi, off_B31998
0x98C1E5: jz      short loc_98C1FB
0x98C1E7: cmp     edi, offset unk_B318C0
0x98C1ED: jz      short loc_98C1FB
0x98C1EF: cmp     dword ptr [edi], 0
0x98C1F2: jnz     short loc_98C1FB
0x98C1F4: push    edi; Memory
0x98C1F5: call    ___freetlocinfo
0x98C1FA: pop     ecx
0x98C1FB: mov     dword ptr [ebp-4], 0FFFFFFFEh
0x98C202: call    __freefls@4___$LN23_0
