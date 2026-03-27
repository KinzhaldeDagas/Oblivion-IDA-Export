0x72AD80: push    ebx
0x72AD81: push    esi
0x72AD82: mov     esi, [esp+8+arg_0]
0x72AD86: push    edi
0x72AD87: push    esi
0x72AD88: mov     ebx, ecx
0x72AD8A: call    sub_720300
0x72AD8F: mov     eax, ds:0B3FF0Ch
0x72AD94: push    eax; ArgList
0x72AD95: call    TESOutput_PrintString
0x72AD9A: movzx   edi, word ptr [esi+0Ah]
0x72AD9E: movzx   ecx, word ptr [esi+8]
0x72ADA2: add     esp, 4
0x72ADA5: cmp     edi, ecx
0x72ADA7: mov     [esp+0Ch+arg_0], eax
0x72ADAB: jb      short loc_72ADBB
0x72ADAD: movzx   edx, word ptr [esi+0Eh]
0x72ADB1: add     edx, edi
0x72ADB3: push    edx
0x72ADB4: mov     ecx, esi
0x72ADB6: call    NiTArray_SetSize
0x72ADBB: lea     eax, [esp+0Ch+arg_0]
0x72ADBF: push    eax
0x72ADC0: push    edi
0x72ADC1: mov     ecx, esi
0x72ADC3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72ADC8: movzx   ecx, word ptr [ebx+58h]
0x72ADCC: push    ecx; __int16
0x72ADCD: push    offset aM_usactivevert; "m_usActiveVertices"
0x72ADD2: call    TESOutput_PrintLabeledUnsignedShort
0x72ADD7: movzx   edi, word ptr [esi+0Ah]
0x72ADDB: movzx   edx, word ptr [esi+8]
0x72ADDF: add     esp, 8
0x72ADE2: cmp     edi, edx
0x72ADE4: mov     [esp+0Ch+arg_0], eax
0x72ADE8: jb      short loc_72ADF8
0x72ADEA: movzx   eax, word ptr [esi+0Eh]
0x72ADEE: add     eax, edi
0x72ADF0: push    eax
0x72ADF1: mov     ecx, esi
0x72ADF3: call    NiTArray_SetSize
0x72ADF8: lea     ecx, [esp+0Ch+arg_0]
0x72ADFC: push    ecx
0x72ADFD: push    edi
0x72ADFE: mov     ecx, esi
0x72AE00: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72AE05: movzx   edx, word ptr [ebx+5Ah]
0x72AE09: push    edx; __int16
0x72AE0A: push    offset aM_usactivetria; "m_usActiveTriangles"
0x72AE0F: call    TESOutput_PrintLabeledUnsignedShort
0x72AE14: movzx   edi, word ptr [esi+0Ah]
0x72AE18: mov     [esp+14h+arg_0], eax
0x72AE1C: movzx   eax, word ptr [esi+8]
0x72AE20: add     esp, 8
0x72AE23: cmp     edi, eax
0x72AE25: jb      short loc_72AE35
0x72AE27: movzx   ecx, word ptr [esi+0Eh]
0x72AE2B: add     ecx, edi
0x72AE2D: push    ecx
0x72AE2E: mov     ecx, esi
0x72AE30: call    NiTArray_SetSize
0x72AE35: lea     edx, [esp+0Ch+arg_0]
0x72AE39: push    edx
0x72AE3A: push    edi
0x72AE3B: mov     ecx, esi
0x72AE3D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72AE42: pop     edi
0x72AE43: pop     esi
0x72AE44: pop     ebx
0x72AE45: retn    4
