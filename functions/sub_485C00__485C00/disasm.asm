0x485C00: push    ecx
0x485C01: push    ebx
0x485C02: push    ebp
0x485C03: push    esi
0x485C04: push    edi
0x485C05: mov     edi, ecx
0x485C07: mov     eax, [edi]
0x485C09: xor     ebp, ebp
0x485C0B: test    eax, eax
0x485C0D: jz      short loc_485C68
0x485C0F: mov     esi, [eax]
0x485C11: test    esi, esi
0x485C13: jz      short loc_485C68
0x485C15: mov     ecx, esi
0x485C17: call    ExtraDataList_GetOwner
0x485C1C: test    eax, eax
0x485C1E: jz      short loc_485C68
0x485C20: mov     ecx, esi
0x485C22: call    ExtraDataList_GetOwner
0x485C27: test    eax, eax
0x485C29: jz      short loc_485C68
0x485C2B: mov     eax, [edi]
0x485C2D: test    eax, eax
0x485C2F: jz      short loc_485C4D
0x485C31: mov     esi, [eax]
0x485C33: test    esi, esi
0x485C35: jz      short loc_485C4D
0x485C37: mov     ecx, esi
0x485C39: call    ExtraDataList_GetOwner
0x485C3E: test    eax, eax
0x485C40: jz      short loc_485C4D
0x485C42: mov     ecx, esi
0x485C44: call    ExtraDataList_GetOwner
0x485C49: mov     esi, eax
0x485C4B: jmp     short loc_485C4F
0x485C4D: xor     esi, esi
0x485C4F: mov     ecx, ds:0B333C4h
0x485C55: mov     eax, [ecx]
0x485C57: mov     edx, [eax+170h]
0x485C5D: call    edx
0x485C5F: cmp     esi, eax
0x485C61: jz      short loc_485C68
0x485C63: mov     ebp, 1
0x485C68: mov     eax, [edi+8]
0x485C6B: push    0; int
0x485C6D: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x485C72: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x485C77: push    0; int
0x485C79: push    eax; void *
0x485C7A: call    OblivionDynamicCast
0x485C7F: add     esp, 14h
0x485C82: test    eax, eax
0x485C84: jz      short loc_485C8F
0x485C86: cmp     dword ptr [eax+4], 0
0x485C8A: jz      short loc_485C8F
0x485C8C: or      ebp, 2
0x485C8F: mov     eax, [edi]
0x485C91: test    eax, eax
0x485C93: jz      short loc_485CB4
0x485C95: mov     esi, [eax]
0x485C97: test    esi, esi
0x485C99: jz      short loc_485CB4
0x485C9B: mov     ecx, esi
0x485C9D: call    ExtraDataList_GetPoison
0x485CA2: test    eax, eax
0x485CA4: jz      short loc_485CB4
0x485CA6: mov     ecx, esi
0x485CA8: call    ExtraDataList_GetPoison
0x485CAD: test    eax, eax
0x485CAF: jz      short loc_485CB4
0x485CB1: or      ebp, 4
0x485CB4: mov     eax, [edi+8]
0x485CB7: push    0; int
0x485CB9: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x485CBE: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x485CC3: push    0; int
0x485CC5: push    eax; void *
0x485CC6: call    OblivionDynamicCast
0x485CCB: mov     ebx, eax
0x485CCD: add     esp, 14h
0x485CD0: test    ebx, ebx
0x485CD2: jz      short loc_485D3F
0x485CD4: mov     eax, [edi]
0x485CD6: test    eax, eax
0x485CD8: jz      short loc_485D10
0x485CDA: mov     esi, [eax]
0x485CDC: test    esi, esi
0x485CDE: jz      short loc_485D10
0x485CE0: mov     ecx, esi
0x485CE2: call    ExtraDataList_GetHealthData
0x485CE7: fcomp   dword ptr ds:0A30634h
0x485CED: fnstsw  ax
0x485CEF: test    ah, 44h
0x485CF2: jnp     short loc_485CFD
0x485CF4: mov     ecx, esi
0x485CF6: call    ExtraDataList_GetHealthData
0x485CFB: jmp     short loc_485D2B
0x485CFD: mov     edx, [ebx]
0x485CFF: mov     eax, [edx+10h]
0x485D02: mov     ecx, ebx
0x485D04: call    eax
0x485D06: mov     [esp+14h+var_4], eax
0x485D0A: fild    [esp+14h+var_4]
0x485D0E: jmp     short loc_485D21
0x485D10: mov     edx, [ebx]
0x485D12: mov     eax, [edx+10h]
0x485D15: mov     ecx, ebx
0x485D17: call    eax
0x485D19: mov     [esp+14h+var_4], eax
0x485D1D: fild    [esp+14h+var_4]
0x485D21: test    eax, eax
0x485D23: jge     short loc_485D2B
0x485D25: fadd    dword ptr ds:0A2FC78h
0x485D2B: fstp    [esp+14h+var_4]
0x485D2F: fldz
0x485D31: fcomp   [esp+14h+var_4]
0x485D35: fnstsw  ax
0x485D37: test    ah, 44h
0x485D3A: jp      short loc_485D3F
0x485D3C: or      ebp, 8
0x485D3F: pop     edi
0x485D40: pop     esi
0x485D41: mov     eax, ebp
0x485D43: pop     ebp
0x485D44: pop     ebx
0x485D45: pop     ecx
0x485D46: retn
