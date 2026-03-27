0x765290: push    ecx
0x765291: push    ebx
0x765292: mov     ebx, [esp+8+arg_0]
0x765296: push    ebp
0x765297: mov     ebp, [ebx+24h]
0x76529A: test    ebp, ebp
0x76529C: mov     [esp+0Ch+var_4], ebp
0x7652A0: jz      short loc_765319
0x7652A2: mov     eax, [ebp+0]
0x7652A5: mov     edx, [eax+18h]
0x7652A8: mov     ecx, ebp
0x7652AA: call    edx
0x7652AC: test    eax, eax
0x7652AE: jz      short loc_765307
0x7652B0: mov     eax, [ebx]
0x7652B2: mov     edx, [eax+4]
0x7652B5: push    esi
0x7652B6: push    edi
0x7652B7: mov     ecx, ebx
0x7652B9: call    edx
0x7652BB: test    eax, eax
0x7652BD: jz      short loc_7652CE
0x7652BF: nop
0x7652C0: cmp     eax, offset unk_BAA880
0x7652C5: jz      short loc_765321
0x7652C7: mov     eax, [eax+4]
0x7652CA: test    eax, eax
0x7652CC: jnz     short loc_7652C0
0x7652CE: mov     edx, [ebx]
0x7652D0: mov     eax, [edx+54h]
0x7652D3: mov     ecx, ebx
0x7652D5: call    eax
0x7652D7: mov     esi, eax
0x7652D9: mov     edi, [esi+10h]
0x7652DC: add     esi, 10h
0x7652DF: test    edi, edi
0x7652E1: jz      short loc_765305
0x7652E3: lea     ecx, [edi+4]
0x7652E6: push    ecx; lpAddend
0x7652E7: call    dword ptr ds:0A2807Ch
0x7652ED: test    eax, eax
0x7652EF: jnz     short loc_7652FF
0x7652F1: test    edi, edi
0x7652F3: jz      short loc_7652FF
0x7652F5: mov     edx, [edi]
0x7652F7: mov     eax, [edx]
0x7652F9: push    1
0x7652FB: mov     ecx, edi
0x7652FD: call    eax
0x7652FF: mov     dword ptr [esi], 0
0x765305: pop     edi
0x765306: pop     esi
0x765307: mov     dword ptr [ebx+24h], 0
0x76530E: mov     edx, [ebp+0]
0x765311: mov     eax, [edx]
0x765313: push    1
0x765315: mov     ecx, ebp
0x765317: call    eax
0x765319: pop     ebp
0x76531A: mov     al, 1
0x76531C: pop     ebx
0x76531D: pop     ecx
0x76531E: retn    4
0x765321: add     ebx, 44h ; 'D'
0x765324: mov     ebp, 6
0x765329: lea     esp, [esp+0]
0x765330: mov     esi, [ebx]
0x765332: mov     edi, [esi+10h]
0x765335: add     esi, 10h
0x765338: test    edi, edi
0x76533A: jz      short loc_76535E
0x76533C: lea     eax, [edi+4]
0x76533F: push    eax; lpAddend
0x765340: call    dword ptr ds:0A2807Ch
0x765346: test    eax, eax
0x765348: jnz     short loc_765358
0x76534A: test    edi, edi
0x76534C: jz      short loc_765358
0x76534E: mov     edx, [edi]
0x765350: mov     eax, [edx]
0x765352: push    1
0x765354: mov     ecx, edi
0x765356: call    eax
0x765358: mov     dword ptr [esi], 0
0x76535E: add     ebx, 4
0x765361: sub     ebp, 1
0x765364: jnz     short loc_765330
0x765366: mov     ebp, [esp+14h+var_4]
0x76536A: mov     ebx, [esp+14h+arg_0]
0x76536E: jmp     short loc_765305
