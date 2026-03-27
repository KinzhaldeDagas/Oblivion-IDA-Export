0x4C8EF0: mov     eax, [esp+arg_0]
0x4C8EF4: push    esi
0x4C8EF5: push    edi
0x4C8EF6: push    0; int
0x4C8EF8: push    offset ??_R0?AVTESLandTexture@@@8; struct TypeDescriptor *
0x4C8EFD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4C8F02: push    0; int
0x4C8F04: push    eax; void *
0x4C8F05: mov     edi, ecx
0x4C8F07: call    OblivionDynamicCast
0x4C8F0C: mov     esi, eax
0x4C8F0E: add     esp, 14h
0x4C8F11: test    esi, esi
0x4C8F13: jnz     short loc_4C8F1C
0x4C8F15: pop     edi
0x4C8F16: mov     al, 1
0x4C8F18: pop     esi
0x4C8F19: retn    4
0x4C8F1C: push    esi; a2
0x4C8F1D: mov     ecx, edi; this
0x4C8F1F: call    TESForm_CompareAllComponentsTo
0x4C8F24: test    al, al
0x4C8F26: jnz     short loc_4C8F15
0x4C8F28: movzx   eax, byte ptr [edi+28h]
0x4C8F2C: lea     ecx, [esi+28h]
0x4C8F2F: lea     edx, [edi+28h]
0x4C8F32: push    ebx
0x4C8F33: movzx   ebx, byte ptr [ecx]
0x4C8F36: sub     eax, ebx
0x4C8F38: jnz     short loc_4C8F5D
0x4C8F3A: movzx   eax, byte ptr [edx+1]
0x4C8F3E: movzx   ebx, byte ptr [ecx+1]
0x4C8F42: add     ecx, 1
0x4C8F45: add     edx, 1
0x4C8F48: sub     eax, ebx
0x4C8F4A: jnz     short loc_4C8F5D
0x4C8F4C: movzx   eax, byte ptr [edx+1]
0x4C8F50: add     ecx, 1
0x4C8F53: movzx   ecx, byte ptr [ecx]
0x4C8F56: add     edx, 1
0x4C8F59: sub     eax, ecx
0x4C8F5B: jz      short loc_4C8F6B
0x4C8F5D: test    eax, eax
0x4C8F5F: mov     ecx, 1
0x4C8F64: jg      short loc_4C8F6D
0x4C8F66: or      ecx, 0FFFFFFFFh
0x4C8F69: jmp     short loc_4C8F6D
0x4C8F6B: xor     ecx, ecx
0x4C8F6D: test    ecx, ecx
0x4C8F6F: pop     ebx
0x4C8F70: jnz     short loc_4C8F15
0x4C8F72: mov     dl, [edi+2Bh]
0x4C8F75: cmp     dl, [esi+2Bh]
0x4C8F78: jnz     short loc_4C8F15
0x4C8F7A: lea     eax, [edi+2Ch]
0x4C8F7D: test    eax, eax
0x4C8F7F: lea     ecx, [esi+2Ch]
0x4C8F82: jz      short loc_4C8F98
0x4C8F84: test    ecx, ecx
0x4C8F86: jz      short loc_4C8FA0
0x4C8F88: mov     edx, [eax]
0x4C8F8A: cmp     edx, [ecx]
0x4C8F8C: jnz     short loc_4C8F15
0x4C8F8E: mov     eax, [eax+4]
0x4C8F91: test    eax, eax
0x4C8F93: mov     ecx, [ecx+4]
0x4C8F96: jnz     short loc_4C8F84
0x4C8F98: test    ecx, ecx
0x4C8F9A: jnz     loc_4C8F15
0x4C8FA0: test    eax, eax
0x4C8FA2: jnz     loc_4C8F15
0x4C8FA8: pop     edi
0x4C8FA9: xor     al, al
0x4C8FAB: pop     esi
0x4C8FAC: retn    4
