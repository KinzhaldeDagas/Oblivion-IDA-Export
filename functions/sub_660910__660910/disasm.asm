0x660910: sub     esp, 8
0x660913: push    ebx
0x660914: push    ebp
0x660915: push    esi
0x660916: mov     esi, [esp+14h+arg_0]
0x66091A: mov     eax, [esi]
0x66091C: mov     edx, [eax+170h]
0x660922: push    edi
0x660923: push    0
0x660925: mov     edi, ecx
0x660927: push    1
0x660929: mov     ecx, esi
0x66092B: call    edx
0x66092D: push    eax
0x66092E: mov     ecx, edi
0x660930: call    sub_5E99C0
0x660935: mov     eax, [esi]
0x660937: mov     edx, [eax+154h]
0x66093D: push    0
0x66093F: push    1
0x660941: push    1
0x660943: mov     ecx, esi
0x660945: call    edx
0x660947: push    eax
0x660948: call    sub_88CF90
0x66094D: mov     eax, [esi+0Ch]
0x660950: add     esp, 10h
0x660953: push    edi
0x660954: push    eax
0x660955: mov     ecx, offset ActorProcessManager_ptr
0x66095A: call    sub_674E40
0x66095F: mov     ebx, eax
0x660961: test    ebx, ebx
0x660963: mov     [esp+18h+arg_0], ebx
0x660967: jz      short loc_6609AA
0x660969: lea     esp, [esp+0]
0x660970: mov     ebp, [ebx]
0x660972: test    ebp, ebp
0x660974: jz      short loc_660994
0x660976: mov     ecx, ebp
0x660978: call    sub_5E2E00
0x66097D: cmp     eax, esi
0x66097F: mov     ecx, ebp
0x660981: jnz     short loc_660986
0x660983: push    edi
0x660984: jmp     short loc_660988
0x660986: push    0
0x660988: call    sub_5E03C0
0x66098D: mov     ebx, [ebx+4]
0x660990: test    ebx, ebx
0x660992: jnz     short loc_660970
0x660994: mov     ecx, [esp+18h+arg_0]
0x660998: call    BSSimpleList_Clear
0x66099D: mov     eax, [esp+18h+arg_0]
0x6609A1: push    eax
0x6609A2: call    FormHeapFree
0x6609A7: add     esp, 4
0x6609AA: push    0FFFFFFFFh; a2
0x6609AC: mov     ecx, esi; this
0x6609AE: call    TESForm_GetOverrideFile
0x6609B3: push    3F1h
0x6609B8: mov     [esp+1Ch+arg_0], eax
0x6609BC: call    Menu_GetOpenMenuTile
0x6609C1: add     esp, 4
0x6609C4: test    eax, eax
0x6609C6: jnz     loc_660AD4
0x6609CC: mov     ecx, ds:0B333C4h
0x6609D2: cmp     [ecx+124h], al
0x6609D8: jnz     loc_660AD4
0x6609DE: mov     ecx, esi; this
0x6609E0: call    TESObjectREFR_GetOwner
0x6609E5: push    0; int
0x6609E7: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x6609EC: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6609F1: push    0; int
0x6609F3: push    esi; void *
0x6609F4: mov     ebp, eax
0x6609F6: call    OblivionDynamicCast
0x6609FB: add     esp, 14h
0x6609FE: test    ebp, ebp
0x660A00: mov     ebx, eax
0x660A02: jz      loc_660ACC
0x660A08: push    1
0x660A0A: push    edi
0x660A0B: mov     ecx, esi
0x660A0D: call    TESOBjectREFR_IsOwnedBy
0x660A12: test    al, al
0x660A14: jnz     loc_660ACC
0x660A1A: test    ebx, ebx
0x660A1C: jnz     loc_660ACC
0x660A22: mov     edx, [esi]
0x660A24: mov     eax, [edx+170h]
0x660A2A: mov     ecx, esi
0x660A2C: call    eax
0x660A2E: cmp     dword ptr [eax+0Ch], 0Fh
0x660A32: jz      loc_660ACC
0x660A38: push    esi
0x660A39: mov     ecx, offset ActorProcessManager_ptr
0x660A3E: call    sub_676480
0x660A43: test    byte ptr [esi+8], 1
0x660A47: mov     ds:0B3BAF0h, eax
0x660A4C: jnz     short loc_660A90
0x660A4E: cmp     [esp+18h+arg_0], ebx
0x660A52: jnz     short loc_660A90
0x660A54: push    2
0x660A56: mov     ecx, esi
0x660A58: call    sub_4D8260
0x660A5D: test    al, al
0x660A5F: jnz     short loc_660A90
0x660A61: cmp     dword ptr ds:0B3BAF0h, 0
0x660A68: jz      short loc_660AB4
0x660A6A: mov     ecx, [esp+18h+arg_4]
0x660A6E: mov     edx, [esi]
0x660A70: mov     ebx, [edi]
0x660A72: mov     eax, [edx+170h]
0x660A78: push    ebp
0x660A79: push    0
0x660A7B: push    ecx
0x660A7C: mov     ecx, esi
0x660A7E: add     ebx, 238h
0x660A84: call    eax
0x660A86: mov     ecx, ds:0B3BAF0h
0x660A8C: push    eax
0x660A8D: push    ecx
0x660A8E: jmp     short loc_660AAE
0x660A90: mov     eax, [esp+18h+arg_4]
0x660A94: mov     edx, [esi]
0x660A96: mov     ebx, [edi]
0x660A98: push    ebp
0x660A99: push    0
0x660A9B: push    eax
0x660A9C: mov     eax, [edx+170h]
0x660AA2: mov     ecx, esi
0x660AA4: add     ebx, 238h
0x660AAA: call    eax
0x660AAC: push    eax
0x660AAD: push    esi
0x660AAE: mov     edx, [ebx]
0x660AB0: mov     ecx, edi
0x660AB2: call    edx
0x660AB4: push    0
0x660AB6: mov     ecx, esi
0x660AB8: call    sub_4DE880
0x660ABD: test    al, al
0x660ABF: lea     ecx, [esi+44h]
0x660AC2: jnz     short loc_660ACF
0x660AC4: push    ebp
0x660AC5: call    ExtraDataList__SetOrRemoveExtraOwnership
0x660ACA: jmp     short loc_660AD4
0x660ACC: lea     ecx, [esi+44h]
0x660ACF: call    ExtraDataList_RemoveOwner
0x660AD4: mov     ecx, [edi+58h]
0x660AD7: mov     eax, [ecx]
0x660AD9: mov     edx, [eax+0F4h]
0x660ADF: push    1
0x660AE1: xor     bl, bl
0x660AE3: call    edx
0x660AE5: test    eax, eax
0x660AE7: jz      loc_660BD7
0x660AED: mov     ecx, [edi+58h]
0x660AF0: mov     eax, [ecx]
0x660AF2: mov     edx, [eax+0F4h]
0x660AF8: push    1
0x660AFA: call    edx
0x660AFC: mov     ebp, [eax+8]
0x660AFF: mov     eax, [esi]
0x660B01: mov     edx, [eax+170h]
0x660B07: mov     ecx, esi
0x660B09: call    edx
0x660B0B: cmp     eax, ebp
0x660B0D: jnz     loc_660BD7
0x660B13: mov     ecx, [edi+58h]
0x660B16: mov     eax, [ecx]
0x660B18: mov     edx, [eax+0F4h]
0x660B1E: push    1
0x660B20: call    edx
0x660B22: mov     ecx, eax
0x660B24: call    sub_4847C0
0x660B29: test    al, al
0x660B2B: jz      short loc_660B3D
0x660B2D: lea     ecx, [esi+44h]
0x660B30: call    ExtraDataList_GetOwner
0x660B35: test    eax, eax
0x660B37: jz      loc_660BD7
0x660B3D: lea     ebx, [esi+44h]
0x660B40: mov     ecx, ebx
0x660B42: call    ExtraDataList_GetExtraCount
0x660B47: mov     ecx, [edi+58h]
0x660B4A: movsx   ebp, ax
0x660B4D: mov     eax, [ecx]
0x660B4F: mov     edx, [eax+0F4h]
0x660B55: push    1
0x660B57: call    edx
0x660B59: mov     ecx, eax
0x660B5B: call    TESHealthForm_GetHealth
0x660B60: mov     ecx, [edi+58h]
0x660B63: add     ebp, eax
0x660B65: mov     eax, [ecx]
0x660B67: mov     edx, [eax+0F4h]
0x660B6D: push    ebp
0x660B6E: push    1
0x660B70: call    edx
0x660B72: mov     ecx, eax
0x660B74: call    sub_60D020
0x660B79: mov     ecx, [edi+58h]
0x660B7C: mov     eax, [ecx]
0x660B7E: mov     edx, [eax+0F4h]
0x660B84: push    1
0x660B86: call    edx
0x660B88: mov     ecx, ds:0B333C4h
0x660B8E: mov     eax, [eax+8]
0x660B91: add     ecx, 44h ; 'D'
0x660B94: mov     [esp+18h+var_4], ecx
0x660B98: mov     ecx, ebx
0x660B9A: mov     [esp+18h+var_8], eax
0x660B9E: call    ExtraDataList_GetExtraCount
0x660BA3: mov     ecx, [esp+18h+var_4]; this
0x660BA7: movsx   edx, ax
0x660BAA: mov     eax, [esp+18h+var_8]
0x660BAE: push    edx
0x660BAF: push    eax
0x660BB0: call    ExtraDataList_GetContainerChanges
0x660BB5: mov     ecx, eax
0x660BB7: call    sub_487350
0x660BBC: mov     ecx, [edi+58h]
0x660BBF: mov     edx, [ecx]
0x660BC1: mov     eax, [edx+0F4h]
0x660BC7: push    1
0x660BC9: call    eax
0x660BCB: mov     ecx, [eax]
0x660BCD: mov     ecx, [ecx]
0x660BCF: push    ebp
0x660BD0: call    ExtraDataList_SetExtraCount
0x660BD5: mov     bl, 1
0x660BD7: test    byte ptr [esi+8], 1
0x660BDB: jnz     loc_660C81
0x660BE1: cmp     [esp+18h+arg_0], 0
0x660BE6: jnz     loc_660C81
0x660BEC: push    2
0x660BEE: mov     ecx, esi
0x660BF0: call    sub_4D8260
0x660BF5: test    al, al
0x660BF7: jz      short loc_660C29
0x660BF9: mov     ecx, esi
0x660BFB: call    sub_4D7D80
0x660C00: test    bl, bl
0x660C02: jnz     short loc_660C4D
0x660C04: mov     edx, [esp+18h+arg_4]
0x660C08: push    0
0x660C0A: push    0
0x660C0C: push    edx
0x660C0D: push    esi
0x660C0E: mov     ecx, edi
0x660C10: call    sub_4DDC40
0x660C15: push    0
0x660C17: call    sub_57A3B0
0x660C1C: add     esp, 4
0x660C1F: pop     edi
0x660C20: pop     esi
0x660C21: pop     ebp
0x660C22: pop     ebx
0x660C23: add     esp, 8
0x660C26: retn    0Ch
0x660C29: test    bl, bl
0x660C2B: jnz     short loc_660C3E
0x660C2D: mov     eax, [esp+18h+arg_4]
0x660C31: push    0
0x660C33: push    0
0x660C35: push    eax
0x660C36: push    esi
0x660C37: mov     ecx, edi
0x660C39: call    sub_4DDC40
0x660C3E: mov     edx, [esi]
0x660C40: mov     eax, [edx+10h]
0x660C43: push    1
0x660C45: mov     ecx, esi
0x660C47: call    eax
0x660C49: test    bl, bl
0x660C4B: jz      short loc_660C6D
0x660C4D: mov     eax, [edi+104h]
0x660C53: push    0
0x660C55: push    eax
0x660C56: mov     ecx, edi
0x660C58: call    sub_5F8300
0x660C5D: mov     ecx, [edi+5C8h]
0x660C63: push    0
0x660C65: push    ecx
0x660C66: mov     ecx, edi
0x660C68: call    sub_5F8300
0x660C6D: push    0
0x660C6F: call    sub_57A3B0
0x660C74: add     esp, 4
0x660C77: pop     edi
0x660C78: pop     esi
0x660C79: pop     ebp
0x660C7A: pop     ebx
0x660C7B: add     esp, 8
0x660C7E: retn    0Ch
0x660C81: mov     ecx, esi
0x660C83: call    sub_4D7D80
0x660C88: test    bl, bl
0x660C8A: jnz     short loc_660C4D
0x660C8C: mov     ecx, [esp+18h+arg_8]
0x660C90: mov     edx, [esp+18h+arg_4]
0x660C94: push    0
0x660C96: push    ecx
0x660C97: push    edx
0x660C98: push    esi
0x660C99: mov     ecx, edi
0x660C9B: call    sub_4DDC40
0x660CA0: push    0
0x660CA2: call    sub_57A3B0
0x660CA7: add     esp, 4
0x660CAA: pop     edi
0x660CAB: pop     esi
0x660CAC: pop     ebp
0x660CAD: pop     ebx
0x660CAE: add     esp, 8
0x660CB1: retn    0Ch
