0x99E97C: push    ebp
0x99E97D: mov     ebp, esp
0x99E97F: sub     esp, 0Ch
0x99E982: and     [ebp+var_4], 0
0x99E986: cmp     [ebp+arg_4], 1
0x99E98A: push    ebx
0x99E98B: push    esi
0x99E98C: push    edi
0x99E98D: mov     edi, [ebp+arg_8]
0x99E990: mov     esi, eax
0x99E992: mov     eax, edi
0x99E994: jnz     loc_99EA93
0x99E99A: and     eax, 80000003h
0x99E99F: jns     short loc_99E9A6
0x99E9A1: dec     eax
0x99E9A2: or      eax, 0FFFFFFFCh
0x99E9A5: inc     eax
0x99E9A6: mov     [ebp+var_C], eax
0x99E9A9: jnz     short loc_99E9B7
0x99E9AB: mov     eax, edi
0x99E9AD: push    64h ; 'd'
0x99E9AF: cdq
0x99E9B0: pop     ebx
0x99E9B1: idiv    ebx
0x99E9B3: test    edx, edx
0x99E9B5: jnz     short loc_99E9D6
0x99E9B7: lea     eax, [edi+76Ch]
0x99E9BD: cdq
0x99E9BE: mov     ebx, 190h
0x99E9C3: idiv    ebx
0x99E9C5: test    edx, edx
0x99E9C7: jz      short loc_99E9D6
0x99E9C9: mov     eax, esi
0x99E9CB: shl     eax, 2
0x99E9CE: mov     esi, dword_B320B0[eax]
0x99E9D4: jmp     short loc_99E9E1
0x99E9D6: mov     eax, esi
0x99E9D8: shl     eax, 2
0x99E9DB: mov     esi, off_B3207C[eax]
0x99E9E1: mov     [ebp+arg_4], eax
0x99E9E4: lea     eax, [edi+12Bh]
0x99E9EA: cdq
0x99E9EB: lea     ebx, [edi-1]
0x99E9EE: mov     edi, 190h
0x99E9F3: idiv    edi
0x99E9F5: push    64h ; 'd'
0x99E9F7: pop     edi
0x99E9F8: inc     esi
0x99E9F9: push    7
0x99E9FB: mov     [ebp+var_8], eax
0x99E9FE: mov     eax, ebx
0x99EA00: cdq
0x99EA01: idiv    edi
0x99EA03: mov     edx, [ebp+var_8]
0x99EA06: mov     edi, [ebp+arg_8]
0x99EA09: sub     edx, eax
0x99EA0B: mov     ebx, edx
0x99EA0D: lea     eax, [edi-1]
0x99EA10: cdq
0x99EA11: and     edx, 3
0x99EA14: add     eax, edx
0x99EA16: sar     eax, 2
0x99EA19: mov     edx, edi
0x99EA1B: imul    edx, 16Dh
0x99EA21: add     eax, esi
0x99EA23: add     eax, ebx
0x99EA25: lea     eax, [edx+eax-63DBh]
0x99EA2C: cdq
0x99EA2D: pop     ebx
0x99EA2E: idiv    ebx
0x99EA30: mov     eax, [ebp+arg_C]
0x99EA33: imul    eax, 7
0x99EA36: sub     eax, edx
0x99EA38: add     eax, [ebp+arg_10]
0x99EA3B: cmp     edx, [ebp+arg_10]
0x99EA3E: jg      short loc_99EA46
0x99EA40: lea     esi, [esi+eax-7]
0x99EA44: jmp     short loc_99EA48
0x99EA46: add     esi, eax
0x99EA48: cmp     [ebp+arg_C], 5
0x99EA4C: jnz     loc_99EAD2
0x99EA52: cmp     [ebp+var_C], 0
0x99EA56: jnz     short loc_99EA64
0x99EA58: mov     eax, edi
0x99EA5A: push    64h ; 'd'
0x99EA5C: cdq
0x99EA5D: pop     ebx
0x99EA5E: idiv    ebx
0x99EA60: test    edx, edx
0x99EA62: jnz     short loc_99EA81
0x99EA64: lea     eax, [edi+76Ch]
0x99EA6A: cdq
0x99EA6B: mov     ebx, 190h
0x99EA70: idiv    ebx
0x99EA72: test    edx, edx
0x99EA74: jz      short loc_99EA81
0x99EA76: mov     eax, [ebp+arg_4]
0x99EA79: mov     eax, dword_B320B4[eax]
0x99EA7F: jmp     short loc_99EA8A
0x99EA81: mov     eax, [ebp+arg_4]
0x99EA84: mov     eax, dword_B32080[eax]
0x99EA8A: cmp     esi, eax
0x99EA8C: jle     short loc_99EAD2
0x99EA8E: sub     esi, 7
0x99EA91: jmp     short loc_99EAD2
0x99EA93: and     eax, 80000003h
0x99EA98: jns     short loc_99EA9F
0x99EA9A: dec     eax
0x99EA9B: or      eax, 0FFFFFFFCh
0x99EA9E: inc     eax
0x99EA9F: jnz     short loc_99EAAD
0x99EAA1: mov     eax, edi
0x99EAA3: push    64h ; 'd'
0x99EAA5: cdq
0x99EAA6: pop     ebx
0x99EAA7: idiv    ebx
0x99EAA9: test    edx, edx
0x99EAAB: jnz     short loc_99EAC8
0x99EAAD: lea     eax, [edi+76Ch]
0x99EAB3: cdq
0x99EAB4: mov     ebx, 190h
0x99EAB9: idiv    ebx
0x99EABB: test    edx, edx
0x99EABD: jz      short loc_99EAC8
0x99EABF: mov     esi, dword_B320B0[esi*4]
0x99EAC6: jmp     short loc_99EACF
0x99EAC8: mov     esi, off_B3207C[esi*4]
0x99EACF: add     esi, [ebp+arg_14]
0x99EAD2: imul    ecx, 3Ch ; '<'
0x99EAD5: add     ecx, [ebp+arg_18]
0x99EAD8: imul    ecx, 3Ch ; '<'
0x99EADB: add     ecx, [ebp+arg_1C]
0x99EADE: imul    ecx, 3E8h
0x99EAE4: add     ecx, [ebp+arg_20]
0x99EAE7: cmp     [ebp+arg_0], 1
0x99EAEB: jnz     short loc_99EB01
0x99EAED: mov     dword_B31FD4, esi
0x99EAF3: mov     dword_B31FD8, ecx
0x99EAF9: mov     dword_B31FD0, edi
0x99EAFF: jmp     short loc_99EB6C
0x99EB01: lea     eax, [ebp+var_4]
0x99EB04: push    eax
0x99EB05: mov     dword_B31FE0, esi
0x99EB0B: mov     dword_B31FE4, ecx
0x99EB11: call    sub_99EDE3
0x99EB16: test    eax, eax
0x99EB18: pop     ecx
0x99EB19: jz      short loc_99EB2A
0x99EB1B: xor     eax, eax
0x99EB1D: push    eax
0x99EB1E: push    eax
0x99EB1F: push    eax
0x99EB20: push    eax
0x99EB21: push    eax
0x99EB22: call    __invoke_watson
0x99EB27: add     esp, 14h
0x99EB2A: mov     eax, [ebp+var_4]
0x99EB2D: imul    eax, 3E8h
0x99EB33: add     dword_B31FE4, eax
0x99EB39: jns     short loc_99EB4D
0x99EB3B: add     dword_B31FE4, 5265C00h
0x99EB45: dec     dword_B31FE0
0x99EB4B: jmp     short loc_99EB66
0x99EB4D: mov     eax, 5265C00h
0x99EB52: cmp     dword_B31FE4, eax
0x99EB58: jl      short loc_99EB66
0x99EB5A: sub     dword_B31FE4, eax
0x99EB60: inc     dword_B31FE0
0x99EB66: mov     dword_B31FDC, edi
0x99EB6C: pop     edi
0x99EB6D: pop     esi
0x99EB6E: pop     ebx
0x99EB6F: leave
0x99EB70: retn
