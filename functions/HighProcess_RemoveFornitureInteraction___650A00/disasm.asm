0x650A00: push    ebx
0x650A01: push    ebp
0x650A02: push    esi
0x650A03: mov     esi, ecx
0x650A05: mov     eax, [esi]
0x650A07: mov     edx, [eax+0BCh]
0x650A0D: push    edi
0x650A0E: xor     ebx, ebx
0x650A10: push    ebx
0x650A11: call    edx
0x650A13: mov     eax, [esi]
0x650A15: mov     edx, [eax+0C4h]
0x650A1B: push    1
0x650A1D: mov     ecx, esi
0x650A1F: call    edx
0x650A21: mov     eax, [esi]
0x650A23: mov     edx, [eax+350h]
0x650A29: mov     ecx, esi
0x650A2B: mov     [esi+2Ch], ebx
0x650A2E: call    edx
0x650A30: mov     eax, [esi+44h]
0x650A33: cmp     eax, ebx
0x650A35: mov     [esi+148h], ebx
0x650A3B: jz      short loc_650A46
0x650A3D: push    eax
0x650A3E: call    FormHeapFree
0x650A43: add     esp, 4
0x650A46: mov     [esi+44h], ebx
0x650A49: mov     [esi+169h], bl
0x650A4F: lea     edi, [esi+3Ch]
0x650A52: cmp     [edi+4], ebx
0x650A55: jnz     short loc_650A5B
0x650A57: cmp     [edi], ebx
0x650A59: jz      short loc_650A74
0x650A5B: mov     ebp, [edi]
0x650A5D: cmp     ebp, ebx
0x650A5F: jz      short loc_650A6A
0x650A61: push    ebp
0x650A62: call    FormHeapFree
0x650A67: add     esp, 4
0x650A6A: push    ebp
0x650A6B: mov     ecx, edi
0x650A6D: call    BSSimpleList_Remove
0x650A72: jmp     short loc_650A52
0x650A74: mov     eax, [esi]
0x650A76: mov     ebp, [esp+10h+arg_0]
0x650A7A: mov     edx, [eax+594h]
0x650A80: push    ebp
0x650A81: mov     ecx, esi
0x650A83: call    edx
0x650A85: cmp     [esi+0B4h], ebx
0x650A8B: jz      short loc_650AAC
0x650A8D: lea     ecx, [ecx+0]
0x650A90: mov     eax, [esi+0B4h]
0x650A96: mov     edi, [eax+4]
0x650A99: push    eax
0x650A9A: call    FormHeapFree
0x650A9F: add     esp, 4
0x650AA2: cmp     edi, ebx
0x650AA4: mov     [esi+0B4h], edi
0x650AAA: jnz     short loc_650A90
0x650AAC: mov     [esi+0B0h], ebx
0x650AB2: cmp     [esi+50h], ebx
0x650AB5: jz      short loc_650ACD
0x650AB7: mov     eax, [esi+50h]
0x650ABA: mov     edi, [eax+4]
0x650ABD: push    eax
0x650ABE: call    FormHeapFree
0x650AC3: add     esp, 4
0x650AC6: cmp     edi, ebx
0x650AC8: mov     [esi+50h], edi
0x650ACB: jnz     short loc_650AB7
0x650ACD: mov     [esi+4Ch], ebx
0x650AD0: mov     [esi+30h], ebx
0x650AD3: mov     eax, [ebp+0]
0x650AD6: mov     edx, [eax+380h]
0x650ADC: mov     ecx, ebp
0x650ADE: call    edx
0x650AE0: test    eax, eax
0x650AE2: jnz     short loc_650B1A
0x650AE4: mov     eax, [esi]
0x650AE6: mov     edx, [eax+36Ch]
0x650AEC: mov     ecx, esi
0x650AEE: call    edx
0x650AF0: cmp     eax, 4
0x650AF3: jz      short loc_650B06
0x650AF5: mov     eax, [esi]
0x650AF7: mov     edx, [eax+36Ch]
0x650AFD: mov     ecx, esi
0x650AFF: call    edx
0x650B01: cmp     eax, 9
0x650B04: jnz     short loc_650B1A
0x650B06: mov     eax, [ebp+0]
0x650B09: mov     edx, [eax+320h]
0x650B0F: mov     ecx, ebp
0x650B11: call    edx
0x650B13: pop     edi
0x650B14: pop     esi
0x650B15: pop     ebp
0x650B16: pop     ebx
0x650B17: retn    4
0x650B1A: mov     eax, [ebp+0]
0x650B1D: mov     edx, [eax+380h]
0x650B23: mov     ecx, ebp
0x650B25: call    edx
0x650B27: test    eax, eax
0x650B29: jnz     short loc_650B4D
0x650B2B: mov     eax, [esi]
0x650B2D: mov     edx, [eax+36Ch]
0x650B33: mov     ecx, esi
0x650B35: call    edx
0x650B37: cmp     eax, 4
0x650B3A: jz      short loc_650B06
0x650B3C: mov     eax, [esi]
0x650B3E: mov     edx, [eax+36Ch]
0x650B44: mov     ecx, esi
0x650B46: call    edx
0x650B48: cmp     eax, 9
0x650B4B: jz      short loc_650B06
0x650B4D: fldz
0x650B4F: push    ecx
0x650B50: lea     edi, [esi+128h]
0x650B56: fstp    [esp+14h+var_14]; float
0x650B59: mov     ecx, edi
0x650B5B: mov     [esi+120h], ebx
0x650B61: call    sub_6FAEE0
0x650B66: mov     [esi+136h], bl
0x650B6C: mov     eax, ds:0B3F9A8h
0x650B71: mov     [edi], eax
0x650B73: mov     ecx, ds:0B3F9ACh
0x650B79: mov     [edi+4], ecx
0x650B7C: mov     edx, ds:0B3F9B0h
0x650B82: mov     [edi+8], edx
0x650B85: pop     edi
0x650B86: mov     byte ptr [esi+124h], 7Fh
0x650B8D: pop     esi
0x650B8E: pop     ebp
0x650B8F: pop     ebx
0x650B90: retn    4
