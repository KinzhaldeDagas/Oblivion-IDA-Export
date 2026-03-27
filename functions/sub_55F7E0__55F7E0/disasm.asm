0x55F7E0: mov     eax, ds:0B39E04h
0x55F7E5: test    eax, eax
0x55F7E7: jnz     short locret_55F7FD
0x55F7E9: cmp     [esp+arg_0], al
0x55F7ED: jz      short locret_55F7FD
0x55F7EF: push    eax
0x55F7F0: call    sub_55F750
0x55F7F5: mov     eax, ds:0B39E04h
0x55F7FA: add     esp, 4
0x55F7FD: retn
