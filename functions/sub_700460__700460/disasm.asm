0x700460: push    ecx
0x700461: push    ebp
0x700462: mov     ebp, [esp+8+arg_0]
0x700466: push    esi
0x700467: push    edi
0x700468: push    ebp
0x700469: mov     esi, ecx
0x70046B: call    nullsub_returnvVoid_1arg
0x700470: mov     eax, [esi+8]
0x700473: push    eax
0x700474: mov     ecx, ebp
0x700476: call    sub_713720
0x70047B: xor     edi, edi
0x70047D: cmp     [esi+14h], di
0x700481: mov     [esp+10h+arg_0], 0
0x700489: jbe     short loc_7004B2
0x70048B: jmp     short loc_700490
0x70048D: align 10h
0x700490: mov     edx, [esi+10h]
0x700493: movzx   ecx, di
0x700496: mov     ecx, [edx+ecx*4]
0x700499: mov     eax, [ecx]
0x70049B: mov     edx, [eax+4Ch]
0x70049E: call    edx
0x7004A0: test    al, al
0x7004A2: jz      short loc_7004A9
0x7004A4: add     [esp+10h+arg_0], 1
0x7004A9: add     edi, 1
0x7004AC: cmp     di, [esi+14h]
0x7004B0: jb      short loc_700490
0x7004B2: mov     eax, [ebp+220h]
0x7004B8: push    1
0x7004BA: lea     ecx, [esp+14h+var_4]
0x7004BE: push    ecx
0x7004BF: push    4
0x7004C1: lea     edx, [esp+1Ch+arg_0]
0x7004C5: push    edx
0x7004C6: push    eax
0x7004C7: mov     eax, [eax+8]
0x7004CA: mov     [esp+24h+var_4], 4
0x7004D2: call    eax
0x7004D4: xor     edi, edi
0x7004D6: add     esp, 14h
0x7004D9: cmp     [esi+14h], di
0x7004DD: jbe     short loc_70050B
0x7004DF: push    ebx
0x7004E0: mov     edx, [esi+10h]
0x7004E3: movzx   ecx, di
0x7004E6: mov     ebx, [edx+ecx*4]
0x7004E9: mov     eax, [ebx]
0x7004EB: mov     edx, [eax+4Ch]
0x7004EE: mov     ecx, ebx
0x7004F0: call    edx
0x7004F2: test    al, al
0x7004F4: jz      short loc_700501
0x7004F6: mov     eax, [ebp+0]
0x7004F9: mov     edx, [eax+2Ch]
0x7004FC: push    ebx
0x7004FD: mov     ecx, ebp
0x7004FF: call    edx
0x700501: add     edi, 1
0x700504: cmp     di, [esi+14h]
0x700508: jb      short loc_7004E0
0x70050A: pop     ebx
0x70050B: mov     esi, [esi+0Ch]
0x70050E: test    esi, esi
0x700510: jz      short loc_700526
0x700512: mov     eax, [esi]
0x700514: mov     edx, [eax+6Ch]
0x700517: mov     ecx, esi
0x700519: call    edx
0x70051B: test    al, al
0x70051D: jnz     short loc_700526
0x70051F: mov     esi, [esi+34h]
0x700522: test    esi, esi
0x700524: jnz     short loc_700512
0x700526: mov     eax, [ebp+0]
0x700529: mov     edx, [eax+2Ch]
0x70052C: push    esi
0x70052D: mov     ecx, ebp
0x70052F: call    edx
0x700531: pop     edi
0x700532: pop     esi
0x700533: pop     ebp
0x700534: pop     ecx
0x700535: retn    4
