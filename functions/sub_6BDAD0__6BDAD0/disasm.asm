0x6BDAD0: push    edi
0x6BDAD1: mov     edi, [esp+4+arg_8]
0x6BDAD5: test    edi, edi
0x6BDAD7: jbe     short loc_6BDAF7
0x6BDAD9: push    ebx
0x6BDADA: mov     ebx, [esp+8+arg_0]
0x6BDADE: push    esi
0x6BDADF: mov     esi, [esp+0Ch+arg_4]
0x6BDAE3: push    esi
0x6BDAE4: push    ebx
0x6BDAE5: call    sub_6BD530
0x6BDAEA: add     esp, 8
0x6BDAED: add     esi, 24h ; '$'
0x6BDAF0: sub     edi, 1
0x6BDAF3: jnz     short loc_6BDAE3
0x6BDAF5: pop     esi
0x6BDAF6: pop     ebx
0x6BDAF7: pop     edi
0x6BDAF8: retn
