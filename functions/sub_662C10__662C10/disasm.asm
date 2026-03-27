0x662C10: push    ebx
0x662C11: mov     ebx, [esp+4+arg_0]
0x662C15: mov     al, [ebx+4]
0x662C18: cmp     al, 14h
0x662C1A: push    edi
0x662C1B: mov     edi, ecx
0x662C1D: jz      short loc_662C23
0x662C1F: cmp     al, 16h
0x662C21: jnz     short loc_662C66
0x662C23: push    0; int
0x662C25: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x662C2A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x662C2F: push    0; int
0x662C31: push    ebx; void *
0x662C32: call    OblivionDynamicCast
0x662C37: add     esp, 14h
0x662C3A: test    eax, eax
0x662C3C: jz      short loc_662C43
0x662C3E: mov     eax, [eax+4]
0x662C41: jmp     short loc_662C45
0x662C43: xor     eax, eax
0x662C45: test    eax, eax
0x662C47: jz      short loc_662C66
0x662C49: push    esi
0x662C4A: push    0
0x662C4C: lea     esi, [eax+18h]
0x662C4F: mov     eax, [edi+5Ch]
0x662C52: mov     edx, [eax+8]
0x662C55: lea     ecx, [edi+5Ch]
0x662C58: push    ebx
0x662C59: push    esi
0x662C5A: call    edx
0x662C5C: push    esi
0x662C5D: lea     ecx, [edi+68h]
0x662C60: call    MagicTarget_ProcessEffectsFromItem
0x662C65: pop     esi
0x662C66: pop     edi
0x662C67: pop     ebx
0x662C68: retn    8
