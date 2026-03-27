0x6EA7C0: push    ebx
0x6EA7C1: push    esi
0x6EA7C2: mov     esi, [esp+8+arg_0]
0x6EA7C6: push    edi
0x6EA7C7: push    esi
0x6EA7C8: mov     ebx, ecx
0x6EA7CA: call    sub_6CDDB0
0x6EA7CF: mov     eax, ds:0B3E910h
0x6EA7D4: push    eax; ArgList
0x6EA7D5: call    TESOutput_PrintString
0x6EA7DA: movzx   edi, word ptr [esi+0Ah]
0x6EA7DE: movzx   ecx, word ptr [esi+8]
0x6EA7E2: add     esp, 4
0x6EA7E5: cmp     edi, ecx
0x6EA7E7: mov     [esp+0Ch+arg_0], eax
0x6EA7EB: jb      short loc_6EA7FB
0x6EA7ED: movzx   edx, word ptr [esi+0Eh]
0x6EA7F1: add     edx, edi
0x6EA7F3: push    edx
0x6EA7F4: mov     ecx, esi
0x6EA7F6: call    NiTArray_SetSize
0x6EA7FB: lea     eax, [esp+0Ch+arg_0]
0x6EA7FF: push    eax
0x6EA800: push    edi
0x6EA801: mov     ecx, esi
0x6EA803: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EA808: push    offset aM_kquaternionv; "m_kQuaternionValue"
0x6EA80D: lea     ecx, [ebx+30h]
0x6EA810: call    sub_7153C0
0x6EA815: movzx   edi, word ptr [esi+0Ah]
0x6EA819: movzx   ecx, word ptr [esi+8]
0x6EA81D: cmp     edi, ecx
0x6EA81F: mov     [esp+0Ch+arg_0], eax
0x6EA823: jb      short loc_6EA833
0x6EA825: movzx   edx, word ptr [esi+0Eh]
0x6EA829: add     edx, edi
0x6EA82B: push    edx
0x6EA82C: mov     ecx, esi
0x6EA82E: call    NiTArray_SetSize
0x6EA833: lea     eax, [esp+0Ch+arg_0]
0x6EA837: push    eax
0x6EA838: push    edi
0x6EA839: mov     ecx, esi
0x6EA83B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EA840: pop     edi
0x6EA841: pop     esi
0x6EA842: pop     ebx
0x6EA843: retn    4
