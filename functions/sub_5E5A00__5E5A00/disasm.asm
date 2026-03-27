0x5E5A00: push    0FFFFFFFFh
0x5E5A02: push    offset SEH_5E5A00
0x5E5A07: mov     eax, large fs:0
0x5E5A0D: push    eax
0x5E5A0E: sub     esp, 10h
0x5E5A11: push    ebx
0x5E5A12: push    ebp
0x5E5A13: push    esi
0x5E5A14: push    edi
0x5E5A15: mov     eax, ds:0B30AACh
0x5E5A1A: xor     eax, esp
0x5E5A1C: push    eax
0x5E5A1D: lea     eax, [esp+30h+var_C]
0x5E5A21: mov     large fs:0, eax
0x5E5A27: mov     ebp, ecx
0x5E5A29: mov     [esp+30h+var_10], ebp
0x5E5A2D: xor     esi, esi
0x5E5A2F: mov     [esp+30h+var_1C], esi
0x5E5A33: mov     [esp+30h+var_14], esi
0x5E5A37: xor     bl, bl
0x5E5A39: lea     esp, [esp+0]
0x5E5A40: cmp     [esp+30h+var_14], 7
0x5E5A45: jge     loc_5E5C5E
0x5E5A4B: push    0; Seed
0x5E5A4D: call    GetRandomLargeInteger?
0x5E5A52: cdq
0x5E5A53: mov     ecx, 64h ; 'd'
0x5E5A58: idiv    ecx
0x5E5A5A: mov     edi, ds:0B36EC8h
0x5E5A60: add     esp, 4
0x5E5A63: cmp     edx, edi
0x5E5A65: mov     [esp+30h+var_18], edx
0x5E5A69: jge     short loc_5E5ABA
0x5E5A6B: test    bl, 1
0x5E5A6E: jnz     short loc_5E5A8D
0x5E5A70: lea     ecx, [ebp+44h]; this
0x5E5A73: xor     esi, esi
0x5E5A75: call    ExtraDataList_GetContainerChanges
0x5E5A7A: test    eax, eax
0x5E5A7C: jz      short loc_5E5A8A
0x5E5A7E: push    1
0x5E5A80: push    esi
0x5E5A81: mov     ecx, eax
0x5E5A83: call    ContainerExtraData_GetEquippedInstance
0x5E5A88: mov     esi, eax
0x5E5A8A: or      bl, 1
0x5E5A8D: test    esi, esi
0x5E5A8F: jnz     short loc_5E5AB6
0x5E5A91: test    bl, 2
0x5E5A94: jnz     short loc_5E5ABA
0x5E5A96: lea     ecx, [ebp+44h]; this
0x5E5A99: call    ExtraDataList_GetContainerChanges
0x5E5A9E: test    eax, eax
0x5E5AA0: jz      short loc_5E5AAF
0x5E5AA2: push    1
0x5E5AA4: push    1
0x5E5AA6: mov     ecx, eax
0x5E5AA8: call    ContainerExtraData_GetEquippedInstance
0x5E5AAD: mov     esi, eax
0x5E5AAF: or      bl, 2
0x5E5AB2: test    esi, esi
0x5E5AB4: jz      short loc_5E5ABA
0x5E5AB6: mov     [esp+30h+var_1C], esi
0x5E5ABA: add     edi, ds:0B36EB8h
0x5E5AC0: cmp     [esp+30h+var_1C], 0
0x5E5AC5: jnz     short loc_5E5AF8
0x5E5AC7: cmp     [esp+30h+var_18], edi
0x5E5ACB: jge     short loc_5E5AF8
0x5E5ACD: test    bl, 4
0x5E5AD0: jnz     short loc_5E5AF0
0x5E5AD2: lea     ecx, [ebp+44h]; this
0x5E5AD5: xor     esi, esi
0x5E5AD7: call    ExtraDataList_GetContainerChanges
0x5E5ADC: test    eax, eax
0x5E5ADE: jz      short loc_5E5AED
0x5E5AE0: push    1
0x5E5AE2: push    2
0x5E5AE4: mov     ecx, eax
0x5E5AE6: call    ContainerExtraData_GetEquippedInstance
0x5E5AEB: mov     esi, eax
0x5E5AED: or      bl, 4
0x5E5AF0: test    esi, esi
0x5E5AF2: jz      short loc_5E5AF8
0x5E5AF4: mov     [esp+30h+var_1C], esi
0x5E5AF8: add     edi, ds:0B36EC0h
0x5E5AFE: cmp     [esp+30h+var_1C], 0
0x5E5B03: jnz     short loc_5E5B36
0x5E5B05: cmp     [esp+30h+var_18], edi
0x5E5B09: jge     short loc_5E5B36
0x5E5B0B: test    bl, 8
0x5E5B0E: jnz     short loc_5E5B2E
0x5E5B10: lea     ecx, [ebp+44h]; this
0x5E5B13: xor     esi, esi
0x5E5B15: call    ExtraDataList_GetContainerChanges
0x5E5B1A: test    eax, eax
0x5E5B1C: jz      short loc_5E5B2B
0x5E5B1E: push    1
0x5E5B20: push    3
0x5E5B22: mov     ecx, eax
0x5E5B24: call    ContainerExtraData_GetEquippedInstance
0x5E5B29: mov     esi, eax
0x5E5B2B: or      bl, 8
0x5E5B2E: test    esi, esi
0x5E5B30: jz      short loc_5E5B36
0x5E5B32: mov     [esp+30h+var_1C], esi
0x5E5B36: add     edi, ds:0B36ED0h
0x5E5B3C: cmp     [esp+30h+var_1C], 0
0x5E5B41: jnz     short loc_5E5B74
0x5E5B43: cmp     [esp+30h+var_18], edi
0x5E5B47: jge     short loc_5E5B74
0x5E5B49: test    bl, 10h
0x5E5B4C: jnz     short loc_5E5B6C
0x5E5B4E: lea     ecx, [ebp+44h]; this
0x5E5B51: xor     esi, esi
0x5E5B53: call    ExtraDataList_GetContainerChanges
0x5E5B58: test    eax, eax
0x5E5B5A: jz      short loc_5E5B69
0x5E5B5C: push    1
0x5E5B5E: push    4
0x5E5B60: mov     ecx, eax
0x5E5B62: call    ContainerExtraData_GetEquippedInstance
0x5E5B67: mov     esi, eax
0x5E5B69: or      bl, 10h
0x5E5B6C: test    esi, esi
0x5E5B6E: jz      short loc_5E5B74
0x5E5B70: mov     [esp+30h+var_1C], esi
0x5E5B74: mov     eax, [esp+30h+var_1C]
0x5E5B78: add     edi, ds:0B36ED8h
0x5E5B7E: test    eax, eax
0x5E5B80: jnz     loc_5E5C62
0x5E5B86: cmp     [esp+30h+var_18], edi
0x5E5B8A: jge     short loc_5E5BC0
0x5E5B8C: test    bl, 20h
0x5E5B8F: jnz     short loc_5E5BAF
0x5E5B91: lea     ecx, [ebp+44h]; this
0x5E5B94: xor     esi, esi
0x5E5B96: call    ExtraDataList_GetContainerChanges
0x5E5B9B: test    eax, eax
0x5E5B9D: jz      short loc_5E5BAC
0x5E5B9F: push    1
0x5E5BA1: push    5
0x5E5BA3: mov     ecx, eax
0x5E5BA5: call    ContainerExtraData_GetEquippedInstance
0x5E5BAA: mov     esi, eax
0x5E5BAC: or      bl, 20h
0x5E5BAF: test    esi, esi
0x5E5BB1: jz      loc_5E5C48
0x5E5BB7: mov     [esp+30h+var_1C], esi
0x5E5BBB: jmp     loc_5E5C41
0x5E5BC0: test    bl, 0
0x5E5BC3: jnz     short loc_5E5BDE
0x5E5BC5: mov     ecx, [ebp+58h]
0x5E5BC8: test    ecx, ecx
0x5E5BCA: jz      loc_5E5C52
0x5E5BD0: mov     edx, [ecx]
0x5E5BD2: mov     eax, [edx+0F8h]
0x5E5BD8: push    1
0x5E5BDA: call    eax
0x5E5BDC: mov     esi, eax
0x5E5BDE: test    esi, esi
0x5E5BE0: jz      short loc_5E5C48
0x5E5BE2: mov     eax, [esi]
0x5E5BE4: test    eax, eax
0x5E5BE6: jz      short loc_5E5C48
0x5E5BE8: cmp     dword ptr [eax], 0
0x5E5BEB: jz      short loc_5E5C48
0x5E5BED: push    0Ch; Size
0x5E5BEF: call    FormHeapAlloc
0x5E5BF4: mov     ebp, eax
0x5E5BF6: add     esp, 4
0x5E5BF9: mov     [esp+30h+var_18], ebp
0x5E5BFD: xor     eax, eax
0x5E5BFF: cmp     ebp, eax
0x5E5C01: mov     [esp+30h+var_4], eax
0x5E5C05: jz      short loc_5E5C21
0x5E5C07: mov     eax, [esi]
0x5E5C09: mov     eax, [eax]
0x5E5C0B: mov     edi, [esi+8]
0x5E5C0E: mov     ecx, eax
0x5E5C10: call    ExtraDataList_GetExtraCount
0x5E5C15: movsx   ecx, ax
0x5E5C18: push    ecx
0x5E5C19: push    edi
0x5E5C1A: mov     ecx, ebp
0x5E5C1C: call    ContainerEntryExtraData_constr
0x5E5C21: mov     edx, [esi]
0x5E5C23: mov     ecx, [edx]
0x5E5C25: test    ecx, ecx
0x5E5C27: mov     [esp+30h+var_4], 0FFFFFFFFh
0x5E5C2F: mov     [esp+30h+var_1C], eax
0x5E5C33: jz      short loc_5E5C3D
0x5E5C35: push    ecx
0x5E5C36: mov     ecx, [eax]
0x5E5C38: call    BSSimpleList_PushFront
0x5E5C3D: mov     ebp, [esp+30h+var_10]
0x5E5C41: cmp     [esp+30h+var_1C], 0
0x5E5C46: jnz     short loc_5E5C5E
0x5E5C48: add     [esp+30h+var_14], 1
0x5E5C4D: jmp     loc_5E5A40
0x5E5C52: xor     esi, esi
0x5E5C54: add     [esp+30h+var_14], 1
0x5E5C59: jmp     loc_5E5A40
0x5E5C5E: mov     eax, [esp+30h+var_1C]
0x5E5C62: mov     ecx, [esp+30h+var_C]
0x5E5C66: mov     large fs:0, ecx
0x5E5C6D: pop     ecx
0x5E5C6E: pop     edi
0x5E5C6F: pop     esi
0x5E5C70: pop     ebp
0x5E5C71: pop     ebx
0x5E5C72: add     esp, 1Ch
0x5E5C75: retn
