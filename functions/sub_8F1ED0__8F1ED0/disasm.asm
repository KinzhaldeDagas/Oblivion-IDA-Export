0x8F1ED0: sub     esp, 10h
0x8F1ED3: push    edi
0x8F1ED4: mov     edi, [esp+14h+arg_0]
0x8F1ED8: mov     eax, [edi+8]
0x8F1EDB: cmp     eax, 10h
0x8F1EDE: jnz     short loc_8F1F08
0x8F1EE0: mov     ecx, [edi]
0x8F1EE2: test    cl, 0Fh
0x8F1EE5: jnz     short loc_8F1F08
0x8F1EE7: mov     eax, [esp+14h+arg_C]
0x8F1EEB: mov     edx, [esp+14h+arg_8]
0x8F1EEF: push    eax
0x8F1EF0: mov     eax, [esp+18h+arg_4]
0x8F1EF4: push    edx
0x8F1EF5: mov     edx, [edi+4]
0x8F1EF8: push    eax
0x8F1EF9: push    edx
0x8F1EFA: push    ecx
0x8F1EFB: call    sub_9333B0
0x8F1F00: add     esp, 14h
0x8F1F03: pop     edi
0x8F1F04: add     esp, 10h
0x8F1F07: retn
0x8F1F08: cdq
0x8F1F09: and     edx, 3
0x8F1F0C: add     eax, edx
0x8F1F0E: mov     edx, [edi+4]
0x8F1F11: push    esi
0x8F1F12: xor     esi, esi
0x8F1F14: mov     ecx, 80000000h
0x8F1F19: sar     eax, 2
0x8F1F1C: cmp     edx, esi
0x8F1F1E: mov     [esp+18h+var_C], esi
0x8F1F22: mov     [esp+18h+var_8], esi
0x8F1F26: mov     [esp+18h+var_4], ecx
0x8F1F2A: mov     [esp+18h+arg_0], esi
0x8F1F2E: jle     short loc_8F1FAA
0x8F1F30: push    ebx
0x8F1F31: xor     ebx, ebx
0x8F1F33: shl     eax, 2
0x8F1F36: push    ebp
0x8F1F37: mov     [esp+20h+var_10], eax
0x8F1F3B: jmp     short loc_8F1F45
0x8F1F3D: mov     ecx, [esp+20h+var_4]
0x8F1F41: mov     esi, [esp+20h+var_8]
0x8F1F45: lea     ebp, [esi+1]
0x8F1F48: and     ecx, 3FFFFFFFh
0x8F1F4E: cmp     ecx, ebp
0x8F1F50: jge     short loc_8F1F6B
0x8F1F52: lea     eax, [ecx+ecx]
0x8F1F55: cmp     ebp, eax
0x8F1F57: jl      short loc_8F1F5B
0x8F1F59: mov     eax, ebp
0x8F1F5B: push    10h
0x8F1F5D: push    eax
0x8F1F5E: lea     ecx, [esp+28h+var_C]
0x8F1F62: push    ecx
0x8F1F63: call    sub_8A6E40
0x8F1F68: add     esp, 0Ch
0x8F1F6B: mov     edx, [edi]
0x8F1F6D: mov     [esp+20h+var_8], ebp
0x8F1F71: mov     eax, [ebx+edx]
0x8F1F74: mov     ebp, [esp+20h+var_C]
0x8F1F78: shl     esi, 4
0x8F1F7B: mov     [esi+ebp], eax
0x8F1F7E: mov     ecx, [edi]
0x8F1F80: mov     edx, [ecx+ebx+4]
0x8F1F84: add     esi, ebp
0x8F1F86: mov     [esi+4], edx
0x8F1F89: mov     eax, [edi]
0x8F1F8B: mov     ecx, [eax+ebx+8]
0x8F1F8F: mov     eax, [esp+20h+arg_0]
0x8F1F93: mov     edx, [esp+20h+var_10]
0x8F1F97: mov     [esi+8], ecx
0x8F1F9A: mov     ecx, [edi+4]
0x8F1F9D: inc     eax
0x8F1F9E: add     ebx, edx
0x8F1FA0: cmp     eax, ecx
0x8F1FA2: mov     [esp+20h+arg_0], eax
0x8F1FA6: jl      short loc_8F1F3D
0x8F1FA8: pop     ebp
0x8F1FA9: pop     ebx
0x8F1FAA: mov     edx, [esp+18h+arg_C]
0x8F1FAE: mov     eax, [esp+18h+arg_8]
0x8F1FB2: mov     ecx, [esp+18h+arg_4]
0x8F1FB6: push    edx
0x8F1FB7: mov     edx, [edi+4]
0x8F1FBA: push    eax
0x8F1FBB: mov     eax, [esp+20h+var_C]
0x8F1FBF: push    ecx
0x8F1FC0: push    edx
0x8F1FC1: push    eax
0x8F1FC2: call    sub_9333B0
0x8F1FC7: mov     eax, [esp+2Ch+var_4]
0x8F1FCB: add     esp, 14h
0x8F1FCE: test    eax, eax
0x8F1FD0: pop     esi
0x8F1FD1: js      short loc_8F1FFD
0x8F1FD3: mov     ecx, [esp+14h+var_C]
0x8F1FD7: mov     edx, ds:0BA9DE4h
0x8F1FDD: and     eax, 3FFFFFFFh
0x8F1FE2: push    14h
0x8F1FE4: shl     eax, 4
0x8F1FE7: push    eax
0x8F1FE8: mov     eax, large fs:2Ch
0x8F1FEE: push    ecx
0x8F1FEF: mov     ecx, [eax+edx*4]
0x8F1FF2: mov     ecx, [ecx+19Ch]
0x8F1FF8: call    sub_8A75D0
0x8F1FFD: pop     edi
0x8F1FFE: add     esp, 10h
0x8F2001: retn
