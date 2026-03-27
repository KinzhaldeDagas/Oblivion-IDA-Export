0x732EF0: push    ebx
0x732EF1: push    esi
0x732EF2: mov     esi, [esp+8+arg_0]
0x732EF6: push    edi
0x732EF7: push    esi
0x732EF8: mov     ebx, ecx
0x732EFA: call    sub_729D00
0x732EFF: mov     eax, ds:0B40108h
0x732F04: push    eax; ArgList
0x732F05: call    TESOutput_PrintString
0x732F0A: movzx   edi, word ptr [esi+0Ah]
0x732F0E: movzx   ecx, word ptr [esi+8]
0x732F12: add     esp, 4
0x732F15: cmp     edi, ecx
0x732F17: mov     [esp+0Ch+arg_0], eax
0x732F1B: jb      short loc_732F2B
0x732F1D: movzx   edx, word ptr [esi+0Eh]
0x732F21: add     edx, edi
0x732F23: push    edx
0x732F24: mov     ecx, esi
0x732F26: call    NiTArray_SetSize
0x732F2B: lea     eax, [esp+0Ch+arg_0]
0x732F2F: push    eax
0x732F30: push    edi
0x732F31: mov     ecx, esi
0x732F33: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x732F38: movzx   ecx, word ptr [ebx+40h]
0x732F3C: push    ecx; __int16
0x732F3D: push    offset aM_ustriangles; "m_usTriangles"
0x732F42: call    TESOutput_PrintLabeledUnsignedShort
0x732F47: movzx   edi, word ptr [esi+0Ah]
0x732F4B: movzx   edx, word ptr [esi+8]
0x732F4F: add     esp, 8
0x732F52: cmp     edi, edx
0x732F54: mov     [esp+0Ch+arg_0], eax
0x732F58: jb      short loc_732F68
0x732F5A: movzx   eax, word ptr [esi+0Eh]
0x732F5E: add     eax, edi
0x732F60: push    eax
0x732F61: mov     ecx, esi
0x732F63: call    NiTArray_SetSize
0x732F68: lea     ecx, [esp+0Ch+arg_0]
0x732F6C: push    ecx
0x732F6D: push    edi
0x732F6E: mov     ecx, esi
0x732F70: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x732F75: pop     edi
0x732F76: pop     esi
0x732F77: pop     ebx
0x732F78: retn    4
