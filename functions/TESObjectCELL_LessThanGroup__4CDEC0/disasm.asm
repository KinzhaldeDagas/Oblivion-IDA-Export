0x4CDEC0: push    ebx
0x4CDEC1: push    esi
0x4CDEC2: push    edi
0x4CDEC3: mov     edi, [esp+0Ch+a2]
0x4CDEC7: xor     bl, bl
0x4CDEC9: test    edi, edi
0x4CDECB: mov     esi, ecx
0x4CDECD: jz      short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDECF: mov     eax, [edi]
0x4CDED1: cmp     eax, ds:0B05E20h
0x4CDED7: jnz     short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDED9: mov     eax, [edi+0Ch]
0x4CDEDC: cmp     eax, 0Ah; switch 11 cases
0x4CDEDF: ja      short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDEE1: jmp     ds:jpt_4CDEE1[eax*4]; switch jump
0x4CDEE8: push    edi; jumptable 004CDEE1 case 0
0x4CDEE9: call    TESForm_LessThanGroup
0x4CDEEE: pop     edi
0x4CDEEF: pop     esi
0x4CDEF0: mov     bl, al
0x4CDEF2: pop     ebx
0x4CDEF3: retn    4
0x4CDEF6: test    byte ptr [esi+24h], 1; jumptable 004CDEE1 case 2
0x4CDEFA: jz      short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDEFC: call    sub_4CA5F0
0x4CDF01: cmp     eax, [edi+8]
0x4CDF04: jnb     short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDF06: mov     bl, 1; jumptable 004CDEE1 case 7
0x4CDF10: test    byte ptr [esi+24h], 1; jumptable 004CDEE1 case 3
0x4CDF14: jz      short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDF16: call    TESObjectCELL_GetCellGroupSubBlockLabel; Compute the CELL group sub-block label. Interior: decimal FormID bucket ((objectID24 % 100) / 10). Exterior: signed cell coordinates divided by 8 and packed X-high/Y-low. Cross-checks TESCS TESObjectCELL_GetCellGroupSubBlockLabel at 0x533F90.
0x4CDF1B: jmp     short loc_4CDF01
0x4CDF1D: mov     ecx, [edi+8]; jumptable 004CDEE1 cases 6,8-10
0x4CDF20: push    0; int
0x4CDF22: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4CDF27: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CDF2C: push    0; int
0x4CDF2E: push    ecx; a1
0x4CDF2F: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4CDF34: add     esp, 4
0x4CDF37: push    eax; void *
0x4CDF38: call    OblivionDynamicCast
0x4CDF3D: add     esp, 14h
0x4CDF40: test    eax, eax
0x4CDF42: jz      short TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDF44: mov     edx, [esi]
0x4CDF46: push    eax
0x4CDF47: mov     eax, [edx+34h]
0x4CDF4A: mov     ecx, esi
0x4CDF4C: call    eax
0x4CDF4E: pop     edi
0x4CDF4F: pop     esi
0x4CDF50: mov     bl, al
0x4CDF52: pop     ebx
0x4CDF53: retn    4
0x4CDF56: test    byte ptr [esi+24h], 1; jumptable 004CDEE1 case 4
0x4CDF5A: jnz     short loc_4CDF06; jumptable 004CDEE1 case 7
0x4CDF5C: test    dword ptr [esi+8], 400h
0x4CDF63: jnz     short loc_4CDF06; jumptable 004CDEE1 case 7
0x4CDF65: jmp     short loc_4CDEFC
0x4CDF67: test    byte ptr [esi+24h], 1; jumptable 004CDEE1 case 5
0x4CDF6B: jnz     short loc_4CDF06; jumptable 004CDEE1 case 7
0x4CDF6D: test    dword ptr [esi+8], 400h
0x4CDF74: jnz     short loc_4CDF06; jumptable 004CDEE1 case 7
0x4CDF76: call    TESObjectCELL_GetCellGroupSubBlockLabel; Compute the CELL group sub-block label. Interior: decimal FormID bucket ((objectID24 % 100) / 10). Exterior: signed cell coordinates divided by 8 and packed X-high/Y-low. Cross-checks TESCS TESObjectCELL_GetCellGroupSubBlockLabel at 0x533F90.
0x4CDF7B: jmp     short loc_4CDF01
0x4CDF7D: test    byte ptr [esi+24h], 1; jumptable 004CDEE1 case 1
0x4CDF81: jnz     short loc_4CDF06; jumptable 004CDEE1 case 7
0x4CDF83: mov     ecx, [edi+8]
0x4CDF86: push    0; int
0x4CDF88: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x4CDF8D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CDF92: push    0; int
0x4CDF94: push    ecx; a1
0x4CDF95: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4CDF9A: add     esp, 4
0x4CDF9D: push    eax; void *
0x4CDF9E: call    OblivionDynamicCast
0x4CDFA3: add     esp, 14h
0x4CDFA6: test    eax, eax
0x4CDFA8: jz      TESObjectCELL_LessThanGroup___def_4CDEE1
0x4CDFAE: mov     edx, [esi]
0x4CDFB0: push    eax
0x4CDFB1: mov     eax, [edx+34h]
0x4CDFB4: mov     ecx, esi
0x4CDFB6: call    eax
0x4CDFB8: pop     edi
0x4CDFB9: pop     esi
0x4CDFBA: mov     bl, al
0x4CDFBC: pop     ebx
0x4CDFBD: retn    4
