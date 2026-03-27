0x67BFD0: mov     ecx, [ecx]
0x67BFD2: push    esi
0x67BFD3: mov     esi, [esp+4+arg_0]
0x67BFD7: push    esi
0x67BFD8: call    BSSimpleList_Remove
0x67BFDD: test    esi, esi
0x67BFDF: jz      short loc_67BFF1
0x67BFE1: mov     ecx, esi
0x67BFE3: call    sub_67B5F0
0x67BFE8: push    esi
0x67BFE9: call    FormHeapFree
0x67BFEE: add     esp, 4
0x67BFF1: pop     esi
0x67BFF2: retn    4
