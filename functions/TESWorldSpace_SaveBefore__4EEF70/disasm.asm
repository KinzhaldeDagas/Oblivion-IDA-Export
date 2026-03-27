0x4EEF70: mov     eax, [esp+a2]
0x4EEF74: push    ebx
0x4EEF75: xor     bl, bl
0x4EEF77: test    eax, eax
0x4EEF79: push    esi
0x4EEF7A: mov     esi, ecx
0x4EEF7C: jz      short def_4EEF90; jumptable 004EEF90 default case, cases 4,5
0x4EEF7E: mov     ecx, [eax]
0x4EEF80: cmp     ecx, ds:0B05E20h
0x4EEF86: jnz     short def_4EEF90; jumptable 004EEF90 default case, cases 4,5
0x4EEF88: mov     ecx, [eax+0Ch]
0x4EEF8B: cmp     ecx, 7; switch 8 cases
0x4EEF8E: ja      short def_4EEF90; jumptable 004EEF90 default case, cases 4,5
0x4EEF90: jmp     ds:jpt_4EEF90[ecx*4]; switch jump
0x4EEF97: push    eax; jumptable 004EEF90 case 0
0x4EEF98: mov     ecx, esi; this
0x4EEF9A: call    TESForm_LessThanGroup
0x4EEF9F: pop     esi
0x4EEFA0: mov     bl, al
0x4EEFA2: pop     ebx
0x4EEFA3: retn    4
0x4EEFA6: xor     bl, bl; jumptable 004EEF90 cases 2,3
0x4EEFA8: pop     esi
0x4EEFA9: mov     al, bl
0x4EEFAB: pop     ebx
0x4EEFAC: retn    4
0x4EEFAF: mov     edx, [eax+8]; jumptable 004EEF90 case 6
0x4EEFB2: push    0; int
0x4EEFB4: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4EEFB9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4EEFBE: push    0; int
0x4EEFC0: push    edx; a1
0x4EEFC1: call    TESForm_LookupByFormID
0x4EEFC6: add     esp, 4
0x4EEFC9: push    eax; void *
0x4EEFCA: call    OblivionDynamicCast
0x4EEFCF: add     esp, 14h
0x4EEFD2: test    eax, eax
0x4EEFD4: jz      short def_4EEF90; jumptable 004EEF90 default case, cases 4,5
0x4EEFD6: mov     edx, [esi]
0x4EEFD8: push    eax
0x4EEFD9: mov     eax, [edx+34h]
0x4EEFDC: mov     ecx, esi
0x4EEFDE: call    eax
0x4EEFE0: pop     esi
0x4EEFE1: mov     bl, al
0x4EEFE3: pop     ebx
0x4EEFE4: retn    4
0x4EEFE7: mov     ecx, [eax+8]; jumptable 004EEF90 case 1
0x4EEFEA: push    0
0x4EEFEC: push    offset ??_R0?AVTESWorldSpace@@@8; TESWorldSpace `RTTI Type Descriptor'
0x4EEFF1: push    offset ??_R0?AVTESForm@@@8; TESForm `RTTI Type Descriptor'
0x4EEFF6: push    0
0x4EEFF8: push    ecx
0x4EEFF9: jmp     short loc_4EEFC1
0x4EEFFB: mov     bl, 1; jumptable 004EEF90 case 7
0x4EEFFD: pop     esi; jumptable 004EEF90 default case, cases 4,5
0x4EEFFE: mov     al, bl
0x4EF000: pop     ebx
0x4EF001: retn    4
