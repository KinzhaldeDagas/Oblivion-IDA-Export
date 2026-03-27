0x48F98E: mov     ecx, [esi]
0x48F990: push    ebx
0x48F991: call    BSSimpleList_PushFront
0x48F996: push    1
0x48F998: push    esi
0x48F999: mov     ecx, edi
0x48F99B: call    ContainerExtraData_AddEntry
0x48F9A0: jmp     loc_48FB9F
0x48F9A5: cmp     [ebp+4], esi
0x48F9A8: jge     short loc_48F9E9
0x48F9AA: cmp     ebx, esi
0x48F9AC: jz      loc_48FA70
0x48F9B2: mov     ecx, ebx
0x48F9B4: call    ExtraDataList_GetOwner
0x48F9B9: test    eax, eax
0x48F9BB: jnz     short loc_48F9E9
0x48F9BD: mov     esi, [ebp+0]
0x48F9C0: test    esi, esi
0x48F9C2: jz      short loc_48F9E9
0x48F9C4: mov     ecx, esi
0x48F9C6: call    BSSimpleList_Count
0x48F9CB: test    eax, eax
0x48F9CD: jz      short loc_48F9E9
0x48F9CF: mov     ecx, [esi]
0x48F9D1: call    sub_41DEF0
0x48F9D6: test    al, al
0x48F9D8: jz      short loc_48F9E9
0x48F9DA: mov     edx, [ebx]
0x48F9DC: mov     eax, [edx]
0x48F9DE: push    1
0x48F9E0: mov     ecx, ebx
0x48F9E2: call    eax
0x48F9E4: jmp     loc_48FA70
0x48F9E9: test    ebx, ebx
0x48F9EB: jz      loc_48FA70
0x48F9F1: mov     eax, [ebp+0]
0x48F9F4: test    eax, eax
0x48F9F6: jz      loc_48FAF2
0x48F9FC: mov     edi, eax
0x48F9FE: mov     bl, 1
0x48FA00: mov     esi, [edi]
0x48FA02: test    esi, esi
0x48FA04: jz      short loc_48FA54
0x48FA06: test    bl, bl
0x48FA08: jz      loc_48FAC3
0x48FA0E: mov     ecx, [esp+8+arg_20]
0x48FA12: push    esi
0x48FA13: call    ExtraDataList_CompareListForContainer
0x48FA18: test    al, al
0x48FA1A: jz      short loc_48FA21
0x48FA1C: mov     edi, [edi+4]
0x48FA1F: jmp     short loc_48FA50
0x48FA21: mov     ecx, esi
0x48FA23: call    ExtraDataList_GetExtraCount
0x48FA28: add     ax, word ptr [esp+0Ch+arg_20]
0x48FA2D: mov     ecx, esi
0x48FA2F: push    eax
0x48FA30: call    ExtraDataList_SetExtraCount
0x48FA35: cmp     dword ptr [esi+4], 0
0x48FA39: jnz     short loc_48FA4E
0x48FA3B: mov     ecx, [ebp+0]
0x48FA3E: push    esi
0x48FA3F: call    BSSimpleList_Remove
0x48FA44: mov     edx, [esi]
0x48FA46: mov     eax, [edx]
0x48FA48: push    1
0x48FA4A: mov     ecx, esi
0x48FA4C: call    eax
0x48FA4E: xor     bl, bl
0x48FA50: test    edi, edi
0x48FA52: jnz     short loc_48FA00
0x48FA54: test    bl, bl
0x48FA56: jz      short loc_48FAC3
0x48FA58: mov     esi, [esp+0Ch+arg_1C]
0x48FA5C: cmp     dword ptr [esi+4], 0
0x48FA60: jnz     short loc_48FA85
0x48FA62: mov     edx, [esi]
0x48FA64: push    1
0x48FA66: mov     ecx, esi
0x48FA68: mov     eax, [edx]
0x48FA6A: call    eax
0x48FA6C: mov     edi, [esp+10h+arg_0]
0x48FA70: mov     ecx, [edi+4]; this
0x48FA73: test    ecx, ecx
0x48FA75: jz      loc_48FB2F
0x48FA7B: call    TESObjectREFR_GetContainer
0x48FA80: jmp     loc_48FB31
0x48FA85: cmp     dword ptr [ebp+0], 0
0x48FA89: jnz     short loc_48FAB8
0x48FA8B: push    8; Size
0x48FA8D: call    FormHeapAlloc
0x48FA92: add     esp, 4
0x48FA95: test    eax, eax
0x48FA97: jz      short loc_48FAB3
0x48FA99: mov     dword ptr [eax], 0
0x48FA9F: mov     dword ptr [eax+4], 0
0x48FAA6: push    esi
0x48FAA7: mov     ecx, eax
0x48FAA9: mov     [ebp+0], eax
0x48FAAC: call    BSSimpleList_PushFront
0x48FAB1: jmp     short loc_48FA6C
0x48FAB3: xor     eax, eax
0x48FAB5: mov     [ebp+0], eax
0x48FAB8: mov     ecx, [ebp+0]
0x48FABB: push    esi
0x48FABC: call    BSSimpleList_PushFront
0x48FAC1: jmp     short loc_48FA6C
0x48FAC3: push    3F0h
0x48FAC8: call    Menu_GetOpenMenuTile
0x48FACD: add     esp, 4
0x48FAD0: test    eax, eax
0x48FAD2: jz      short loc_48FAE5
0x48FAD4: mov     ecx, eax
0x48FAD6: call    Tile_GetParentMenu
0x48FADB: test    eax, eax
0x48FADD: jz      short loc_48FAE5
0x48FADF: cmp     byte ptr [eax+61h], 0
0x48FAE3: jnz     short loc_48FA6C
0x48FAE5: mov     ecx, [esp+0Ch+arg_1C]
0x48FAE9: mov     edx, [ecx]
0x48FAEB: push    1
0x48FAED: jmp     loc_48FA68
0x48FAF2: push    8; Size
0x48FAF4: call    FormHeapAlloc
0x48FAF9: add     esp, 4
0x48FAFC: test    eax, eax
0x48FAFE: jz      short loc_48FB1D
0x48FB00: mov     dword ptr [eax], 0
0x48FB06: mov     dword ptr [eax+4], 0
0x48FB0D: push    ebx
0x48FB0E: mov     ecx, eax
0x48FB10: mov     [ebp+0], eax
0x48FB13: call    BSSimpleList_PushFront
0x48FB18: jmp     loc_48FA70
0x48FB1D: xor     eax, eax
0x48FB1F: push    ebx
0x48FB20: mov     ecx, eax
0x48FB22: mov     [ebp+0], eax
0x48FB25: call    BSSimpleList_PushFront
0x48FB2A: jmp     loc_48FA70
0x48FB2F: xor     eax, eax
0x48FB31: mov     ecx, [esp+8+arg_1C]
0x48FB35: push    ecx
0x48FB36: mov     ecx, eax
0x48FB38: call    TESContainer_GetFormCount
0x48FB3D: mov     ecx, [ebp+4]
0x48FB40: test    ecx, ecx
0x48FB42: jge     short loc_48FB51
0x48FB44: test    eax, eax
0x48FB46: jg      short loc_48FB51
0x48FB48: mov     edx, [esp+8+arg_24]
0x48FB4C: mov     [ebp+4], edx
0x48FB4F: jmp     short loc_48FB5A
0x48FB51: mov     eax, [esp+8+arg_24]
0x48FB55: add     ecx, eax
0x48FB57: mov     [ebp+4], ecx
0x48FB5A: mov     eax, [ebp+0]
0x48FB5D: test    eax, eax
0x48FB5F: jz      short loc_48FB9F
0x48FB61: cmp     dword ptr [eax+4], 0
0x48FB65: jnz     short loc_48FB9F
0x48FB67: cmp     dword ptr [eax], 0
0x48FB6A: jnz     short loc_48FB9F
0x48FB6C: cmp     dword ptr [ebp+4], 0
0x48FB70: jnz     short loc_48FB9F
0x48FB72: mov     ecx, [edi]
0x48FB74: push    ebp
0x48FB75: call    BSSimpleList_Remove
0x48FB7A: mov     ecx, [ebp+0]
0x48FB7D: test    ecx, ecx
0x48FB7F: jz      short loc_48FB86
0x48FB81: call    BSSimpleList_Clear
0x48FB86: mov     ecx, [ebp+0]
0x48FB89: push    ecx
0x48FB8A: call    FormHeapFree
0x48FB8F: push    ebp
0x48FB90: mov     dword ptr [ebp+0], 0
0x48FB97: call    FormHeapFree
0x48FB9C: add     esp, 8
0x48FB9F: mov     ecx, [esp+8+arg_C]
0x48FBA3: mov     large fs:0, ecx
0x48FBAA: pop     ecx
0x48FBAB: pop     edi
0x48FBAC: pop     esi
0x48FBAD: pop     ebp
0x48FBAE: pop     ebx
0x48FBAF: add     esp, 10h
0x48FBB2: retn    0Ch
