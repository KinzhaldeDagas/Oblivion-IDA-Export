0x99EDE3: mov     eax, [esp+arg_0]
0x99EDE7: push    esi
0x99EDE8: xor     esi, esi
0x99EDEA: cmp     eax, esi
0x99EDEC: jnz     short loc_99EE0B
0x99EDEE: call    __errno
0x99EDF3: push    esi
0x99EDF4: push    esi
0x99EDF5: push    esi
0x99EDF6: push    esi
0x99EDF7: push    esi
0x99EDF8: mov     dword ptr [eax], 16h
0x99EDFE: call    __invalid_parameter
0x99EE03: add     esp, 14h
0x99EE06: push    16h
0x99EE08: pop     eax
0x99EE09: pop     esi
0x99EE0A: retn
0x99EE0B: mov     ecx, dword_B31FF0
0x99EE11: mov     [eax], ecx
0x99EE13: xor     eax, eax
0x99EE15: pop     esi
0x99EE16: retn
