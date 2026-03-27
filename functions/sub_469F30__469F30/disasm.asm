0x469F30: mov     eax, [esp+arg_0]
0x469F34: push    ebp
0x469F35: push    esi
0x469F36: push    0; int
0x469F38: push    offset ??_R0?AVTESContainer@@@8; struct TypeDescriptor *
0x469F3D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x469F42: push    0; int
0x469F44: push    eax; void *
0x469F45: mov     esi, ecx
0x469F47: call    OblivionDynamicCast
0x469F4C: mov     ebp, eax
0x469F4E: add     esp, 14h
0x469F51: test    ebp, ebp
0x469F53: jnz     short loc_469F5C
0x469F55: pop     esi
0x469F56: mov     al, 1
0x469F58: pop     ebp
0x469F59: retn    4
0x469F5C: push    ebx
0x469F5D: push    edi
0x469F5E: lea     edi, [esi+8]
0x469F61: xor     eax, eax
0x469F63: test    edi, edi
0x469F65: jz      short loc_469FAC
0x469F67: mov     ebx, [edi]
0x469F69: test    ebx, ebx
0x469F6B: jz      short loc_469FA5
0x469F6D: test    byte ptr [ebp+4], 1
0x469F71: jz      short loc_469F8E
0x469F73: cmp     dword ptr [ebp+8], 0
0x469F77: lea     ecx, [ebp+8]
0x469F7A: jz      short loc_469F8E
0x469F7C: mov     esi, [ebx+4]
0x469F7F: nop
0x469F80: mov     edx, [ecx]
0x469F82: cmp     [edx+4], esi
0x469F85: jz      short loc_469F97
0x469F87: mov     ecx, [ecx+4]
0x469F8A: test    ecx, ecx
0x469F8C: jnz     short loc_469F80
0x469F8E: pop     edi
0x469F8F: pop     ebx
0x469F90: pop     esi
0x469F91: mov     al, 1
0x469F93: pop     ebp
0x469F94: retn    4
0x469F97: mov     ecx, [ebx]
0x469F99: cmp     ecx, [edx]
0x469F9B: jnz     short loc_469F8E
0x469F9D: cmp     esi, [edx+4]
0x469FA0: jnz     short loc_469F8E
0x469FA2: add     eax, 1
0x469FA5: mov     edi, [edi+4]
0x469FA8: test    edi, edi
0x469FAA: jnz     short loc_469F67
0x469FAC: lea     ecx, [ebp+8]
0x469FAF: xor     edx, edx
0x469FB1: test    ecx, ecx
0x469FB3: jz      short loc_469FC4
0x469FB5: cmp     dword ptr [ecx], 0
0x469FB8: jz      short loc_469FBD
0x469FBA: add     edx, 1
0x469FBD: mov     ecx, [ecx+4]
0x469FC0: test    ecx, ecx
0x469FC2: jnz     short loc_469FB5
0x469FC4: pop     edi
0x469FC5: pop     ebx
0x469FC6: cmp     edx, eax
0x469FC8: pop     esi
0x469FC9: setnz   al
0x469FCC: pop     ebp
0x469FCD: retn    4
