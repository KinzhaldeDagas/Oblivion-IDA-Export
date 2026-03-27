0x7E24C0: push    ebx
0x7E24C1: push    ebp
0x7E24C2: mov     ebp, ecx
0x7E24C4: xor     ebx, ebx
0x7E24C6: cmp     [ebp+34h], ebx
0x7E24C9: push    esi
0x7E24CA: push    edi
0x7E24CB: mov     [ebp+24h], ebx
0x7E24CE: jz      short loc_7E2524
0x7E24D0: lea     esi, [ebp+28h]
0x7E24D3: mov     eax, [esi+4]
0x7E24D6: mov     ecx, [eax]
0x7E24D8: cmp     ecx, ebx
0x7E24DA: mov     [esi+4], ecx
0x7E24DD: jz      short loc_7E24E4
0x7E24DF: mov     [ecx+4], ebx
0x7E24E2: jmp     short loc_7E24E7
0x7E24E4: mov     [esi+8], ebx
0x7E24E7: mov     edx, [esi]
0x7E24E9: mov     edi, [eax+8]
0x7E24EC: push    eax
0x7E24ED: mov     eax, [edx+8]
0x7E24F0: mov     ecx, esi
0x7E24F2: call    eax
0x7E24F4: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7E24F8: cmp     edi, ebx
0x7E24FA: jz      short loc_7E251F
0x7E24FC: mov     eax, [edi+0Ch]
0x7E24FF: cmp     eax, ebx
0x7E2501: mov     [edi+4], bx
0x7E2505: jz      short loc_7E2510
0x7E2507: push    eax
0x7E2508: call    FormHeapFree
0x7E250D: add     esp, 4
0x7E2510: push    edi
0x7E2511: mov     [edi+0Ch], ebx
0x7E2514: mov     [edi+9], bl
0x7E2517: call    FormHeapFree
0x7E251C: add     esp, 4
0x7E251F: cmp     [ebp+34h], ebx
0x7E2522: jnz     short loc_7E24D3
0x7E2524: cmp     [ebp+44h], ebx
0x7E2527: jz      short loc_7E2581
0x7E2529: lea     esi, [ebp+38h]
0x7E252C: lea     esp, [esp+0]
0x7E2530: mov     eax, [esi+4]
0x7E2533: mov     ecx, [eax]
0x7E2535: cmp     ecx, ebx
0x7E2537: mov     [esi+4], ecx
0x7E253A: jz      short loc_7E2541
0x7E253C: mov     [ecx+4], ebx
0x7E253F: jmp     short loc_7E2544
0x7E2541: mov     [esi+8], ebx
0x7E2544: mov     edx, [esi]
0x7E2546: mov     edi, [eax+8]
0x7E2549: push    eax
0x7E254A: mov     eax, [edx+8]
0x7E254D: mov     ecx, esi
0x7E254F: call    eax
0x7E2551: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7E2555: cmp     edi, ebx
0x7E2557: jz      short loc_7E257C
0x7E2559: mov     eax, [edi+0Ch]
0x7E255C: cmp     eax, ebx
0x7E255E: mov     [edi+4], bx
0x7E2562: jz      short loc_7E256D
0x7E2564: push    eax
0x7E2565: call    FormHeapFree
0x7E256A: add     esp, 4
0x7E256D: push    edi
0x7E256E: mov     [edi+0Ch], ebx
0x7E2571: mov     [edi+9], bl
0x7E2574: call    FormHeapFree
0x7E2579: add     esp, 4
0x7E257C: cmp     [ebp+44h], ebx
0x7E257F: jnz     short loc_7E2530
0x7E2581: cmp     [ebp+54h], ebx
0x7E2584: jz      short loc_7E25E1
0x7E2586: lea     esi, [ebp+48h]
0x7E2589: lea     esp, [esp+0]
0x7E2590: mov     eax, [esi+4]
0x7E2593: mov     ecx, [eax]
0x7E2595: cmp     ecx, ebx
0x7E2597: mov     [esi+4], ecx
0x7E259A: jz      short loc_7E25A1
0x7E259C: mov     [ecx+4], ebx
0x7E259F: jmp     short loc_7E25A4
0x7E25A1: mov     [esi+8], ebx
0x7E25A4: mov     edx, [esi]
0x7E25A6: mov     edi, [eax+8]
0x7E25A9: push    eax
0x7E25AA: mov     eax, [edx+8]
0x7E25AD: mov     ecx, esi
0x7E25AF: call    eax
0x7E25B1: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7E25B5: cmp     edi, ebx
0x7E25B7: jz      short loc_7E25DC
0x7E25B9: mov     eax, [edi+0Ch]
0x7E25BC: cmp     eax, ebx
0x7E25BE: mov     [edi+4], bx
0x7E25C2: jz      short loc_7E25CD
0x7E25C4: push    eax
0x7E25C5: call    FormHeapFree
0x7E25CA: add     esp, 4
0x7E25CD: push    edi
0x7E25CE: mov     [edi+0Ch], ebx
0x7E25D1: mov     [edi+9], bl
0x7E25D4: call    FormHeapFree
0x7E25D9: add     esp, 4
0x7E25DC: cmp     [ebp+54h], ebx
0x7E25DF: jnz     short loc_7E2590
0x7E25E1: cmp     [ebp+64h], ebx
0x7E25E4: jz      short loc_7E2641
0x7E25E6: lea     esi, [ebp+58h]
0x7E25E9: lea     esp, [esp+0]
0x7E25F0: mov     eax, [esi+4]
0x7E25F3: mov     ecx, [eax]
0x7E25F5: cmp     ecx, ebx
0x7E25F7: mov     [esi+4], ecx
0x7E25FA: jz      short loc_7E2601
0x7E25FC: mov     [ecx+4], ebx
0x7E25FF: jmp     short loc_7E2604
0x7E2601: mov     [esi+8], ebx
0x7E2604: mov     edx, [esi]
0x7E2606: mov     edi, [eax+8]
0x7E2609: push    eax
0x7E260A: mov     eax, [edx+8]
0x7E260D: mov     ecx, esi
0x7E260F: call    eax
0x7E2611: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7E2615: cmp     edi, ebx
0x7E2617: jz      short loc_7E263C
0x7E2619: mov     eax, [edi+0Ch]
0x7E261C: cmp     eax, ebx
0x7E261E: mov     [edi+4], bx
0x7E2622: jz      short loc_7E262D
0x7E2624: push    eax
0x7E2625: call    FormHeapFree
0x7E262A: add     esp, 4
0x7E262D: push    edi
0x7E262E: mov     [edi+0Ch], ebx
0x7E2631: mov     [edi+9], bl
0x7E2634: call    FormHeapFree
0x7E2639: add     esp, 4
0x7E263C: cmp     [ebp+64h], ebx
0x7E263F: jnz     short loc_7E25F0
0x7E2641: pop     edi
0x7E2642: pop     esi
0x7E2643: pop     ebp
0x7E2644: pop     ebx
0x7E2645: retn
