0x7362A0: mov     eax, [esp+arg_0]
0x7362A4: push    offset a_dds; ".dds"
0x7362A9: push    eax
0x7362AA: call    j_CRT_strcmp
0x7362AF: add     esp, 8
0x7362B2: test    eax, eax
0x7362B4: setz    al
0x7362B7: retn    4
