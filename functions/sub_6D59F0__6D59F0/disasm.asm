0x6D59F0: push    esi
0x6D59F1: mov     esi, [esp+4+arg_0]
0x6D59F5: push    edi
0x6D59F6: push    esi
0x6D59F7: call    sub_716140
0x6D59FC: mov     eax, ds:0B3D8CCh
0x6D5A01: push    eax; ArgList
0x6D5A02: call    TESOutput_PrintString
0x6D5A07: movzx   edi, word ptr [esi+0Ah]
0x6D5A0B: movzx   ecx, word ptr [esi+8]
0x6D5A0F: add     esp, 4
0x6D5A12: cmp     edi, ecx
0x6D5A14: mov     [esp+8+arg_0], eax
0x6D5A18: jb      short loc_6D5A28
0x6D5A1A: movzx   edx, word ptr [esi+0Eh]
0x6D5A1E: add     edx, edi
0x6D5A20: push    edx
0x6D5A21: mov     ecx, esi
0x6D5A23: call    NiTArray_SetSize
0x6D5A28: lea     eax, [esp+8+arg_0]
0x6D5A2C: push    eax
0x6D5A2D: push    edi
0x6D5A2E: mov     ecx, esi
0x6D5A30: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D5A35: pop     edi
0x6D5A36: pop     esi
0x6D5A37: retn    4
