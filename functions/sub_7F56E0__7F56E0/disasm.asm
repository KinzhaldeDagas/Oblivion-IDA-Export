0x7F56E0: push    ebx
0x7F56E1: push    ebp
0x7F56E2: push    esi
0x7F56E3: mov     ebx, ecx
0x7F56E5: mov     esi, [ebx+9Ch]
0x7F56EB: mov     ebp, [ebx+90h]
0x7F56F1: add     esi, 58h ; 'X'
0x7F56F4: push    edi
0x7F56F5: mov     edi, [esi]
0x7F56F7: cmp     edi, ebp
0x7F56F9: jz      short loc_7F572B
0x7F56FB: test    edi, edi
0x7F56FD: jz      short loc_7F571B
0x7F56FF: lea     eax, [edi+4]
0x7F5702: push    eax; lpAddend
0x7F5703: call    dword ptr ds:0A2807Ch
0x7F5709: test    eax, eax
0x7F570B: jnz     short loc_7F571B
0x7F570D: test    edi, edi
0x7F570F: jz      short loc_7F571B
0x7F5711: mov     edx, [edi]
0x7F5713: mov     eax, [edx]
0x7F5715: push    1
0x7F5717: mov     ecx, edi
0x7F5719: call    eax
0x7F571B: test    ebp, ebp
0x7F571D: mov     [esi], ebp
0x7F571F: jz      short loc_7F572B
0x7F5721: add     ebp, 4
0x7F5724: push    ebp; lpAddend
0x7F5725: call    dword ptr ds:0A28078h
0x7F572B: mov     edi, [ebx+94h]
0x7F5731: mov     ebx, [ebx+9Ch]
0x7F5737: mov     esi, [ebx+44h]
0x7F573A: add     ebx, 44h ; 'D'
0x7F573D: cmp     esi, edi
0x7F573F: jz      short loc_7F5771
0x7F5741: test    esi, esi
0x7F5743: jz      short loc_7F5761
0x7F5745: lea     ecx, [esi+4]
0x7F5748: push    ecx; lpAddend
0x7F5749: call    dword ptr ds:0A2807Ch
0x7F574F: test    eax, eax
0x7F5751: jnz     short loc_7F5761
0x7F5753: test    esi, esi
0x7F5755: jz      short loc_7F5761
0x7F5757: mov     edx, [esi]
0x7F5759: mov     eax, [edx]
0x7F575B: push    1
0x7F575D: mov     ecx, esi
0x7F575F: call    eax
0x7F5761: test    edi, edi
0x7F5763: mov     [ebx], edi
0x7F5765: jz      short loc_7F5771
0x7F5767: add     edi, 4
0x7F576A: push    edi; lpAddend
0x7F576B: call    dword ptr ds:0A28078h
0x7F5771: pop     edi
0x7F5772: pop     esi
0x7F5773: pop     ebp
0x7F5774: pop     ebx
0x7F5775: retn
