0x983E76: push    ebp
0x983E77: mov     ebp, esp
0x983E79: push    esi
0x983E7A: mov     esi, [ebp+MaxCount]
0x983E7D: push    edi
0x983E7E: xor     edi, edi
0x983E80: cmp     esi, edi
0x983E82: jnz     short loc_983E88
0x983E84: xor     eax, eax
0x983E86: jmp     short loc_983EED
0x983E88: cmp     [ebp+Dst], edi
0x983E8B: jnz     short loc_983EA8
0x983E8D: call    __errno
0x983E92: push    16h
0x983E94: pop     esi
0x983E95: mov     [eax], esi
0x983E97: push    edi
0x983E98: push    edi
0x983E99: push    edi
0x983E9A: push    edi
0x983E9B: push    edi
0x983E9C: call    __invalid_parameter
0x983EA1: add     esp, 14h
0x983EA4: mov     eax, esi
0x983EA6: jmp     short loc_983EED
0x983EA8: cmp     [ebp+Src], edi
0x983EAB: jz      short loc_983EC3
0x983EAD: cmp     [ebp+DstSize], esi
0x983EB0: jb      short loc_983EC3
0x983EB2: push    esi; Size
0x983EB3: push    [ebp+Src]; Src
0x983EB6: push    [ebp+Dst]; Dst
0x983EB9: call    _memcpy
0x983EBE: add     esp, 0Ch
0x983EC1: jmp     short loc_983E84
0x983EC3: push    [ebp+DstSize]
0x983EC6: push    edi
0x983EC7: push    [ebp+Dst]
0x983ECA: call    __memset
0x983ECF: add     esp, 0Ch
0x983ED2: cmp     [ebp+Src], edi
0x983ED5: jz      short loc_983E8D
0x983ED7: cmp     [ebp+DstSize], esi
0x983EDA: jnb     short loc_983EEA
0x983EDC: call    __errno
0x983EE1: push    22h ; '"'
0x983EE3: pop     ecx
0x983EE4: mov     [eax], ecx
0x983EE6: mov     esi, ecx
0x983EE8: jmp     short loc_983E97
0x983EEA: push    16h
0x983EEC: pop     eax
0x983EED: pop     edi
0x983EEE: pop     esi
0x983EEF: pop     ebp
0x983EF0: retn
