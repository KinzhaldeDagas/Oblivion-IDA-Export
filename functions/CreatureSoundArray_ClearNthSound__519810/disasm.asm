0x519810: push    ebx
0x519811: mov     ebx, [esp+4+arg_0]
0x519815: cmp     ebx, 9
0x519818: push    edi
0x519819: mov     edi, ecx
0x51981B: ja      short loc_519860
0x51981D: push    esi
0x51981E: mov     esi, [edi+ebx*4]
0x519821: test    esi, esi
0x519823: jz      short loc_51985F
0x519825: mov     ecx, esi
0x519827: call    BSSimpleList_IsEmpty
0x51982C: test    al, al
0x51982E: jnz     short loc_51985F
0x519830: mov     eax, [esi]
0x519832: push    eax
0x519833: call    FormHeapFree
0x519838: mov     eax, [esi+4]
0x51983B: add     esp, 4
0x51983E: test    eax, eax
0x519840: jz      short loc_519857
0x519842: mov     ecx, [eax+4]
0x519845: mov     [esi+4], ecx
0x519848: mov     edx, [eax]
0x51984A: push    eax
0x51984B: mov     [esi], edx
0x51984D: call    FormHeapFree
0x519852: add     esp, 4
0x519855: jmp     short loc_519825
0x519857: mov     dword ptr [esi], 0
0x51985D: jmp     short loc_519825
0x51985F: pop     esi
0x519860: mov     eax, [edi+ebx*4]
0x519863: push    eax
0x519864: call    FormHeapFree
0x519869: add     esp, 4
0x51986C: mov     dword ptr [edi+ebx*4], 0
0x519873: pop     edi
0x519874: pop     ebx
0x519875: retn    4
