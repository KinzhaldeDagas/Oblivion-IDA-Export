0x732CE0: push    ebx
0x732CE1: push    esi
0x732CE2: mov     esi, [esp+8+arg_0]
0x732CE6: push    edi
0x732CE7: push    esi
0x732CE8: mov     ebx, ecx
0x732CEA: call    sub_729D00
0x732CEF: mov     eax, ds:0B40100h
0x732CF4: push    eax; ArgList
0x732CF5: call    TESOutput_PrintString
0x732CFA: movzx   edi, word ptr [esi+0Ah]
0x732CFE: movzx   ecx, word ptr [esi+8]
0x732D02: add     esp, 4
0x732D05: cmp     edi, ecx
0x732D07: mov     [esp+0Ch+arg_0], eax
0x732D0B: jb      short loc_732D1B
0x732D0D: movzx   edx, word ptr [esi+0Eh]
0x732D11: add     edx, edi
0x732D13: push    edx
0x732D14: mov     ecx, esi
0x732D16: call    NiTArray_SetSize
0x732D1B: lea     eax, [esp+0Ch+arg_0]
0x732D1F: push    eax
0x732D20: push    edi
0x732D21: mov     ecx, esi
0x732D23: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x732D28: mov     ecx, [ebx+40h]
0x732D2B: push    ecx; int
0x732D2C: push    offset aM_pkflags; "m_pkFlags"
0x732D31: call    TESOutput_PrintLabeledPointer
0x732D36: movzx   edi, word ptr [esi+0Ah]
0x732D3A: movzx   edx, word ptr [esi+8]
0x732D3E: add     esp, 8
0x732D41: cmp     edi, edx
0x732D43: mov     [esp+0Ch+arg_0], eax
0x732D47: jb      short loc_732D57
0x732D49: movzx   eax, word ptr [esi+0Eh]
0x732D4D: add     eax, edi
0x732D4F: push    eax
0x732D50: mov     ecx, esi
0x732D52: call    NiTArray_SetSize
0x732D57: lea     ecx, [esp+0Ch+arg_0]
0x732D5B: push    ecx
0x732D5C: push    edi
0x732D5D: mov     ecx, esi
0x732D5F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x732D64: pop     edi
0x732D65: pop     esi
0x732D66: pop     ebx
0x732D67: retn    4
