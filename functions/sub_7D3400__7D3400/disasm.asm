0x7D3400: push    ebx
0x7D3401: push    esi
0x7D3402: mov     ebx, ecx
0x7D3404: mov     esi, [ebx+100h]
0x7D340A: push    edi
0x7D340B: mov     edi, [esp+0Ch+arg_0]
0x7D340F: cmp     esi, edi
0x7D3411: jz      short loc_7D3447
0x7D3413: test    esi, esi
0x7D3415: jz      short loc_7D3433
0x7D3417: lea     eax, [esi+4]
0x7D341A: push    eax; lpAddend
0x7D341B: call    dword ptr ds:0A2807Ch
0x7D3421: test    eax, eax
0x7D3423: jnz     short loc_7D3433
0x7D3425: test    esi, esi
0x7D3427: jz      short loc_7D3433
0x7D3429: mov     edx, [esi]
0x7D342B: mov     eax, [edx]
0x7D342D: push    1
0x7D342F: mov     ecx, esi
0x7D3431: call    eax
0x7D3433: test    edi, edi
0x7D3435: mov     [ebx+100h], edi
0x7D343B: jz      short loc_7D3466
0x7D343D: lea     ecx, [edi+4]
0x7D3440: push    ecx; lpAddend
0x7D3441: call    dword ptr ds:0A28078h
0x7D3447: test    edi, edi
0x7D3449: jz      short loc_7D3466
0x7D344B: mov     edx, [edi]
0x7D344D: mov     eax, [edx+4]
0x7D3450: mov     ecx, edi
0x7D3452: call    eax
0x7D3454: test    eax, eax
0x7D3456: jz      short loc_7D3466
0x7D3458: cmp     eax, offset dword_B3FD80
0x7D345D: jz      short loc_7D34A1
0x7D345F: mov     eax, [eax+4]
0x7D3462: test    eax, eax
0x7D3464: jnz     short loc_7D3458
0x7D3466: xor     al, al
0x7D3468: test    al, al
0x7D346A: mov     [ebx+0FCh], al
0x7D3470: jz      short loc_7D34A5
0x7D3472: cmp     byte ptr [ebx+104h], 0
0x7D3479: jz      short loc_7D34AD
0x7D347B: mov     edx, [edi+88h]
0x7D3481: lea     eax, [edi+88h]
0x7D3487: lea     ecx, [ebx+108h]
0x7D348D: mov     [ecx], edx
0x7D348F: mov     edx, [eax+4]
0x7D3492: pop     edi
0x7D3493: mov     [ecx+4], edx
0x7D3496: mov     eax, [eax+8]
0x7D3499: pop     esi
0x7D349A: mov     [ecx+8], eax
0x7D349D: pop     ebx
0x7D349E: retn    4
0x7D34A1: mov     al, 1
0x7D34A3: jmp     short loc_7D3468
0x7D34A5: fld1
0x7D34A7: fstp    dword ptr [ebx+0D4h]
0x7D34AD: pop     edi
0x7D34AE: pop     esi
0x7D34AF: pop     ebx
0x7D34B0: retn    4
