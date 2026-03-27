0x6E7EF0: push    esi
0x6E7EF1: mov     esi, [esp+4+arg_0]
0x6E7EF5: push    edi
0x6E7EF6: push    esi
0x6E7EF7: call    sub_6E8620
0x6E7EFC: mov     eax, ds:0B3E7A0h
0x6E7F01: push    eax; ArgList
0x6E7F02: call    TESOutput_PrintString
0x6E7F07: movzx   edi, word ptr [esi+0Ah]
0x6E7F0B: movzx   ecx, word ptr [esi+8]
0x6E7F0F: add     esp, 4
0x6E7F12: cmp     edi, ecx
0x6E7F14: mov     [esp+8+arg_0], eax
0x6E7F18: jb      short loc_6E7F28
0x6E7F1A: movzx   edx, word ptr [esi+0Eh]
0x6E7F1E: add     edx, edi
0x6E7F20: push    edx
0x6E7F21: mov     ecx, esi
0x6E7F23: call    NiTArray_SetSize
0x6E7F28: lea     eax, [esp+8+arg_0]
0x6E7F2C: push    eax
0x6E7F2D: push    edi
0x6E7F2E: mov     ecx, esi
0x6E7F30: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E7F35: pop     edi
0x6E7F36: pop     esi
0x6E7F37: retn    4
