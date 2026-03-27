0x6D2430: push    esi
0x6D2431: mov     esi, [esp+4+arg_0]
0x6D2435: push    edi
0x6D2436: push    esi
0x6D2437: call    sub_6EC1D0
0x6D243C: mov     eax, ds:0B3CF1Ch
0x6D2441: push    eax; ArgList
0x6D2442: call    TESOutput_PrintString
0x6D2447: movzx   edi, word ptr [esi+0Ah]
0x6D244B: movzx   ecx, word ptr [esi+8]
0x6D244F: add     esp, 4
0x6D2452: cmp     edi, ecx
0x6D2454: mov     [esp+8+arg_0], eax
0x6D2458: jb      short loc_6D2468
0x6D245A: movzx   edx, word ptr [esi+0Eh]
0x6D245E: add     edx, edi
0x6D2460: push    edx
0x6D2461: mov     ecx, esi
0x6D2463: call    NiTArray_SetSize
0x6D2468: lea     eax, [esp+8+arg_0]
0x6D246C: push    eax
0x6D246D: push    edi
0x6D246E: mov     ecx, esi
0x6D2470: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D2475: pop     edi
0x6D2476: pop     esi
0x6D2477: retn    4
