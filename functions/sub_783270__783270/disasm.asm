0x783270: push    esi
0x783271: mov     esi, ecx
0x783273: mov     eax, [esi+34h]
0x783276: test    eax, eax
0x783278: jz      short loc_783289
0x78327A: mov     ecx, [eax]
0x78327C: mov     edx, [ecx+8]
0x78327F: push    eax
0x783280: call    edx
0x783282: mov     dword ptr [esi+34h], 0
0x783289: mov     ecx, esi
0x78328B: pop     esi
0x78328C: jmp     sub_782DC0
