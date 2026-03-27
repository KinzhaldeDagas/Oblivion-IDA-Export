0x459800: push    esi
0x459801: mov     esi, [esp+4+arg_0]
0x459805: test    esi, esi
0x459807: push    edi; ArgList
0x459808: mov     edi, ecx
0x45980A: jnz     short loc_45981E
0x45980C: push    offset aAttemptingToAd; "Attempting to add null object to create"...
0x459811: call    PrintError
0x459816: add     esp, 4
0x459819: pop     edi
0x45981A: pop     esi
0x45981B: retn    4
0x45981E: mov     eax, [esi+0Ch]
0x459821: mov     ecx, ds:0B33A98h
0x459827: push    eax; _DWORD
0x459828: call    TESDataHandler_IsFormIDCreated?
0x45982D: test    al, al
0x45982F: jnz     short loc_459847
0x459831: mov     eax, [esi+0Ch]
0x459834: push    eax; ArgList
0x459835: push    offset aAttemptingTo_0; "Attempting to add non-created form %08X"...
0x45983A: call    PrintError
0x45983F: add     esp, 8
0x459842: pop     edi
0x459843: pop     esi
0x459844: retn    4
0x459847: mov     esi, [esi+0Ch]
0x45984A: lea     ecx, [edi+28h]
0x45984D: mov     eax, ecx
0x45984F: test    eax, eax
0x459851: jz      short loc_45985E
0x459853: cmp     [eax], esi
0x459855: jz      short loc_459864
0x459857: mov     eax, [eax+4]
0x45985A: test    eax, eax
0x45985C: jnz     short loc_459853
0x45985E: push    esi
0x45985F: call    BSSimpleList_PushFront
0x459864: pop     edi
0x459865: pop     esi
0x459866: retn    4
