0x459400: push    esi
0x459401: push    edi
0x459402: mov     edi, ecx
0x459404: mov     esi, [edi+6Ch]
0x459407: test    esi, esi
0x459409: jz      short loc_45943C
0x45940B: jmp     short loc_459410
0x45940D: align 10h
0x459410: mov     ecx, [esi]
0x459412: test    ecx, ecx
0x459414: jz      short loc_45941E
0x459416: mov     eax, [ecx]
0x459418: mov     edx, [eax]
0x45941A: push    1
0x45941C: call    edx
0x45941E: mov     esi, [esi+4]
0x459421: test    esi, esi
0x459423: jnz     short loc_459410
0x459425: mov     ecx, [edi+6Ch]
0x459428: call    BSSimpleList_Clear
0x45942D: mov     eax, [edi+6Ch]
0x459430: push    eax
0x459431: call    FormHeapFree
0x459436: add     esp, 4
0x459439: mov     [edi+6Ch], esi
0x45943C: pop     edi
0x45943D: pop     esi
0x45943E: jmp     loc_5AE430
