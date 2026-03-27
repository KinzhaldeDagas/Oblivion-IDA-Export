0x468BD0: mov     eax, [esp+arg_0]
0x468BD4: push    ebx
0x468BD5: push    edi
0x468BD6: push    0; int
0x468BD8: push    offset ??_R0?AVTESAttributes@@@8; struct TypeDescriptor *
0x468BDD: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x468BE2: push    0; int
0x468BE4: push    eax; void *
0x468BE5: mov     ebx, ecx
0x468BE7: call    OblivionDynamicCast
0x468BEC: mov     edi, eax
0x468BEE: add     esp, 14h
0x468BF1: test    edi, edi
0x468BF3: jz      short loc_468C17
0x468BF5: push    esi
0x468BF6: xor     esi, esi
0x468BF8: push    esi
0x468BF9: push    0
0x468BFB: call    ActorValue_GetGroupOffsetFromAV
0x468C00: movsx   ecx, al
0x468C03: mov     dl, [ecx+edi+4]
0x468C07: mov     [ebx+esi+4], dl
0x468C0B: add     esi, 1
0x468C0E: add     esp, 8
0x468C11: cmp     esi, 8
0x468C14: jl      short loc_468BF8
0x468C16: pop     esi
0x468C17: pop     edi
0x468C18: pop     ebx
0x468C19: retn    4
