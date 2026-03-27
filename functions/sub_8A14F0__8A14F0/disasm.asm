0x8A14F0: push    ebx
0x8A14F1: push    esi
0x8A14F2: push    edi
0x8A14F3: mov     edi, ecx
0x8A14F5: test    edi, edi
0x8A14F7: jz      short loc_8A150B
0x8A14F9: mov     ecx, [edi+8]
0x8A14FC: test    ecx, ecx
0x8A14FE: jz      short loc_8A150B
0x8A1500: mov     eax, [ecx]
0x8A1502: mov     edx, [eax+1Ch]
0x8A1505: call    edx
0x8A1507: mov     ebx, eax
0x8A1509: jmp     short loc_8A150D
0x8A150B: xor     ebx, ebx
0x8A150D: xor     esi, esi
0x8A150F: test    ebx, ebx
0x8A1511: jle     short loc_8A154B
0x8A1513: push    ebp
0x8A1514: mov     ebp, [esp+10h+arg_0]
0x8A1518: test    edi, edi
0x8A151A: jz      short loc_8A1532
0x8A151C: mov     eax, [edi+8]
0x8A151F: test    eax, eax
0x8A1521: jz      short loc_8A1532
0x8A1523: mov     eax, [eax+10h]
0x8A1526: mov     eax, [eax+esi*8]
0x8A1529: test    eax, eax
0x8A152B: jz      short loc_8A1532
0x8A152D: mov     ecx, [eax+8]
0x8A1530: jmp     short loc_8A1534
0x8A1532: xor     ecx, ecx
0x8A1534: test    ecx, ecx
0x8A1536: jz      short loc_8A1543
0x8A1538: mov     edx, [ecx]
0x8A153A: mov     eax, [edx+90h]
0x8A1540: push    ebp
0x8A1541: call    eax
0x8A1543: add     esi, 1
0x8A1546: cmp     esi, ebx
0x8A1548: jl      short loc_8A1518
0x8A154A: pop     ebp
0x8A154B: pop     edi
0x8A154C: pop     esi
0x8A154D: pop     ebx
0x8A154E: retn    4
