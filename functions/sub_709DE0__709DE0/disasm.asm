0x709DE0: push    esi
0x709DE1: mov     esi, [esp+4+arg_0]
0x709DE5: push    edi
0x709DE6: push    esi
0x709DE7: call    sub_717790
0x709DEC: mov     eax, ds:0B3FAA8h
0x709DF1: push    eax; ArgList
0x709DF2: call    TESOutput_PrintString
0x709DF7: movzx   edi, word ptr [esi+0Ah]
0x709DFB: movzx   ecx, word ptr [esi+8]
0x709DFF: add     esp, 4
0x709E02: cmp     edi, ecx
0x709E04: mov     [esp+8+arg_0], eax
0x709E08: jb      short loc_709E18
0x709E0A: movzx   edx, word ptr [esi+0Eh]
0x709E0E: add     edx, edi
0x709E10: push    edx
0x709E11: mov     ecx, esi
0x709E13: call    NiTArray_SetSize
0x709E18: lea     eax, [esp+8+arg_0]
0x709E1C: push    eax
0x709E1D: push    edi
0x709E1E: mov     ecx, esi
0x709E20: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x709E25: pop     edi
0x709E26: pop     esi
0x709E27: retn    4
