0x9A97B0: sub     esp, 0Ch
0x9A97B3: push    ebx
0x9A97B4: mov     ebx, ecx
0x9A97B6: movzx   ecx, word ptr [ebx+16h]
0x9A97BA: push    esi
0x9A97BB: push    edi
0x9A97BC: xor     esi, esi
0x9A97BE: or      edi, 0FFFFFFFFh
0x9A97C1: cmp     ecx, 1
0x9A97C4: mov     [esp+18h+var_4], esi
0x9A97C8: mov     [esp+18h+var_8], ecx
0x9A97CC: jbe     loc_9A98F9
0x9A97D2: xor     eax, eax
0x9A97D4: test    ecx, ecx
0x9A97D6: mov     [esp+18h+var_C], eax
0x9A97DA: jbe     loc_9A98F9
0x9A97E0: push    ebp
0x9A97E1: mov     ecx, [ebx+10h]
0x9A97E4: cmp     esi, [ecx+eax*4]
0x9A97E7: lea     ebp, [ecx+eax*4]
0x9A97EA: jz      short loc_9A9829
0x9A97EC: test    esi, esi
0x9A97EE: jz      short loc_9A980C
0x9A97F0: lea     edx, [esi+4]
0x9A97F3: push    edx; lpAddend
0x9A97F4: call    ds:InterlockedDecrement
0x9A97FA: test    eax, eax
0x9A97FC: jnz     short loc_9A9808
0x9A97FE: mov     eax, [esi]
0x9A9800: mov     edx, [eax]
0x9A9802: push    1
0x9A9804: mov     ecx, esi
0x9A9806: call    edx
0x9A9808: mov     eax, [esp+1Ch+var_C]
0x9A980C: mov     esi, [ebp+0]
0x9A980F: test    esi, esi
0x9A9811: mov     [esp+1Ch+var_4], esi
0x9A9815: jz      loc_9A98CB
0x9A981B: lea     eax, [esi+4]
0x9A981E: push    eax; lpAddend
0x9A981F: call    ds:InterlockedIncrement
0x9A9825: mov     eax, [esp+1Ch+var_C]
0x9A9829: test    esi, esi
0x9A982B: jz      loc_9A98CB
0x9A9831: cmp     byte ptr [esi+8], 1
0x9A9835: jnz     loc_9A98C5
0x9A983B: cmp     edi, eax
0x9A983D: jnb     loc_9A98CB
0x9A9843: mov     ecx, [ebx+10h]
0x9A9846: lea     edx, [ecx+edi*4]
0x9A9849: push    edx
0x9A984A: lea     ebp, [ebx+0Ch]
0x9A984D: push    eax
0x9A984E: mov     ecx, ebp
0x9A9850: call    sub_9A9670
0x9A9855: lea     eax, [esp+1Ch+var_4]
0x9A9859: push    eax
0x9A985A: push    edi
0x9A985B: mov     ecx, ebp
0x9A985D: call    sub_9A9670
0x9A9862: add     edi, 1
0x9A9865: cmp     edi, [esp+1Ch+var_8]
0x9A9869: jnb     short loc_9A98E0
0x9A986B: jmp     short loc_9A9870
0x9A986D: align 10h
0x9A9870: mov     ecx, [ebx+10h]
0x9A9873: cmp     esi, [ecx+edi*4]
0x9A9876: lea     ebp, [ecx+edi*4]
0x9A9879: jz      short loc_9A98A8
0x9A987B: lea     edx, [esi+4]
0x9A987E: push    edx; lpAddend
0x9A987F: call    ds:InterlockedDecrement
0x9A9885: test    eax, eax
0x9A9887: jnz     short loc_9A9893
0x9A9889: mov     eax, [esi]
0x9A988B: mov     edx, [eax]
0x9A988D: push    1
0x9A988F: mov     ecx, esi
0x9A9891: call    edx
0x9A9893: mov     esi, [ebp+0]
0x9A9896: test    esi, esi
0x9A9898: mov     [esp+1Ch+var_4], esi
0x9A989C: jz      short loc_9A98A8
0x9A989E: lea     eax, [esi+4]
0x9A98A1: push    eax; lpAddend
0x9A98A2: call    ds:InterlockedIncrement
0x9A98A8: cmp     byte ptr [esi+8], 0
0x9A98AC: jz      short loc_9A98B9
0x9A98AE: add     edi, 1
0x9A98B1: cmp     edi, [esp+1Ch+var_8]
0x9A98B5: jb      short loc_9A9870
0x9A98B7: jmp     short loc_9A98E0
0x9A98B9: cmp     edi, [esp+1Ch+var_8]
0x9A98BD: jnb     short loc_9A98E0
0x9A98BF: mov     eax, [esp+1Ch+var_C]
0x9A98C3: jmp     short loc_9A98CB
0x9A98C5: cmp     edi, eax
0x9A98C7: jbe     short loc_9A98CB
0x9A98C9: mov     edi, eax
0x9A98CB: add     eax, 1
0x9A98CE: cmp     eax, [esp+1Ch+var_8]
0x9A98D2: mov     [esp+1Ch+var_C], eax
0x9A98D6: jb      loc_9A97E1
0x9A98DC: test    esi, esi
0x9A98DE: jz      short loc_9A98F8
0x9A98E0: lea     ecx, [esi+4]
0x9A98E3: push    ecx; lpAddend
0x9A98E4: call    ds:InterlockedDecrement
0x9A98EA: test    eax, eax
0x9A98EC: jnz     short loc_9A98F8
0x9A98EE: mov     edx, [esi]
0x9A98F0: mov     eax, [edx]
0x9A98F2: push    1
0x9A98F4: mov     ecx, esi
0x9A98F6: call    eax
0x9A98F8: pop     ebp
0x9A98F9: pop     edi
0x9A98FA: pop     esi
0x9A98FB: pop     ebx
0x9A98FC: add     esp, 0Ch
0x9A98FF: retn
