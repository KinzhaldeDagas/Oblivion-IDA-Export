0x6D4F70: push    ebx
0x6D4F71: push    esi
0x6D4F72: mov     esi, [esp+8+a2]
0x6D4F76: push    edi
0x6D4F77: push    esi; a2
0x6D4F78: mov     edi, ecx
0x6D4F7A: call    sub_7009A0
0x6D4F7F: mov     eax, ds:0B3D86Ch
0x6D4F84: push    eax; ArgList
0x6D4F85: call    TESOutput_PrintString
0x6D4F8A: movzx   ebx, word ptr [esi+0Ah]
0x6D4F8E: movzx   ecx, word ptr [esi+8]
0x6D4F92: add     esp, 4
0x6D4F95: cmp     ebx, ecx
0x6D4F97: mov     [esp+0Ch+a2], eax
0x6D4F9B: jb      short loc_6D4FAB
0x6D4F9D: movzx   edx, word ptr [esi+0Eh]
0x6D4FA1: add     edx, ebx
0x6D4FA3: push    edx
0x6D4FA4: mov     ecx, esi
0x6D4FA6: call    NiTArray_SetSize
0x6D4FAB: lea     eax, [esp+0Ch+a2]
0x6D4FAF: push    eax
0x6D4FB0: push    ebx
0x6D4FB1: mov     ecx, esi
0x6D4FB3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D4FB8: mov     ecx, [edi+8]
0x6D4FBB: push    ecx; int
0x6D4FBC: push    offset aM_uinumuoffset; "m_uiNumUOffsetKeys"
0x6D4FC1: call    TESOutput_PrintLabeledUnsignedInt
0x6D4FC6: movzx   ebx, word ptr [esi+0Ah]
0x6D4FCA: movzx   edx, word ptr [esi+8]
0x6D4FCE: add     esp, 8
0x6D4FD1: cmp     ebx, edx
0x6D4FD3: mov     [esp+0Ch+a2], eax
0x6D4FD7: jb      short loc_6D4FE7
0x6D4FD9: movzx   eax, word ptr [esi+0Eh]
0x6D4FDD: add     eax, ebx
0x6D4FDF: push    eax
0x6D4FE0: mov     ecx, esi
0x6D4FE2: call    NiTArray_SetSize
0x6D4FE7: lea     ecx, [esp+0Ch+a2]
0x6D4FEB: push    ecx
0x6D4FEC: push    ebx
0x6D4FED: mov     ecx, esi
0x6D4FEF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D4FF4: mov     edx, [edi+20h]
0x6D4FF7: push    edx; int
0x6D4FF8: push    offset aM_uinumutiling; "m_uiNumUTilingKeys"
0x6D4FFD: call    TESOutput_PrintLabeledUnsignedInt
0x6D5002: movzx   ebx, word ptr [esi+0Ah]
0x6D5006: mov     [esp+14h+a2], eax
0x6D500A: movzx   eax, word ptr [esi+8]
0x6D500E: add     esp, 8
0x6D5011: cmp     ebx, eax
0x6D5013: jb      short loc_6D5023
0x6D5015: movzx   ecx, word ptr [esi+0Eh]
0x6D5019: add     ecx, ebx
0x6D501B: push    ecx
0x6D501C: mov     ecx, esi
0x6D501E: call    NiTArray_SetSize
0x6D5023: lea     edx, [esp+0Ch+a2]
0x6D5027: push    edx
0x6D5028: push    ebx
0x6D5029: mov     ecx, esi
0x6D502B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D5030: mov     eax, [edi+14h]
0x6D5033: push    eax; int
0x6D5034: push    offset aM_uinumvoffset; "m_uiNumVOffsetKeys"
0x6D5039: call    TESOutput_PrintLabeledUnsignedInt
0x6D503E: movzx   ebx, word ptr [esi+0Ah]
0x6D5042: movzx   ecx, word ptr [esi+8]
0x6D5046: add     esp, 8
0x6D5049: cmp     ebx, ecx
0x6D504B: mov     [esp+0Ch+a2], eax
0x6D504F: jb      short loc_6D505F
0x6D5051: movzx   edx, word ptr [esi+0Eh]
0x6D5055: add     edx, ebx
0x6D5057: push    edx
0x6D5058: mov     ecx, esi
0x6D505A: call    NiTArray_SetSize
0x6D505F: lea     eax, [esp+0Ch+a2]
0x6D5063: push    eax
0x6D5064: push    ebx
0x6D5065: mov     ecx, esi
0x6D5067: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D506C: mov     ecx, [edi+2Ch]
0x6D506F: push    ecx; int
0x6D5070: push    offset aM_uinumvtiling; "m_uiNumVTilingKeys"
0x6D5075: call    TESOutput_PrintLabeledUnsignedInt
0x6D507A: movzx   edi, word ptr [esi+0Ah]
0x6D507E: movzx   edx, word ptr [esi+8]
0x6D5082: add     esp, 8
0x6D5085: cmp     edi, edx
0x6D5087: mov     [esp+0Ch+a2], eax
0x6D508B: jb      short loc_6D509B
0x6D508D: movzx   eax, word ptr [esi+0Eh]
0x6D5091: add     eax, edi
0x6D5093: push    eax
0x6D5094: mov     ecx, esi
0x6D5096: call    NiTArray_SetSize
0x6D509B: lea     ecx, [esp+0Ch+a2]
0x6D509F: push    ecx
0x6D50A0: push    edi
0x6D50A1: mov     ecx, esi
0x6D50A3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D50A8: pop     edi
0x6D50A9: pop     esi
0x6D50AA: pop     ebx
0x6D50AB: retn    4
