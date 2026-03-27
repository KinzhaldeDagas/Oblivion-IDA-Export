0x6E2AC0: push    ebx
0x6E2AC1: push    esi
0x6E2AC2: mov     esi, [esp+8+arg_0]
0x6E2AC6: push    edi
0x6E2AC7: push    esi
0x6E2AC8: mov     ebx, ecx
0x6E2ACA: call    sub_6ED000
0x6E2ACF: mov     eax, ds:0B3E128h
0x6E2AD4: push    eax; ArgList
0x6E2AD5: call    TESOutput_PrintString
0x6E2ADA: movzx   edi, word ptr [esi+0Ah]
0x6E2ADE: movzx   ecx, word ptr [esi+8]
0x6E2AE2: add     esp, 4
0x6E2AE5: cmp     edi, ecx
0x6E2AE7: mov     [esp+0Ch+arg_0], eax
0x6E2AEB: jb      short loc_6E2AFB
0x6E2AED: movzx   edx, word ptr [esi+0Eh]
0x6E2AF1: add     edx, edi
0x6E2AF3: push    edx
0x6E2AF4: mov     ecx, esi
0x6E2AF6: call    NiTArray_SetSize
0x6E2AFB: lea     eax, [esp+0Ch+arg_0]
0x6E2AFF: push    eax
0x6E2B00: push    edi
0x6E2B01: mov     ecx, esi
0x6E2B03: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E2B08: mov     ecx, [ebx+48h]
0x6E2B0B: push    ecx; int
0x6E2B0C: push    offset aM_ifloatsextra; "m_iFloatsExtraDataIndex"
0x6E2B11: call    TESOutput_PrintLabeledSignedInt
0x6E2B16: movzx   edi, word ptr [esi+0Ah]
0x6E2B1A: movzx   edx, word ptr [esi+8]
0x6E2B1E: add     esp, 8
0x6E2B21: cmp     edi, edx
0x6E2B23: mov     [esp+0Ch+arg_0], eax
0x6E2B27: jb      short loc_6E2B37
0x6E2B29: movzx   eax, word ptr [esi+0Eh]
0x6E2B2D: add     eax, edi
0x6E2B2F: push    eax
0x6E2B30: mov     ecx, esi
0x6E2B32: call    NiTArray_SetSize
0x6E2B37: lea     ecx, [esp+0Ch+arg_0]
0x6E2B3B: push    ecx
0x6E2B3C: push    edi
0x6E2B3D: mov     ecx, esi
0x6E2B3F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E2B44: pop     edi
0x6E2B45: pop     esi
0x6E2B46: pop     ebx
0x6E2B47: retn    4
