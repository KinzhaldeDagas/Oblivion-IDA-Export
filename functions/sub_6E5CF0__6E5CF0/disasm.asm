0x6E5CF0: push    esi
0x6E5CF1: mov     esi, [esp+4+arg_0]
0x6E5CF5: push    edi
0x6E5CF6: push    esi
0x6E5CF7: call    sub_6E4F80
0x6E5CFC: mov     eax, ds:0B3E4E8h
0x6E5D01: push    eax; ArgList
0x6E5D02: call    TESOutput_PrintString
0x6E5D07: movzx   edi, word ptr [esi+0Ah]
0x6E5D0B: movzx   ecx, word ptr [esi+8]
0x6E5D0F: add     esp, 4
0x6E5D12: cmp     edi, ecx
0x6E5D14: mov     [esp+8+arg_0], eax
0x6E5D18: jb      short loc_6E5D28
0x6E5D1A: movzx   edx, word ptr [esi+0Eh]
0x6E5D1E: add     edx, edi
0x6E5D20: push    edx
0x6E5D21: mov     ecx, esi
0x6E5D23: call    NiTArray_SetSize
0x6E5D28: lea     eax, [esp+8+arg_0]
0x6E5D2C: push    eax
0x6E5D2D: push    edi
0x6E5D2E: mov     ecx, esi
0x6E5D30: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E5D35: pop     edi
0x6E5D36: pop     esi
0x6E5D37: retn    4
