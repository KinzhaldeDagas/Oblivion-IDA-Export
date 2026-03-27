0x73AAE0: push    esi
0x73AAE1: mov     esi, [esp+4+arg_0]
0x73AAE5: push    edi
0x73AAE6: push    esi
0x73AAE7: call    sub_70DC20
0x73AAEC: mov     eax, ds:0B40138h
0x73AAF1: push    eax; ArgList
0x73AAF2: call    TESOutput_PrintString
0x73AAF7: movzx   edi, word ptr [esi+0Ah]
0x73AAFB: movzx   ecx, word ptr [esi+8]
0x73AAFF: add     esp, 4
0x73AB02: cmp     edi, ecx
0x73AB04: mov     [esp+8+arg_0], eax
0x73AB08: jb      short loc_73AB18
0x73AB0A: movzx   edx, word ptr [esi+0Eh]
0x73AB0E: add     edx, edi
0x73AB10: push    edx
0x73AB11: mov     ecx, esi
0x73AB13: call    NiTArray_SetSize
0x73AB18: lea     eax, [esp+8+arg_0]
0x73AB1C: push    eax
0x73AB1D: push    edi
0x73AB1E: mov     ecx, esi
0x73AB20: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73AB25: pop     edi
0x73AB26: pop     esi
0x73AB27: retn    4
