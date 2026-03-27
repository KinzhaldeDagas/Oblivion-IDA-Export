0x99CCE2: mov     ecx, [esp+Mode]
0x99CCE6: push    esi
0x99CCE7: xor     esi, esi
0x99CCE9: cmp     ecx, esi
0x99CCEB: jl      short loc_99CD0B
0x99CCED: cmp     ecx, 2
0x99CCF0: jle     short loc_99CCFE
0x99CCF2: cmp     ecx, 3
0x99CCF5: jnz     short loc_99CD0B
0x99CCF7: mov     eax, dword_BA9E00
0x99CCFC: pop     esi
0x99CCFD: retn
0x99CCFE: mov     eax, dword_BA9E00
0x99CD03: mov     dword_BA9E00, ecx
0x99CD09: pop     esi
0x99CD0A: retn
0x99CD0B: call    __errno
0x99CD10: push    esi
0x99CD11: push    esi
0x99CD12: push    esi
0x99CD13: push    esi
0x99CD14: push    esi
0x99CD15: mov     dword ptr [eax], 16h
0x99CD1B: call    __invalid_parameter
0x99CD20: add     esp, 14h
0x99CD23: or      eax, 0FFFFFFFFh
0x99CD26: pop     esi
0x99CD27: retn
