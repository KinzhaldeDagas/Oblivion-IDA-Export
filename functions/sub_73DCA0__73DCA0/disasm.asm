0x73DCA0: push    ebx
0x73DCA1: push    esi
0x73DCA2: mov     esi, dword ptr [esp+8+arg_0]
0x73DCA6: push    edi
0x73DCA7: push    esi
0x73DCA8: mov     ebx, ecx
0x73DCAA: call    sub_700B10
0x73DCAF: mov     eax, ds:0B401B0h
0x73DCB4: push    eax; ArgList
0x73DCB5: call    TESOutput_PrintString
0x73DCBA: movzx   edi, word ptr [esi+0Ah]
0x73DCBE: movzx   ecx, word ptr [esi+8]
0x73DCC2: add     esp, 4
0x73DCC5: cmp     edi, ecx
0x73DCC7: mov     dword ptr [esp+0Ch+arg_0], eax
0x73DCCB: jb      short loc_73DCDB
0x73DCCD: movzx   edx, word ptr [esi+0Eh]
0x73DCD1: add     edx, edi
0x73DCD3: push    edx
0x73DCD4: mov     ecx, esi
0x73DCD6: call    NiTArray_SetSize
0x73DCDB: lea     eax, [esp+0Ch+arg_0]
0x73DCDF: push    eax
0x73DCE0: push    edi
0x73DCE1: mov     ecx, esi
0x73DCE3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73DCE8: mov     cl, [ebx+18h]
0x73DCEB: and     cl, 1
0x73DCEE: mov     [esp+0Ch+arg_0], cl
0x73DCF2: mov     edx, dword ptr [esp+0Ch+arg_0]
0x73DCF6: push    edx; char
0x73DCF7: push    offset aM_bsmooth; "m_bSmooth"
0x73DCFC: call    TESOutput_PrintLabeledBool
0x73DD01: movzx   edi, word ptr [esi+0Ah]
0x73DD05: mov     dword ptr [esp+14h+arg_0], eax
0x73DD09: movzx   eax, word ptr [esi+8]
0x73DD0D: add     esp, 8
0x73DD10: cmp     edi, eax
0x73DD12: jb      short loc_73DD22
0x73DD14: movzx   ecx, word ptr [esi+0Eh]
0x73DD18: add     ecx, edi
0x73DD1A: push    ecx
0x73DD1B: mov     ecx, esi
0x73DD1D: call    NiTArray_SetSize
0x73DD22: lea     edx, [esp+0Ch+arg_0]
0x73DD26: push    edx
0x73DD27: push    edi
0x73DD28: mov     ecx, esi
0x73DD2A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73DD2F: pop     edi
0x73DD30: pop     esi
0x73DD31: pop     ebx
0x73DD32: retn    4
