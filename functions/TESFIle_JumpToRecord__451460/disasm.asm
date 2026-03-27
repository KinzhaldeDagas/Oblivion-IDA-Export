0x451460: push    esi
0x451461: mov     esi, ecx
0x451463: mov     eax, [esi+414h]
0x451469: push    edi
0x45146A: xor     edi, edi
0x45146C: cmp     eax, edi
0x45146E: jz      short loc_451487
0x451470: push    eax; void *
0x451471: mov     ecx, offset FormHeap
0x451476: call    MemoryHeap_Free_checked
0x45147B: mov     [esi+414h], edi
0x451481: mov     [esi+418h], edi
0x451487: mov     eax, [esp+8+Buffer]
0x45148B: cmp     eax, [esi+258h]
0x451491: mov     [esi+25Ch], eax
0x451497: jb      short loc_4514C0
0x451499: xor     eax, eax
0x45149B: mov     [esi+23Ch], eax
0x4514A1: mov     [esi+240h], eax
0x4514A7: mov     [esi+244h], eax
0x4514AD: mov     [esi+248h], eax
0x4514B3: mov     [esi+24Ch], eax
0x4514B9: pop     edi
0x4514BA: xor     al, al
0x4514BC: pop     esi
0x4514BD: retn    4
0x4514C0: mov     ecx, [esi+10h]
0x4514C3: mov     edx, [ecx]
0x4514C5: push    ebx
0x4514C6: mov     ebx, ds:0A853D0h
0x4514CC: push    ebx
0x4514CD: push    eax
0x4514CE: mov     eax, [edx+0Ch]
0x4514D1: call    eax
0x4514D3: mov     eax, [esi+10h]
0x4514D6: mov     ecx, [eax+30h]
0x4514D9: cmp     ecx, 0FFFFFFFFh
0x4514DC: pop     ebx
0x4514DD: jz      short loc_4514E3
0x4514DF: mov     eax, ecx
0x4514E1: jmp     short loc_4514E9
0x4514E3: mov     eax, [eax+148h]
0x4514E9: cmp     eax, 0FFFFFFFFh
0x4514EC: mov     [esi+25Ch], eax
0x4514F2: jnz     short loc_451537
0x4514F4: push    edi; Arguments
0x4514F5: push    edi; nSize
0x4514F6: lea     ecx, [esp+10h+Buffer]
0x4514FA: push    ecx; lpBuffer
0x4514FB: push    400h; dwLanguageId
0x451500: call    dword ptr ds:0A281ECh
0x451506: push    eax; dwMessageId
0x451507: push    edi; lpSource
0x451508: push    1300h; dwFlags
0x45150D: call    dword ptr ds:0A28170h
0x451513: mov     edx, [esp+8+Buffer]
0x451517: push    edx; ArgList
0x451518: push    offset aSetfilepoint_0; "SetFilePointer() in SetOffset failed wi"...
0x45151D: call    PrintError
0x451522: mov     eax, [esp+10h+Buffer]
0x451526: add     esp, 8
0x451529: push    eax; hMem
0x45152A: call    dword ptr ds:0A2816Ch
0x451530: pop     edi
0x451531: xor     al, al
0x451533: pop     esi
0x451534: retn    4
0x451537: xor     eax, eax
0x451539: mov     [esi+260h], edi
0x45153F: mov     [esi+264h], edi
0x451545: mov     [esi+23Ch], eax
0x45154B: mov     [esi+240h], eax
0x451551: mov     [esi+244h], eax
0x451557: mov     [esi+248h], eax
0x45155D: mov     ecx, esi
0x45155F: mov     [esi+24Ch], eax
0x451565: call    TESFile_GetRecordType
0x45156A: pop     edi
0x45156B: mov     al, 1
0x45156D: pop     esi
0x45156E: retn    4
