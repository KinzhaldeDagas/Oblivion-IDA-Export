0x657A80: push    ebx
0x657A81: push    ebp
0x657A82: push    esi
0x657A83: mov     esi, ecx
0x657A85: mov     eax, [esi]
0x657A87: mov     edx, [eax+184h]
0x657A8D: call    edx
0x657A8F: mov     ebx, [esp+0Ch+arg_0]
0x657A93: mov     ecx, ebx
0x657A95: call    sub_5E4400
0x657A9A: mov     ebp, eax
0x657A9C: mov     eax, [esi]
0x657A9E: mov     edx, [eax+0C0h]
0x657AA4: mov     ecx, esi
0x657AA6: mov     [esp+0Ch+arg_0], ebp
0x657AAA: call    edx
0x657AAC: test    al, al
0x657AAE: jz      short loc_657AC0
0x657AB0: mov     eax, [esi]
0x657AB2: mov     edx, [eax+48h]
0x657AB5: push    ebx
0x657AB6: mov     ecx, esi
0x657AB8: call    edx
0x657ABA: pop     esi
0x657ABB: pop     ebp
0x657ABC: pop     ebx
0x657ABD: retn    4
0x657AC0: mov     ecx, ebx
0x657AC2: call    sub_5E32D0
0x657AC7: test    al, al
0x657AC9: jz      short loc_657AFD
0x657ACB: mov     eax, [esi]
0x657ACD: mov     edx, [eax+36Ch]
0x657AD3: mov     ecx, esi
0x657AD5: call    edx
0x657AD7: test    eax, eax
0x657AD9: jnz     short loc_657AFD
0x657ADB: cmp     [esi+120h], eax
0x657AE1: jnz     short loc_657AFD
0x657AE3: cmp     [esi+0B4h], eax
0x657AE9: jnz     short loc_657AFD
0x657AEB: cmp     [esi+0B0h], eax
0x657AF1: jnz     short loc_657AFD
0x657AF3: push    1; float
0x657AF5: push    ebx; int
0x657AF6: mov     ecx, esi
0x657AF8: call    sub_6553E0
0x657AFD: mov     ecx, ebx
0x657AFF: call    sub_5E32D0
0x657B04: test    al, al
0x657B06: jz      loc_657C17
0x657B0C: mov     eax, [esi]
0x657B0E: mov     edx, [eax+36Ch]
0x657B14: mov     ecx, esi
0x657B16: call    edx
0x657B18: cmp     eax, 4
0x657B1B: jz      loc_657C17
0x657B21: cmp     dword ptr [esi+120h], 0
0x657B28: push    edi
0x657B29: jnz     short loc_657B9C
0x657B2B: lea     edi, [esi+0B0h]
0x657B31: mov     ecx, edi
0x657B33: call    BSSimpleList_Count
0x657B38: test    eax, eax
0x657B3A: jz      short loc_657B9C
0x657B3C: mov     ecx, [edi]; this
0x657B3E: mov     [esi+120h], ecx
0x657B44: call    TESObjectREFR_GetOwner
0x657B49: test    eax, eax
0x657B4B: mov     ecx, edi
0x657B4D: jz      short loc_657B5D
0x657B4F: mov     eax, [esi+120h]
0x657B55: push    eax
0x657B56: call    BSSimpleList_Remove
0x657B5B: jmp     short loc_657B9C
0x657B5D: call    BSSimpleList_Count
0x657B62: push    0; Seed
0x657B64: mov     ebp, eax
0x657B66: call    GetRandomLargeInteger?
0x657B6B: cdq
0x657B6C: idiv    ebp
0x657B6E: add     esp, 4
0x657B71: cmp     edx, ebp
0x657B73: jl      short loc_657B77
0x657B75: mov     edx, ebp
0x657B77: test    edx, edx
0x657B79: mov     eax, edi
0x657B7B: jle     short loc_657B88
0x657B7D: lea     ecx, [ecx+0]
0x657B80: sub     edx, 1
0x657B83: mov     eax, [eax+4]
0x657B86: jnz     short loc_657B80
0x657B88: mov     eax, [eax]
0x657B8A: push    eax
0x657B8B: mov     ecx, edi
0x657B8D: mov     [esi+120h], eax
0x657B93: call    BSSimpleList_Remove
0x657B98: mov     ebp, [esp+10h+arg_0]
0x657B9C: mov     edx, [esi]
0x657B9E: mov     eax, [esi+120h]
0x657BA4: mov     edx, [edx+0D0h]
0x657BAA: push    eax
0x657BAB: mov     ecx, esi
0x657BAD: call    edx
0x657BAF: cmp     dword ptr [esi+120h], 0
0x657BB6: jz      short loc_657BC7
0x657BB8: mov     eax, [esi]
0x657BBA: mov     edx, [eax+51Ch]
0x657BC0: push    0
0x657BC2: push    ebx
0x657BC3: mov     ecx, esi
0x657BC5: call    edx
0x657BC7: mov     ecx, [esi+34h]
0x657BCA: test    ecx, ecx
0x657BCC: jz      short loc_657C16
0x657BCE: mov     eax, [ecx]
0x657BD0: mov     edx, [eax+2Ch]
0x657BD3: call    edx
0x657BD5: test    al, al
0x657BD7: jz      short loc_657C16
0x657BD9: fldz
0x657BDB: push    ecx
0x657BDC: lea     edi, [esi+128h]
0x657BE2: fstp    [esp+14h+var_14]; float
0x657BE5: mov     ecx, edi
0x657BE7: mov     dword ptr [esi+120h], 0
0x657BF1: call    sub_6FAEE0
0x657BF6: mov     byte ptr [esi+136h], 0
0x657BFD: mov     eax, ds:0B3F9A8h
0x657C02: mov     [edi], eax
0x657C04: mov     ecx, ds:0B3F9ACh
0x657C0A: mov     [edi+4], ecx
0x657C0D: mov     edx, ds:0B3F9B0h
0x657C13: mov     [edi+8], edx
0x657C16: pop     edi
0x657C17: mov     ecx, ebx
0x657C19: call    sub_5E32D0
0x657C1E: test    al, al
0x657C20: jz      short loc_657C33
0x657C22: mov     eax, [esi]
0x657C24: mov     edx, [eax+36Ch]
0x657C2A: mov     ecx, esi
0x657C2C: call    edx
0x657C2E: cmp     eax, 4
0x657C31: jz      short loc_657C4E
0x657C33: cmp     dword ptr [esi+120h], 0
0x657C3A: jnz     short loc_657C84
0x657C3C: cmp     dword ptr [esi+0B4h], 0
0x657C43: jnz     short loc_657C84
0x657C45: cmp     dword ptr [esi+0B0h], 0
0x657C4C: jnz     short loc_657C84
0x657C4E: xor     ecx, ecx
0x657C50: test    ebp, ebp
0x657C52: jz      short loc_657C6B
0x657C54: mov     eax, [ebp+0]
0x657C57: test    eax, eax
0x657C59: jz      short loc_657C5D
0x657C5B: mov     ecx, [eax]
0x657C5D: mov     eax, [ebp+8]
0x657C60: push    1
0x657C62: push    ecx
0x657C63: push    eax
0x657C64: mov     ecx, ebx
0x657C66: call    Actor_EquipIngredient?
0x657C6B: mov     edx, [esi]
0x657C6D: mov     eax, [edx+0BCh]
0x657C73: push    1
0x657C75: mov     ecx, esi
0x657C77: call    eax
0x657C79: lea     ecx, [esi+0B0h]
0x657C7F: call    BSSimpleList_Clear
0x657C84: mov     edx, [esi]
0x657C86: mov     eax, [edx+48h]
0x657C89: push    ebx
0x657C8A: mov     ecx, esi
0x657C8C: call    eax
0x657C8E: mov     edx, [esi]
0x657C90: mov     eax, [edx+2C0h]
0x657C96: mov     ecx, esi
0x657C98: call    eax
0x657C9A: test    ax, 400h
0x657C9E: jz      short loc_657CB3
0x657CA0: mov     edx, [esi]
0x657CA2: mov     eax, [edx+2C4h]
0x657CA8: push    0
0x657CAA: push    400h
0x657CAF: mov     ecx, esi
0x657CB1: call    eax
0x657CB3: pop     esi
0x657CB4: pop     ebp
0x657CB5: pop     ebx
0x657CB6: retn    4
