0x75E760: push    ebx
0x75E761: push    esi
0x75E762: mov     esi, [esp+8+arg_0]
0x75E766: push    edi
0x75E767: push    esi
0x75E768: mov     ebx, ecx
0x75E76A: call    sub_6CE3F0
0x75E76F: mov     eax, ds:0B41E14h
0x75E774: push    eax; ArgList
0x75E775: call    TESOutput_PrintString
0x75E77A: movzx   edi, word ptr [esi+0Ah]
0x75E77E: movzx   ecx, word ptr [esi+8]
0x75E782: add     esp, 4
0x75E785: cmp     edi, ecx
0x75E787: mov     [esp+0Ch+arg_0], eax
0x75E78B: jb      short loc_75E79B
0x75E78D: movzx   edx, word ptr [esi+0Eh]
0x75E791: add     edx, edi
0x75E793: push    edx
0x75E794: mov     ecx, esi
0x75E796: call    NiTArray_SetSize
0x75E79B: lea     eax, [esp+0Ch+arg_0]
0x75E79F: push    eax
0x75E7A0: push    edi
0x75E7A1: mov     ecx, esi
0x75E7A3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75E7A8: mov     ecx, [ebx+40h]
0x75E7AB: push    ecx; int
0x75E7AC: push    offset aModifierName; "Modifier Name"
0x75E7B1: call    TESOutput_PrintLabeledString
0x75E7B6: movzx   edi, word ptr [esi+0Ah]
0x75E7BA: movzx   edx, word ptr [esi+8]
0x75E7BE: add     esp, 8
0x75E7C1: cmp     edi, edx
0x75E7C3: mov     [esp+0Ch+arg_0], eax
0x75E7C7: jb      short loc_75E7D7
0x75E7C9: movzx   eax, word ptr [esi+0Eh]
0x75E7CD: add     eax, edi
0x75E7CF: push    eax
0x75E7D0: mov     ecx, esi
0x75E7D2: call    NiTArray_SetSize
0x75E7D7: lea     ecx, [esp+0Ch+arg_0]
0x75E7DB: push    ecx
0x75E7DC: push    edi
0x75E7DD: mov     ecx, esi
0x75E7DF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75E7E4: pop     edi
0x75E7E5: pop     esi
0x75E7E6: pop     ebx
0x75E7E7: retn    4
