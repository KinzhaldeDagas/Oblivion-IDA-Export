0x6BFAF0: push    edi
0x6BFAF1: mov     edi, [esp+4+arg_8]
0x6BFAF5: test    edi, edi
0x6BFAF7: jbe     short loc_6BFB17
0x6BFAF9: push    ebx
0x6BFAFA: mov     ebx, [esp+8+arg_0]
0x6BFAFE: push    esi
0x6BFAFF: mov     esi, [esp+0Ch+arg_4]
0x6BFB03: push    esi
0x6BFB04: push    ebx
0x6BFB05: call    sub_6BD530
0x6BFB0A: add     esp, 8
0x6BFB0D: add     esi, 14h
0x6BFB10: sub     edi, 1
0x6BFB13: jnz     short loc_6BFB03
0x6BFB15: pop     esi
0x6BFB16: pop     ebx
0x6BFB17: pop     edi
0x6BFB18: retn
