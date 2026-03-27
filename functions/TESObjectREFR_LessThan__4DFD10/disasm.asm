0x4DFD10: push    ecx
0x4DFD11: push    ebx
0x4DFD12: push    ebp
0x4DFD13: push    esi
0x4DFD14: push    edi
0x4DFD15: mov     edi, [esp+14h+arg_0]
0x4DFD19: movzx   eax, byte ptr [edi+4]
0x4DFD1D: push    eax
0x4DFD1E: mov     ebp, ecx
0x4DFD20: mov     [esp+18h+var_1], 0
0x4DFD25: call    sub_4CA010
0x4DFD2A: add     esp, 4
0x4DFD2D: test    al, al
0x4DFD2F: jz      loc_4DFE2A
0x4DFD35: push    0; int
0x4DFD37: push    offset ??_R0?AVTESChildCell@@@8; struct TypeDescriptor *
0x4DFD3C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DFD41: push    0; int
0x4DFD43: push    edi; void *
0x4DFD44: call    OblivionDynamicCast
0x4DFD49: mov     edx, [eax]
0x4DFD4B: mov     ecx, eax
0x4DFD4D: mov     eax, [edx]
0x4DFD4F: add     esp, 14h
0x4DFD52: call    eax
0x4DFD54: mov     edx, [ebp+18h]
0x4DFD57: lea     esi, [ebp+18h]
0x4DFD5A: mov     ebx, eax
0x4DFD5C: mov     eax, [edx]
0x4DFD5E: mov     ecx, esi
0x4DFD60: call    eax
0x4DFD62: cmp     ebx, eax
0x4DFD64: jnz     loc_4DFE1F
0x4DFD6A: movzx   eax, byte ptr [edi+4]
0x4DFD6E: add     eax, 0FFFFFFCFh; switch 6 cases
0x4DFD71: cmp     eax, 5
0x4DFD74: ja      TESObjectREFR_LessThan___def_4DFD7A; jumptable 004DFD7A default case, case 53
0x4DFD7A: jmp     ds:jpt_4DFD7A[eax*4]; switch jump
0x4DFD81: mov     ecx, ebp; jumptable 004DFD7A cases 52,54
0x4DFD83: call    TESObjectREFR_IsPersistent?
0x4DFD88: pop     edi
0x4DFD89: test    al, al
0x4DFD8B: pop     esi
0x4DFD8C: setnz   [esp+0Ch+var_1]
0x4DFD91: mov     al, [esp+0Ch+var_1]
0x4DFD95: pop     ebp
0x4DFD96: pop     ebx
0x4DFD97: pop     ecx
0x4DFD98: retn    4
0x4DFD9B: push    0; jumptable 004DFD7A cases 49-51
0x4DFD9D: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4DFDA2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DFDA7: push    0; int
0x4DFDA9: push    edi; void *
0x4DFDAA: call    OblivionDynamicCast
0x4DFDAF: add     esp, 14h
0x4DFDB2: mov     ecx, ebp; this
0x4DFDB4: mov     esi, eax
0x4DFDB6: call    TESObjectREFR_IsPersistent?
0x4DFDBB: test    al, al
0x4DFDBD: jz      short loc_4DFDDF
0x4DFDBF: test    esi, esi
0x4DFDC1: jz      short TESObjectREFR_LessThan___def_4DFD7A; jumptable 004DFD7A default case, case 53
0x4DFDC3: mov     ecx, esi; this
0x4DFDC5: call    TESObjectREFR_IsPersistent?
0x4DFDCA: test    al, al
0x4DFDCC: jnz     short TESObjectREFR_LessThan___def_4DFD7A; jumptable 004DFD7A default case, case 53
0x4DFDCE: pop     edi
0x4DFDCF: pop     esi
0x4DFDD0: mov     [esp+0Ch+var_1], 1
0x4DFDD5: mov     al, [esp+0Ch+var_1]
0x4DFDD9: pop     ebp
0x4DFDDA: pop     ebx
0x4DFDDB: pop     ecx
0x4DFDDC: retn    4
0x4DFDDF: mov     edi, 8000h
0x4DFDE4: test    [ebp+8], edi
0x4DFDE7: jz      short loc_4DFE0E
0x4DFDE9: test    esi, esi
0x4DFDEB: jz      short TESObjectREFR_LessThan___def_4DFD7A; jumptable 004DFD7A default case, case 53
0x4DFDED: mov     ecx, esi; this
0x4DFDEF: call    TESObjectREFR_IsPersistent?
0x4DFDF4: test    al, al
0x4DFDF6: jnz     short loc_4DFE0E
0x4DFDF8: test    [esi+8], edi
0x4DFDFB: jnz     short TESObjectREFR_LessThan___def_4DFD7A; jumptable 004DFD7A default case, case 53
0x4DFDFD: pop     edi
0x4DFDFE: pop     esi
0x4DFDFF: mov     [esp+0Ch+var_1], 1
0x4DFE04: mov     al, [esp+0Ch+var_1]
0x4DFE08: pop     ebp
0x4DFE09: pop     ebx
0x4DFE0A: pop     ecx
0x4DFE0B: retn    4
0x4DFE0E: pop     edi
0x4DFE0F: pop     esi
0x4DFE10: mov     [esp+0Ch+var_1], 0
0x4DFE15: mov     al, [esp+0Ch+var_1]
0x4DFE19: pop     ebp
0x4DFE1A: pop     ebx
0x4DFE1B: pop     ecx
0x4DFE1C: retn    4
0x4DFE1F: mov     edx, [esi]
0x4DFE21: mov     eax, [edx]
0x4DFE23: mov     ecx, esi
0x4DFE25: call    eax
0x4DFE27: push    ebx
0x4DFE28: jmp     short loc_4DFE35
0x4DFE2A: mov     edx, [ebp+18h]
0x4DFE2D: mov     eax, [edx]
0x4DFE2F: lea     ecx, [ebp+18h]
0x4DFE32: call    eax
0x4DFE34: push    edi
0x4DFE35: mov     edx, [eax]
0x4DFE37: mov     ecx, eax
0x4DFE39: mov     eax, [edx+34h]
0x4DFE3C: call    eax
0x4DFE3E: mov     [esp+14h+var_1], al
0x4DFE42: mov     al, [esp+14h+var_1]; jumptable 004DFD7A default case, case 53
0x4DFE46: pop     edi
0x4DFE47: pop     esi
0x4DFE48: pop     ebp
0x4DFE49: pop     ebx
0x4DFE4A: pop     ecx
0x4DFE4B: retn    4
