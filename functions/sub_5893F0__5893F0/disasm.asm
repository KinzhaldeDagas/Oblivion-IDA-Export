0x5893F0: push    esi
0x5893F1: push    edi
0x5893F2: mov     edi, ecx
0x5893F4: mov     esi, [edi+34h]
0x5893F7: test    esi, esi
0x5893F9: jz      short loc_589418
0x5893FB: jmp     short loc_589400
0x5893FD: align 10h
0x589400: mov     ecx, [esi+8]
0x589403: test    ecx, ecx
0x589405: lea     eax, [esi+8]
0x589408: mov     esi, [esi]
0x58940A: jz      short loc_589414
0x58940C: mov     eax, [ecx]
0x58940E: mov     edx, [eax]
0x589410: push    1
0x589412: call    edx
0x589414: test    esi, esi
0x589416: jnz     short loc_589400
0x589418: lea     ecx, [edi+30h]
0x58941B: pop     edi
0x58941C: pop     esi
0x58941D: jmp     NiTPointerList__FreeAllNodes
