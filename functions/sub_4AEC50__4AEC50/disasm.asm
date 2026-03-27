0x4AEC50: push    ebx
0x4AEC51: mov     ebx, [esp+4+a2]
0x4AEC55: push    esi
0x4AEC56: push    edi
0x4AEC57: push    0; int
0x4AEC59: push    offset ??_R0?AVTESFurniture@@@8; struct TypeDescriptor *
0x4AEC5E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AEC63: push    0; int
0x4AEC65: push    ebx; void *
0x4AEC66: mov     esi, ecx
0x4AEC68: call    OblivionDynamicCast
0x4AEC6D: mov     edi, eax
0x4AEC6F: add     esp, 14h
0x4AEC72: test    edi, edi
0x4AEC74: jz      short loc_4AEC8B
0x4AEC76: push    ebx; a2
0x4AEC77: mov     ecx, esi; this
0x4AEC79: call    TESForm_CopyAllComponentsFrom
0x4AEC7E: mov     eax, [edi+58h]
0x4AEC81: mov     ecx, esi
0x4AEC83: mov     [esi+58h], eax
0x4AEC86: call    sub_4AE830
0x4AEC8B: pop     edi
0x4AEC8C: pop     esi
0x4AEC8D: pop     ebx
0x4AEC8E: retn    4
