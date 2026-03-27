0x47AA00: push    ebx
0x47AA01: push    ebp
0x47AA02: push    esi
0x47AA03: push    edi
0x47AA04: mov     edi, [esp+10h+arg_0]
0x47AA08: push    0; int
0x47AA0A: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x47AA0F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x47AA14: push    0; int
0x47AA16: push    edi; void *
0x47AA17: mov     esi, ecx
0x47AA19: call    OblivionDynamicCast
0x47AA1E: push    0; int
0x47AA20: push    offset ??_R0?AVTESRace@@@8; struct TypeDescriptor *
0x47AA25: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x47AA2A: push    0; int
0x47AA2C: push    edi; void *
0x47AA2D: mov     ebp, eax
0x47AA2F: call    OblivionDynamicCast
0x47AA34: add     esp, 28h
0x47AA37: test    ebp, ebp
0x47AA39: jz      loc_47AB3E
0x47AA3F: mov     ebx, [esp+10h+arg_8]
0x47AA43: cmp     ebx, 0FFFFFFFFh
0x47AA46: jz      short loc_47AA95
0x47AA48: push    0
0x47AA4A: push    7
0x47AA4C: mov     ecx, ebp
0x47AA4E: call    TESBipedModelForm_CoversSlot
0x47AA53: test    al, al
0x47AA55: jnz     short loc_47AA66
0x47AA57: push    0
0x47AA59: push    6
0x47AA5B: mov     ecx, ebp
0x47AA5D: call    TESBipedModelForm_CoversSlot
0x47AA62: test    al, al
0x47AA64: jz      short loc_47AA95
0x47AA66: mov     eax, ebx
0x47AA68: push    0
0x47AA6A: shl     eax, 4
0x47AA6D: lea     edi, [eax+esi+4Ch]
0x47AA71: push    1
0x47AA73: push    edi
0x47AA74: mov     ecx, esi
0x47AA76: call    sub_478780
0x47AA7B: mov     ecx, [esp+10h+arg_0]
0x47AA7F: mov     edx, [esp+10h+arg_4]
0x47AA83: add     ebx, 5
0x47AA86: shl     ebx, 4
0x47AA89: mov     [edi], ecx
0x47AA8B: pop     edi
0x47AA8C: mov     [ebx+esi], edx
0x47AA8F: pop     esi
0x47AA90: pop     ebp
0x47AA91: pop     ebx
0x47AA92: retn    0Ch
0x47AA95: xor     ebx, ebx
0x47AA97: lea     edi, [esi+4Ch]
0x47AA9A: lea     ebx, [ebx+0]
0x47AAA0: push    0
0x47AAA2: push    ebx
0x47AAA3: mov     ecx, ebp
0x47AAA5: call    TESBipedModelForm_CoversSlot
0x47AAAA: test    al, al
0x47AAAC: jz      short loc_47AAED
0x47AAAE: mov     eax, [edi]
0x47AAB0: cmp     eax, [esp+10h+arg_0]
0x47AAB4: jz      short loc_47AAED
0x47AAB6: test    eax, eax
0x47AAB8: jz      short loc_47AAE3
0x47AABA: push    0; int
0x47AABC: push    offset ??_R0?AVTESRace@@@8; struct TypeDescriptor *
0x47AAC1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x47AAC6: push    0; int
0x47AAC8: push    eax; void *
0x47AAC9: call    OblivionDynamicCast
0x47AACE: add     esp, 14h
0x47AAD1: test    eax, eax
0x47AAD3: jz      short loc_47AAE3
0x47AAD5: push    0
0x47AAD7: push    1
0x47AAD9: push    edi
0x47AADA: mov     ecx, esi
0x47AADC: call    sub_478780
0x47AAE1: jmp     short loc_47AAED
0x47AAE3: mov     eax, [edi]
0x47AAE5: push    eax
0x47AAE6: mov     ecx, esi
0x47AAE8: call    sub_479740
0x47AAED: add     ebx, 1
0x47AAF0: add     edi, 10h
0x47AAF3: cmp     ebx, 10h
0x47AAF6: jb      short loc_47AAA0
0x47AAF8: xor     edi, edi
0x47AAFA: lea     ebx, [ebx+0]
0x47AB00: push    1
0x47AB02: push    edi
0x47AB03: mov     ecx, ebp
0x47AB05: call    TESBipedModelForm_CoversSlot
0x47AB0A: test    al, al
0x47AB0C: jnz     short loc_47AB1D
0x47AB0E: add     edi, 1
0x47AB11: cmp     edi, 10h
0x47AB14: jb      short loc_47AB00
0x47AB16: pop     edi
0x47AB17: pop     esi
0x47AB18: pop     ebp
0x47AB19: pop     ebx
0x47AB1A: retn    0Ch
0x47AB1D: mov     eax, [esp+10h+arg_4]
0x47AB21: mov     edx, [esp+10h+arg_0]
0x47AB25: mov     ecx, edi
0x47AB27: add     edi, 5
0x47AB2A: shl     ecx, 4
0x47AB2D: shl     edi, 4
0x47AB30: mov     [edi+esi], eax
0x47AB33: pop     edi
0x47AB34: mov     [ecx+esi+4Ch], edx
0x47AB38: pop     esi
0x47AB39: pop     ebp
0x47AB3A: pop     ebx
0x47AB3B: retn    0Ch
0x47AB3E: test    eax, eax
0x47AB40: jz      short loc_47AB6E
0x47AB42: mov     ebx, [esp+10h+arg_8]
0x47AB46: mov     ecx, ebx
0x47AB48: shl     ecx, 4
0x47AB4B: push    0
0x47AB4D: lea     edi, [ecx+esi+4Ch]
0x47AB51: push    1
0x47AB53: push    edi
0x47AB54: mov     ecx, esi
0x47AB56: call    sub_478780
0x47AB5B: mov     edx, [esp+10h+arg_0]
0x47AB5F: mov     eax, [esp+10h+arg_4]
0x47AB63: add     ebx, 5
0x47AB66: shl     ebx, 4
0x47AB69: mov     [edi], edx
0x47AB6B: mov     [ebx+esi], eax
0x47AB6E: pop     edi
0x47AB6F: pop     esi
0x47AB70: pop     ebp
0x47AB71: pop     ebx
0x47AB72: retn    0Ch
