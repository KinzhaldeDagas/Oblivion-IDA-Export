0x80B710: push    ebx
0x80B711: mov     ebx, ecx
0x80B713: cmp     dword ptr [ebx+24h], 0
0x80B717: push    esi
0x80B718: push    edi
0x80B719: jz      short loc_80B75B
0x80B71B: lea     esi, [ebx+0A4h]
0x80B721: mov     edi, 7
0x80B726: mov     ecx, [esi]
0x80B728: test    ecx, ecx
0x80B72A: jz      short loc_80B733
0x80B72C: mov     eax, [ecx]
0x80B72E: mov     edx, [eax+5Ch]
0x80B731: call    edx
0x80B733: add     esi, 4
0x80B736: sub     edi, 1
0x80B739: jnz     short loc_80B726
0x80B73B: lea     esi, [ebx+0CCh]
0x80B741: mov     edi, 7
0x80B746: mov     ecx, [esi]
0x80B748: test    ecx, ecx
0x80B74A: jz      short loc_80B753
0x80B74C: mov     eax, [ecx]
0x80B74E: mov     edx, [eax+5Ch]
0x80B751: call    edx
0x80B753: add     esi, 4
0x80B756: sub     edi, 1
0x80B759: jnz     short loc_80B746
0x80B75B: lea     esi, [ebx+0E8h]
0x80B761: mov     edi, 3
0x80B766: mov     ecx, [esi-28h]
0x80B769: test    ecx, ecx
0x80B76B: jz      short loc_80B774
0x80B76D: mov     eax, [ecx]
0x80B76F: mov     edx, [eax+44h]
0x80B772: call    edx
0x80B774: mov     ecx, [esi]
0x80B776: test    ecx, ecx
0x80B778: jz      short loc_80B781
0x80B77A: mov     eax, [ecx]
0x80B77C: mov     edx, [eax+44h]
0x80B77F: call    edx
0x80B781: add     esi, 4
0x80B784: sub     edi, 1
0x80B787: jnz     short loc_80B766
0x80B789: pop     edi
0x80B78A: pop     esi
0x80B78B: mov     ecx, ebx
0x80B78D: pop     ebx
0x80B78E: jmp     sub_7C90B0
