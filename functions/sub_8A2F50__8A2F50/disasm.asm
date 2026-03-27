0x8A2F50: push    esi
0x8A2F51: mov     esi, ecx
0x8A2F53: test    esi, esi
0x8A2F55: jz      short loc_8A2F78
0x8A2F57: push    edi
0x8A2F58: mov     edi, [esi+8]
0x8A2F5B: test    edi, edi
0x8A2F5D: jz      short loc_8A2F77
0x8A2F5F: call    sub_89F570
0x8A2F64: mov     eax, [esp+8+arg_0]
0x8A2F68: push    eax
0x8A2F69: mov     ecx, edi
0x8A2F6B: call    sub_8A9DE0
0x8A2F70: mov     ecx, esi
0x8A2F72: call    sub_89F570
0x8A2F77: pop     edi
0x8A2F78: pop     esi
0x8A2F79: retn    4
