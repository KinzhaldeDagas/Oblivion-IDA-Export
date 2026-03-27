0x99EDAF: mov     eax, [esp+arg_0]
0x99EDB3: push    esi
0x99EDB4: xor     esi, esi
0x99EDB6: cmp     eax, esi
0x99EDB8: jnz     short loc_99EDD7
0x99EDBA: call    __errno
0x99EDBF: push    esi
0x99EDC0: push    esi
0x99EDC1: push    esi
0x99EDC2: push    esi
0x99EDC3: push    esi
0x99EDC4: mov     dword ptr [eax], 16h
0x99EDCA: call    __invalid_parameter
0x99EDCF: add     esp, 14h
0x99EDD2: push    16h
0x99EDD4: pop     eax
0x99EDD5: pop     esi
0x99EDD6: retn
0x99EDD7: mov     ecx, dword_B31FEC
0x99EDDD: mov     [eax], ecx
0x99EDDF: xor     eax, eax
0x99EDE1: pop     esi
0x99EDE2: retn
