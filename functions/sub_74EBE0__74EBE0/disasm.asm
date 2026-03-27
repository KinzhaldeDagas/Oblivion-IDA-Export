0x74EBE0: push    esi
0x74EBE1: mov     esi, [esp+4+arg_0]
0x74EBE5: push    edi
0x74EBE6: push    esi
0x74EBE7: call    sub_749D70
0x74EBEC: mov     eax, ds:0B40B1Ch
0x74EBF1: push    eax; ArgList
0x74EBF2: call    TESOutput_PrintString
0x74EBF7: movzx   edi, word ptr [esi+0Ah]
0x74EBFB: movzx   ecx, word ptr [esi+8]
0x74EBFF: add     esp, 4
0x74EC02: cmp     edi, ecx
0x74EC04: mov     [esp+8+arg_0], eax
0x74EC08: jb      short loc_74EC18
0x74EC0A: movzx   edx, word ptr [esi+0Eh]
0x74EC0E: add     edx, edi
0x74EC10: push    edx
0x74EC11: mov     ecx, esi
0x74EC13: call    NiTArray_SetSize
0x74EC18: lea     eax, [esp+8+arg_0]
0x74EC1C: push    eax
0x74EC1D: push    edi
0x74EC1E: mov     ecx, esi
0x74EC20: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74EC25: pop     edi
0x74EC26: pop     esi
0x74EC27: retn    4
