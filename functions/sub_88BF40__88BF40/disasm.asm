0x88BF40: push    ebx
0x88BF41: push    esi
0x88BF42: mov     esi, dword ptr [esp+8+arg_0]
0x88BF46: push    edi
0x88BF47: push    esi
0x88BF48: mov     ebx, ecx
0x88BF4A: call    sub_89D820
0x88BF4F: mov     eax, ds:0BA7938h
0x88BF54: push    eax; ArgList
0x88BF55: call    TESOutput_PrintString
0x88BF5A: movzx   edi, word ptr [esi+0Ah]
0x88BF5E: movzx   ecx, word ptr [esi+8]
0x88BF62: add     esp, 4
0x88BF65: cmp     edi, ecx
0x88BF67: mov     dword ptr [esp+0Ch+arg_0], eax
0x88BF6B: jb      short loc_88BF7B
0x88BF6D: movzx   edx, word ptr [esi+0Eh]
0x88BF71: add     edx, edi
0x88BF73: push    edx
0x88BF74: mov     ecx, esi
0x88BF76: call    NiTArray_SetSize
0x88BF7B: lea     eax, [esp+0Ch+arg_0]
0x88BF7F: push    eax
0x88BF80: push    edi
0x88BF81: mov     ecx, esi
0x88BF83: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88BF88: mov     cl, [ebx+19h]
0x88BF8B: mov     [esp+0Ch+arg_0], cl
0x88BF8F: mov     edx, dword ptr [esp+0Ch+arg_0]
0x88BF93: push    edx; char
0x88BF94: push    offset aEnabled_0; "Enabled"
0x88BF99: call    TESOutput_PrintLabeledBool
0x88BF9E: movzx   edi, word ptr [esi+0Ah]
0x88BFA2: mov     dword ptr [esp+14h+arg_0], eax
0x88BFA6: movzx   eax, word ptr [esi+8]
0x88BFAA: add     esp, 8
0x88BFAD: cmp     edi, eax
0x88BFAF: jb      short loc_88BFBF
0x88BFB1: movzx   ecx, word ptr [esi+0Eh]
0x88BFB5: add     ecx, edi
0x88BFB7: push    ecx
0x88BFB8: mov     ecx, esi
0x88BFBA: call    NiTArray_SetSize
0x88BFBF: lea     edx, [esp+0Ch+arg_0]
0x88BFC3: push    edx
0x88BFC4: push    edi
0x88BFC5: mov     ecx, esi
0x88BFC7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88BFCC: cmp     dword ptr [ebx+14h], 0
0x88BFD0: setnz   al
0x88BFD3: mov     [esp+0Ch+arg_0], al
0x88BFD7: mov     ecx, dword ptr [esp+0Ch+arg_0]
0x88BFDB: push    ecx; char
0x88BFDC: push    offset aVisDebug; "Vis Debug"
0x88BFE1: call    TESOutput_PrintLabeledBool
0x88BFE6: movzx   edi, word ptr [esi+0Ah]
0x88BFEA: movzx   edx, word ptr [esi+8]
0x88BFEE: add     esp, 8
0x88BFF1: cmp     edi, edx
0x88BFF3: mov     dword ptr [esp+0Ch+arg_0], eax
0x88BFF7: jb      short loc_88C007
0x88BFF9: movzx   eax, word ptr [esi+0Eh]
0x88BFFD: add     eax, edi
0x88BFFF: push    eax
0x88C000: mov     ecx, esi
0x88C002: call    NiTArray_SetSize
0x88C007: lea     ecx, [esp+0Ch+arg_0]
0x88C00B: push    ecx
0x88C00C: push    edi
0x88C00D: mov     ecx, esi
0x88C00F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88C014: mov     edx, ds:0BA7900h
0x88C01A: push    edx; int
0x88C01B: push    offset aWorlds; "Worlds"
0x88C020: call    TESOutput_PrintLabeledUnsignedInt
0x88C025: movzx   edi, word ptr [esi+0Ah]
0x88C029: mov     dword ptr [esp+14h+arg_0], eax
0x88C02D: movzx   eax, word ptr [esi+8]
0x88C031: add     esp, 8
0x88C034: cmp     edi, eax
0x88C036: jb      short loc_88C046
0x88C038: movzx   ecx, word ptr [esi+0Eh]
0x88C03C: add     ecx, edi
0x88C03E: push    ecx
0x88C03F: mov     ecx, esi
0x88C041: call    NiTArray_SetSize
0x88C046: lea     edx, [esp+0Ch+arg_0]
0x88C04A: push    edx
0x88C04B: push    edi
0x88C04C: mov     ecx, esi
0x88C04E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88C053: mov     eax, ds:0BA7D00h
0x88C058: push    eax; int
0x88C059: push    offset aActions; "Actions"
0x88C05E: call    TESOutput_PrintLabeledUnsignedInt
0x88C063: movzx   edi, word ptr [esi+0Ah]
0x88C067: movzx   ecx, word ptr [esi+8]
0x88C06B: add     esp, 8
0x88C06E: cmp     edi, ecx
0x88C070: mov     dword ptr [esp+0Ch+arg_0], eax
0x88C074: jb      short loc_88C084
0x88C076: movzx   edx, word ptr [esi+0Eh]
0x88C07A: add     edx, edi
0x88C07C: push    edx
0x88C07D: mov     ecx, esi
0x88C07F: call    NiTArray_SetSize
0x88C084: lea     eax, [esp+0Ch+arg_0]
0x88C088: push    eax
0x88C089: push    edi
0x88C08A: mov     ecx, esi
0x88C08C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88C091: mov     ecx, ds:0BA7D4Ch
0x88C097: push    ecx; int
0x88C098: push    offset aContraints; "Contraints"
0x88C09D: call    TESOutput_PrintLabeledUnsignedInt
0x88C0A2: movzx   edi, word ptr [esi+0Ah]
0x88C0A6: movzx   edx, word ptr [esi+8]
0x88C0AA: add     esp, 8
0x88C0AD: cmp     edi, edx
0x88C0AF: mov     dword ptr [esp+0Ch+arg_0], eax
0x88C0B3: jb      short loc_88C0C3
0x88C0B5: movzx   eax, word ptr [esi+0Eh]
0x88C0B9: add     eax, edi
0x88C0BB: push    eax
0x88C0BC: mov     ecx, esi
0x88C0BE: call    NiTArray_SetSize
0x88C0C3: lea     ecx, [esp+0Ch+arg_0]
0x88C0C7: push    ecx
0x88C0C8: push    edi
0x88C0C9: mov     ecx, esi
0x88C0CB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88C0D0: mov     edx, ds:0BA7F8Ch
0x88C0D6: push    edx; int
0x88C0D7: push    offset aEntities; "Entities"
0x88C0DC: call    TESOutput_PrintLabeledUnsignedInt
0x88C0E1: movzx   edi, word ptr [esi+0Ah]
0x88C0E5: mov     dword ptr [esp+14h+arg_0], eax
0x88C0E9: movzx   eax, word ptr [esi+8]
0x88C0ED: add     esp, 8
0x88C0F0: cmp     edi, eax
0x88C0F2: jb      short loc_88C102
0x88C0F4: movzx   ecx, word ptr [esi+0Eh]
0x88C0F8: add     ecx, edi
0x88C0FA: push    ecx
0x88C0FB: mov     ecx, esi
0x88C0FD: call    NiTArray_SetSize
0x88C102: lea     edx, [esp+0Ch+arg_0]
0x88C106: push    edx
0x88C107: push    edi
0x88C108: mov     ecx, esi
0x88C10A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88C10F: mov     eax, ds:0BA7D80h
0x88C114: push    eax; int
0x88C115: push    offset aRigidbodies; "RigidBodies"
0x88C11A: call    TESOutput_PrintLabeledUnsignedInt
0x88C11F: movzx   edi, word ptr [esi+0Ah]
0x88C123: movzx   ecx, word ptr [esi+8]
0x88C127: add     esp, 8
0x88C12A: cmp     edi, ecx
0x88C12C: mov     dword ptr [esp+0Ch+arg_0], eax
0x88C130: jb      short loc_88C140
0x88C132: movzx   edx, word ptr [esi+0Eh]
0x88C136: add     edx, edi
0x88C138: push    edx
0x88C139: mov     ecx, esi
0x88C13B: call    NiTArray_SetSize
0x88C140: lea     eax, [esp+0Ch+arg_0]
0x88C144: push    eax
0x88C145: push    edi
0x88C146: mov     ecx, esi
0x88C148: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88C14D: mov     ecx, ds:0BA7D70h
0x88C153: push    ecx; int
0x88C154: push    offset aShapes; "Shapes"
0x88C159: call    TESOutput_PrintLabeledUnsignedInt
0x88C15E: movzx   edi, word ptr [esi+0Ah]
0x88C162: movzx   edx, word ptr [esi+8]
0x88C166: add     esp, 8
0x88C169: cmp     edi, edx
0x88C16B: mov     dword ptr [esp+0Ch+arg_0], eax
0x88C16F: jb      short loc_88C17F
0x88C171: movzx   eax, word ptr [esi+0Eh]
0x88C175: add     eax, edi
0x88C177: push    eax
0x88C178: mov     ecx, esi
0x88C17A: call    NiTArray_SetSize
0x88C17F: lea     ecx, [esp+0Ch+arg_0]
0x88C183: push    ecx
0x88C184: push    edi
0x88C185: mov     ecx, esi
0x88C187: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88C18C: mov     edx, ds:0BA7F5Ch
0x88C192: push    edx; int
0x88C193: push    offset aPhantoms; "Phantoms"
0x88C198: call    TESOutput_PrintLabeledUnsignedInt
0x88C19D: movzx   edi, word ptr [esi+0Ah]
0x88C1A1: mov     dword ptr [esp+14h+arg_0], eax
0x88C1A5: movzx   eax, word ptr [esi+8]
0x88C1A9: add     esp, 8
0x88C1AC: cmp     edi, eax
0x88C1AE: jb      short loc_88C1BE
0x88C1B0: movzx   ecx, word ptr [esi+0Eh]
0x88C1B4: add     ecx, edi
0x88C1B6: push    ecx
0x88C1B7: mov     ecx, esi
0x88C1B9: call    NiTArray_SetSize
0x88C1BE: lea     edx, [esp+0Ch+arg_0]
0x88C1C2: push    edx
0x88C1C3: push    edi
0x88C1C4: mov     ecx, esi
0x88C1C6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88C1CB: mov     eax, ds:0BA80F4h
0x88C1D0: push    eax; int
0x88C1D1: push    offset aMoppbvtreeshap; "MoppBVTreeShapes"
0x88C1D6: call    TESOutput_PrintLabeledUnsignedInt
0x88C1DB: movzx   edi, word ptr [esi+0Ah]
0x88C1DF: movzx   ecx, word ptr [esi+8]
0x88C1E3: add     esp, 8
0x88C1E6: cmp     edi, ecx
0x88C1E8: mov     dword ptr [esp+0Ch+arg_0], eax
0x88C1EC: jb      short loc_88C1FC
0x88C1EE: movzx   edx, word ptr [esi+0Eh]
0x88C1F2: add     edx, edi
0x88C1F4: push    edx
0x88C1F5: mov     ecx, esi
0x88C1F7: call    NiTArray_SetSize
0x88C1FC: lea     eax, [esp+0Ch+arg_0]
0x88C200: push    eax
0x88C201: push    edi
0x88C202: mov     ecx, esi
0x88C204: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88C209: pop     edi
0x88C20A: pop     esi
0x88C20B: pop     ebx
0x88C20C: retn    4
