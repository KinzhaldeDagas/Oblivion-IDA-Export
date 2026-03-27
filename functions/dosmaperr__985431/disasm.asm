0x985431: push    esi
0x985432: call    ___doserrno
0x985437: mov     ecx, [esp+4+arg_0]
0x98543B: push    ecx
0x98543C: mov     [eax], ecx
0x98543E: call    __get_errno_from_oserr
0x985443: pop     ecx
0x985444: mov     esi, eax
0x985446: call    __errno
0x98544B: mov     [eax], esi
0x98544D: pop     esi
0x98544E: retn
