0x75A620: push    esi
0x75A621: push    edi
0x75A622: mov     edi, [esp+8+arg_0]
0x75A626: push    edi
0x75A627: mov     esi, ecx
0x75A629: call    sub_752D80
0x75A62E: mov     ecx, [esi+18h]
0x75A631: test    ecx, ecx
0x75A633: jz      short loc_75A63D
0x75A635: mov     eax, [ecx]
0x75A637: mov     edx, [eax+38h]
0x75A63A: push    edi
0x75A63B: call    edx
0x75A63D: pop     edi
0x75A63E: pop     esi
0x75A63F: retn    4
