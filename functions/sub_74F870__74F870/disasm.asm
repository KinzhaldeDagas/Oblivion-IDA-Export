0x74F870: mov     eax, ds:0B283E0h
0x74F875: push    esi
0x74F876: mov     esi, [esp+4+arg_0]
0x74F87A: push    eax
0x74F87B: push    esi
0x74F87C: call    j_CRT_strcmp
0x74F881: add     esp, 8
0x74F884: test    eax, eax
0x74F886: jnz     short loc_74F88F
0x74F888: xor     ax, ax
0x74F88B: pop     esi
0x74F88C: retn    4
0x74F88F: mov     ecx, ds:0B283E4h
0x74F895: push    ecx
0x74F896: push    esi
0x74F897: call    j_CRT_strcmp
0x74F89C: add     esp, 8
0x74F89F: test    eax, eax
0x74F8A1: mov     ax, 1
0x74F8A5: jz      short loc_74F8AD
0x74F8A7: mov     ax, ds:0A7A160h
0x74F8AD: pop     esi
0x74F8AE: retn    4
