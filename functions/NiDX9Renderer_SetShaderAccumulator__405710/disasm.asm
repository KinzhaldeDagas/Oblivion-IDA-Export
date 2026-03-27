0x405710: push    ebx
0x405711: push    esi
0x405712: mov     ebx, ecx
0x405714: mov     esi, [ebx+8]
0x405717: push    edi
0x405718: mov     edi, [esp+0Ch+a2]
0x40571C: cmp     esi, edi
0x40571E: jz      short loc_405751
0x405720: test    esi, esi
0x405722: jz      short loc_405740
0x405724: lea     eax, [esi+4]
0x405727: push    eax; lpAddend
0x405728: call    ds:InterlockedDecrement
0x40572E: test    eax, eax
0x405730: jnz     short loc_405740
0x405732: test    esi, esi
0x405734: jz      short loc_405740
0x405736: mov     edx, [esi]
0x405738: mov     eax, [edx]
0x40573A: push    1
0x40573C: mov     ecx, esi
0x40573E: call    eax
0x405740: test    edi, edi
0x405742: mov     [ebx+8], edi
0x405745: jz      short loc_405751
0x405747: add     edi, 4
0x40574A: push    edi; lpAddend
0x40574B: call    ds:InterlockedIncrement
0x405751: pop     edi
0x405752: pop     esi
0x405753: pop     ebx
0x405754: retn    4
