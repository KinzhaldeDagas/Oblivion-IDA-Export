0x952A00: push    ebp
0x952A01: mov     ebp, esp
0x952A03: and     esp, 0FFFFFFF0h
0x952A06: mov     eax, 2EC4h
0x952A0B: call    __alloca_probe
0x952A10: push    ebx
0x952A11: push    esi
0x952A12: push    edi
0x952A13: mov     esi, ecx
0x952A15: mov     ecx, [ebp+arg_0]
0x952A18: lea     eax, [esp+2ED0h+var_2EC4]
0x952A1C: push    eax
0x952A1D: push    ecx
0x952A1E: mov     ecx, esi
0x952A20: mov     [esp+2ED8h+var_2EC4], 0
0x952A28: call    sub_952480
0x952A2D: cmp     eax, 1
0x952A30: jnz     short loc_952A44
0x952A32: mov     eax, [esp+2ED0h+var_2EC4]
0x952A36: cmp     eax, 3
0x952A39: jnz     loc_952B7C
0x952A3F: jmp     loc_952AF9
0x952A44: mov     edx, [esi+68h]
0x952A47: mov     eax, [esi+64h]
0x952A4A: mov     ecx, [esi+60h]
0x952A4D: push    edx
0x952A4E: push    eax
0x952A4F: push    ecx
0x952A50: lea     ecx, [esp+2EDCh+var_2EB0]
0x952A54: call    sub_951BD0
0x952A59: lea     ecx, [esp+2ED0h+var_2EB0]
0x952A5D: call    sub_9517D0
0x952A62: mov     edi, eax
0x952A64: mov     eax, [esp+2ED0h+var_2EA8]
0x952A68: mov     edx, eax
0x952A6A: shl     edx, 6
0x952A6D: lea     ebx, [esp+edx+2ED0h+var_2E90]
0x952A71: inc     eax
0x952A72: push    ebx
0x952A73: mov     [esp+2ED4h+var_2EA8], eax
0x952A77: push    edi
0x952A78: mov     ecx, esi
0x952A7A: mov     dword ptr [ebx+30h], 0
0x952A81: call    sub_951D00
0x952A86: lea     eax, [esp+2ED0h+var_2EC4]
0x952A8A: push    eax
0x952A8B: push    ebx
0x952A8C: push    edi
0x952A8D: lea     ecx, [esp+2EDCh+var_2EB0]
0x952A91: push    ecx
0x952A92: mov     ecx, esi
0x952A94: call    sub_9518B0
0x952A99: cmp     eax, 1
0x952A9C: jz      short loc_952AF0
0x952A9E: mov     edi, edi
0x952AA0: mov     ebx, [esp+2ED0h+var_2EA8]
0x952AA4: cmp     ebx, 37h ; '7'
0x952AA7: jge     loc_952B54
0x952AAD: lea     ecx, [esp+2ED0h+var_2EB0]
0x952AB1: call    sub_9517D0
0x952AB6: mov     ecx, [esp+2ED0h+var_2EA8]
0x952ABA: shl     ebx, 6
0x952ABD: lea     ebx, [esp+ebx+2ED0h+var_2E90]
0x952AC1: inc     ecx
0x952AC2: mov     edi, eax
0x952AC4: mov     [esp+2ED0h+var_2EA8], ecx
0x952AC8: push    ebx
0x952AC9: push    edi
0x952ACA: mov     ecx, esi
0x952ACC: mov     dword ptr [ebx+30h], 0
0x952AD3: call    sub_951D00
0x952AD8: lea     edx, [esp+2ED0h+var_2EC4]
0x952ADC: push    edx
0x952ADD: push    ebx
0x952ADE: push    edi
0x952ADF: lea     eax, [esp+2EDCh+var_2EB0]
0x952AE3: push    eax
0x952AE4: mov     ecx, esi
0x952AE6: call    sub_9518B0
0x952AEB: cmp     eax, 1
0x952AEE: jnz     short loc_952AA0
0x952AF0: mov     ebx, [esp+2ED0h+var_2EC4]
0x952AF4: cmp     ebx, 3
0x952AF7: jnz     short loc_952B59
0x952AF9: mov     edx, [esi+5Ch]
0x952AFC: inc     edx
0x952AFD: mov     eax, edx
0x952AFF: cmp     eax, 1
0x952B02: mov     [esi+5Ch], edx
0x952B05: jnz     short loc_952B11
0x952B07: mov     ecx, [esi+6Ch]
0x952B0A: mov     [ecx], edx
0x952B0C: jmp     loc_952A15
0x952B11: cmp     eax, 14h
0x952B14: jge     short loc_952B75
0x952B16: mov     edx, [esi+6Ch]
0x952B19: lea     eax, [esp+2ED0h+var_2EC0]
0x952B1D: push    eax; int
0x952B1E: push    38D1B717h; float
0x952B23: mov     dword ptr [edx], 0
0x952B29: mov     ecx, [esi+5Ch]
0x952B2C: push    0B8D1B717h; float
0x952B31: push    ecx; int
0x952B32: call    sub_951B40
0x952B37: movaps  xmm1, xmmword ptr [esi+30h]
0x952B3B: movaps  xmm0, [esp+2EE0h+var_2EC0]
0x952B40: addps   xmm0, xmm1
0x952B43: add     esp, 10h
0x952B46: movaps  [esp+2ED0h+var_2EC0], xmm0
0x952B4B: movaps  xmmword ptr [esi+30h], xmm0
0x952B4F: jmp     loc_952A15
0x952B54: mov     ebx, 2
0x952B59: mov     edx, [ebp+arg_0]
0x952B5C: push    edx
0x952B5D: push    edi
0x952B5E: lea     eax, [esp+2ED8h+var_2EB0]
0x952B62: push    eax
0x952B63: mov     ecx, esi
0x952B65: call    sub_9519C0
0x952B6A: mov     eax, ebx
0x952B6C: pop     edi
0x952B6D: pop     esi
0x952B6E: pop     ebx
0x952B6F: mov     esp, ebp
0x952B71: pop     ebp
0x952B72: retn    4
0x952B75: mov     ebx, 3
0x952B7A: mov     eax, ebx
0x952B7C: pop     edi
0x952B7D: pop     esi
0x952B7E: pop     ebx
0x952B7F: mov     esp, ebp
0x952B81: pop     ebp
0x952B82: retn    4
