0x607E90: push    esi
0x607E91: push    edi
0x607E92: push    0; a2
0x607E94: mov     ecx, offset ActorProcessManager_ptr; this
0x607E99: call    sub_673A50
0x607E9E: mov     ecx, eax; this
0x607EA0: call    sub_7616D0
0x607EA5: mov     edi, eax
0x607EA7: test    edi, edi
0x607EA9: mov     esi, edi
0x607EAB: jz      short loc_607F13
0x607EAD: push    ebx
0x607EAE: mov     bl, [esp+0Ch+arg_4]
0x607EB2: cmp     dword ptr [esi+4], 0
0x607EB6: jnz     short loc_607EBD
0x607EB8: cmp     dword ptr [esi], 0
0x607EBB: jz      short loc_607F12
0x607EBD: mov     eax, [esi]
0x607EBF: push    0; int
0x607EC1: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x607EC6: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x607ECB: push    0; int
0x607ECD: push    eax; void *
0x607ECE: call    OblivionDynamicCast
0x607ED3: add     esp, 14h
0x607ED6: test    eax, eax
0x607ED8: jz      short loc_607F09
0x607EDA: mov     ecx, [eax+5Ch]
0x607EDD: test    ecx, ecx
0x607EDF: jz      short loc_607F09
0x607EE1: mov     edx, [esp+0Ch+arg_0]
0x607EE5: cmp     [ecx+2Ch], edx
0x607EE8: jnz     short loc_607F09
0x607EEA: test    bl, bl
0x607EEC: jz      short loc_607F02
0x607EEE: mov     edx, [eax]
0x607EF0: mov     ecx, eax
0x607EF2: mov     eax, [edx+10h]
0x607EF5: push    1
0x607EF7: call    eax
0x607EF9: cmp     esi, edi
0x607EFB: jz      short loc_607F0E
0x607EFD: mov     esi, [edi+4]
0x607F00: jmp     short loc_607F0E
0x607F02: mov     dword ptr [eax+60h], 3
0x607F09: mov     edi, esi
0x607F0B: mov     esi, [esi+4]
0x607F0E: test    esi, esi
0x607F10: jnz     short loc_607EB2
0x607F12: pop     ebx
0x607F13: push    1; a2
0x607F15: mov     ecx, offset ActorProcessManager_ptr; this
0x607F1A: call    sub_673A50
0x607F1F: mov     ecx, eax; this
0x607F21: call    sub_7616D0
0x607F26: mov     edi, eax
0x607F28: test    edi, edi
0x607F2A: mov     esi, edi
0x607F2C: jz      short loc_607F85
0x607F2E: mov     edi, edi
0x607F30: cmp     dword ptr [esi+4], 0
0x607F34: jnz     short loc_607F3B
0x607F36: cmp     dword ptr [esi], 0
0x607F39: jz      short loc_607F85
0x607F3B: mov     eax, [esi]
0x607F3D: push    0; int
0x607F3F: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x607F44: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x607F49: push    0; int
0x607F4B: push    eax; void *
0x607F4C: call    OblivionDynamicCast
0x607F51: add     esp, 14h
0x607F54: test    eax, eax
0x607F56: jz      short loc_607F7C
0x607F58: mov     ecx, [eax+5Ch]
0x607F5B: test    ecx, ecx
0x607F5D: jz      short loc_607F7C
0x607F5F: mov     edx, [esp+8+arg_0]
0x607F63: cmp     [ecx+2Ch], edx
0x607F66: jnz     short loc_607F7C
0x607F68: mov     edx, [eax]
0x607F6A: mov     ecx, eax
0x607F6C: mov     eax, [edx+10h]
0x607F6F: push    1
0x607F71: call    eax
0x607F73: cmp     esi, edi
0x607F75: jz      short loc_607F81
0x607F77: mov     esi, [edi+4]
0x607F7A: jmp     short loc_607F81
0x607F7C: mov     edi, esi
0x607F7E: mov     esi, [esi+4]
0x607F81: test    esi, esi
0x607F83: jnz     short loc_607F30
0x607F85: pop     edi
0x607F86: pop     esi
0x607F87: retn
