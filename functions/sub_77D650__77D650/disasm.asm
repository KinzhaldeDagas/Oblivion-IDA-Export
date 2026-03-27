0x77D650: push    ecx
0x77D651: push    ebx
0x77D652: mov     ebx, [esp+8+arg_0]
0x77D656: push    edi
0x77D657: mov     edi, ecx
0x77D659: test    dword ptr [edi+8], 10000000h
0x77D660: jnz     short loc_77D66B
0x77D662: mov     eax, [edi+0Ch]
0x77D665: cmp     ebx, eax
0x77D667: ja      short loc_77D66B
0x77D669: mov     ebx, eax
0x77D66B: mov     eax, [edi+10h]
0x77D66E: push    0
0x77D670: lea     edx, [esp+10h+arg_0]
0x77D674: push    edx
0x77D675: mov     edx, [edi+18h]
0x77D678: push    edx
0x77D679: mov     edx, [edi+4]
0x77D67C: push    edx
0x77D67D: mov     edx, [edi+14h]
0x77D680: push    edx
0x77D681: mov     [esp+20h+arg_0], 0
0x77D689: mov     ecx, [eax]
0x77D68B: push    ebx
0x77D68C: push    eax
0x77D68D: mov     eax, [ecx+68h]
0x77D690: call    eax
0x77D692: test    eax, eax
0x77D694: jge     short loc_77D69E
0x77D696: pop     edi
0x77D697: xor     eax, eax
0x77D699: pop     ebx
0x77D69A: pop     ecx
0x77D69B: retn    4
0x77D69E: push    esi
0x77D69F: mov     esi, ds:0B4289Ch
0x77D6A5: test    esi, esi
0x77D6A7: jnz     short loc_77D6B4
0x77D6A9: call    sub_77D5C0
0x77D6AE: mov     esi, ds:0B4289Ch
0x77D6B4: mov     ecx, [esi+3Ch]
0x77D6B7: test    ecx, ecx
0x77D6B9: lea     eax, [esi+3Ch]
0x77D6BC: mov     ds:0B4289Ch, ecx
0x77D6C2: jz      short loc_77D6CB
0x77D6C4: mov     dword ptr [ecx+40h], 0
0x77D6CB: mov     dword ptr [eax], 0
0x77D6D1: mov     dword ptr [esi+40h], 0
0x77D6D8: mov     [esi], edi
0x77D6DA: mov     ecx, [esp+10h+arg_0]
0x77D6DE: mov     [esi+8], ecx
0x77D6E1: mov     [esi+0Ch], ebx
0x77D6E4: mov     [esi+24h], ebx
0x77D6E7: mov     [esi+28h], ebx
0x77D6EA: mov     edx, [edi+4]
0x77D6ED: mov     [esi+10h], edx
0x77D6F0: mov     eax, [edi+8]
0x77D6F3: mov     [esi+14h], eax
0x77D6F6: mov     ecx, [edi+18h]
0x77D6F9: mov     [esi+1Ch], ecx
0x77D6FC: mov     edx, [edi+14h]
0x77D6FF: lea     eax, [esp+10h+var_4]
0x77D703: push    eax
0x77D704: lea     ecx, [edi+1Ch]
0x77D707: mov     [esp+14h+var_4], esi
0x77D70B: mov     [esi+18h], edx
0x77D70E: call    sub_4BACA0
0x77D713: mov     [esi+4], eax
0x77D716: mov     eax, esi
0x77D718: pop     esi
0x77D719: pop     edi
0x77D71A: pop     ebx
0x77D71B: pop     ecx
0x77D71C: retn    4
