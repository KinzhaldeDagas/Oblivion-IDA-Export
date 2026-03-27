0x73FB80: push    ebx
0x73FB81: push    esi
0x73FB82: mov     esi, [esp+8+arg_0]
0x73FB86: push    edi
0x73FB87: push    esi
0x73FB88: mov     edi, ecx
0x73FB8A: call    sub_729D00
0x73FB8F: mov     eax, ds:0B401C8h
0x73FB94: push    eax; ArgList
0x73FB95: call    TESOutput_PrintString
0x73FB9A: movzx   ebx, word ptr [esi+0Ah]
0x73FB9E: movzx   ecx, word ptr [esi+8]
0x73FBA2: add     esp, 4
0x73FBA5: cmp     ebx, ecx
0x73FBA7: mov     [esp+0Ch+arg_0], eax
0x73FBAB: jb      short loc_73FBBB
0x73FBAD: movzx   edx, word ptr [esi+0Eh]
0x73FBB1: add     edx, ebx
0x73FBB3: push    edx
0x73FBB4: mov     ecx, esi
0x73FBB6: call    NiTArray_SetSize
0x73FBBB: lea     eax, [esp+0Ch+arg_0]
0x73FBBF: push    eax
0x73FBC0: push    ebx
0x73FBC1: mov     ecx, esi
0x73FBC3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73FBC8: mov     ecx, [edi+44h]
0x73FBCB: push    ecx; int
0x73FBCC: push    offset aM_pfradii; "m_pfRadii"
0x73FBD1: call    TESOutput_PrintLabeledPointer
0x73FBD6: movzx   ebx, word ptr [esi+0Ah]
0x73FBDA: movzx   edx, word ptr [esi+8]
0x73FBDE: add     esp, 8
0x73FBE1: cmp     ebx, edx
0x73FBE3: mov     [esp+0Ch+arg_0], eax
0x73FBE7: jb      short loc_73FBF7
0x73FBE9: movzx   eax, word ptr [esi+0Eh]
0x73FBED: add     eax, ebx
0x73FBEF: push    eax
0x73FBF0: mov     ecx, esi
0x73FBF2: call    NiTArray_SetSize
0x73FBF7: lea     ecx, [esp+0Ch+arg_0]
0x73FBFB: push    ecx
0x73FBFC: push    ebx
0x73FBFD: mov     ecx, esi
0x73FBFF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73FC04: movzx   edx, word ptr [edi+48h]
0x73FC08: push    edx; __int16
0x73FC09: push    offset aM_usactive; "m_usActive"
0x73FC0E: call    TESOutput_PrintLabeledUnsignedShort
0x73FC13: movzx   ebx, word ptr [esi+0Ah]
0x73FC17: mov     [esp+14h+arg_0], eax
0x73FC1B: movzx   eax, word ptr [esi+8]
0x73FC1F: add     esp, 8
0x73FC22: cmp     ebx, eax
0x73FC24: jb      short loc_73FC34
0x73FC26: movzx   ecx, word ptr [esi+0Eh]
0x73FC2A: add     ecx, ebx
0x73FC2C: push    ecx
0x73FC2D: mov     ecx, esi
0x73FC2F: call    NiTArray_SetSize
0x73FC34: lea     edx, [esp+0Ch+arg_0]
0x73FC38: push    edx
0x73FC39: push    ebx
0x73FC3A: mov     ecx, esi
0x73FC3C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73FC41: mov     eax, [edi+4Ch]
0x73FC44: push    eax; int
0x73FC45: push    offset aM_pfsizes; "m_pfSizes"
0x73FC4A: call    TESOutput_PrintLabeledPointer
0x73FC4F: movzx   ebx, word ptr [esi+0Ah]
0x73FC53: movzx   ecx, word ptr [esi+8]
0x73FC57: add     esp, 8
0x73FC5A: cmp     ebx, ecx
0x73FC5C: mov     [esp+0Ch+arg_0], eax
0x73FC60: jb      short loc_73FC70
0x73FC62: movzx   edx, word ptr [esi+0Eh]
0x73FC66: add     edx, ebx
0x73FC68: push    edx
0x73FC69: mov     ecx, esi
0x73FC6B: call    NiTArray_SetSize
0x73FC70: lea     eax, [esp+0Ch+arg_0]
0x73FC74: push    eax
0x73FC75: push    ebx
0x73FC76: mov     ecx, esi
0x73FC78: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73FC7D: mov     ecx, [edi+50h]
0x73FC80: push    ecx; int
0x73FC81: push    offset aM_pkrotations; "m_pkRotations"
0x73FC86: call    TESOutput_PrintLabeledPointer
0x73FC8B: movzx   ebx, word ptr [esi+0Ah]
0x73FC8F: movzx   edx, word ptr [esi+8]
0x73FC93: add     esp, 8
0x73FC96: cmp     ebx, edx
0x73FC98: mov     [esp+0Ch+arg_0], eax
0x73FC9C: jb      short loc_73FCAC
0x73FC9E: movzx   eax, word ptr [esi+0Eh]
0x73FCA2: add     eax, ebx
0x73FCA4: push    eax
0x73FCA5: mov     ecx, esi
0x73FCA7: call    NiTArray_SetSize
0x73FCAC: lea     ecx, [esp+0Ch+arg_0]
0x73FCB0: push    ecx
0x73FCB1: push    ebx
0x73FCB2: mov     ecx, esi
0x73FCB4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73FCB9: mov     edx, [edi+54h]
0x73FCBC: push    edx; int
0x73FCBD: push    offset aM_pfrotationan; "m_pfRotationAngles"
0x73FCC2: call    TESOutput_PrintLabeledPointer
0x73FCC7: movzx   ebx, word ptr [esi+0Ah]
0x73FCCB: mov     [esp+14h+arg_0], eax
0x73FCCF: movzx   eax, word ptr [esi+8]
0x73FCD3: add     esp, 8
0x73FCD6: cmp     ebx, eax
0x73FCD8: jb      short loc_73FCE8
0x73FCDA: movzx   ecx, word ptr [esi+0Eh]
0x73FCDE: add     ecx, ebx
0x73FCE0: push    ecx
0x73FCE1: mov     ecx, esi
0x73FCE3: call    NiTArray_SetSize
0x73FCE8: lea     edx, [esp+0Ch+arg_0]
0x73FCEC: push    edx
0x73FCED: push    ebx
0x73FCEE: mov     ecx, esi
0x73FCF0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73FCF5: mov     eax, [edi+58h]
0x73FCF8: push    eax; int
0x73FCF9: push    offset aM_pkrotationax; "m_pkRotationAxes"
0x73FCFE: call    TESOutput_PrintLabeledPointer
0x73FD03: movzx   edi, word ptr [esi+0Ah]
0x73FD07: movzx   ecx, word ptr [esi+8]
0x73FD0B: add     esp, 8
0x73FD0E: cmp     edi, ecx
0x73FD10: mov     [esp+0Ch+arg_0], eax
0x73FD14: jb      short loc_73FD24
0x73FD16: movzx   edx, word ptr [esi+0Eh]
0x73FD1A: add     edx, edi
0x73FD1C: push    edx
0x73FD1D: mov     ecx, esi
0x73FD1F: call    NiTArray_SetSize
0x73FD24: lea     eax, [esp+0Ch+arg_0]
0x73FD28: push    eax
0x73FD29: push    edi
0x73FD2A: mov     ecx, esi
0x73FD2C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73FD31: pop     edi
0x73FD32: pop     esi
0x73FD33: pop     ebx
0x73FD34: retn    4
