0x676EE0: push    ebx
0x676EE1: push    esi
0x676EE2: mov     ebx, ecx
0x676EE4: push    edi
0x676EE5: lea     ecx, [ebx+68h]; this
0x676EE8: call    sub_7616D0
0x676EED: mov     edi, eax
0x676EEF: test    edi, edi
0x676EF1: jz      short loc_676F3E
0x676EF3: mov     esi, [edi]
0x676EF5: push    0; int
0x676EF7: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x676EFC: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x676F01: push    0; int
0x676F03: push    esi; void *
0x676F04: call    OblivionDynamicCast
0x676F09: add     esp, 14h
0x676F0C: test    eax, eax
0x676F0E: jnz     short loc_676F29
0x676F10: push    eax; int
0x676F11: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x676F16: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x676F1B: push    eax; int
0x676F1C: push    esi; void *
0x676F1D: call    OblivionDynamicCast
0x676F22: add     esp, 14h
0x676F25: test    eax, eax
0x676F27: jz      short loc_676F37
0x676F29: mov     edx, [eax]
0x676F2B: mov     ecx, eax
0x676F2D: mov     eax, [edx+8Ch]
0x676F33: push    1
0x676F35: call    eax
0x676F37: mov     edi, [edi+4]
0x676F3A: test    edi, edi
0x676F3C: jnz     short loc_676EF3
0x676F3E: mov     ecx, ebx; this
0x676F40: call    sub_7616D0
0x676F45: mov     esi, eax
0x676F47: test    esi, esi
0x676F49: jz      short loc_676F82
0x676F4B: jmp     short loc_676F50
0x676F4D: align 10h
0x676F50: mov     eax, [esi]
0x676F52: push    0; int
0x676F54: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x676F59: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x676F5E: push    0; int
0x676F60: push    eax; void *
0x676F61: call    OblivionDynamicCast
0x676F66: add     esp, 14h
0x676F69: test    eax, eax
0x676F6B: jz      short loc_676F7B
0x676F6D: mov     edx, [eax]
0x676F6F: mov     ecx, eax
0x676F71: mov     eax, [edx+8Ch]
0x676F77: push    1
0x676F79: call    eax
0x676F7B: mov     esi, [esi+4]
0x676F7E: test    esi, esi
0x676F80: jnz     short loc_676F50
0x676F82: pop     edi
0x676F83: pop     esi
0x676F84: pop     ebx
0x676F85: retn
