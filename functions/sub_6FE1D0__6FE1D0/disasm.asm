0x6FE1D0: sub     esp, 8
0x6FE1D3: push    ebx
0x6FE1D4: mov     ebx, [esp+0Ch+arg_0]
0x6FE1D8: push    ebp
0x6FE1D9: push    esi
0x6FE1DA: push    edi
0x6FE1DB: push    ebx
0x6FE1DC: mov     esi, ecx
0x6FE1DE: call    nullsub_returnvVoid_1arg
0x6FE1E3: movzx   ebp, word ptr [esi+14h]
0x6FE1E7: push    1
0x6FE1E9: lea     ecx, [esp+1Ch+arg_0]
0x6FE1ED: push    ecx
0x6FE1EE: lea     eax, [ebp+ebp+0]
0x6FE1F2: mov     [esp+20h+var_8], eax
0x6FE1F6: mov     eax, [ebx+220h]
0x6FE1FC: push    4
0x6FE1FE: lea     edx, [esp+24h+var_8]
0x6FE202: push    edx
0x6FE203: push    eax
0x6FE204: mov     eax, [eax+8]
0x6FE207: mov     [esp+2Ch+var_4], ebp
0x6FE20B: mov     [esp+2Ch+arg_0], 4
0x6FE213: call    eax
0x6FE215: add     esp, 14h
0x6FE218: xor     edi, edi
0x6FE21A: test    ebp, ebp
0x6FE21C: jbe     short loc_6FE24A
0x6FE21E: mov     edi, edi
0x6FE220: mov     ecx, [esi+0Ch]
0x6FE223: mov     ebp, [ecx+edi*4]
0x6FE226: test    ebp, ebp
0x6FE228: jz      short loc_6FE241
0x6FE22A: mov     edx, [ebx]
0x6FE22C: mov     eax, [ebp+1Ch]
0x6FE22F: mov     edx, [edx+2Ch]
0x6FE232: push    eax
0x6FE233: mov     ecx, ebx
0x6FE235: call    edx
0x6FE237: mov     eax, [ebx]
0x6FE239: mov     edx, [eax+2Ch]
0x6FE23C: push    ebp
0x6FE23D: mov     ecx, ebx
0x6FE23F: call    edx
0x6FE241: add     edi, 1
0x6FE244: cmp     edi, [esp+18h+var_4]
0x6FE248: jb      short loc_6FE220
0x6FE24A: pop     edi
0x6FE24B: pop     esi
0x6FE24C: pop     ebp
0x6FE24D: pop     ebx
0x6FE24E: add     esp, 8
0x6FE251: retn    4
