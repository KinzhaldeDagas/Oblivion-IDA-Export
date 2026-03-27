0x927F00: push    ebp
0x927F01: push    esi
0x927F02: push    edi
0x927F03: mov     edi, [esp+0Ch+arg_4]
0x927F07: cmp     byte ptr [edi+18h], 1
0x927F0B: jnz     short loc_927F14
0x927F0D: mov     ebp, [edi+10h]
0x927F10: add     ebp, edi
0x927F12: jmp     short loc_927F16
0x927F14: xor     ebp, ebp
0x927F16: mov     edx, [esp+0Ch+arg_8]
0x927F1A: cmp     byte ptr [edx+18h], 1
0x927F1E: jnz     short loc_927F27
0x927F20: mov     esi, [edx+10h]
0x927F23: add     esi, edx
0x927F25: jmp     short loc_927F29
0x927F27: xor     esi, esi
0x927F29: mov     eax, [ecx+10h]
0x927F2C: test    eax, eax
0x927F2E: jz      short loc_927F50
0x927F30: push    edx
0x927F31: lea     ecx, [eax+8]
0x927F34: mov     eax, [ecx]
0x927F36: push    edi
0x927F37: lea     edx, [esp+14h+arg_4]
0x927F3B: push    edx
0x927F3C: call    dword ptr [eax]
0x927F3E: cmp     byte ptr [eax], 0
0x927F41: jnz     short loc_927F50
0x927F43: mov     eax, [esp+0Ch+arg_0]
0x927F47: pop     edi
0x927F48: pop     esi
0x927F49: mov     byte ptr [eax], 0
0x927F4C: pop     ebp
0x927F4D: retn    0Ch
0x927F50: test    ebp, ebp
0x927F52: jz      loc_927FF9
0x927F58: test    esi, esi
0x927F5A: jz      loc_927FF9
0x927F60: mov     eax, [esi+78h]
0x927F63: mov     ecx, [ebp+78h]
0x927F66: mov     edi, [ebp+6Ch]
0x927F69: push    ebx
0x927F6A: add     eax, [esi+6Ch]
0x927F6D: add     ecx, edi
0x927F6F: cmp     ecx, eax
0x927F71: jle     short loc_927F7B
0x927F73: mov     edi, esi
0x927F75: mov     [esp+10h+arg_8], ebp
0x927F79: jmp     short loc_927F81
0x927F7B: mov     edi, ebp
0x927F7D: mov     [esp+10h+arg_8], esi
0x927F81: mov     ebx, [edi+78h]
0x927F84: add     ebx, [edi+6Ch]
0x927F87: xor     ebp, ebp
0x927F89: cmp     ebx, ebp
0x927F8B: jle     short loc_927FDD
0x927F8D: mov     [esp+10h+arg_4], ebp
0x927F91: mov     eax, [edi+6Ch]
0x927F94: cmp     ebp, eax
0x927F96: jge     short loc_927FA4
0x927F98: mov     edx, [edi+68h]
0x927F9B: mov     eax, [esp+10h+arg_4]
0x927F9F: mov     esi, [eax+edx]
0x927FA2: jmp     short loc_927FAE
0x927FA4: mov     edx, [edi+74h]
0x927FA7: mov     ecx, ebp
0x927FA9: sub     ecx, eax
0x927FAB: mov     esi, [edx+ecx*4]
0x927FAE: test    esi, esi
0x927FB0: jz      short loc_927FCD
0x927FB2: mov     ecx, [esi+0Ch]
0x927FB5: mov     eax, [ecx]
0x927FB7: call    dword ptr [eax+0Ch]
0x927FBA: cmp     eax, 0Bh
0x927FBD: jz      short loc_927FCD
0x927FBF: mov     eax, [esp+10h+arg_8]
0x927FC3: cmp     [esi+10h], eax
0x927FC6: jz      short loc_927FEB
0x927FC8: cmp     [esi+14h], eax
0x927FCB: jz      short loc_927FEB
0x927FCD: mov     ecx, [esp+10h+arg_4]
0x927FD1: inc     ebp
0x927FD2: add     ecx, 1Ch
0x927FD5: cmp     ebp, ebx
0x927FD7: mov     [esp+10h+arg_4], ecx
0x927FDB: jl      short loc_927F91
0x927FDD: mov     eax, [esp+10h+arg_0]
0x927FE1: pop     ebx
0x927FE2: pop     edi
0x927FE3: pop     esi
0x927FE4: mov     byte ptr [eax], 1
0x927FE7: pop     ebp
0x927FE8: retn    0Ch
0x927FEB: mov     eax, [esp+10h+arg_0]
0x927FEF: pop     ebx
0x927FF0: pop     edi
0x927FF1: pop     esi
0x927FF2: mov     byte ptr [eax], 0
0x927FF5: pop     ebp
0x927FF6: retn    0Ch
0x927FF9: mov     eax, [esp+0Ch+arg_0]
0x927FFD: pop     edi
0x927FFE: pop     esi
0x927FFF: mov     byte ptr [eax], 1
0x928002: pop     ebp
0x928003: retn    0Ch
