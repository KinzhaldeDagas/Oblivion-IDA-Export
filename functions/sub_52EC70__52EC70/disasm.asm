0x52EC70: mov     eax, [esp+a2]
0x52EC74: push    ebx
0x52EC75: xor     bl, bl
0x52EC77: test    eax, eax
0x52EC79: push    esi
0x52EC7A: mov     esi, ecx
0x52EC7C: jz      short def_52EC90
0x52EC7E: mov     ecx, [eax]
0x52EC80: cmp     ecx, ds:0B05E20h
0x52EC86: jnz     short def_52EC90
0x52EC88: mov     ecx, [eax+0Ch]
0x52EC8B: cmp     ecx, 7; switch 8 cases
0x52EC8E: ja      short def_52EC90
0x52EC90: jmp     ds:jpt_52EC90[ecx*4]; switch jump
0x52EC97: push    eax; jumptable 0052EC90 case 0
0x52EC98: mov     ecx, esi; this
0x52EC9A: call    TESForm_LessThanGroup
0x52EC9F: pop     esi
0x52ECA0: mov     bl, al
0x52ECA2: pop     ebx
0x52ECA3: retn    4
0x52ECA6: xor     bl, bl; jumptable 0052EC90 cases 1-6
0x52ECA8: pop     esi
0x52ECA9: mov     al, bl
0x52ECAB: pop     ebx
0x52ECAC: retn    4
0x52ECAF: mov     edx, [eax+8]; jumptable 0052EC90 case 7
0x52ECB2: push    0; int
0x52ECB4: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x52ECB9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52ECBE: push    0; int
0x52ECC0: push    edx; a1
0x52ECC1: call    TESForm_LookupByFormID
0x52ECC6: add     esp, 4
0x52ECC9: push    eax; void *
0x52ECCA: call    OblivionDynamicCast
0x52ECCF: add     esp, 14h
0x52ECD2: test    eax, eax
0x52ECD4: jz      short def_52EC90
0x52ECD6: mov     edx, [esi]
0x52ECD8: push    eax
0x52ECD9: mov     eax, [edx+34h]
0x52ECDC: mov     ecx, esi
0x52ECDE: call    eax
0x52ECE0: mov     bl, al
