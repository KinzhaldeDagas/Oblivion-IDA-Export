0x795D20: push    esi
0x795D21: mov     esi, [esp+4+arg_0]
0x795D25: push    edi
0x795D26: mov     edi, [esp+8+arg_4]
0x795D2A: cmp     esi, edi
0x795D2C: jz      short loc_795D43
0x795D2E: push    ebx
0x795D2F: mov     ebx, [esp+0Ch+arg_8]
0x795D33: push    ebx
0x795D34: mov     ecx, esi
0x795D36: call    sub_795510
0x795D3B: add     esi, 10h
0x795D3E: cmp     esi, edi
0x795D40: jnz     short loc_795D33
0x795D42: pop     ebx
0x795D43: pop     edi
0x795D44: pop     esi
0x795D45: retn
