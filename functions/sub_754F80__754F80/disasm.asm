0x754F80: push    esi
0x754F81: mov     esi, [esp+4+arg_0]
0x754F85: push    edi
0x754F86: push    esi
0x754F87: call    sub_716140
0x754F8C: mov     eax, ds:0B40F30h
0x754F91: push    eax; ArgList
0x754F92: call    TESOutput_PrintString
0x754F97: movzx   edi, word ptr [esi+0Ah]
0x754F9B: movzx   ecx, word ptr [esi+8]
0x754F9F: add     esp, 4
0x754FA2: cmp     edi, ecx
0x754FA4: mov     [esp+8+arg_0], eax
0x754FA8: jb      short loc_754FB8
0x754FAA: movzx   edx, word ptr [esi+0Eh]
0x754FAE: add     edx, edi
0x754FB0: push    edx
0x754FB1: mov     ecx, esi
0x754FB3: call    NiTArray_SetSize
0x754FB8: lea     eax, [esp+8+arg_0]
0x754FBC: push    eax
0x754FBD: push    edi
0x754FBE: mov     ecx, esi
0x754FC0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x754FC5: pop     edi
0x754FC6: pop     esi
0x754FC7: retn    4
