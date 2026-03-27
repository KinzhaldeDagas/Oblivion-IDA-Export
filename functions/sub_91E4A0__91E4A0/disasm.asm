0x91E4A0: push    ebx
0x91E4A1: push    esi
0x91E4A2: mov     esi, ecx
0x91E4A4: mov     eax, [esi+24h]
0x91E4A7: test    eax, eax
0x91E4A9: lea     ebx, [esi+28h]
0x91E4AC: mov     dword ptr [esi], offset off_A9D86C
0x91E4B2: mov     dword ptr [esi+8], offset off_A9D854
0x91E4B9: mov     dword ptr [esi+20h], offset off_A9D84C
0x91E4C0: mov     dword ptr [ebx], offset off_A9D840
0x91E4C6: jz      short loc_91E4ED
0x91E4C8: mov     ecx, [eax+60h]
0x91E4CB: push    edi
0x91E4CC: xor     edi, edi
0x91E4CE: test    ecx, ecx
0x91E4D0: jle     short loc_91E4EC
0x91E4D2: mov     eax, [esi+24h]
0x91E4D5: mov     ecx, [eax+5Ch]
0x91E4D8: mov     ecx, [ecx+edi*4]
0x91E4DB: push    ebx
0x91E4DC: call    sub_898A80
0x91E4E1: mov     edx, [esi+24h]
0x91E4E4: mov     eax, [edx+60h]
0x91E4E7: inc     edi
0x91E4E8: cmp     edi, eax
0x91E4EA: jl      short loc_91E4D2
0x91E4EC: pop     edi
0x91E4ED: mov     eax, [esi+34h]
0x91E4F0: test    eax, eax
0x91E4F2: js      short loc_91E528
0x91E4F4: mov     ecx, ds:0BA9DE4h
0x91E4FA: mov     edx, large fs:2Ch
0x91E501: mov     ecx, [edx+ecx*4]
0x91E504: mov     ecx, [ecx+19Ch]
0x91E50A: test    ecx, ecx
0x91E50C: jnz     short loc_91E514
0x91E50E: mov     ecx, ds:0BA7D9Ch
0x91E514: mov     edx, [esi+2Ch]
0x91E517: and     eax, 3FFFFFFFh
0x91E51C: push    14h
0x91E51E: shl     eax, 2
0x91E521: push    eax
0x91E522: push    edx
0x91E523: call    sub_8A75D0
0x91E528: mov     ecx, esi
0x91E52A: pop     esi
0x91E52B: mov     dword ptr [ebx], offset off_A9D2B4
0x91E531: pop     ebx
0x91E532: jmp     sub_949180
