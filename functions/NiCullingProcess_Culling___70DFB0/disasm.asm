0x70DFB0: push    ecx
0x70DFB1: push    ebp
0x70DFB2: mov     ebp, ecx
0x70DFB4: mov     eax, [ebp+8Ch]
0x70DFBA: test    eax, eax
0x70DFBC: mov     [esp+8+var_4], eax
0x70DFC0: jnz     short loc_70DFD3
0x70DFC2: mov     ecx, [esp+8+a2]
0x70DFC6: mov     eax, [ecx]
0x70DFC8: mov     edx, [eax+7Ch]
0x70DFCB: push    ebp
0x70DFCC: call    edx
0x70DFCE: pop     ebp
0x70DFCF: pop     ecx
0x70DFD0: retn    4
0x70DFD3: push    ebx
0x70DFD4: push    esi
0x70DFD5: push    edi
0x70DFD6: xor     edi, edi
0x70DFD8: lea     ebx, [ebp+2Ch]
0x70DFDB: jmp     short loc_70DFE0
0x70DFDD: align 10h
0x70DFE0: mov     esi, 1
0x70DFE5: mov     ecx, edi
0x70DFE7: shl     esi, cl
0x70DFE9: test    [ebp+8Ch], esi
0x70DFEF: jz      short loc_70E010
0x70DFF1: mov     ecx, [esp+14h+a2]
0x70DFF5: push    ebx; a2
0x70DFF6: add     ecx, 20h ; ' '; this
0x70DFF9: call    sub_47DA70
0x70DFFE: cmp     eax, 2
0x70E001: jz      short loc_70E01B
0x70E003: cmp     eax, 1
0x70E006: jnz     short loc_70E010
0x70E008: not     esi
0x70E00A: and     [ebp+8Ch], esi
0x70E010: add     edi, 1
0x70E013: add     ebx, 10h
0x70E016: cmp     edi, 6
0x70E019: jb      short loc_70DFE0
0x70E01B: cmp     edi, 6
0x70E01E: pop     edi
0x70E01F: pop     esi
0x70E020: pop     ebx
0x70E021: jnz     short loc_70E02F
0x70E023: mov     ecx, [esp+8+a2]
0x70E027: mov     eax, [ecx]
0x70E029: mov     edx, [eax+7Ch]
0x70E02C: push    ebp
0x70E02D: call    edx
0x70E02F: mov     eax, [esp+8+var_4]
0x70E033: mov     [ebp+8Ch], eax
0x70E039: pop     ebp
0x70E03A: pop     ecx
0x70E03B: retn    4
