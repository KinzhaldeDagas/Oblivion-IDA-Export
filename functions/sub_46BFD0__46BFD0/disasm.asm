0x46BFD0: sub     esp, 0Ch
0x46BFD3: push    ebx
0x46BFD4: push    ebp
0x46BFD5: push    esi
0x46BFD6: push    edi
0x46BFD7: push    0; int
0x46BFD9: push    offset ??_R0?AVTESUsesForm@@@8; struct TypeDescriptor *
0x46BFDE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BFE3: mov     esi, ecx
0x46BFE5: push    0; int
0x46BFE7: push    esi; void *
0x46BFE8: call    OblivionDynamicCast
0x46BFED: push    0; int
0x46BFEF: push    offset ??_R0?AVTESValueForm@@@8; struct TypeDescriptor *
0x46BFF4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46BFF9: push    0; int
0x46BFFB: push    esi; void *
0x46BFFC: mov     edi, eax
0x46BFFE: call    OblivionDynamicCast
0x46C003: push    0; int
0x46C005: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x46C00A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46C00F: push    0; int
0x46C011: push    esi; void *
0x46C012: mov     ebx, eax
0x46C014: call    OblivionDynamicCast
0x46C019: push    0; int
0x46C01B: push    offset ??_R0?AVTESWeightForm@@@8; struct TypeDescriptor *
0x46C020: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46C025: push    0; int
0x46C027: push    esi; void *
0x46C028: mov     ebp, eax
0x46C02A: call    OblivionDynamicCast
0x46C02F: add     esp, 50h
0x46C032: push    0; int
0x46C034: push    offset ??_R0?AVTESQualityForm@@@8; struct TypeDescriptor *
0x46C039: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46C03E: push    0; int
0x46C040: push    esi; void *
0x46C041: mov     [esp+30h+var_C], eax
0x46C045: call    OblivionDynamicCast
0x46C04A: push    0; int
0x46C04C: push    offset ??_R0?AVTESAttackDamageForm@@@8; struct TypeDescriptor *
0x46C051: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46C056: push    0; int
0x46C058: push    esi; void *
0x46C059: mov     [esp+44h+var_8], eax
0x46C05D: call    OblivionDynamicCast
0x46C062: push    0; int
0x46C064: push    offset ??_R0?AVTESAttributes@@@8; struct TypeDescriptor *
0x46C069: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46C06E: push    0; int
0x46C070: push    esi; void *
0x46C071: mov     [esp+58h+var_4], eax
0x46C075: call    OblivionDynamicCast
0x46C07A: mov     ecx, eax
0x46C07C: add     esp, 3Ch
0x46C07F: xor     eax, eax
0x46C081: test    edi, edi
0x46C083: jz      short loc_46C08A
0x46C085: mov     eax, 1
0x46C08A: test    ebx, ebx
0x46C08C: jz      short loc_46C091
0x46C08E: add     eax, 4
0x46C091: pop     edi
0x46C092: pop     esi
0x46C093: test    ebp, ebp
0x46C095: pop     ebp
0x46C096: pop     ebx
0x46C097: jz      short loc_46C09C
0x46C099: add     eax, 4
0x46C09C: cmp     [esp+0Ch+var_C], 0
0x46C0A0: jz      short loc_46C0A5
0x46C0A2: add     eax, 4
0x46C0A5: cmp     [esp+0Ch+var_8], 0
0x46C0AA: jz      short loc_46C0AF
0x46C0AC: add     eax, 4
0x46C0AF: cmp     [esp+0Ch+var_4], 0
0x46C0B4: jz      short loc_46C0B9
0x46C0B6: add     eax, 2
0x46C0B9: test    ecx, ecx
0x46C0BB: jz      short loc_46C0C0
0x46C0BD: add     eax, 8
0x46C0C0: add     esp, 0Ch
0x46C0C3: retn
