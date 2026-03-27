0x747D80: push    ebx
0x747D81: push    esi
0x747D82: mov     esi, ecx
0x747D84: mov     eax, [esi+1Ch]
0x747D87: push    eax; File
0x747D88: call    _ftell
0x747D8D: mov     ebx, eax
0x747D8F: add     esp, 4
0x747D92: test    ebx, ebx
0x747D94: jge     short loc_747D9B
0x747D96: pop     esi
0x747D97: xor     eax, eax
0x747D99: pop     ebx
0x747D9A: retn
0x747D9B: mov     ecx, [esi+1Ch]
0x747D9E: push    edi
0x747D9F: push    2; Origin
0x747DA1: push    0; Offset
0x747DA3: push    ecx; File
0x747DA4: call    _fseek
0x747DA9: mov     edx, [esi+1Ch]
0x747DAC: push    edx; File
0x747DAD: call    _ftell
0x747DB2: push    0; Origin
0x747DB4: mov     edi, eax
0x747DB6: mov     eax, [esi+1Ch]
0x747DB9: push    ebx; Offset
0x747DBA: push    eax; File
0x747DBB: call    _fseek
0x747DC0: add     esp, 1Ch
0x747DC3: xor     eax, eax
0x747DC5: test    edi, edi
0x747DC7: setl    al
0x747DCA: sub     eax, 1
0x747DCD: and     eax, edi
0x747DCF: pop     edi
0x747DD0: pop     esi
0x747DD1: pop     ebx
0x747DD2: retn
