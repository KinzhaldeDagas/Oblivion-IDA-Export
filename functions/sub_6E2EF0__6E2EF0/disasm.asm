0x6E2EF0: push    ebx
0x6E2EF1: push    esi
0x6E2EF2: mov     esi, [esp+8+arg_0]
0x6E2EF6: push    edi
0x6E2EF7: push    esi
0x6E2EF8: mov     ebx, ecx
0x6E2EFA: call    sub_6ED000
0x6E2EFF: mov     eax, ds:0B3E1ACh
0x6E2F04: push    eax; ArgList
0x6E2F05: call    TESOutput_PrintString
0x6E2F0A: movzx   edi, word ptr [esi+0Ah]
0x6E2F0E: movzx   ecx, word ptr [esi+8]
0x6E2F12: add     esp, 4
0x6E2F15: cmp     edi, ecx
0x6E2F17: mov     [esp+0Ch+arg_0], eax
0x6E2F1B: jb      short loc_6E2F2B
0x6E2F1D: movzx   edx, word ptr [esi+0Eh]
0x6E2F21: add     edx, edi
0x6E2F23: push    edx
0x6E2F24: mov     ecx, esi
0x6E2F26: call    NiTArray_SetSize
0x6E2F2B: lea     eax, [esp+0Ch+arg_0]
0x6E2F2F: push    eax
0x6E2F30: push    edi
0x6E2F31: mov     ecx, esi
0x6E2F33: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E2F38: mov     ecx, [ebx+48h]
0x6E2F3B: push    ecx; int
0x6E2F3C: push    offset aM_ifloatsextra; "m_iFloatsExtraDataIndex"
0x6E2F41: call    TESOutput_PrintLabeledSignedInt
0x6E2F46: movzx   edi, word ptr [esi+0Ah]
0x6E2F4A: movzx   edx, word ptr [esi+8]
0x6E2F4E: add     esp, 8
0x6E2F51: cmp     edi, edx
0x6E2F53: mov     [esp+0Ch+arg_0], eax
0x6E2F57: jb      short loc_6E2F67
0x6E2F59: movzx   eax, word ptr [esi+0Eh]
0x6E2F5D: add     eax, edi
0x6E2F5F: push    eax
0x6E2F60: mov     ecx, esi
0x6E2F62: call    NiTArray_SetSize
0x6E2F67: lea     ecx, [esp+0Ch+arg_0]
0x6E2F6B: push    ecx
0x6E2F6C: push    edi
0x6E2F6D: mov     ecx, esi
0x6E2F6F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E2F74: pop     edi
0x6E2F75: pop     esi
0x6E2F76: pop     ebx
0x6E2F77: retn    4
