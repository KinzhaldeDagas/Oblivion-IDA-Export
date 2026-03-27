0x5F23E0: push    esi
0x5F23E1: mov     esi, ecx
0x5F23E3: cmp     dword ptr [esi+58h], 0
0x5F23E7: jnz     short loc_5F23ED
0x5F23E9: xor     al, al
0x5F23EB: pop     esi
0x5F23EC: retn
0x5F23ED: mov     ecx, [esi+58h]
0x5F23F0: mov     eax, [ecx]
0x5F23F2: mov     edx, [eax+8]
0x5F23F5: push    ebx
0x5F23F6: push    edi
0x5F23F7: call    edx
0x5F23F9: mov     ecx, esi
0x5F23FB: mov     edi, eax
0x5F23FD: call    MobileObject_GetProcessLevel
0x5F2402: mov     ebx, eax
0x5F2404: cmp     edi, ebx
0x5F2406: jz      short def_5F2457; jumptable 005F2457 default case
0x5F2408: test    edi, edi
0x5F240A: jnz     short loc_5F2452
0x5F240C: mov     ecx, [esi+58h]
0x5F240F: mov     eax, [ecx]
0x5F2411: mov     edx, [eax+47Ch]
0x5F2417: call    edx
0x5F2419: test    eax, eax
0x5F241B: jz      short loc_5F2452
0x5F241D: mov     ecx, [esi+58h]
0x5F2420: mov     eax, [ecx]
0x5F2422: mov     edx, [eax+47Ch]
0x5F2428: call    edx
0x5F242A: cmp     eax, 6
0x5F242D: jz      loc_5F250C
0x5F2433: mov     ecx, [esi+58h]
0x5F2436: mov     eax, [ecx]
0x5F2438: mov     edx, [eax+47Ch]
0x5F243E: call    edx
0x5F2440: cmp     eax, 5
0x5F2443: jnz     short loc_5F2452
0x5F2445: mov     ecx, esi
0x5F2447: call    sub_4E4690
0x5F244C: pop     edi
0x5F244D: pop     ebx
0x5F244E: xor     al, al
0x5F2450: pop     esi
0x5F2451: retn
0x5F2452: cmp     ebx, 3; switch 4 cases
0x5F2455: ja      short def_5F2457; jumptable 005F2457 default case
0x5F2457: jmp     ds:jpt_5F2457[ebx*4]; switch jump
0x5F245E: mov     eax, [esi]; jumptable 005F2457 case 0
0x5F2460: mov     edx, [eax+1A4h]
0x5F2466: mov     ecx, esi
0x5F2468: call    edx
0x5F246A: pop     edi; jumptable 005F2457 default case
0x5F246B: pop     ebx
0x5F246C: mov     al, 1
0x5F246E: pop     esi
0x5F246F: retn
0x5F2470: mov     eax, [esi]; jumptable 005F2457 case 1
0x5F2472: mov     edx, [eax+1B0h]
0x5F2478: mov     ecx, esi
0x5F247A: call    edx
0x5F247C: pop     edi
0x5F247D: pop     ebx
0x5F247E: mov     al, 1
0x5F2480: pop     esi
0x5F2481: retn
0x5F2482: mov     ecx, esi; jumptable 005F2457 case 2
0x5F2484: call    sub_5F0750
0x5F2489: test    al, al
0x5F248B: mov     eax, [esi]
0x5F248D: mov     ecx, esi
0x5F248F: jnz     short loc_5F24B9
0x5F2491: mov     edx, [eax+1ACh]
0x5F2497: call    edx
0x5F2499: pop     edi
0x5F249A: pop     ebx
0x5F249B: mov     al, 1
0x5F249D: pop     esi
0x5F249E: retn
0x5F249F: mov     ecx, esi; this
0x5F24A1: call    TESObjectREFR_IsPersistent?
0x5F24A6: test    al, al
0x5F24A8: mov     ecx, esi
0x5F24AA: jz      short loc_5F24D4
0x5F24AC: call    sub_5F0750
0x5F24B1: test    al, al
0x5F24B3: mov     eax, [esi]
0x5F24B5: mov     ecx, esi
0x5F24B7: jz      short loc_5F24C6
0x5F24B9: mov     edx, [eax+10h]
0x5F24BC: push    1
0x5F24BE: call    edx
0x5F24C0: pop     edi
0x5F24C1: pop     ebx
0x5F24C2: xor     al, al
0x5F24C4: pop     esi
0x5F24C5: retn
0x5F24C6: mov     edx, [eax+1A8h]
0x5F24CC: call    edx
0x5F24CE: pop     edi
0x5F24CF: pop     ebx
0x5F24D0: mov     al, 1
0x5F24D2: pop     esi
0x5F24D3: retn
0x5F24D4: call    sub_5F0750
0x5F24D9: test    al, al
0x5F24DB: jnz     short loc_5F250C
0x5F24DD: mov     ecx, esi; this
0x5F24DF: call    TESObjectREFR_GetParentCell
0x5F24E4: test    eax, eax
0x5F24E6: jz      short loc_5F250C
0x5F24E8: mov     ecx, esi
0x5F24EA: call    sub_5E4B00
0x5F24EF: lea     ecx, [esi+68h]
0x5F24F2: call    MagicTarget_RemoveAllEffects
0x5F24F7: push    0
0x5F24F9: mov     ecx, esi
0x5F24FB: call    sub_5EDA20
0x5F2500: mov     ecx, ds:0B33B00h
0x5F2506: push    esi
0x5F2507: call    sub_463A90
0x5F250C: mov     eax, [esi]
0x5F250E: mov     edx, [eax+10h]
0x5F2511: push    1
0x5F2513: mov     ecx, esi
0x5F2515: call    edx
0x5F2517: pop     edi
0x5F2518: pop     ebx
0x5F2519: xor     al, al
0x5F251B: pop     esi
0x5F251C: retn
