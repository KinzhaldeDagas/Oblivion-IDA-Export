0x468C20: mov     eax, [esp+arg_0]
0x468C24: push    ebx
0x468C25: push    edi
0x468C26: push    0; int
0x468C28: push    offset ??_R0?AVTESAttributes@@@8; struct TypeDescriptor *
0x468C2D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x468C32: push    0; int
0x468C34: push    eax; void *
0x468C35: mov     ebx, ecx
0x468C37: call    OblivionDynamicCast
0x468C3C: mov     edi, eax
0x468C3E: add     esp, 14h
0x468C41: test    edi, edi
0x468C43: jnz     short loc_468C4C
0x468C45: pop     edi
0x468C46: mov     al, 1
0x468C48: pop     ebx
0x468C49: retn    4
0x468C4C: push    esi
0x468C4D: xor     esi, esi
0x468C4F: nop
0x468C50: push    esi
0x468C51: push    0
0x468C53: call    ActorValue_GetGroupOffsetFromAV
0x468C58: movsx   ecx, al
0x468C5B: mov     al, [ecx+edi+4]
0x468C5F: add     esp, 8
0x468C62: cmp     [ebx+esi+4], al
0x468C66: jnz     short loc_468C78
0x468C68: add     esi, 1
0x468C6B: cmp     esi, 8
0x468C6E: jl      short loc_468C50
0x468C70: pop     esi
0x468C71: pop     edi
0x468C72: xor     al, al
0x468C74: pop     ebx
0x468C75: retn    4
0x468C78: pop     esi
0x468C79: pop     edi
0x468C7A: mov     al, 1
0x468C7C: pop     ebx
0x468C7D: retn    4
