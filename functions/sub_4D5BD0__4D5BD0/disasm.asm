0x4D5BD0: push    ecx
0x4D5BD1: push    ebx
0x4D5BD2: push    esi
0x4D5BD3: mov     ebx, ecx
0x4D5BD5: call    sub_4D58B0
0x4D5BDA: push    0
0x4D5BDC: push    0
0x4D5BDE: mov     ecx, ebx
0x4D5BE0: mov     esi, eax
0x4D5BE2: call    sub_4CB8C0
0x4D5BE7: mov     ecx, ebx
0x4D5BE9: call    sub_4CFAF0
0x4D5BEE: test    ebx, ebx
0x4D5BF0: jz      short loc_4D5C2E
0x4D5BF2: test    byte ptr [ebx+24h], 1
0x4D5BF6: mov     ecx, ds:0B333A0h; this
0x4D5BFC: push    ebx; a2
0x4D5BFD: jz      short loc_4D5C06
0x4D5BFF: call    TES__IsInteriorCellPreloaded
0x4D5C04: jmp     short loc_4D5C0B
0x4D5C06: call    sub_43FEA0
0x4D5C0B: test    al, al
0x4D5C0D: jz      short loc_4D5C2E
0x4D5C0F: test    esi, esi
0x4D5C11: jz      short loc_4D5C22
0x4D5C13: fldz
0x4D5C15: push    0; a3
0x4D5C17: push    ecx
0x4D5C18: fstp    [esp+14h+a2]; a2
0x4D5C1B: mov     ecx, esi; this
0x4D5C1D: call    NiAVObject_UpdateNiAVObject
0x4D5C22: mov     ecx, ebx
0x4D5C24: call    sub_4CB790
0x4D5C29: jmp     loc_4D5D4C
0x4D5C2E: push    ebp
0x4D5C2F: push    ebx; a2
0x4D5C30: mov     ecx, offset stru_B35C80; this
0x4D5C35: call    sub_496EA0
0x4D5C3A: mov     ecx, ds:0B333A0h
0x4D5C40: push    0
0x4D5C42: push    ebx
0x4D5C43: call    sub_440C80
0x4D5C48: lea     ebp, [ebx+48h]
0x4D5C4B: test    ebp, ebp
0x4D5C4D: mov     [esp+10h+var_4], eax
0x4D5C51: jz      loc_4D5D40
0x4D5C57: push    edi
0x4D5C58: mov     esi, [ebp+0]
0x4D5C5B: test    esi, esi
0x4D5C5D: mov     ebp, [ebp+4]
0x4D5C60: jz      loc_4D5D37
0x4D5C66: mov     ecx, ds:0B33B00h
0x4D5C6C: call    sub_45A500
0x4D5C71: test    al, al
0x4D5C73: jnz     short loc_4D5C8E
0x4D5C75: lea     edi, [esi+44h]
0x4D5C78: push    edi
0x4D5C79: push    esi
0x4D5C7A: call    sub_4F9EC0
0x4D5C7F: push    1000h
0x4D5C84: push    edi
0x4D5C85: push    esi
0x4D5C86: call    Script_AddEventToExtraScript
0x4D5C8B: add     esp, 14h
0x4D5C8E: mov     eax, [esi+8]
0x4D5C91: mov     ecx, eax
0x4D5C93: shr     ecx, 0Bh
0x4D5C96: test    cl, 1
0x4D5C99: jnz     loc_4D5D37
0x4D5C9F: shr     eax, 5
0x4D5CA2: test    al, 1
0x4D5CA4: jnz     loc_4D5D37
0x4D5CAA: mov     edx, [esi]
0x4D5CAC: mov     eax, [edx+190h]
0x4D5CB2: mov     ecx, esi
0x4D5CB4: call    eax
0x4D5CB6: test    al, al
0x4D5CB8: jz      short loc_4D5D0E
0x4D5CBA: mov     ecx, ds:0B33B00h
0x4D5CC0: call    sub_45A500
0x4D5CC5: test    al, al
0x4D5CC7: jz      short loc_4D5CDA
0x4D5CC9: mov     ecx, ds:0B33B00h
0x4D5CCF: mov     edx, [ecx+18h]
0x4D5CD2: shr     edx, 4
0x4D5CD5: test    dl, 1
0x4D5CD8: jz      short loc_4D5D0E
0x4D5CDA: push    0; int
0x4D5CDC: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4D5CE1: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4D5CE6: push    0; int
0x4D5CE8: push    esi; void *
0x4D5CE9: call    OblivionDynamicCast
0x4D5CEE: mov     edi, eax
0x4D5CF0: add     esp, 14h
0x4D5CF3: test    edi, edi
0x4D5CF5: jz      short loc_4D5D0E
0x4D5CF7: mov     eax, [edi]
0x4D5CF9: mov     edx, [eax+1A4h]
0x4D5CFF: mov     ecx, edi
0x4D5D01: call    edx
0x4D5D03: push    edi
0x4D5D04: mov     ecx, offset ActorProcessManager_ptr
0x4D5D09: call    sub_674E10
0x4D5D0E: mov     eax, [esp+14h+var_4]
0x4D5D12: mov     ecx, ds:0B33A1Ch
0x4D5D18: push    eax
0x4D5D19: push    esi
0x4D5D1A: call    sub_438060
0x4D5D1F: mov     edx, [esi]
0x4D5D21: mov     eax, [edx+154h]
0x4D5D27: mov     ecx, esi
0x4D5D29: call    eax
0x4D5D2B: test    eax, eax
0x4D5D2D: jz      short loc_4D5D37
0x4D5D2F: push    esi
0x4D5D30: mov     ecx, ebx
0x4D5D32: call    TESObjectCELL__AttachReference3DToQuad
0x4D5D37: test    ebp, ebp
0x4D5D39: jnz     loc_4D5C58
0x4D5D3F: pop     edi
0x4D5D40: push    ebx; a2
0x4D5D41: mov     ecx, offset stru_B35C80; this
0x4D5D46: call    sub_496F50
0x4D5D4B: pop     ebp
0x4D5D4C: cmp     [esp+0Ch+arg_0], 0
0x4D5D51: jz      short loc_4D5D5A
0x4D5D53: mov     ecx, ebx
0x4D5D55: call    sub_4D4D00
0x4D5D5A: pop     esi
0x4D5D5B: mov     byte ptr [ebx+26h], 6
0x4D5D5F: pop     ebx
0x4D5D60: pop     ecx
0x4D5D61: retn    4
