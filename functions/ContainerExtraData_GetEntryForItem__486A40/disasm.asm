0x486A40: push    0FFFFFFFFh
0x486A42: push    offset ContainerExtraData_GetEntryForItem_SEH
0x486A47: mov     eax, large fs:0
0x486A4D: push    eax
0x486A4E: sub     esp, 18h
0x486A51: push    ebx
0x486A52: push    ebp
0x486A53: push    esi
0x486A54: push    edi
0x486A55: mov     eax, ds:0B30AACh
0x486A5A: xor     eax, esp
0x486A5C: push    eax
0x486A5D: lea     eax, [esp+38h+var_C]
0x486A61: mov     large fs:0, eax
0x486A67: mov     edi, ecx
0x486A69: mov     [esp+38h+var_1C], edi
0x486A6D: mov     ecx, [edi+4]; this
0x486A70: xor     ebx, ebx
0x486A72: xor     esi, esi
0x486A74: cmp     ecx, ebx
0x486A76: mov     [esp+38h+var_14], esi
0x486A7A: jz      short loc_486A9C
0x486A7C: call    TESObjectREFR_GetContainer
0x486A81: cmp     eax, ebx
0x486A83: jz      short loc_486A9C
0x486A85: mov     ecx, [edi+4]; this
0x486A88: cmp     ecx, ebx
0x486A8A: jz      short loc_486A93
0x486A8C: call    TESObjectREFR_GetContainer
0x486A91: jmp     short loc_486A95
0x486A93: xor     eax, eax
0x486A95: lea     esi, [eax+8]
0x486A98: mov     [esp+38h+var_14], esi
0x486A9C: cmp     esi, ebx
0x486A9E: mov     [esp+38h+var_24], ebx
0x486AA2: mov     [esp+38h+var_20], ebx
0x486AA6: jz      loc_486E5B
0x486AAC: xor     edi, edi
0x486AAE: mov     ebp, [esi]
0x486AB0: cmp     ebp, edi
0x486AB2: jz      loc_486E51
0x486AB8: mov     eax, [esp+38h+var_20]
0x486ABC: cmp     eax, edi
0x486ABE: jnz     loc_48732D
0x486AC4: mov     esi, [ebp+4]
0x486AC7: cmp     byte ptr [esi+4], 2Bh ; '+'
0x486ACB: jnz     short loc_486AD5
0x486ACD: cmp     esi, edi
0x486ACF: jnz     loc_486E3C
0x486AD5: mov     eax, [esp+38h+var_1C]
0x486AD9: mov     eax, [eax]
0x486ADB: cmp     eax, edi
0x486ADD: mov     dl, 1
0x486ADF: jz      short loc_486AFB
0x486AE1: test    dl, dl
0x486AE3: jz      short loc_486B21
0x486AE5: mov     ecx, [eax]
0x486AE7: cmp     ecx, edi
0x486AE9: jz      short loc_486AF4
0x486AEB: cmp     [ecx+8], esi
0x486AEE: jnz     short loc_486AF4
0x486AF0: xor     dl, dl
0x486AF2: jmp     short loc_486AF7
0x486AF4: mov     eax, [eax+4]
0x486AF7: cmp     eax, edi
0x486AF9: jnz     short loc_486AE1
0x486AFB: xor     esi, esi
0x486AFD: mov     eax, [ebp+0]
0x486B00: mov     ebx, eax
0x486B02: cmp     ebx, edi
0x486B04: mov     [esp+38h+var_18], eax
0x486B08: jge     short loc_486B10
0x486B0A: neg     ebx
0x486B0C: mov     [esp+38h+var_18], ebx
0x486B10: cmp     esi, edi
0x486B12: jz      short loc_486B29
0x486B14: cmp     ebx, edi
0x486B16: jg      short loc_486B29
0x486B18: mov     [esp+38h+var_20], edi
0x486B1C: jmp     loc_486E3C
0x486B21: cmp     eax, edi
0x486B23: jz      short loc_486AFB
0x486B25: mov     esi, [eax]
0x486B27: jmp     short loc_486AFD
0x486B29: cmp     eax, edi
0x486B2B: jge     short loc_486B6E
0x486B2D: cmp     esi, edi
0x486B2F: jnz     short loc_486B90
0x486B31: mov     ecx, [esp+38h+var_24]
0x486B35: cmp     ecx, [esp+38h+arg_0]
0x486B39: jnz     loc_486C5E
0x486B3F: cmp     esi, edi
0x486B41: jz      short loc_486B52
0x486B43: mov     ecx, esi
0x486B45: call    InventoryEntryData_Cleanup
0x486B4A: test    eax, eax
0x486B4C: jnz     loc_486C5E
0x486B52: push    0Ch; Size
0x486B54: call    FormHeapAlloc
0x486B59: add     esp, 4
0x486B5C: cmp     eax, edi
0x486B5E: jz      short loc_486B99
0x486B60: xor     ecx, ecx
0x486B62: mov     [eax+8], ecx
0x486B65: mov     [eax], ecx
0x486B67: mov     [eax+4], ecx
0x486B6A: mov     edi, eax
0x486B6C: jmp     short loc_486B9B
0x486B6E: cmp     esi, edi
0x486B70: jz      short loc_486B31
0x486B72: mov     ecx, [esi+4]
0x486B75: add     eax, ecx
0x486B77: test    eax, eax
0x486B79: jle     short loc_486B90
0x486B7B: mov     eax, [esi]
0x486B7D: cmp     eax, edi
0x486B7F: jz      short loc_486B31
0x486B81: cmp     [eax], edi
0x486B83: jz      short loc_486B31
0x486B85: mov     ecx, [eax]
0x486B87: call    sub_41DEF0
0x486B8C: test    al, al
0x486B8E: jz      short loc_486B31
0x486B90: mov     [esp+38h+var_20], edi
0x486B94: jmp     loc_486E3C
0x486B99: xor     edi, edi
0x486B9B: test    esi, esi
0x486B9D: mov     [esp+38h+var_20], edi
0x486BA1: jz      short loc_486BC7
0x486BA3: cmp     dword ptr [ebp+0], 0
0x486BA7: jge     short loc_486BB3
0x486BA9: mov     edx, [esi+4]
0x486BAC: add     edx, ebx
0x486BAE: mov     [edi+4], edx
0x486BB1: jmp     short loc_486BD3
0x486BB3: mov     ecx, esi
0x486BB5: call    InventoryEntryData_Cleanup
0x486BBA: mov     ecx, [esi+4]
0x486BBD: add     ecx, [ebp+0]
0x486BC0: sub     ecx, eax
0x486BC2: mov     [edi+4], ecx
0x486BC5: jmp     short loc_486BD3
0x486BC7: mov     eax, [ebp+0]
0x486BCA: test    eax, eax
0x486BCC: jge     short loc_486BD0
0x486BCE: neg     eax
0x486BD0: mov     [edi+4], eax
0x486BD3: test    esi, esi
0x486BD5: mov     eax, [ebp+4]
0x486BD8: mov     [edi+8], eax
0x486BDB: jz      loc_486E3C
0x486BE1: mov     ecx, esi
0x486BE3: call    sub_484F20
0x486BE8: test    eax, eax
0x486BEA: jz      loc_486E3C
0x486BF0: mov     ecx, [esi]
0x486BF2: test    ecx, ecx
0x486BF4: jz      loc_486E3C
0x486BFA: call    BSSimpleList_Count
0x486BFF: test    eax, eax
0x486C01: jz      loc_486E3C
0x486C07: cmp     dword ptr [edi], 0
0x486C0A: jnz     short loc_486C2D
0x486C0C: push    8; Size
0x486C0E: call    FormHeapAlloc
0x486C13: add     esp, 4
0x486C16: test    eax, eax
0x486C18: jz      short loc_486C29
0x486C1A: mov     dword ptr [eax], 0
0x486C20: mov     dword ptr [eax+4], 0
0x486C27: jmp     short loc_486C2B
0x486C29: xor     eax, eax
0x486C2B: mov     [edi], eax
0x486C2D: mov     esi, [esi]
0x486C2F: test    esi, esi
0x486C31: jz      loc_486E3C
0x486C37: jmp     short loc_486C40
0x486C39: align 10h
0x486C40: mov     eax, [esi]
0x486C42: test    eax, eax
0x486C44: jz      loc_486E3C
0x486C4A: mov     ecx, [edi]
0x486C4C: push    eax
0x486C4D: call    BSSimpleList_PushFront
0x486C52: mov     esi, [esi+4]
0x486C55: test    esi, esi
0x486C57: jnz     short loc_486C40
0x486C59: jmp     loc_486E3C
0x486C5E: cmp     esi, edi
0x486C60: jz      loc_486E37
0x486C66: xor     eax, eax
0x486C68: cmp     [esi], edi
0x486C6A: jz      short loc_486C73
0x486C6C: mov     ecx, esi
0x486C6E: call    InventoryEntryData_Cleanup
0x486C73: mov     edx, [esp+38h+var_24]
0x486C77: add     eax, edx
0x486C79: cmp     [esp+38h+arg_0], eax
0x486C7D: jge     loc_486D31
0x486C83: mov     ebx, [esi]
0x486C85: cmp     ebx, edi
0x486C87: jz      loc_486E3C
0x486C8D: lea     ecx, [ecx+0]
0x486C90: mov     ebp, [ebx]
0x486C92: test    ebp, ebp
0x486C94: jz      loc_486E3C
0x486C9A: cmp     [esp+38h+var_20], 0
0x486C9F: jnz     loc_486E3C
0x486CA5: mov     eax, [esp+38h+arg_0]
0x486CA9: cmp     [esp+38h+var_24], eax
0x486CAD: jnz     short loc_486D1C
0x486CAF: push    0
0x486CB1: mov     ecx, ebp
0x486CB3: call    ExtraDataList_IsExtraDefaultForContainer
0x486CB8: test    al, al
0x486CBA: jnz     short loc_486D17
0x486CBC: mov     ecx, ebp
0x486CBE: call    ExtraDataList_GetExtraCount
0x486CC3: mov     ecx, [esp+38h+var_18]
0x486CC7: movsx   edi, ax
0x486CCA: mov     eax, [esi+4]
0x486CCD: lea     edx, [eax+ecx]
0x486CD0: cmp     edi, edx
0x486CD2: jle     short loc_486CD7
0x486CD4: lea     edi, [eax+ecx]
0x486CD7: push    0Ch; Size
0x486CD9: call    FormHeapAlloc
0x486CDE: add     esp, 4
0x486CE1: mov     [esp+38h+var_10], eax
0x486CE5: test    eax, eax
0x486CE7: mov     [esp+38h+var_4], 0
0x486CEF: jz      short loc_486CFF
0x486CF1: mov     edx, [esi+8]
0x486CF4: push    edi
0x486CF5: push    edx
0x486CF6: mov     ecx, eax
0x486CF8: call    ContainerEntryExtraData_constr
0x486CFD: jmp     short loc_486D01
0x486CFF: xor     eax, eax
0x486D01: mov     ecx, [eax]
0x486D03: push    ebp
0x486D04: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x486D0C: mov     [esp+3Ch+var_20], eax
0x486D10: call    BSSimpleList_PushFront
0x486D15: jmp     short loc_486D1C
0x486D17: sub     [esp+38h+var_24], 1
0x486D1C: mov     ebx, [ebx+4]
0x486D1F: add     [esp+38h+var_24], 1
0x486D24: test    ebx, ebx
0x486D26: jnz     loc_486C90
0x486D2C: jmp     loc_486E3C
0x486D31: mov     ecx, esi
0x486D33: call    InventoryEntryData_Cleanup
0x486D38: add     [esp+38h+var_24], eax
0x486D3C: mov     ecx, esi
0x486D3E: call    sub_4845D0
0x486D43: test    eax, eax
0x486D45: jnz     short loc_486D69
0x486D47: push    edi
0x486D48: mov     ecx, esi
0x486D4A: call    ContainerEntryExtraData_HasWorn
0x486D4F: test    al, al
0x486D51: jz      short loc_486D69
0x486D53: cmp     [esi+4], edi
0x486D56: jle     loc_486E3C
0x486D5C: mov     eax, [esi+8]
0x486D5F: cmp     byte ptr [eax+4], 22h ; '"'
0x486D63: jz      loc_486E3C
0x486D69: mov     ecx, esi
0x486D6B: call    sub_4845D0
0x486D70: mov     ecx, [esi+4]
0x486D73: add     ecx, [ebp+0]
0x486D76: cmp     eax, ecx
0x486D78: jge     loc_486E3C
0x486D7E: mov     ecx, esi
0x486D80: call    sub_4846D0
0x486D85: test    al, al
0x486D87: jz      short loc_486D95
0x486D89: mov     eax, [esi+4]
0x486D8C: cmp     eax, [ebp+0]
0x486D8F: jg      loc_486E3C
0x486D95: mov     edx, [esp+38h+var_24]
0x486D99: cmp     edx, [esp+38h+arg_0]
0x486D9D: jnz     loc_486E37
0x486DA3: push    0Ch; Size
0x486DA5: call    FormHeapAlloc
0x486DAA: add     esp, 4
0x486DAD: cmp     eax, edi
0x486DAF: jz      short loc_486DBF
0x486DB1: xor     ebx, ebx
0x486DB3: mov     [eax+8], ebx
0x486DB6: mov     [eax], ebx
0x486DB8: mov     [eax+4], ebx
0x486DBB: mov     edi, eax
0x486DBD: jmp     short loc_486DC3
0x486DBF: xor     edi, edi
0x486DC1: xor     ebx, ebx
0x486DC3: mov     ecx, esi
0x486DC5: mov     [esp+38h+var_20], edi
0x486DC9: call    InventoryEntryData_Cleanup
0x486DCE: mov     ecx, [esi+4]
0x486DD1: add     ecx, [ebp+0]
0x486DD4: sub     ecx, eax
0x486DD6: mov     [edi+4], ecx
0x486DD9: mov     eax, [ebp+4]
0x486DDC: mov     ecx, esi
0x486DDE: mov     [edi+8], eax
0x486DE1: call    sub_484F20
0x486DE6: test    eax, eax
0x486DE8: jz      short loc_486E3C
0x486DEA: mov     ecx, [esi]
0x486DEC: cmp     ecx, ebx
0x486DEE: jz      short loc_486E3C
0x486DF0: call    BSSimpleList_Count
0x486DF5: test    eax, eax
0x486DF7: jz      short loc_486E3C
0x486DF9: cmp     [edi], ebx
0x486DFB: jnz     short loc_486E16
0x486DFD: push    8; Size
0x486DFF: call    FormHeapAlloc
0x486E04: add     esp, 4
0x486E07: cmp     eax, ebx
0x486E09: jz      short loc_486E12
0x486E0B: mov     [eax], ebx
0x486E0D: mov     [eax+4], ebx
0x486E10: jmp     short loc_486E14
0x486E12: xor     eax, eax
0x486E14: mov     [edi], eax
0x486E16: mov     esi, [esi]
0x486E18: cmp     esi, ebx
0x486E1A: jz      short loc_486E3C
0x486E1C: lea     esp, [esp+0]
0x486E20: mov     eax, [esi]
0x486E22: cmp     eax, ebx
0x486E24: jz      short loc_486E3C
0x486E26: mov     ecx, [edi]
0x486E28: push    eax
0x486E29: call    BSSimpleList_PushFront
0x486E2E: mov     esi, [esi+4]
0x486E31: cmp     esi, ebx
0x486E33: jnz     short loc_486E20
0x486E35: jmp     short loc_486E3C
0x486E37: add     [esp+38h+var_24], 1
0x486E3C: mov     edx, [esp+38h+var_14]
0x486E40: mov     esi, [edx+4]
0x486E43: xor     edi, edi
0x486E45: cmp     esi, edi
0x486E47: mov     [esp+38h+var_14], esi
0x486E4B: jnz     loc_486AAE
0x486E51: cmp     [esp+38h+var_20], edi
0x486E55: jnz     loc_487329
0x486E5B: mov     eax, [esp+38h+var_1C]
0x486E5F: mov     eax, [eax]
0x486E61: test    eax, eax
0x486E63: mov     [esp+38h+var_14], eax
0x486E67: jz      loc_487329
0x486E6D: mov     ebp, [esp+38h+arg_0]
0x486E71: mov     ecx, [esp+38h+var_14]
0x486E75: mov     esi, [ecx]
0x486E77: test    esi, esi
0x486E79: mov     eax, [esp+38h+var_20]
0x486E7D: jz      loc_48732D
0x486E83: test    eax, eax
0x486E85: jnz     loc_48732D
0x486E8B: mov     edx, [esp+38h+var_1C]
0x486E8F: mov     ecx, [edx+4]; this
0x486E92: xor     ebx, ebx
0x486E94: test    ecx, ecx
0x486E96: mov     [esp+38h+var_10], ebx
0x486E9A: jz      short loc_486F0A
0x486E9C: call    TESObjectREFR_GetContainer
0x486EA1: test    eax, eax
0x486EA3: jz      short loc_486F0A
0x486EA5: test    esi, esi
0x486EA7: jz      loc_487316
0x486EAD: mov     eax, [esp+38h+var_1C]
0x486EB1: mov     ecx, [eax+4]; this
0x486EB4: test    ecx, ecx
0x486EB6: jz      short loc_486EBF
0x486EB8: call    TESObjectREFR_GetContainer
0x486EBD: jmp     short loc_486EC1
0x486EBF: xor     eax, eax
0x486EC1: mov     ecx, [esi+8]
0x486EC4: push    ecx
0x486EC5: mov     ecx, eax
0x486EC7: call    TESContainer_GetFormCount
0x486ECC: mov     ebx, eax
0x486ECE: test    ebx, ebx
0x486ED0: mov     [esp+38h+var_10], ebx
0x486ED4: jge     short loc_486F0A
0x486ED6: mov     edi, [esi]
0x486ED8: test    edi, edi
0x486EDA: jz      short loc_486F0A
0x486EDC: lea     esp, [esp+0]
0x486EE0: mov     ecx, [edi]
0x486EE2: test    ecx, ecx
0x486EE4: jz      short loc_486F0A
0x486EE6: push    0
0x486EE8: call    ExtraDataList_HasWorn
0x486EED: test    al, al
0x486EEF: jnz     short loc_486EFA
0x486EF1: mov     edi, [edi+4]
0x486EF4: test    edi, edi
0x486EF6: jnz     short loc_486EE0
0x486EF8: jmp     short loc_486F0A
0x486EFA: mov     eax, [esi]
0x486EFC: mov     eax, [eax]
0x486EFE: mov     edx, ebx
0x486F00: neg     edx
0x486F02: push    edx
0x486F03: mov     ecx, eax
0x486F05: call    ExtraDataList_SetExtraCount
0x486F0A: test    esi, esi
0x486F0C: jz      loc_487316
0x486F12: cmp     dword ptr [esi+4], 0
0x486F16: jg      short loc_486F20
0x486F18: test    ebx, ebx
0x486F1A: jge     loc_487316
0x486F20: mov     eax, [esi]
0x486F22: test    eax, eax
0x486F24: jz      short loc_486F36
0x486F26: cmp     dword ptr [eax], 0
0x486F29: jz      short loc_486F36
0x486F2B: mov     ecx, [eax]
0x486F2D: call    sub_41DEF0
0x486F32: test    al, al
0x486F34: jnz     short loc_486F71
0x486F36: test    ebx, ebx
0x486F38: jl      short loc_486F71
0x486F3A: mov     edi, [esp+38h+var_1C]
0x486F3E: mov     ecx, [edi+4]; this
0x486F41: test    ecx, ecx
0x486F43: jz      short loc_486F71
0x486F45: call    TESObjectREFR_GetContainer
0x486F4A: test    eax, eax
0x486F4C: jz      short loc_486F71
0x486F4E: mov     ecx, [edi+4]; this
0x486F51: test    ecx, ecx
0x486F53: jz      short loc_486F5C
0x486F55: call    TESObjectREFR_GetContainer
0x486F5A: jmp     short loc_486F5E
0x486F5C: xor     eax, eax
0x486F5E: mov     ecx, [esi+8]
0x486F61: push    ecx; a2
0x486F62: mov     ecx, eax; this
0x486F64: call    TESContainer_HasForm
0x486F69: test    al, al
0x486F6B: jnz     loc_487316
0x486F71: mov     eax, [esi]
0x486F73: test    eax, eax
0x486F75: jz      loc_48703E
0x486F7B: cmp     dword ptr [eax], 0
0x486F7E: jz      loc_48703E
0x486F84: mov     ecx, esi
0x486F86: call    InventoryEntryData_Cleanup
0x486F8B: add     eax, [esp+38h+var_24]
0x486F8F: cmp     ebp, eax
0x486F91: jge     loc_48703E
0x486F97: mov     ebx, [esi]
0x486F99: test    ebx, ebx
0x486F9B: jz      loc_487316
0x486FA1: mov     edi, [ebx]
0x486FA3: test    edi, edi
0x486FA5: jz      loc_487316
0x486FAB: cmp     [esp+38h+var_20], 0
0x486FB0: jnz     loc_487316
0x486FB6: push    0
0x486FB8: mov     ecx, edi
0x486FBA: call    ExtraDataList_IsExtraDefaultForContainer
0x486FBF: cmp     [esp+38h+var_24], ebp
0x486FC3: jnz     short loc_487025
0x486FC5: test    al, al
0x486FC7: jnz     short loc_48702E
0x486FC9: mov     ecx, edi
0x486FCB: call    ExtraDataList_GetExtraCount
0x486FD0: test    ax, ax
0x486FD3: jle     short loc_48702E
0x486FD5: push    0Ch; Size
0x486FD7: call    FormHeapAlloc
0x486FDC: mov     ebp, eax
0x486FDE: add     esp, 4
0x486FE1: mov     [esp+38h+var_10], ebp
0x486FE5: test    ebp, ebp
0x486FE7: mov     [esp+38h+var_4], 1
0x486FEF: jz      short loc_487009
0x486FF1: mov     ecx, edi
0x486FF3: call    ExtraDataList_GetExtraCount
0x486FF8: movsx   edx, ax
0x486FFB: mov     eax, [esi+8]
0x486FFE: push    edx
0x486FFF: push    eax
0x487000: mov     ecx, ebp
0x487002: call    ContainerEntryExtraData_constr
0x487007: jmp     short loc_48700B
0x487009: xor     eax, eax
0x48700B: mov     ecx, [eax]
0x48700D: push    edi
0x48700E: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x487016: mov     [esp+3Ch+var_20], eax
0x48701A: call    BSSimpleList_PushFront
0x48701F: mov     ebp, [esp+38h+arg_0]
0x487023: jmp     short loc_48702E
0x487025: test    al, al
0x487027: jnz     short loc_48702E
0x487029: add     [esp+38h+var_24], 1
0x48702E: mov     ebx, [ebx+4]
0x487031: test    ebx, ebx
0x487033: jnz     loc_486FA1
0x487039: jmp     loc_487316
0x48703E: mov     edi, [esi+4]
0x487041: mov     ecx, esi
0x487043: call    InventoryEntryData_Cleanup
0x487048: cmp     edi, eax
0x48704A: jg      short loc_48705C
0x48704C: mov     ecx, esi
0x48704E: call    InventoryEntryData_Cleanup
0x487053: add     [esp+38h+var_24], eax
0x487057: jmp     loc_487316
0x48705C: mov     edi, [esi]
0x48705E: xor     ebx, ebx
0x487060: test    edi, edi
0x487062: mov     [esp+38h+var_18], ebx
0x487066: jz      short loc_48707E
0x487068: mov     ecx, [edi]
0x48706A: test    ecx, ecx
0x48706C: jz      short loc_48707E
0x48706E: call    ExtraDataList_IsExtraDefaultForContainer_all
0x487073: test    al, al
0x487075: jnz     short loc_4870F4
0x487077: mov     edi, [edi+4]
0x48707A: test    edi, edi
0x48707C: jnz     short loc_487068
0x48707E: mov     edi, [esi+4]
0x487081: mov     ecx, esi
0x487083: call    InventoryEntryData_Cleanup
0x487088: cmp     edi, eax
0x48708A: jle     loc_4871E1
0x487090: mov     ecx, esi
0x487092: call    InventoryEntryData_Cleanup
0x487097: test    eax, eax
0x487099: jle     loc_4871E1
0x48709F: mov     edi, [esi]
0x4870A1: test    edi, edi
0x4870A3: jz      short loc_4870CF
0x4870A5: mov     ebp, [edi]
0x4870A7: test    ebp, ebp
0x4870A9: jz      short loc_4870CB
0x4870AB: push    0
0x4870AD: mov     ecx, ebp
0x4870AF: call    ExtraDataList_IsExtraDefaultForContainer
0x4870B4: test    al, al
0x4870B6: jnz     short loc_4870C4
0x4870B8: mov     ecx, ebp
0x4870BA: call    ExtraDataList_GetExtraCount
0x4870BF: movsx   eax, ax
0x4870C2: add     ebx, eax
0x4870C4: mov     edi, [edi+4]
0x4870C7: test    edi, edi
0x4870C9: jnz     short loc_4870A5
0x4870CB: mov     [esp+38h+var_18], ebx
0x4870CF: mov     ecx, esi
0x4870D1: call    InventoryEntryData_Cleanup
0x4870D6: add     [esp+38h+var_24], eax
0x4870DA: push    0
0x4870DC: mov     ecx, esi
0x4870DE: call    ContainerEntryExtraData_HasWorn
0x4870E3: test    al, al
0x4870E5: mov     ecx, esi
0x4870E7: jz      loc_4871C4
0x4870ED: push    0
0x4870EF: jmp     loc_4871D3
0x4870F4: push    0
0x4870F6: mov     ecx, esi
0x4870F8: call    ContainerEntryExtraData_HasWorn
0x4870FD: test    al, al
0x4870FF: jz      short loc_487111
0x487101: mov     ecx, esi
0x487103: call    sub_484700
0x487108: test    al, al
0x48710A: jnz     short loc_487111
0x48710C: add     [esp+38h+var_24], 1
0x487111: cmp     [esp+38h+var_24], ebp
0x487115: jnz     short loc_487181
0x487117: push    0Ch; Size
0x487119: call    FormHeapAlloc
0x48711E: add     esp, 4
0x487121: mov     [esp+38h+var_20], eax
0x487125: test    eax, eax
0x487127: mov     [esp+38h+var_4], 2
0x48712F: jz      short loc_487142
0x487131: mov     ecx, [esi+8]
0x487134: push    0
0x487136: push    ecx
0x487137: mov     ecx, eax
0x487139: call    ContainerEntryExtraData_constr
0x48713E: mov     ebx, eax
0x487140: jmp     short loc_487144
0x487142: xor     ebx, ebx
0x487144: mov     ecx, esi
0x487146: mov     [esp+38h+var_4], 0FFFFFFFFh
0x48714E: mov     [esp+38h+var_20], ebx
0x487152: call    sub_484780
0x487157: mov     [ebx+4], eax
0x48715A: mov     ebp, [esi]
0x48715C: test    ebp, ebp
0x48715E: jz      short loc_487181
0x487160: mov     edi, [ebp+0]
0x487163: test    edi, edi
0x487165: jz      short loc_487181
0x487167: mov     ecx, edi
0x487169: call    ExtraDataList_IsExtraDefaultForContainer_all
0x48716E: test    al, al
0x487170: jz      short loc_48717A
0x487172: mov     ecx, [ebx]
0x487174: push    edi
0x487175: call    BSSimpleList_PushBack
0x48717A: mov     ebp, [ebp+4]
0x48717D: test    ebp, ebp
0x48717F: jnz     short loc_487160
0x487181: mov     ecx, esi
0x487183: call    sub_484780
0x487188: mov     edx, [esi+4]
0x48718B: add     edx, [esp+38h+var_10]
0x48718F: cmp     eax, edx
0x487191: jge     short loc_4871E1
0x487193: mov     ecx, esi
0x487195: call    sub_484780
0x48719A: mov     ecx, esi
0x48719C: mov     [esp+38h+var_18], eax
0x4871A0: call    sub_484700
0x4871A5: test    al, al
0x4871A7: jz      short loc_4871B0
0x4871A9: add     [esp+38h+var_24], 1
0x4871AE: jmp     short loc_4871E1
0x4871B0: push    0
0x4871B2: mov     ecx, esi
0x4871B4: call    ContainerEntryExtraData_HasWorn
0x4871B9: test    al, al
0x4871BB: jnz     short loc_4871E1
0x4871BD: add     [esp+38h+var_24], 1
0x4871C2: jmp     short loc_4871E1
0x4871C4: push    1
0x4871C6: call    ContainerEntryExtraData_HasWorn
0x4871CB: test    al, al
0x4871CD: jz      short loc_4871E1
0x4871CF: push    1
0x4871D1: mov     ecx, esi
0x4871D3: call    sub_484EC0
0x4871D8: test    al, al
0x4871DA: jnz     short loc_4871E1
0x4871DC: sub     [esp+38h+var_24], 1
0x4871E1: push    0
0x4871E3: mov     ecx, esi
0x4871E5: call    ContainerEntryExtraData_HasWorn
0x4871EA: test    al, al
0x4871EC: jz      short loc_48720C
0x4871EE: mov     eax, [esi+4]
0x4871F1: cmp     eax, 1
0x4871F4: jle     short loc_48720C
0x4871F6: cmp     [esp+38h+var_18], eax
0x4871FA: jz      short loc_48720C
0x4871FC: mov     ecx, esi
0x4871FE: call    sub_4847C0
0x487203: test    al, al
0x487205: jnz     short loc_48720C
0x487207: add     [esp+38h+var_24], 1
0x48720C: mov     ebp, [esp+38h+arg_0]
0x487210: cmp     [esp+38h+var_24], ebp
0x487214: jnz     loc_487311
0x48721A: cmp     [esp+38h+var_20], 0
0x48721F: jnz     loc_487311
0x487225: mov     ecx, [esi+4]
0x487228: mov     edi, [esp+38h+var_18]
0x48722C: sub     ecx, edi
0x48722E: test    ecx, ecx
0x487230: jle     loc_487311
0x487236: push    0Ch; Size
0x487238: call    FormHeapAlloc
0x48723D: add     esp, 4
0x487240: mov     [esp+38h+var_10], eax
0x487244: test    eax, eax
0x487246: mov     [esp+38h+var_4], 3
0x48724E: jz      short loc_487261
0x487250: mov     edx, [esi+8]
0x487253: push    0
0x487255: push    edx
0x487256: mov     ecx, eax
0x487258: call    ContainerEntryExtraData_constr
0x48725D: mov     ebx, eax
0x48725F: jmp     short loc_487263
0x487261: xor     ebx, ebx
0x487263: mov     eax, [esi+4]
0x487266: sub     eax, edi
0x487268: mov     [ebx+4], eax
0x48726B: cmp     dword ptr [esi], 0
0x48726E: mov     [esp+38h+var_4], 0FFFFFFFFh
0x487276: mov     [esp+38h+var_20], ebx
0x48727A: jz      loc_487316
0x487280: mov     ecx, esi
0x487282: call    sub_4847C0
0x487287: test    al, al
0x487289: mov     esi, [esi]
0x48728B: jz      short loc_4872D5
0x48728D: test    esi, esi
0x48728F: jz      loc_487316
0x487295: mov     edi, [esi]
0x487297: test    edi, edi
0x487299: jz      loc_487316
0x48729F: push    0
0x4872A1: mov     ecx, edi
0x4872A3: call    ExtraDataList_HasWorn
0x4872A8: test    al, al
0x4872AA: jnz     short loc_4872CC
0x4872AC: push    1
0x4872AE: mov     ecx, edi
0x4872B0: call    ExtraDataList_IsExtraDefaultForContainer
0x4872B5: test    al, al
0x4872B7: jz      short loc_4872CC
0x4872B9: mov     ecx, edi
0x4872BB: call    ExtraDataList_IsExtraDefaultForContainer_all
0x4872C0: test    al, al
0x4872C2: jnz     short loc_4872CC
0x4872C4: mov     ecx, [ebx]
0x4872C6: push    edi
0x4872C7: call    BSSimpleList_PushBack
0x4872CC: mov     esi, [esi+4]
0x4872CF: test    esi, esi
0x4872D1: jnz     short loc_487295
0x4872D3: jmp     short loc_487316
0x4872D5: test    esi, esi
0x4872D7: jz      short loc_487316
0x4872D9: lea     esp, [esp+0]
0x4872E0: mov     edi, [esi]
0x4872E2: test    edi, edi
0x4872E4: jz      short loc_487316
0x4872E6: push    0
0x4872E8: mov     ecx, edi
0x4872EA: call    ExtraDataList_HasWorn
0x4872EF: test    al, al
0x4872F1: jnz     short loc_487308
0x4872F3: push    1
0x4872F5: mov     ecx, edi
0x4872F7: call    ExtraDataList_IsExtraDefaultForContainer
0x4872FC: test    al, al
0x4872FE: jz      short loc_487308
0x487300: mov     ecx, [ebx]
0x487302: push    edi
0x487303: call    BSSimpleList_PushBack
0x487308: mov     esi, [esi+4]
0x48730B: test    esi, esi
0x48730D: jnz     short loc_4872E0
0x48730F: jmp     short loc_487316
0x487311: add     [esp+38h+var_24], 1
0x487316: mov     ecx, [esp+38h+var_14]
0x48731A: mov     eax, [ecx+4]
0x48731D: test    eax, eax
0x48731F: mov     [esp+38h+var_14], eax
0x487323: jnz     loc_486E71
0x487329: mov     eax, [esp+38h+var_20]
0x48732D: mov     ecx, dword ptr [esp+38h+var_C]
0x487331: mov     large fs:0, ecx
0x487338: pop     ecx
0x487339: pop     edi
0x48733A: pop     esi
0x48733B: pop     ebp
0x48733C: pop     ebx
0x48733D: add     esp, 24h
0x487340: retn    4
