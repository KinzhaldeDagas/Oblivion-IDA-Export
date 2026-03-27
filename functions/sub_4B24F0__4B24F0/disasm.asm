0x4B24F0: push    0FFFFFFFFh
0x4B24F2: push    offset SEH_7E5B50
0x4B24F7: mov     eax, large fs:0
0x4B24FD: push    eax
0x4B24FE: push    ebx
0x4B24FF: push    ebp
0x4B2500: push    esi
0x4B2501: push    edi
0x4B2502: mov     eax, ds:0B30AACh
0x4B2507: xor     eax, esp
0x4B2509: push    eax
0x4B250A: lea     eax, [esp+20h+var_C]
0x4B250E: mov     large fs:0, eax
0x4B2514: mov     esi, ecx
0x4B2516: mov     eax, [esp+20h+arg_0]
0x4B251A: mov     ecx, [eax]
0x4B251C: xor     edx, edx
0x4B251E: cmp     ecx, edx
0x4B2520: setnz   al
0x4B2523: test    al, al
0x4B2525: jz      short loc_4B2543
0x4B2527: xor     eax, eax
0x4B2529: cmp     [esi+0Ah], dx
0x4B252D: jbe     short loc_4B2543
0x4B252F: mov     ebx, [esi+4]
0x4B2532: movzx   edi, ax
0x4B2535: cmp     [ebx+edi*4], ecx
0x4B2538: jz      short loc_4B255C
0x4B253A: add     eax, 1
0x4B253D: cmp     ax, [esi+0Ah]
0x4B2541: jb      short loc_4B2532
0x4B2543: or      eax, 0FFFFFFFFh
0x4B2546: mov     ecx, [esp+20h+var_C]
0x4B254A: mov     large fs:0, ecx
0x4B2551: pop     ecx
0x4B2552: pop     edi
0x4B2553: pop     esi
0x4B2554: pop     ebp
0x4B2555: pop     ebx
0x4B2556: add     esp, 0Ch
0x4B2559: retn    4
0x4B255C: mov     [esp+20h+arg_0], edx
0x4B2560: movzx   ebp, ax
0x4B2563: mov     edi, [ebx+ebp*4]
0x4B2566: cmp     edi, edx
0x4B2568: mov     [esp+20h+var_4], edx
0x4B256C: jz      short loc_4B2591
0x4B256E: lea     ecx, [edi+4]
0x4B2571: push    ecx; lpAddend
0x4B2572: call    dword ptr ds:0A2807Ch
0x4B2578: test    eax, eax
0x4B257A: jnz     short loc_4B258A
0x4B257C: test    edi, edi
0x4B257E: jz      short loc_4B258A
0x4B2580: mov     edx, [edi]
0x4B2582: mov     eax, [edx]
0x4B2584: push    1
0x4B2586: mov     ecx, edi
0x4B2588: call    eax
0x4B258A: mov     dword ptr [ebx+ebp*4], 0
0x4B2591: movzx   eax, word ptr [esi+0Ah]
0x4B2595: add     word ptr [esi+0Ch], 0FFFFh
0x4B259B: movzx   ecx, ax
0x4B259E: sub     ecx, 1
0x4B25A1: cmp     ebp, ecx
0x4B25A3: jnz     short loc_4B25AC
0x4B25A5: add     eax, 0FFFFFFFFh
0x4B25A8: mov     [esi+0Ah], ax
0x4B25AC: mov     eax, ebp
0x4B25AE: jmp     short loc_4B2546
