0x942F20: mov     eax, [esp+arg_4]
0x942F24: test    eax, eax
0x942F26: push    esi
0x942F27: push    edi
0x942F28: mov     edi, [esp+8+arg_0]
0x942F2C: mov     esi, ecx
0x942F2E: jnz     short loc_942F37
0x942F30: mov     ecx, edi
0x942F32: call    sub_90D1E0
0x942F37: push    edi
0x942F38: push    eax
0x942F39: lea     ecx, [esi+8]
0x942F3C: call    sub_9429D0
0x942F41: pop     edi
0x942F42: pop     esi
0x942F43: retn    8
