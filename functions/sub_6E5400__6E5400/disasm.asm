0x6E5400: push    ebx
0x6E5401: push    esi
0x6E5402: mov     esi, [esp+8+arg_0]
0x6E5406: push    edi
0x6E5407: push    esi
0x6E5408: mov     ebx, ecx
0x6E540A: call    sub_6ED580
0x6E540F: mov     eax, ds:0B3E428h
0x6E5414: push    eax; ArgList
0x6E5415: call    TESOutput_PrintString
0x6E541A: movzx   edi, word ptr [esi+0Ah]
0x6E541E: movzx   ecx, word ptr [esi+8]
0x6E5422: add     esp, 4
0x6E5425: cmp     edi, ecx
0x6E5427: mov     [esp+0Ch+arg_0], eax
0x6E542B: jb      short loc_6E543B
0x6E542D: movzx   edx, word ptr [esi+0Eh]
0x6E5431: add     edx, edi
0x6E5433: push    edx
0x6E5434: mov     ecx, esi
0x6E5436: call    NiTArray_SetSize
0x6E543B: lea     eax, [esp+0Ch+arg_0]
0x6E543F: push    eax
0x6E5440: push    edi
0x6E5441: mov     ecx, esi
0x6E5443: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E5448: mov     ecx, [ebx+28h]
0x6E544B: push    ecx; int
0x6E544C: push    offset aM_kpoint3cphan; "m_kPoint3CPHandle"
0x6E5451: call    TESOutput_PrintLabeledUnsignedInt
0x6E5456: movzx   edi, word ptr [esi+0Ah]
0x6E545A: movzx   edx, word ptr [esi+8]
0x6E545E: add     esp, 8
0x6E5461: cmp     edi, edx
0x6E5463: mov     [esp+0Ch+arg_0], eax
0x6E5467: jb      short loc_6E5477
0x6E5469: movzx   eax, word ptr [esi+0Eh]
0x6E546D: add     eax, edi
0x6E546F: push    eax
0x6E5470: mov     ecx, esi
0x6E5472: call    NiTArray_SetSize
0x6E5477: lea     ecx, [esp+0Ch+arg_0]
0x6E547B: push    ecx
0x6E547C: push    edi
0x6E547D: mov     ecx, esi
0x6E547F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E5484: pop     edi
0x6E5485: pop     esi
0x6E5486: pop     ebx
0x6E5487: retn    4
