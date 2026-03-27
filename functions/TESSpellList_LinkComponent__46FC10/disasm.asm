0x46FC10: sub     esp, 10h
0x46FC13: push    ebx
0x46FC14: push    ebp
0x46FC15: push    edi
0x46FC16: mov     edi, [esp+1Ch+arg_0]
0x46FC1A: xor     ebx, ebx
0x46FC1C: cmp     edi, ebx
0x46FC1E: mov     [esp+1Ch+var_4], ecx
0x46FC22: mov     [esp+1Ch+var_C], ebx
0x46FC26: lea     ebp, [ecx+4]
0x46FC29: jz      short loc_46FC3A
0x46FC2B: push    0FFFFFFFFh; a2
0x46FC2D: mov     ecx, edi; this
0x46FC2F: call    TESForm_GetOverrideFile
0x46FC34: mov     [esp+1Ch+a2], eax
0x46FC38: jmp     short loc_46FC3E
0x46FC3A: mov     [esp+1Ch+a2], ebx
0x46FC3E: cmp     ebp, ebx
0x46FC40: jz      loc_46FE23
0x46FC46: push    esi
0x46FC47: jmp     short loc_46FC50
0x46FC49: align 10h
0x46FC50: mov     eax, [ebp+0]
0x46FC53: cmp     eax, ebx
0x46FC55: jz      loc_46FE22
0x46FC5B: mov     [esp+20h+ArgList], eax
0x46FC5F: mov     eax, [esp+20h+a2]
0x46FC63: push    eax; a2
0x46FC64: lea     ecx, [esp+24h+ArgList]
0x46FC68: push    ecx; a1
0x46FC69: call    TESForm_ResolveFormID
0x46FC6E: mov     edx, [esp+28h+ArgList]
0x46FC72: push    edx; a1
0x46FC73: call    TESForm_LookupByFormID
0x46FC78: mov     esi, eax
0x46FC7A: add     esp, 0Ch
0x46FC7D: cmp     esi, ebx
0x46FC7F: jnz     loc_46FD55
0x46FC85: mov     eax, [ebp+4]
0x46FC88: cmp     eax, ebx
0x46FC8A: jnz     short loc_46FCA9
0x46FC8C: mov     esi, [esp+20h+var_C]
0x46FC90: cmp     esi, ebx
0x46FC92: jz      short loc_46FCA5
0x46FC94: mov     eax, [esp+20h+ArgList]
0x46FC98: push    eax
0x46FC99: mov     ecx, esi
0x46FC9B: call    BSSimpleList_Remove
0x46FCA0: mov     ebp, [esi+4]
0x46FCA3: jmp     short loc_46FCC2
0x46FCA5: cmp     eax, ebx
0x46FCA7: jz      short loc_46FCBF
0x46FCA9: mov     ecx, [eax+4]
0x46FCAC: mov     [ebp+4], ecx
0x46FCAF: mov     edx, [eax]
0x46FCB1: push    eax
0x46FCB2: mov     [ebp+0], edx
0x46FCB5: call    FormHeapFree
0x46FCBA: add     esp, 4
0x46FCBD: jmp     short loc_46FCC2
0x46FCBF: mov     [ebp+0], ebx
0x46FCC2: cmp     edi, ebx
0x46FCC4: jz      short loc_46FD3E
0x46FCC6: cmp     ds:0B333F4h, bl
0x46FCCC: jnz     short loc_46FD23
0x46FCCE: mov     byte ptr ds:0B333F4h, 1
0x46FCD5: mov     eax, [edi]
0x46FCD7: mov     edx, [eax+0D4h]
0x46FCDD: mov     ecx, edi
0x46FCDF: call    edx
0x46FCE1: cmp     eax, ebx
0x46FCE3: mov     ds:0B333F4h, bl
0x46FCE9: jz      short loc_46FD23
0x46FCEB: lea     edx, [eax+1]
0x46FCEE: mov     edi, edi
0x46FCF0: mov     cl, [eax]
0x46FCF2: add     eax, 1
0x46FCF5: cmp     cl, bl
0x46FCF7: jnz     short loc_46FCF0
0x46FCF9: sub     eax, edx
0x46FCFB: cmp     eax, ebx
0x46FCFD: jz      short loc_46FD23
0x46FCFF: mov     eax, [edi]
0x46FD01: mov     edx, [eax+0D4h]
0x46FD07: mov     ecx, edi
0x46FD09: call    edx
0x46FD0B: push    eax
0x46FD0C: mov     eax, [esp+24h+ArgList]
0x46FD10: push    eax; ArgList
0x46FD11: push    offset aUnableToFindSp; "Unable to find spell (%08X) for owner o"...
0x46FD16: call    PrintError
0x46FD1B: add     esp, 0Ch
0x46FD1E: jmp     loc_46FE1A
0x46FD23: mov     ecx, [edi+0Ch]
0x46FD26: mov     edx, [esp+20h+ArgList]
0x46FD2A: push    ecx
0x46FD2B: push    edx; ArgList
0x46FD2C: push    offset aUnableToFin_21; "Unable to find spell (%08X) for owner o"...
0x46FD31: call    PrintError
0x46FD36: add     esp, 0Ch
0x46FD39: jmp     loc_46FE1A
0x46FD3E: mov     eax, [esp+20h+ArgList]
0x46FD42: push    eax; ArgList
0x46FD43: push    offset aUnableToFin_22; "Unable to find spell (%08X) for unknown"...
0x46FD48: call    PrintError
0x46FD4D: add     esp, 8
0x46FD50: jmp     loc_46FE1A
0x46FD55: push    ebx; int
0x46FD56: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x46FD5B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46FD60: push    ebx; int
0x46FD61: push    esi; void *
0x46FD62: call    OblivionDynamicCast
0x46FD67: push    ebx; int
0x46FD68: push    offset ??_R0?AVTESLevSpell@@@8; struct TypeDescriptor *
0x46FD6D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46FD72: push    ebx; int
0x46FD73: push    esi; void *
0x46FD74: mov     edi, eax
0x46FD76: call    OblivionDynamicCast
0x46FD7B: add     esp, 28h
0x46FD7E: cmp     edi, ebx
0x46FD80: mov     esi, eax
0x46FD82: jz      short loc_46FDCB
0x46FD84: mov     ecx, [esp+20h+var_4]
0x46FD88: push    ebx; int
0x46FD89: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x46FD8E: push    offset ??_R0?AVTESSpellList@@@8; struct _s_RTTICompleteObjectLocator *
0x46FD93: push    ebx; int
0x46FD94: push    ecx; void *
0x46FD95: mov     [ebp+0], edi
0x46FD98: call    OblivionDynamicCast
0x46FD9D: mov     esi, eax
0x46FD9F: add     esp, 14h
0x46FDA2: cmp     esi, ebx
0x46FDA4: jz      short loc_46FDC2
0x46FDA6: mov     ecx, ds:0B333C4h; this
0x46FDAC: push    ebx; a2
0x46FDAD: call    Actor_GetActorBaseForm
0x46FDB2: cmp     esi, eax
0x46FDB4: jnz     short loc_46FDC2
0x46FDB6: mov     ecx, ds:0B333C4h
0x46FDBC: push    edi
0x46FDBD: call    PlayerCharacter_SetKnownEffect
0x46FDC2: mov     [esp+20h+var_C], ebp
0x46FDC6: mov     ebp, [ebp+4]
0x46FDC9: jmp     short loc_46FE16
0x46FDCB: mov     eax, [ebp+4]
0x46FDCE: cmp     eax, ebx
0x46FDD0: jnz     short loc_46FDEF
0x46FDD2: mov     edi, [esp+20h+var_C]
0x46FDD6: cmp     edi, ebx
0x46FDD8: jz      short loc_46FDEB
0x46FDDA: mov     edx, [esp+20h+ArgList]
0x46FDDE: push    edx
0x46FDDF: mov     ecx, edi
0x46FDE1: call    BSSimpleList_Remove
0x46FDE6: mov     ebp, [edi+4]
0x46FDE9: jmp     short loc_46FE08
0x46FDEB: cmp     eax, ebx
0x46FDED: jz      short loc_46FE05
0x46FDEF: mov     ecx, [eax+4]
0x46FDF2: mov     [ebp+4], ecx
0x46FDF5: mov     edx, [eax]
0x46FDF7: push    eax
0x46FDF8: mov     [ebp+0], edx
0x46FDFB: call    FormHeapFree
0x46FE00: add     esp, 4
0x46FE03: jmp     short loc_46FE08
0x46FE05: mov     [ebp+0], ebx
0x46FE08: cmp     esi, ebx
0x46FE0A: jz      short loc_46FE16
0x46FE0C: mov     ecx, [esp+20h+var_4]
0x46FE10: push    esi
0x46FE11: call    TESSpellList_AddLevSpell
0x46FE16: mov     edi, [esp+20h+arg_0]
0x46FE1A: cmp     ebp, ebx
0x46FE1C: jnz     loc_46FC50
0x46FE22: pop     esi
0x46FE23: pop     edi
0x46FE24: pop     ebp
0x46FE25: pop     ebx
0x46FE26: add     esp, 10h
0x46FE29: retn    4
