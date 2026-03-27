0x588EF0: push    ebx
0x588EF1: mov     ebx, [esp+4+arg_0]
0x588EF5: test    ebx, ebx
0x588EF7: jz      loc_588FBA
0x588EFD: mov     al, [ebx]
0x588EFF: test    al, al
0x588F01: jz      loc_588FBA
0x588F07: cmp     al, 26h ; '&'
0x588F09: push    esi
0x588F0A: push    edi
0x588F0B: jnz     short loc_588F48
0x588F0D: mov     eax, 1Bh
0x588F12: shl     eax, 4
0x588F15: mov     esi, ds:dword_B3B0B4[eax]
0x588F1B: test    esi, esi
0x588F1D: jz      short loc_588F42
0x588F1F: nop
0x588F20: mov     edi, [esi+8]
0x588F23: lea     eax, [esi+8]
0x588F26: mov     eax, [edi+8]
0x588F29: cmp     byte ptr [eax], 0
0x588F2C: mov     esi, [esi]
0x588F2E: jz      short loc_588F3E
0x588F30: push    ebx; unsigned __int8 *
0x588F31: push    eax; unsigned __int8 *
0x588F32: call    __mbsicmp
0x588F37: add     esp, 8
0x588F3A: test    eax, eax
0x588F3C: jz      short loc_588FB0
0x588F3E: test    esi, esi
0x588F40: jnz     short loc_588F20
0x588F42: pop     edi
0x588F43: pop     esi
0x588F44: xor     eax, eax
0x588F46: pop     ebx
0x588F47: retn
0x588F48: cmp     al, 5Fh ; '_'
0x588F4A: jz      short loc_588F67
0x588F4C: movsx   eax, al
0x588F4F: sub     eax, 40h ; '@'
0x588F52: cmp     eax, 20h ; ' '
0x588F55: jle     short loc_588F5A
0x588F57: sub     eax, 20h ; ' '
0x588F5A: test    eax, eax
0x588F5C: jl      short loc_588F63
0x588F5E: cmp     eax, 1Ah
0x588F61: jle     short loc_588F12
0x588F63: xor     eax, eax
0x588F65: jmp     short loc_588F12
0x588F67: xor     edi, edi
0x588F69: cmp     ds:0B13BCEh, di
0x588F70: jbe     short loc_588F42
0x588F72: mov     eax, ds:0B13BC8h
0x588F77: mov     esi, [eax+edi*4]
0x588F7A: mov     ecx, [esi+8]
0x588F7D: cmp     byte ptr [ecx], 0
0x588F80: jz      short loc_588F92
0x588F82: mov     eax, ecx
0x588F84: push    ebx; unsigned __int8 *
0x588F85: push    eax; unsigned __int8 *
0x588F86: call    __mbsicmp
0x588F8B: add     esp, 8
0x588F8E: test    eax, eax
0x588F90: jz      short loc_588FA6
0x588F92: movzx   edx, word ptr ds:0B13BCEh
0x588F99: add     edi, 1
0x588F9C: cmp     edi, edx
0x588F9E: jb      short loc_588F72
0x588FA0: pop     edi
0x588FA1: pop     esi
0x588FA2: xor     eax, eax
0x588FA4: pop     ebx
0x588FA5: retn
0x588FA6: add     dword ptr [esi+4], 1
0x588FAA: mov     eax, [esi]
0x588FAC: pop     edi
0x588FAD: pop     esi
0x588FAE: pop     ebx
0x588FAF: retn
0x588FB0: add     dword ptr [edi+4], 1
0x588FB4: mov     eax, [edi]
0x588FB6: pop     edi
0x588FB7: pop     esi
0x588FB8: pop     ebx
0x588FB9: retn
0x588FBA: xor     eax, eax
0x588FBC: pop     ebx
0x588FBD: retn
