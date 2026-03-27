0x6C1ED0: push    edi
0x6C1ED1: mov     edi, [esp+4+arg_8]
0x6C1ED5: test    edi, edi
0x6C1ED7: jbe     short loc_6C1EF7
0x6C1ED9: push    ebx
0x6C1EDA: mov     ebx, [esp+8+arg_0]
0x6C1EDE: push    esi
0x6C1EDF: mov     esi, [esp+0Ch+arg_4]
0x6C1EE3: push    esi
0x6C1EE4: push    ebx
0x6C1EE5: call    sub_6BDFC0
0x6C1EEA: add     esp, 8
0x6C1EED: add     esi, 8
0x6C1EF0: sub     edi, 1
0x6C1EF3: jnz     short loc_6C1EE3
0x6C1EF5: pop     esi
0x6C1EF6: pop     ebx
0x6C1EF7: pop     edi
0x6C1EF8: retn
