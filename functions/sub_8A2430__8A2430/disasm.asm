0x8A2430: sub     esp, 34h
0x8A2433: push    ebx
0x8A2434: push    esi
0x8A2435: mov     esi, [esp+3Ch+arg_0]
0x8A2439: push    edi
0x8A243A: push    esi
0x8A243B: mov     edi, ecx
0x8A243D: call    sub_8A2A50
0x8A2442: mov     eax, ds:0BA7D68h
0x8A2447: push    eax; ArgList
0x8A2448: call    TESOutput_PrintString
0x8A244D: movzx   ebx, word ptr [esi+0Ah]
0x8A2451: movzx   ecx, word ptr [esi+8]
0x8A2455: add     esp, 4
0x8A2458: cmp     ebx, ecx
0x8A245A: mov     [esp+40h+arg_0], eax
0x8A245E: jb      short loc_8A246E
0x8A2460: movzx   edx, word ptr [esi+0Eh]
0x8A2464: add     edx, ebx
0x8A2466: push    edx
0x8A2467: mov     ecx, esi
0x8A2469: call    NiTArray_SetSize
0x8A246E: lea     eax, [esp+40h+arg_0]
0x8A2472: push    eax
0x8A2473: push    ebx
0x8A2474: mov     ecx, esi
0x8A2476: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A247B: test    edi, edi
0x8A247D: jz      short loc_8A2489
0x8A247F: mov     eax, [edi+8]
0x8A2482: test    eax, eax
0x8A2484: lea     ebx, [eax+20h]
0x8A2487: jnz     short loc_8A248E
0x8A2489: mov     ebx, offset xmmword_B2F090
0x8A248E: lea     ecx, [esp+40h+var_34]
0x8A2492: push    ebx
0x8A2493: push    ecx
0x8A2494: call    sub_607740
0x8A2499: add     ebx, 30h ; '0'
0x8A249C: lea     edx, [esp+48h+var_10]
0x8A24A0: push    ebx
0x8A24A1: push    edx
0x8A24A2: call    sub_43F3E0
0x8A24A7: add     esp, 10h
0x8A24AA: push    offset aTrans; "Trans"
0x8A24AF: lea     ecx, [esp+44h+var_10]
0x8A24B3: call    sub_707280
0x8A24B8: movzx   ebx, word ptr [esi+0Ah]
0x8A24BC: mov     [esp+40h+arg_0], eax
0x8A24C0: movzx   eax, word ptr [esi+8]
0x8A24C4: cmp     ebx, eax
0x8A24C6: jb      short loc_8A24D6
0x8A24C8: movzx   ecx, word ptr [esi+0Eh]
0x8A24CC: add     ecx, ebx
0x8A24CE: push    ecx
0x8A24CF: mov     ecx, esi
0x8A24D1: call    NiTArray_SetSize
0x8A24D6: lea     edx, [esp+40h+arg_0]
0x8A24DA: push    edx
0x8A24DB: push    ebx
0x8A24DC: mov     ecx, esi
0x8A24DE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A24E3: push    offset off_A97270; ArgList
0x8A24E8: lea     ecx, [esp+44h+var_34]
0x8A24EC: call    sub_711A50
0x8A24F1: movzx   ebx, word ptr [esi+0Ah]
0x8A24F5: mov     [esp+40h+arg_0], eax
0x8A24F9: movzx   eax, word ptr [esi+8]
0x8A24FD: cmp     ebx, eax
0x8A24FF: jb      short loc_8A250F
0x8A2501: movzx   ecx, word ptr [esi+0Eh]
0x8A2505: add     ecx, ebx
0x8A2507: push    ecx
0x8A2508: mov     ecx, esi
0x8A250A: call    NiTArray_SetSize
0x8A250F: lea     edx, [esp+40h+arg_0]
0x8A2513: push    edx
0x8A2514: push    ebx
0x8A2515: mov     ecx, esi
0x8A2517: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A251C: test    edi, edi
0x8A251E: jz      short loc_8A2533
0x8A2520: mov     edi, [edi+8]
0x8A2523: test    edi, edi
0x8A2525: jz      short loc_8A2533
0x8A2527: mov     edi, [edi+0Ch]
0x8A252A: test    edi, edi
0x8A252C: jz      short loc_8A2533
0x8A252E: mov     ecx, [edi+8]
0x8A2531: jmp     short loc_8A2535
0x8A2533: xor     ecx, ecx
0x8A2535: test    ecx, ecx
0x8A2537: jz      short loc_8A2541
0x8A2539: mov     eax, [ecx]
0x8A253B: mov     edx, [eax+30h]
0x8A253E: push    esi
0x8A253F: call    edx
0x8A2541: pop     edi
0x8A2542: pop     esi
0x8A2543: pop     ebx
0x8A2544: add     esp, 34h
0x8A2547: retn    4
