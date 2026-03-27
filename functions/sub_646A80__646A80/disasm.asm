0x646A80: push    esi
0x646A81: mov     esi, [esp+4+arg_0]
0x646A85: test    esi, esi
0x646A87: jz      loc_646C1F
0x646A8D: mov     ecx, [esp+4+arg_4]
0x646A91: cmp     esi, ecx
0x646A93: jz      loc_646C1F
0x646A99: mov     eax, [esi+8]
0x646A9C: mov     edx, eax
0x646A9E: shr     edx, 5
0x646AA1: test    dl, 1
0x646AA4: jnz     loc_646C1F
0x646AAA: mov     edx, eax
0x646AAC: shr     edx, 0Eh
0x646AAF: test    dl, 1
0x646AB2: jnz     loc_646C1F
0x646AB8: shr     eax, 0Bh
0x646ABB: test    al, 1
0x646ABD: jnz     loc_646C1F
0x646AC3: test    ecx, ecx
0x646AC5: jnz     short loc_646ACB
0x646AC7: mov     al, 1
0x646AC9: pop     esi
0x646ACA: retn
0x646ACB: mov     eax, [ecx+58h]
0x646ACE: push    edi
0x646ACF: push    0; int
0x646AD1: push    offset ??_R0?AVLowProcess@@@8; struct TypeDescriptor *
0x646AD6: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x646ADB: push    0; int
0x646ADD: push    eax; void *
0x646ADE: call    OblivionDynamicCast
0x646AE3: mov     edi, eax
0x646AE5: add     esp, 14h
0x646AE8: test    edi, edi
0x646AEA: jnz     short loc_646AF1
0x646AEC: pop     edi
0x646AED: mov     al, 1
0x646AEF: pop     esi
0x646AF0: retn
0x646AF1: mov     eax, [edi+6Ch]
0x646AF4: test    eax, eax
0x646AF6: push    ebx
0x646AF7: jz      short loc_646B25
0x646AF9: push    eax
0x646AFA: mov     eax, [esi]
0x646AFC: mov     edx, [eax+170h]
0x646B02: mov     ecx, esi
0x646B04: call    edx
0x646B06: push    eax
0x646B07: call    sub_568370
0x646B0C: add     esp, 8
0x646B0F: test    al, al
0x646B11: jz      short loc_646B25
0x646B13: mov     eax, [esi]
0x646B15: mov     edx, [eax+198h]
0x646B1B: push    0
0x646B1D: mov     ecx, esi
0x646B1F: call    edx
0x646B21: test    al, al
0x646B23: jmp     short loc_646B44
0x646B25: mov     ebx, [edi+68h]
0x646B28: test    ebx, ebx
0x646B2A: jz      short loc_646B3C
0x646B2C: mov     eax, [esi]
0x646B2E: mov     edx, [eax+170h]
0x646B34: mov     ecx, esi
0x646B36: call    edx
0x646B38: cmp     ebx, eax
0x646B3A: jz      short loc_646B13
0x646B3C: cmp     dword ptr [edi+6Ch], 0
0x646B40: jnz     short loc_646B58
0x646B42: test    ebx, ebx
0x646B44: jnz     short loc_646B58
0x646B46: push    1
0x646B48: mov     ecx, esi
0x646B4A: call    Actor__SetCompressedFlag
0x646B4F: push    esi
0x646B50: lea     ecx, [edi+5Ch]
0x646B53: call    BSSimpleList_PushBack
0x646B58: mov     eax, [esi]
0x646B5A: mov     edx, [eax+190h]
0x646B60: mov     ecx, esi
0x646B62: call    edx
0x646B64: test    al, al
0x646B66: jz      short loc_646B70
0x646B68: cmp     esi, ds:0B333C4h
0x646B6E: jnz     short loc_646B86
0x646B70: mov     eax, [esi]
0x646B72: mov     edx, [eax+170h]
0x646B78: mov     ecx, esi
0x646B7A: call    edx
0x646B7C: cmp     byte ptr [eax+4], 17h
0x646B80: jnz     loc_646C19
0x646B86: push    ebp
0x646B87: push    0
0x646B89: mov     ecx, esi
0x646B8B: call    TESObjectREF_GetTotalEntryCountForITem
0x646B90: xor     ebp, ebp
0x646B92: test    eax, eax
0x646B94: mov     [esp+10h+arg_0], eax
0x646B98: jle     short loc_646C18
0x646B9A: lea     ebx, [ebx+0]
0x646BA0: push    0; a3
0x646BA2: push    ebp; a2
0x646BA3: mov     ecx, esi; this
0x646BA5: call    GetInventoryEntryOfItem
0x646BAA: mov     ebx, eax
0x646BAC: test    ebx, ebx
0x646BAE: jz      short loc_646C0F
0x646BB0: push    0
0x646BB2: mov     ecx, ebx
0x646BB4: call    ContainerEntryExtraData_HasWorn
0x646BB9: test    al, al
0x646BBB: jnz     short loc_646BFF
0x646BBD: mov     eax, [edi+6Ch]
0x646BC0: test    eax, eax
0x646BC2: jz      short loc_646BD5
0x646BC4: mov     ecx, [ebx+8]
0x646BC7: push    eax
0x646BC8: push    ecx
0x646BC9: call    sub_568370
0x646BCE: add     esp, 8
0x646BD1: test    al, al
0x646BD3: jnz     short loc_646BED
0x646BD5: mov     eax, [edi+68h]
0x646BD8: cmp     eax, [ebx+8]
0x646BDB: jz      short loc_646BED
0x646BDD: cmp     dword ptr [edi+6Ch], 0
0x646BE1: jnz     short loc_646BFF
0x646BE3: cmp     dword ptr [edi+64h], 0
0x646BE7: jnz     short loc_646BFF
0x646BE9: test    eax, eax
0x646BEB: jnz     short loc_646BFF
0x646BED: push    1
0x646BEF: mov     ecx, esi
0x646BF1: call    Actor__SetCompressedFlag
0x646BF6: push    esi
0x646BF7: lea     ecx, [edi+5Ch]
0x646BFA: call    BSSimpleList_PushBack
0x646BFF: mov     ecx, ebx
0x646C01: call    ContainerEntryExtraData_DestroyDataTable
0x646C06: push    ebx
0x646C07: call    FormHeapFree
0x646C0C: add     esp, 4
0x646C0F: add     ebp, 1
0x646C12: cmp     ebp, [esp+10h+arg_0]
0x646C16: jl      short loc_646BA0
0x646C18: pop     ebp
0x646C19: pop     ebx
0x646C1A: pop     edi
0x646C1B: xor     al, al
0x646C1D: pop     esi
0x646C1E: retn
0x646C1F: xor     al, al
0x646C21: pop     esi
0x646C22: retn
