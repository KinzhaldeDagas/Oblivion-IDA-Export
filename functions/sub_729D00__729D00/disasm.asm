0x729D00: push    ebx
0x729D01: push    esi
0x729D02: mov     esi, [esp+8+a2]
0x729D06: push    edi
0x729D07: push    esi; a2
0x729D08: mov     edi, ecx
0x729D0A: call    sub_7009A0
0x729D0F: mov     eax, ds:0B3FE04h
0x729D14: push    eax; ArgList
0x729D15: call    TESOutput_PrintString
0x729D1A: movzx   ebx, word ptr [esi+0Ah]
0x729D1E: movzx   ecx, word ptr [esi+8]
0x729D22: add     esp, 4
0x729D25: cmp     ebx, ecx
0x729D27: mov     [esp+0Ch+a2], eax
0x729D2B: jb      short loc_729D3B
0x729D2D: movzx   edx, word ptr [esi+0Eh]
0x729D31: add     edx, ebx
0x729D33: push    edx
0x729D34: mov     ecx, esi
0x729D36: call    NiTArray_SetSize
0x729D3B: lea     eax, [esp+0Ch+a2]
0x729D3F: push    eax
0x729D40: push    ebx
0x729D41: mov     ecx, esi
0x729D43: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729D48: movzx   ecx, word ptr [edi+8]
0x729D4C: push    ecx; __int16
0x729D4D: push    offset aM_usvertices; "m_usVertices"
0x729D52: call    TESOutput_PrintLabeledUnsignedShort
0x729D57: movzx   ebx, word ptr [esi+0Ah]
0x729D5B: movzx   edx, word ptr [esi+8]
0x729D5F: add     esp, 8
0x729D62: cmp     ebx, edx
0x729D64: mov     [esp+0Ch+a2], eax
0x729D68: jb      short loc_729D78
0x729D6A: movzx   eax, word ptr [esi+0Eh]
0x729D6E: add     eax, ebx
0x729D70: push    eax
0x729D71: mov     ecx, esi
0x729D73: call    NiTArray_SetSize
0x729D78: lea     ecx, [esp+0Ch+a2]
0x729D7C: push    ecx
0x729D7D: push    ebx
0x729D7E: mov     ecx, esi
0x729D80: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729D85: mov     edx, [edi+1Ch]
0x729D88: push    edx; int
0x729D89: push    offset aM_pkvertex; "m_pkVertex"
0x729D8E: call    TESOutput_PrintLabeledPointer
0x729D93: movzx   ebx, word ptr [esi+0Ah]
0x729D97: mov     [esp+14h+a2], eax
0x729D9B: movzx   eax, word ptr [esi+8]
0x729D9F: add     esp, 8
0x729DA2: cmp     ebx, eax
0x729DA4: jb      short loc_729DB4
0x729DA6: movzx   ecx, word ptr [esi+0Eh]
0x729DAA: add     ecx, ebx
0x729DAC: push    ecx
0x729DAD: mov     ecx, esi
0x729DAF: call    NiTArray_SetSize
0x729DB4: lea     edx, [esp+0Ch+a2]
0x729DB8: push    edx
0x729DB9: push    ebx
0x729DBA: mov     ecx, esi
0x729DBC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729DC1: mov     eax, [edi+20h]
0x729DC4: push    eax; int
0x729DC5: push    offset aM_pknormal; "m_pkNormal"
0x729DCA: call    TESOutput_PrintLabeledPointer
0x729DCF: movzx   ebx, word ptr [esi+0Ah]
0x729DD3: movzx   ecx, word ptr [esi+8]
0x729DD7: add     esp, 8
0x729DDA: cmp     ebx, ecx
0x729DDC: mov     [esp+0Ch+a2], eax
0x729DE0: jb      short loc_729DF0
0x729DE2: movzx   edx, word ptr [esi+0Eh]
0x729DE6: add     edx, ebx
0x729DE8: push    edx
0x729DE9: mov     ecx, esi
0x729DEB: call    NiTArray_SetSize
0x729DF0: lea     eax, [esp+0Ch+a2]
0x729DF4: push    eax
0x729DF5: push    ebx
0x729DF6: mov     ecx, esi
0x729DF8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729DFD: movzx   eax, word ptr [edi+2Ch]
0x729E01: and     eax, 0F000h
0x729E06: push    eax; int
0x729E07: push    offset aNormalbinormal; "NormalBinormalTangent"
0x729E0C: call    TESOutput_PrintLabeledSignedInt
0x729E11: movzx   ebx, word ptr [esi+0Ah]
0x729E15: movzx   ecx, word ptr [esi+8]
0x729E19: add     esp, 8
0x729E1C: cmp     ebx, ecx
0x729E1E: mov     [esp+0Ch+a2], eax
0x729E22: jb      short loc_729E32
0x729E24: movzx   edx, word ptr [esi+0Eh]
0x729E28: add     edx, ebx
0x729E2A: push    edx
0x729E2B: mov     ecx, esi
0x729E2D: call    NiTArray_SetSize
0x729E32: lea     eax, [esp+0Ch+a2]
0x729E36: push    eax
0x729E37: push    ebx
0x729E38: mov     ecx, esi
0x729E3A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729E3F: push    offset aM_kbound; "m_kBound"
0x729E44: lea     ecx, [edi+0Ch]
0x729E47: call    sub_72A040
0x729E4C: movzx   ebx, word ptr [esi+0Ah]
0x729E50: movzx   ecx, word ptr [esi+8]
0x729E54: cmp     ebx, ecx
0x729E56: mov     [esp+0Ch+a2], eax
0x729E5A: jb      short loc_729E6A
0x729E5C: movzx   edx, word ptr [esi+0Eh]
0x729E60: add     edx, ebx
0x729E62: push    edx
0x729E63: mov     ecx, esi
0x729E65: call    NiTArray_SetSize
0x729E6A: lea     eax, [esp+0Ch+a2]
0x729E6E: push    eax
0x729E6F: push    ebx
0x729E70: mov     ecx, esi
0x729E72: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729E77: mov     ecx, [edi+24h]
0x729E7A: push    ecx; int
0x729E7B: push    offset aM_pkcolor; "m_pkColor"
0x729E80: call    TESOutput_PrintLabeledPointer
0x729E85: movzx   ebx, word ptr [esi+0Ah]
0x729E89: movzx   edx, word ptr [esi+8]
0x729E8D: add     esp, 8
0x729E90: cmp     ebx, edx
0x729E92: mov     [esp+0Ch+a2], eax
0x729E96: jb      short loc_729EA6
0x729E98: movzx   eax, word ptr [esi+0Eh]
0x729E9C: add     eax, ebx
0x729E9E: push    eax
0x729E9F: mov     ecx, esi
0x729EA1: call    NiTArray_SetSize
0x729EA6: lea     ecx, [esp+0Ch+a2]
0x729EAA: push    ecx
0x729EAB: push    ebx
0x729EAC: mov     ecx, esi
0x729EAE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729EB3: movzx   eax, byte ptr [edi+2Ch]
0x729EB7: and     eax, 3Fh
0x729EBA: push    eax; __int16
0x729EBB: push    offset aNumTextureSets; "Num Texture Sets"
0x729EC0: call    TESOutput_PrintLabeledUnsignedShort
0x729EC5: movzx   ebx, word ptr [esi+0Ah]
0x729EC9: movzx   edx, word ptr [esi+8]
0x729ECD: add     esp, 8
0x729ED0: cmp     ebx, edx
0x729ED2: mov     [esp+0Ch+a2], eax
0x729ED6: jb      short loc_729EE6
0x729ED8: movzx   eax, word ptr [esi+0Eh]
0x729EDC: add     eax, ebx
0x729EDE: push    eax
0x729EDF: mov     ecx, esi
0x729EE1: call    NiTArray_SetSize
0x729EE6: lea     ecx, [esp+0Ch+a2]
0x729EEA: push    ecx
0x729EEB: push    ebx
0x729EEC: mov     ecx, esi
0x729EEE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729EF3: mov     edx, [edi+28h]
0x729EF6: push    edx; int
0x729EF7: push    offset aM_pktexture; "m_pkTexture"
0x729EFC: call    TESOutput_PrintLabeledPointer
0x729F01: movzx   ebx, word ptr [esi+0Ah]
0x729F05: mov     [esp+14h+a2], eax
0x729F09: movzx   eax, word ptr [esi+8]
0x729F0D: add     esp, 8
0x729F10: cmp     ebx, eax
0x729F12: jb      short loc_729F22
0x729F14: movzx   ecx, word ptr [esi+0Eh]
0x729F18: add     ecx, ebx
0x729F1A: push    ecx
0x729F1B: mov     ecx, esi
0x729F1D: call    NiTArray_SetSize
0x729F22: lea     edx, [esp+0Ch+a2]
0x729F26: push    edx
0x729F27: push    ebx
0x729F28: mov     ecx, esi
0x729F2A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729F2F: movzx   eax, word ptr [edi+2Eh]
0x729F33: push    eax; __int16
0x729F34: push    offset aM_usdirtyflags; "m_usDirtyFlags"
0x729F39: call    TESOutput_PrintLabeledUnsignedShort
0x729F3E: movzx   ebx, word ptr [esi+0Ah]
0x729F42: movzx   ecx, word ptr [esi+8]
0x729F46: add     esp, 8
0x729F49: cmp     ebx, ecx
0x729F4B: mov     [esp+0Ch+a2], eax
0x729F4F: jb      short loc_729F5F
0x729F51: movzx   edx, word ptr [esi+0Eh]
0x729F55: add     edx, ebx
0x729F57: push    edx
0x729F58: mov     ecx, esi
0x729F5A: call    NiTArray_SetSize
0x729F5F: lea     eax, [esp+0Ch+a2]
0x729F63: push    eax
0x729F64: push    ebx
0x729F65: mov     ecx, esi
0x729F67: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729F6C: movzx   ecx, byte ptr [edi+30h]
0x729F70: push    ecx; char
0x729F71: push    offset aM_uckeepflags; "m_ucKeepFlags"
0x729F76: call    sub_70FA00
0x729F7B: movzx   ebx, word ptr [esi+0Ah]
0x729F7F: movzx   edx, word ptr [esi+8]
0x729F83: add     esp, 8
0x729F86: cmp     ebx, edx
0x729F88: mov     [esp+0Ch+a2], eax
0x729F8C: jb      short loc_729F9C
0x729F8E: movzx   eax, word ptr [esi+0Eh]
0x729F92: add     eax, ebx
0x729F94: push    eax
0x729F95: mov     ecx, esi
0x729F97: call    NiTArray_SetSize
0x729F9C: lea     ecx, [esp+0Ch+a2]
0x729FA0: push    ecx
0x729FA1: push    ebx
0x729FA2: mov     ecx, esi
0x729FA4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729FA9: movzx   edx, byte ptr [edi+31h]
0x729FAD: push    edx; char
0x729FAE: push    offset aM_uccompressfl; "m_ucCompressFlags"
0x729FB3: call    sub_70FA00
0x729FB8: movzx   ebx, word ptr [esi+0Ah]
0x729FBC: mov     [esp+14h+a2], eax
0x729FC0: movzx   eax, word ptr [esi+8]
0x729FC4: add     esp, 8
0x729FC7: cmp     ebx, eax
0x729FC9: jb      short loc_729FD9
0x729FCB: movzx   ecx, word ptr [esi+0Eh]
0x729FCF: add     ecx, ebx
0x729FD1: push    ecx
0x729FD2: mov     ecx, esi
0x729FD4: call    NiTArray_SetSize
0x729FD9: lea     edx, [esp+0Ch+a2]
0x729FDD: push    edx
0x729FDE: push    ebx
0x729FDF: mov     ecx, esi
0x729FE1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x729FE6: mov     ecx, [edi+34h]
0x729FE9: test    ecx, ecx
0x729FEB: jz      short loc_729FFB
0x729FED: mov     eax, [ecx]
0x729FEF: mov     edx, [eax+30h]
0x729FF2: push    esi
0x729FF3: call    edx
0x729FF5: pop     edi
0x729FF6: pop     esi
0x729FF7: pop     ebx
0x729FF8: retn    4
0x729FFB: push    0; int
0x729FFD: push    offset aM_spadditional; "m_spAdditionalGeomData"
0x72A002: call    TESOutput_PrintLabeledSignedInt
0x72A007: movzx   edi, word ptr [esi+0Ah]
0x72A00B: mov     [esp+14h+a2], eax
0x72A00F: movzx   eax, word ptr [esi+8]
0x72A013: add     esp, 8
0x72A016: cmp     edi, eax
0x72A018: jb      short loc_72A028
0x72A01A: movzx   ecx, word ptr [esi+0Eh]
0x72A01E: add     ecx, edi
0x72A020: push    ecx
0x72A021: mov     ecx, esi
0x72A023: call    NiTArray_SetSize
0x72A028: lea     edx, [esp+0Ch+a2]
0x72A02C: push    edx
0x72A02D: push    edi
0x72A02E: mov     ecx, esi
0x72A030: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72A035: pop     edi
0x72A036: pop     esi
0x72A037: pop     ebx
0x72A038: retn    4
