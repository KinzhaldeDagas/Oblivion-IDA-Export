0x8A2A50: push    ebx
0x8A2A51: push    esi
0x8A2A52: mov     esi, [esp+8+arg_0]
0x8A2A56: push    edi
0x8A2A57: push    esi
0x8A2A58: mov     ebx, ecx
0x8A2A5A: call    sub_89D820
0x8A2A5F: mov     eax, ds:0BA7D78h
0x8A2A64: push    eax; ArgList
0x8A2A65: call    TESOutput_PrintString
0x8A2A6A: movzx   edi, word ptr [esi+0Ah]
0x8A2A6E: movzx   ecx, word ptr [esi+8]
0x8A2A72: add     esp, 4
0x8A2A75: cmp     edi, ecx
0x8A2A77: mov     [esp+0Ch+arg_0], eax
0x8A2A7B: jb      short loc_8A2A8B
0x8A2A7D: movzx   edx, word ptr [esi+0Eh]
0x8A2A81: add     edx, edi
0x8A2A83: push    edx
0x8A2A84: mov     ecx, esi
0x8A2A86: call    NiTArray_SetSize
0x8A2A8B: lea     eax, [esp+0Ch+arg_0]
0x8A2A8F: push    eax
0x8A2A90: push    edi
0x8A2A91: mov     ecx, esi
0x8A2A93: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A2A98: mov     ecx, [ebx+10h]
0x8A2A9B: mov     eax, ds:0B2E908h[ecx*4]
0x8A2AA2: push    eax; int
0x8A2AA3: push    offset aMaterial; "MATERIAL"
0x8A2AA8: call    TESOutput_PrintLabeledString
0x8A2AAD: movzx   edi, word ptr [esi+0Ah]
0x8A2AB1: movzx   edx, word ptr [esi+8]
0x8A2AB5: add     esp, 8
0x8A2AB8: cmp     edi, edx
0x8A2ABA: mov     [esp+0Ch+arg_0], eax
0x8A2ABE: jb      short loc_8A2ACE
0x8A2AC0: movzx   eax, word ptr [esi+0Eh]
0x8A2AC4: add     eax, edi
0x8A2AC6: push    eax
0x8A2AC7: mov     ecx, esi
0x8A2AC9: call    NiTArray_SetSize
0x8A2ACE: lea     ecx, [esp+0Ch+arg_0]
0x8A2AD2: push    ecx
0x8A2AD3: push    edi
0x8A2AD4: mov     ecx, esi
0x8A2AD6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A2ADB: pop     edi
0x8A2ADC: pop     esi
0x8A2ADD: pop     ebx
0x8A2ADE: retn    4
