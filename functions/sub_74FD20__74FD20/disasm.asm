0x74FD20: mov     ax, [esp+arg_4]
0x74FD25: test    ax, ax
0x74FD28: jnz     short loc_74FD3A
0x74FD2A: mov     eax, [esp+a2]
0x74FD2E: push    eax; a2
0x74FD2F: add     ecx, 3Ch ; '<'; this
0x74FD32: call    NiSmartPointer_Set??
0x74FD37: retn    8
0x74FD3A: cmp     ax, 1
0x74FD3E: jnz     short locret_74FD4D
0x74FD40: mov     edx, [esp+a2]
0x74FD44: push    edx; a2
0x74FD45: add     ecx, 48h ; 'H'; this
0x74FD48: call    NiSmartPointer_Set??
0x74FD4D: retn    8
