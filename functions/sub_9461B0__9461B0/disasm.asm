0x9461B0: push    ebx
0x9461B1: push    esi
0x9461B2: push    edi
0x9461B3: mov     esi, ecx
0x9461B5: mov     ecx, [esi+0Ch]
0x9461B8: push    0Dh
0x9461BA: call    sub_918440
0x9461BF: mov     ecx, [esi+0Ch]
0x9461C2: push    20h ; ' '
0x9461C4: call    sub_9181B0
0x9461C9: mov     ecx, [esi+0Ch]
0x9461CC: push    0
0x9461CE: push    offset dword_BA8788
0x9461D3: call    sub_918460
0x9461D8: mov     ecx, [esi+0Ch]
0x9461DB: xor     eax, eax
0x9461DD: mov     al, ds:0B2FDE4h
0x9461E2: push    eax
0x9461E3: call    sub_9181B0
0x9461E8: xor     ecx, ecx
0x9461EA: mov     cl, ds:0B2FDE5h
0x9461F0: push    ecx
0x9461F1: mov     ecx, [esi+0Ch]
0x9461F4: call    sub_9181B0
0x9461F9: mov     ecx, [esi+0Ch]
0x9461FC: xor     edx, edx
0x9461FE: mov     dl, ds:0B2FDE6h
0x946204: push    edx
0x946205: call    sub_9181B0
0x94620A: mov     ecx, [esi+0Ch]
0x94620D: xor     eax, eax
0x94620F: mov     al, ds:0B2FDE7h
0x946214: push    eax
0x946215: call    sub_9181B0
0x94621A: mov     edi, [esi+24h]
0x94621D: mov     eax, [edi+28h]
0x946220: add     edi, 24h ; '$'
0x946223: xor     ebx, ebx
0x946225: test    eax, eax
0x946227: jle     short loc_94624C
0x946229: add     esi, 0FFFFFFF8h
0x94622C: lea     esp, [esp+0]
0x946230: mov     ecx, [edi]
0x946232: mov     edx, [ecx+ebx*8+4]
0x946236: lea     eax, [ecx+ebx*8]
0x946239: mov     eax, [eax]
0x94623B: push    edx
0x94623C: push    eax
0x94623D: mov     ecx, esi
0x94623F: call    sub_946130
0x946244: mov     eax, [edi+4]
0x946247: inc     ebx
0x946248: cmp     ebx, eax
0x94624A: jl      short loc_946230
0x94624C: pop     edi
0x94624D: pop     esi
0x94624E: pop     ebx
0x94624F: retn
