0x992839: cmp     byte_BAA644, 0
0x992840: push    esi
0x992841: jz      short loc_992865
0x992843: push    dword_BAA640
0x992849: call    __decode_pointer
0x99284E: mov     esi, eax
0x992850: test    esi, esi
0x992852: pop     ecx
0x992853: jz      short loc_992865
0x992855: push    esi
0x992856: call    unknown_libname_193
0x99285B: test    eax, eax
0x99285D: pop     ecx
0x99285E: jz      short loc_992865
0x992860: push    edi
0x992861: call    esi
0x992863: jmp     short loc_992867
0x992865: xor     eax, eax
0x992867: pop     esi
0x992868: pop     edi
0x992869: retn    4
