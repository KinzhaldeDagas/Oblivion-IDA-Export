0x478DF0: push    ebx
0x478DF1: mov     ebx, [esp+4+arg_0]
0x478DF5: test    ebx, ebx
0x478DF7: push    esi
0x478DF8: mov     esi, ecx
0x478DFA: jz      short loc_478E1F
0x478DFC: cmp     byte ptr [ebx+4], 1Ah
0x478E00: jnz     short loc_478E1F
0x478E02: push    edi
0x478E03: push    0
0x478E05: push    1
0x478E07: lea     edi, [esi+12Ch]
0x478E0D: push    edi
0x478E0E: call    sub_478780
0x478E13: mov     [edi], ebx
0x478E15: add     ebx, 30h ; '0'
0x478E18: mov     [esi+130h], ebx
0x478E1E: pop     edi
0x478E1F: pop     esi
0x478E20: pop     ebx
0x478E21: retn    4
