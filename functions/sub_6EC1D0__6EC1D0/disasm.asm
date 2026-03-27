0x6EC1D0: push    esi
0x6EC1D1: mov     esi, [esp+4+arg_0]
0x6EC1D5: push    edi
0x6EC1D6: push    esi
0x6EC1D7: call    sub_6CE3F0
0x6EC1DC: mov     eax, ds:0B3ED14h
0x6EC1E1: push    eax; ArgList
0x6EC1E2: call    TESOutput_PrintString
0x6EC1E7: movzx   edi, word ptr [esi+0Ah]
0x6EC1EB: movzx   ecx, word ptr [esi+8]
0x6EC1EF: add     esp, 4
0x6EC1F2: cmp     edi, ecx
0x6EC1F4: mov     [esp+8+arg_0], eax
0x6EC1F8: jb      short loc_6EC208
0x6EC1FA: movzx   edx, word ptr [esi+0Eh]
0x6EC1FE: add     edx, edi
0x6EC200: push    edx
0x6EC201: mov     ecx, esi
0x6EC203: call    NiTArray_SetSize
0x6EC208: lea     eax, [esp+8+arg_0]
0x6EC20C: push    eax
0x6EC20D: push    edi
0x6EC20E: mov     ecx, esi
0x6EC210: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6EC215: pop     edi
0x6EC216: pop     esi
0x6EC217: retn    4
