0x992EC1: mov     eax, [esp+arg_0]
0x992EC5: cmp     eax, 1
0x992EC8: jz      short loc_992EDD
0x992ECA: jle     short locret_992EE8
0x992ECC: cmp     eax, 3
0x992ECF: jg      short locret_992EE8
0x992ED1: call    __errno
0x992ED6: mov     dword ptr [eax], 22h ; '"'
0x992EDC: retn
0x992EDD: call    __errno
0x992EE2: mov     dword ptr [eax], 21h ; '!'
0x992EE8: retn
