0x8CE770: push    ebp
0x8CE771: mov     ebp, esp
0x8CE773: and     esp, 0FFFFFFF0h
0x8CE776: sub     esp, 14h
0x8CE779: push    ebx
0x8CE77A: push    esi
0x8CE77B: mov     esi, ecx
0x8CE77D: mov     eax, [esi+14h]
0x8CE780: sub     eax, 1
0x8CE783: test    eax, eax
0x8CE785: push    edi
0x8CE786: jle     loc_8CE81F
0x8CE78C: lea     edi, [eax+eax*2]
0x8CE78F: shl     edi, 4
0x8CE792: cmp     eax, 1
0x8CE795: lea     ecx, [eax-1]
0x8CE798: mov     [esp+20h+var_4], ecx
0x8CE79C: mov     [esp+20h+var_8], ecx
0x8CE7A0: jz      short loc_8CE810
0x8CE7A2: lea     ebx, [edi-30h]
0x8CE7A5: mov     eax, [esi+10h]
0x8CE7A8: sub     [esp+20h+var_8], 1
0x8CE7AD: lea     ecx, [edi+eax]
0x8CE7B0: push    ecx
0x8CE7B1: sub     ebx, 30h ; '0'
0x8CE7B4: add     eax, ebx
0x8CE7B6: push    eax
0x8CE7B7: lea     eax, [esp+28h+var_9]
0x8CE7BB: push    eax
0x8CE7BC: mov     ecx, esi
0x8CE7BE: call    sub_8CE690
0x8CE7C3: cmp     byte ptr [eax], 0
0x8CE7C6: jnz     short loc_8CE7D1
0x8CE7C8: cmp     [esp+20h+var_8], 0
0x8CE7CD: jnz     short loc_8CE7A5
0x8CE7CF: jmp     short loc_8CE810
0x8CE7D1: add     dword ptr [esi+14h], 0FFFFFFFFh
0x8CE7D5: mov     eax, [esi+14h]
0x8CE7D8: mov     ecx, [esi+10h]
0x8CE7DB: lea     eax, [eax+eax*2]
0x8CE7DE: shl     eax, 4
0x8CE7E1: movaps  xmm0, xmmword ptr [eax+ecx]
0x8CE7E5: add     eax, ecx
0x8CE7E7: movaps  xmmword ptr [edi+ecx], xmm0
0x8CE7EB: movaps  xmm0, xmmword ptr [eax+10h]
0x8CE7EF: movaps  xmmword ptr [edi+ecx+10h], xmm0
0x8CE7F4: mov     edx, [eax+20h]
0x8CE7F7: mov     [edi+ecx+20h], edx
0x8CE7FB: mov     edx, [eax+24h]
0x8CE7FE: mov     [edi+ecx+24h], edx
0x8CE802: mov     edx, [eax+28h]
0x8CE805: mov     [edi+ecx+28h], edx
0x8CE809: mov     eax, [eax+2Ch]
0x8CE80C: mov     [edi+ecx+2Ch], eax
0x8CE810: mov     eax, [esp+20h+var_4]
0x8CE814: sub     edi, 30h ; '0'
0x8CE817: test    eax, eax
0x8CE819: jg      loc_8CE792
0x8CE81F: mov     eax, [esi+1A0h]
0x8CE825: test    eax, eax
0x8CE827: jz      loc_8CE8DC
0x8CE82D: mov     eax, [eax+14h]
0x8CE830: test    eax, eax
0x8CE832: jz      loc_8CE8DC
0x8CE838: lea     edx, [eax+eax*2]
0x8CE83B: shl     edx, 4
0x8CE83E: mov     ebx, [esi+14h]
0x8CE841: sub     eax, 1
0x8CE844: sub     edx, 30h ; '0'
0x8CE847: test    ebx, ebx
0x8CE849: mov     [esp+20h+var_8], eax
0x8CE84D: mov     [esp+20h+var_4], edx
0x8CE851: jz      loc_8CE8D4
0x8CE857: lea     edi, [ebx+ebx*2]
0x8CE85A: shl     edi, 4
0x8CE85D: lea     ecx, [ecx+0]
0x8CE860: mov     eax, [esi+10h]
0x8CE863: mov     ecx, [esi+1A0h]
0x8CE869: mov     ecx, [ecx+10h]
0x8CE86C: sub     edi, 30h ; '0'
0x8CE86F: add     eax, edi
0x8CE871: add     ecx, edx
0x8CE873: push    eax
0x8CE874: push    ecx
0x8CE875: lea     edx, [esp+28h+var_9]
0x8CE879: push    edx
0x8CE87A: mov     ecx, esi
0x8CE87C: sub     ebx, 1
0x8CE87F: call    sub_8CE690
0x8CE884: cmp     byte ptr [eax], 0
0x8CE887: jz      short loc_8CE8C8
0x8CE889: add     dword ptr [esi+14h], 0FFFFFFFFh
0x8CE88D: mov     eax, [esi+14h]
0x8CE890: mov     ecx, [esi+10h]
0x8CE893: lea     eax, [eax+eax*2]
0x8CE896: shl     eax, 4
0x8CE899: movaps  xmm0, xmmword ptr [eax+ecx]
0x8CE89D: add     eax, ecx
0x8CE89F: movaps  xmmword ptr [edi+ecx], xmm0
0x8CE8A3: movaps  xmm0, xmmword ptr [eax+10h]
0x8CE8A7: movaps  xmmword ptr [edi+ecx+10h], xmm0
0x8CE8AC: mov     edx, [eax+20h]
0x8CE8AF: mov     [edi+ecx+20h], edx
0x8CE8B3: mov     edx, [eax+24h]
0x8CE8B6: mov     [edi+ecx+24h], edx
0x8CE8BA: mov     edx, [eax+28h]
0x8CE8BD: mov     [edi+ecx+28h], edx
0x8CE8C1: mov     eax, [eax+2Ch]
0x8CE8C4: mov     [edi+ecx+2Ch], eax
0x8CE8C8: test    ebx, ebx
0x8CE8CA: mov     edx, [esp+20h+var_4]
0x8CE8CE: jnz     short loc_8CE860
0x8CE8D0: mov     eax, [esp+20h+var_8]
0x8CE8D4: test    eax, eax
0x8CE8D6: jnz     loc_8CE83E
0x8CE8DC: pop     edi
0x8CE8DD: pop     esi
0x8CE8DE: pop     ebx
0x8CE8DF: mov     esp, ebp
0x8CE8E1: pop     ebp
0x8CE8E2: retn
