0x6C1B90: push    edi
0x6C1B91: mov     edi, [esp+4+arg_8]
0x6C1B95: test    edi, edi
0x6C1B97: jbe     short loc_6C1BB7
0x6C1B99: push    ebx
0x6C1B9A: mov     ebx, [esp+8+arg_0]
0x6C1B9E: push    esi
0x6C1B9F: mov     esi, [esp+0Ch+arg_4]
0x6C1BA3: push    esi
0x6C1BA4: push    ebx
0x6C1BA5: call    sub_6C1A50
0x6C1BAA: add     esp, 8
0x6C1BAD: add     esi, 1Ch
0x6C1BB0: sub     edi, 1
0x6C1BB3: jnz     short loc_6C1BA3
0x6C1BB5: pop     esi
0x6C1BB6: pop     ebx
0x6C1BB7: pop     edi
0x6C1BB8: retn
