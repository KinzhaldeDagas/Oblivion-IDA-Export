0x89F5D0: push    ecx
0x89F5D1: push    ebx
0x89F5D2: push    ebp
0x89F5D3: mov     ebx, ecx
0x89F5D5: mov     eax, [ebx]
0x89F5D7: mov     edx, [eax+74h]
0x89F5DA: push    edi
0x89F5DB: lea     ecx, [esp+10h+var_1]
0x89F5DF: push    ecx
0x89F5E0: mov     ecx, ebx
0x89F5E2: call    edx
0x89F5E4: mov     ebp, [esp+10h+arg_4]
0x89F5E8: mov     edi, eax
0x89F5EA: test    edi, edi
0x89F5EC: jz      short loc_89F638
0x89F5EE: mov     eax, [edi+4]
0x89F5F1: test    eax, eax
0x89F5F3: push    esi
0x89F5F4: mov     dword ptr [edi+10h], 0
0x89F5FB: jz      short loc_89F602
0x89F5FD: mov     esi, [eax+8]
0x89F600: jmp     short loc_89F604
0x89F602: xor     esi, esi
0x89F604: test    esi, esi
0x89F606: jz      short loc_89F631
0x89F608: mov     eax, [esi]
0x89F60A: mov     edx, [eax+8Ch]
0x89F610: push    ebp
0x89F611: mov     ecx, esi
0x89F613: call    edx
0x89F615: test    al, al
0x89F617: jnz     short loc_89F631
0x89F619: mov     eax, [esi]
0x89F61B: mov     edx, [eax+18h]
0x89F61E: push    ebp
0x89F61F: mov     ecx, esi
0x89F621: call    edx
0x89F623: test    eax, eax
0x89F625: jz      short loc_89F62C
0x89F627: mov     eax, [eax+8]
0x89F62A: jmp     short loc_89F62E
0x89F62C: xor     eax, eax
0x89F62E: mov     [edi+4], eax
0x89F631: mov     word ptr [edi+2], 0
0x89F637: pop     esi
0x89F638: mov     eax, [esp+10h+arg_0]
0x89F63C: push    ebp
0x89F63D: push    eax
0x89F63E: mov     ecx, ebx
0x89F640: call    sub_89D610
0x89F645: pop     edi
0x89F646: pop     ebp
0x89F647: pop     ebx
0x89F648: pop     ecx
0x89F649: retn    8
