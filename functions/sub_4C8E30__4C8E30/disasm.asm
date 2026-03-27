0x4C8E30: mov     eax, [esp+arg_0]
0x4C8E34: push    esi
0x4C8E35: push    edi
0x4C8E36: push    0; int
0x4C8E38: push    offset ??_R0?AVTESLandTexture@@@8; struct TypeDescriptor *
0x4C8E3D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4C8E42: push    0; int
0x4C8E44: push    eax; void *
0x4C8E45: mov     edi, ecx
0x4C8E47: call    OblivionDynamicCast
0x4C8E4C: mov     esi, eax
0x4C8E4E: add     esp, 14h
0x4C8E51: test    esi, esi
0x4C8E53: jz      loc_4C8EEB
0x4C8E59: lea     ecx, [edi+2Ch]
0x4C8E5C: mov     [esp+8+arg_0], ecx
0x4C8E60: call    BSSimpleList_Clear
0x4C8E65: push    esi; a2
0x4C8E66: mov     ecx, edi; this
0x4C8E68: call    TESForm_CopyAllComponentsFrom
0x4C8E6D: mov     cx, [esi+28h]
0x4C8E71: mov     [edi+28h], cx
0x4C8E75: mov     dl, [esi+2Ah]
0x4C8E78: mov     [edi+2Ah], dl
0x4C8E7B: mov     al, [esi+2Bh]
0x4C8E7E: mov     [edi+2Bh], al
0x4C8E81: lea     edi, [esi+2Ch]
0x4C8E84: test    edi, edi
0x4C8E86: jz      short loc_4C8EEB
0x4C8E88: push    ebx
0x4C8E89: lea     esp, [esp+0]
0x4C8E90: cmp     dword ptr [edi+4], 0
0x4C8E94: jnz     short loc_4C8E9B
0x4C8E96: cmp     dword ptr [edi], 0
0x4C8E99: jz      short loc_4C8EEA
0x4C8E9B: mov     ebx, [edi]
0x4C8E9D: test    ebx, ebx
0x4C8E9F: jz      short loc_4C8EE3
0x4C8EA1: mov     esi, [esp+0Ch+arg_0]
0x4C8EA5: cmp     dword ptr [esi+4], 0
0x4C8EA9: jz      short loc_4C8EB9
0x4C8EAB: jmp     short loc_4C8EB0
0x4C8EAD: align 10h
0x4C8EB0: mov     esi, [esi+4]
0x4C8EB3: cmp     dword ptr [esi+4], 0
0x4C8EB7: jnz     short loc_4C8EB0
0x4C8EB9: cmp     dword ptr [esi], 0
0x4C8EBC: jz      short loc_4C8EE1
0x4C8EBE: push    8; Size
0x4C8EC0: call    FormHeapAlloc
0x4C8EC5: add     esp, 4
0x4C8EC8: test    eax, eax
0x4C8ECA: jz      short loc_4C8EDA
0x4C8ECC: mov     [eax], ebx
0x4C8ECE: mov     dword ptr [eax+4], 0
0x4C8ED5: mov     [esi+4], eax
0x4C8ED8: jmp     short loc_4C8EE3
0x4C8EDA: xor     eax, eax
0x4C8EDC: mov     [esi+4], eax
0x4C8EDF: jmp     short loc_4C8EE3
0x4C8EE1: mov     [esi], ebx
0x4C8EE3: mov     edi, [edi+4]
0x4C8EE6: test    edi, edi
0x4C8EE8: jnz     short loc_4C8E90
0x4C8EEA: pop     ebx
0x4C8EEB: pop     edi
0x4C8EEC: pop     esi
0x4C8EED: retn    4
