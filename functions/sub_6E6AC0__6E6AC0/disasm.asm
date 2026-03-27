0x6E6AC0: push    ebx
0x6E6AC1: push    esi
0x6E6AC2: mov     esi, [esp+8+arg_0]
0x6E6AC6: push    edi
0x6E6AC7: push    esi
0x6E6AC8: mov     ebx, ecx
0x6E6ACA: call    sub_6ED580
0x6E6ACF: mov     eax, ds:0B3E668h
0x6E6AD4: push    eax; ArgList
0x6E6AD5: call    TESOutput_PrintString
0x6E6ADA: movzx   edi, word ptr [esi+0Ah]
0x6E6ADE: movzx   ecx, word ptr [esi+8]
0x6E6AE2: add     esp, 4
0x6E6AE5: cmp     edi, ecx
0x6E6AE7: mov     [esp+0Ch+arg_0], eax
0x6E6AEB: jb      short loc_6E6AFB
0x6E6AED: movzx   edx, word ptr [esi+0Eh]
0x6E6AF1: add     edx, edi
0x6E6AF3: push    edx
0x6E6AF4: mov     ecx, esi
0x6E6AF6: call    NiTArray_SetSize
0x6E6AFB: lea     eax, [esp+0Ch+arg_0]
0x6E6AFF: push    eax
0x6E6B00: push    edi
0x6E6B01: mov     ecx, esi
0x6E6B03: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E6B08: mov     ecx, [ebx+2Ch]
0x6E6B0B: push    ecx; int
0x6E6B0C: push    offset aM_kcoloracphan; "m_kColorACPHandle"
0x6E6B11: call    TESOutput_PrintLabeledUnsignedInt
0x6E6B16: movzx   edi, word ptr [esi+0Ah]
0x6E6B1A: movzx   edx, word ptr [esi+8]
0x6E6B1E: add     esp, 8
0x6E6B21: cmp     edi, edx
0x6E6B23: mov     [esp+0Ch+arg_0], eax
0x6E6B27: jb      short loc_6E6B37
0x6E6B29: movzx   eax, word ptr [esi+0Eh]
0x6E6B2D: add     eax, edi
0x6E6B2F: push    eax
0x6E6B30: mov     ecx, esi
0x6E6B32: call    NiTArray_SetSize
0x6E6B37: lea     ecx, [esp+0Ch+arg_0]
0x6E6B3B: push    ecx
0x6E6B3C: push    edi
0x6E6B3D: mov     ecx, esi
0x6E6B3F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E6B44: pop     edi
0x6E6B45: pop     esi
0x6E6B46: pop     ebx
0x6E6B47: retn    4
