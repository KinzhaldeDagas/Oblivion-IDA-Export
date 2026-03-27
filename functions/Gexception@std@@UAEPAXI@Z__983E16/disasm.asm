0x983E16: push    esi
0x983E17: mov     esi, ecx
0x983E19: call    ??1exception@std@@UAE@XZ
0x983E1E: test    byte ptr [esp+4+arg_0], 1
0x983E23: jz      short loc_983E2C
0x983E25: push    esi
0x983E26: call    FormHeapFree
0x983E2B: pop     ecx
0x983E2C: mov     eax, esi
0x983E2E: pop     esi
0x983E2F: retn    4
