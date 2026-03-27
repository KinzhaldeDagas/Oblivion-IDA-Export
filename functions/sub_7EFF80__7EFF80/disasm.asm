0x7EFF80: push    ebx
0x7EFF81: push    esi
0x7EFF82: mov     esi, [esp+8+arg_0]
0x7EFF86: push    edi
0x7EFF87: push    esi
0x7EFF88: mov     ebx, ecx
0x7EFF8A: call    sub_7E28E0
0x7EFF8F: mov     eax, ds:0B46720h
0x7EFF94: push    eax; ArgList
0x7EFF95: call    TESOutput_PrintString
0x7EFF9A: movzx   edi, word ptr [esi+0Ah]
0x7EFF9E: movzx   ecx, word ptr [esi+8]
0x7EFFA2: add     esp, 4
0x7EFFA5: cmp     edi, ecx
0x7EFFA7: mov     [esp+0Ch+arg_0], eax
0x7EFFAB: jb      short loc_7EFFBB
0x7EFFAD: movzx   edx, word ptr [esi+0Eh]
0x7EFFB1: add     edx, edi
0x7EFFB3: push    edx
0x7EFFB4: mov     ecx, esi
0x7EFFB6: call    NiTArray_SetSize
0x7EFFBB: lea     eax, [esp+0Ch+arg_0]
0x7EFFBF: push    eax
0x7EFFC0: push    edi
0x7EFFC1: mov     ecx, esi
0x7EFFC3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7EFFC8: mov     ecx, [ebx+6Ch]
0x7EFFCB: push    ecx; int
0x7EFFCC: push    offset aIparticlecount; "iParticleCount"
0x7EFFD1: call    TESOutput_PrintLabeledSignedInt
0x7EFFD6: movzx   edi, word ptr [esi+0Ah]
0x7EFFDA: movzx   edx, word ptr [esi+8]
0x7EFFDE: add     esp, 8
0x7EFFE1: cmp     edi, edx
0x7EFFE3: mov     [esp+0Ch+arg_0], eax
0x7EFFE7: jb      short loc_7EFFF7
0x7EFFE9: movzx   eax, word ptr [esi+0Eh]
0x7EFFED: add     eax, edi
0x7EFFEF: push    eax
0x7EFFF0: mov     ecx, esi
0x7EFFF2: call    NiTArray_SetSize
0x7EFFF7: lea     ecx, [esp+0Ch+arg_0]
0x7EFFFB: push    ecx
0x7EFFFC: push    edi
0x7EFFFD: mov     ecx, esi
0x7EFFFF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7F0004: mov     eax, [ebx+9Ch]
0x7F000A: test    eax, eax
0x7F000C: jz      short loc_7F0067
0x7F000E: push    eax
0x7F000F: call    sub_6F9540
0x7F0014: add     esp, 4
0x7F0017: test    eax, eax
0x7F0019: jz      short loc_7F0028
0x7F001B: push    eax; int
0x7F001C: push    offset aBaseTexture; "base texture"
0x7F0021: call    TESOutput_PrintLabeledString
0x7F0026: jmp     short loc_7F0039
0x7F0028: mov     eax, [ebx+9Ch]
0x7F002E: push    eax; int
0x7F002F: push    offset aBaseTexture; "base texture"
0x7F0034: call    TESOutput_PrintLabeledPointer
0x7F0039: movzx   edx, word ptr [esi+8]
0x7F003D: movzx   edi, word ptr [esi+0Ah]
0x7F0041: add     esp, 8
0x7F0044: cmp     edi, edx
0x7F0046: mov     [esp+0Ch+arg_0], eax
0x7F004A: jb      short loc_7F005A
0x7F004C: movzx   eax, word ptr [esi+0Eh]
0x7F0050: add     eax, edi
0x7F0052: push    eax
0x7F0053: mov     ecx, esi
0x7F0055: call    NiTArray_SetSize
0x7F005A: lea     ecx, [esp+0Ch+arg_0]
0x7F005E: push    ecx
0x7F005F: push    edi
0x7F0060: mov     ecx, esi
0x7F0062: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7F0067: mov     edx, [ebx]
0x7F0069: mov     eax, [edx+70h]
0x7F006C: mov     ecx, ebx
0x7F006E: call    eax
0x7F0070: test    eax, eax
0x7F0072: jnz     short loc_7F00AE
0x7F0074: push    1; char
0x7F0076: push    offset aClamp; "clamp"
0x7F007B: call    TESOutput_PrintLabeledBool
0x7F0080: movzx   edi, word ptr [esi+0Ah]
0x7F0084: movzx   ecx, word ptr [esi+8]
0x7F0088: add     esp, 8
0x7F008B: cmp     edi, ecx
0x7F008D: mov     [esp+0Ch+arg_0], eax
0x7F0091: jb      short loc_7F00A1
0x7F0093: movzx   edx, word ptr [esi+0Eh]
0x7F0097: add     edx, edi
0x7F0099: push    edx
0x7F009A: mov     ecx, esi
0x7F009C: call    NiTArray_SetSize
0x7F00A1: lea     eax, [esp+0Ch+arg_0]
0x7F00A5: push    eax
0x7F00A6: push    edi
0x7F00A7: mov     ecx, esi
0x7F00A9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7F00AE: mov     ecx, [ebx+0A4h]
0x7F00B4: push    ecx; int
0x7F00B5: push    offset aBillboardMode; "billboard mode"
0x7F00BA: call    sub_721A90
0x7F00BF: movzx   edi, word ptr [esi+0Ah]
0x7F00C3: movzx   edx, word ptr [esi+8]
0x7F00C7: add     esp, 8
0x7F00CA: cmp     edi, edx
0x7F00CC: mov     [esp+0Ch+arg_0], eax
0x7F00D0: jb      short loc_7F00E0
0x7F00D2: movzx   eax, word ptr [esi+0Eh]
0x7F00D6: add     eax, edi
0x7F00D8: push    eax
0x7F00D9: mov     ecx, esi
0x7F00DB: call    NiTArray_SetSize
0x7F00E0: lea     ecx, [esp+0Ch+arg_0]
0x7F00E4: push    ecx
0x7F00E5: push    edi
0x7F00E6: mov     ecx, esi
0x7F00E8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7F00ED: pop     edi
0x7F00EE: pop     esi
0x7F00EF: pop     ebx
0x7F00F0: retn    4
