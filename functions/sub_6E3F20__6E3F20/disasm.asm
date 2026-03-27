0x6E3F20: push    ebx
0x6E3F21: push    esi
0x6E3F22: mov     esi, [esp+8+arg_0]
0x6E3F26: push    edi
0x6E3F27: push    esi
0x6E3F28: mov     ebx, ecx
0x6E3F2A: call    sub_6EC460
0x6E3F2F: mov     eax, ds:0B3E2D0h
0x6E3F34: push    eax; ArgList
0x6E3F35: call    TESOutput_PrintString
0x6E3F3A: movzx   edi, word ptr [esi+0Ah]
0x6E3F3E: movzx   ecx, word ptr [esi+8]
0x6E3F42: add     esp, 4
0x6E3F45: cmp     edi, ecx
0x6E3F47: mov     [esp+0Ch+arg_0], eax
0x6E3F4B: jb      short loc_6E3F5B
0x6E3F4D: movzx   edx, word ptr [esi+0Eh]
0x6E3F51: add     edx, edi
0x6E3F53: push    edx
0x6E3F54: mov     ecx, esi
0x6E3F56: call    NiTArray_SetSize
0x6E3F5B: lea     eax, [esp+0Ch+arg_0]
0x6E3F5F: push    eax
0x6E3F60: push    edi
0x6E3F61: mov     ecx, esi
0x6E3F63: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E3F68: push    offset aM_kcolorvalue; "m_kColorValue"
0x6E3F6D: lea     ecx, [ebx+0Ch]
0x6E3F70: call    sub_7093D0
0x6E3F75: movzx   edi, word ptr [esi+0Ah]
0x6E3F79: movzx   ecx, word ptr [esi+8]
0x6E3F7D: cmp     edi, ecx
0x6E3F7F: mov     [esp+0Ch+arg_0], eax
0x6E3F83: jb      short loc_6E3F93
0x6E3F85: movzx   edx, word ptr [esi+0Eh]
0x6E3F89: add     edx, edi
0x6E3F8B: push    edx
0x6E3F8C: mov     ecx, esi
0x6E3F8E: call    NiTArray_SetSize
0x6E3F93: lea     eax, [esp+0Ch+arg_0]
0x6E3F97: push    eax
0x6E3F98: push    edi
0x6E3F99: mov     ecx, esi
0x6E3F9B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E3FA0: mov     ebx, [ebx+1Ch]
0x6E3FA3: push    ebx; int
0x6E3FA4: push    offset aM_spcolordata; "m_spColorData"
0x6E3FA9: call    TESOutput_PrintLabeledPointer
0x6E3FAE: movzx   edi, word ptr [esi+0Ah]
0x6E3FB2: movzx   ecx, word ptr [esi+8]
0x6E3FB6: add     esp, 8
0x6E3FB9: cmp     edi, ecx
0x6E3FBB: mov     [esp+0Ch+arg_0], eax
0x6E3FBF: jb      short loc_6E3FCF
0x6E3FC1: movzx   edx, word ptr [esi+0Eh]
0x6E3FC5: add     edx, edi
0x6E3FC7: push    edx
0x6E3FC8: mov     ecx, esi
0x6E3FCA: call    NiTArray_SetSize
0x6E3FCF: lea     eax, [esp+0Ch+arg_0]
0x6E3FD3: push    eax
0x6E3FD4: push    edi
0x6E3FD5: mov     ecx, esi
0x6E3FD7: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E3FDC: pop     edi
0x6E3FDD: pop     esi
0x6E3FDE: pop     ebx
0x6E3FDF: retn    4
