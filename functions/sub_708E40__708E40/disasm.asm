0x708E40: push    ebx
0x708E41: mov     ebx, ecx
0x708E43: mov     eax, [ebx+0C0h]
0x708E49: test    eax, eax
0x708E4B: push    edi
0x708E4C: mov     edi, [esp+8+arg_0]
0x708E50: jz      short loc_708E68
0x708E52: cmp     edi, [eax+8]
0x708E55: lea     ecx, [eax+8]
0x708E58: mov     edx, eax
0x708E5A: mov     eax, [eax]
0x708E5C: jz      short loc_708E64
0x708E5E: test    eax, eax
0x708E60: jnz     short loc_708E52
0x708E62: jmp     short loc_708E68
0x708E64: test    edx, edx
0x708E66: jnz     short loc_708EAA
0x708E68: mov     eax, [ebx+0BCh]
0x708E6E: mov     edx, [eax+4]
0x708E71: push    esi
0x708E72: lea     esi, [ebx+0BCh]
0x708E78: mov     ecx, esi
0x708E7A: call    edx
0x708E7C: mov     [eax+8], edi
0x708E7F: mov     dword ptr [eax+4], 0
0x708E86: mov     ecx, [esi+4]
0x708E89: mov     [eax], ecx
0x708E8B: mov     ecx, [esi+4]
0x708E8E: test    ecx, ecx
0x708E90: jz      short loc_708E97
0x708E92: mov     [ecx+4], eax
0x708E95: jmp     short loc_708E9A
0x708E97: mov     [esi+8], eax
0x708E9A: add     dword ptr [esi+0Ch], 1
0x708E9E: push    ebx
0x708E9F: mov     ecx, edi
0x708EA1: mov     [esi+4], eax
0x708EA4: call    sub_708E40
0x708EA9: pop     esi
0x708EAA: pop     edi
0x708EAB: pop     ebx
0x708EAC: retn    4
