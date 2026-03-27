0x484BF0: push    ebx
0x484BF1: push    esi
0x484BF2: mov     esi, ecx
0x484BF4: mov     eax, [esi]
0x484BF6: xor     ebx, ebx
0x484BF8: test    eax, eax
0x484BFA: push    edi
0x484BFB: jz      short loc_484C18
0x484BFD: mov     edi, [eax]
0x484BFF: test    edi, edi
0x484C01: jz      short loc_484C18
0x484C03: mov     ecx, edi
0x484C05: call    ExtraDataList_GetExtraSoul
0x484C0A: test    eax, eax
0x484C0C: jz      short loc_484C18
0x484C0E: mov     ecx, edi
0x484C10: pop     edi
0x484C11: pop     esi
0x484C12: pop     ebx
0x484C13: jmp     ExtraDataList_GetExtraSoul
0x484C18: mov     eax, [esi+8]
0x484C1B: push    0; int
0x484C1D: push    offset ??_R0?AVTESSoulGem@@@8; struct TypeDescriptor *
0x484C22: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x484C27: push    0; int
0x484C29: push    eax; void *
0x484C2A: call    OblivionDynamicCast
0x484C2F: add     esp, 14h
0x484C32: test    eax, eax
0x484C34: jz      short loc_484C40
0x484C36: mov     al, [eax+70h]
0x484C39: test    al, al
0x484C3B: jz      short loc_484C40
0x484C3D: movzx   ebx, al
0x484C40: pop     edi
0x484C41: pop     esi
0x484C42: mov     eax, ebx
0x484C44: pop     ebx
0x484C45: retn
