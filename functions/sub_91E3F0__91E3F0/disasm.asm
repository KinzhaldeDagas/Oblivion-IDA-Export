0x91E3F0: mov     eax, [esp+arg_0]
0x91E3F4: push    ebx
0x91E3F5: push    esi
0x91E3F6: push    edi
0x91E3F7: push    eax
0x91E3F8: mov     esi, ecx
0x91E3FA: call    sub_9491F0
0x91E3FF: mov     dword ptr [esi+28h], offset off_A9D2B4
0x91E406: lea     ebx, [esi+28h]
0x91E409: xor     edi, edi
0x91E40B: mov     dword ptr [esi], offset off_A9D86C
0x91E411: mov     dword ptr [esi+8], offset off_A9D854
0x91E418: mov     dword ptr [esi+20h], offset off_A9D84C
0x91E41F: mov     dword ptr [ebx], offset off_A9D840
0x91E425: mov     [esi+2Ch], edi
0x91E428: mov     [esi+30h], edi
0x91E42B: mov     dword ptr [esi+34h], 80000000h
0x91E432: mov     eax, [esi+24h]
0x91E435: cmp     eax, edi
0x91E437: jz      short loc_91E45A
0x91E439: cmp     [eax+60h], edi
0x91E43C: jle     short loc_91E45A
0x91E43E: mov     edi, edi
0x91E440: mov     ecx, [esi+24h]
0x91E443: mov     edx, [ecx+5Ch]
0x91E446: mov     ecx, [edx+edi*4]
0x91E449: push    ebx
0x91E44A: call    sub_899D20
0x91E44F: mov     eax, [esi+24h]
0x91E452: mov     ecx, [eax+60h]
0x91E455: inc     edi
0x91E456: cmp     edi, ecx
0x91E458: jl      short loc_91E440
0x91E45A: pop     edi
0x91E45B: mov     eax, esi
0x91E45D: pop     esi
0x91E45E: pop     ebx
0x91E45F: retn    4
