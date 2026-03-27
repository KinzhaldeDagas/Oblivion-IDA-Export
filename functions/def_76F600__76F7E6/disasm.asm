0x76F7E6: test    edx, edx; jumptable 0076F600 default case
0x76F7E8: jns     short loc_76F834
0x76F7EA: lea     eax, [esp+arg_24]
0x76F7EE: push    eax
0x76F7EF: lea     eax, [esp+4+arg_20]
0x76F7F3: push    eax
0x76F7F4: lea     eax, [esp+8+arg_48]
0x76F7F8: push    eax
0x76F7F9: lea     eax, [esp+0Ch+arg_38]
0x76F7FD: push    eax
0x76F7FE: lea     eax, [esp+10h+arg_4C]
0x76F802: push    eax
0x76F803: lea     eax, [esp+14h+arg_50]
0x76F807: and     edx, 7FFFFFFFh
0x76F80D: push    eax
0x76F80E: push    edx
0x76F80F: call    sub_726320
0x76F814: test    al, al
0x76F816: jz      short loc_76F822
0x76F818: mov     ecx, [esp+arg_50]
0x76F81C: mov     [esp+arg_1C], ecx
0x76F820: jmp     short loc_76F834
0x76F822: xor     eax, eax
0x76F824: mov     [esp+arg_1C], eax
0x76F828: mov     [esp+arg_4C], eax
0x76F82C: mov     [esp+arg_20], eax
0x76F830: mov     [esp+arg_24], eax
0x76F834: mov     eax, [ebp+8]
0x76F837: mov     edx, [esp+arg_4C]
0x76F83B: mov     ecx, [eax+edx*4]
0x76F83E: test    ecx, ecx
0x76F840: jz      loc_76F607; jumptable 0076F600 case -1
0x76F846: test    edi, edi
0x76F848: mov     [esp+arg_18], 0
0x76F850: jz      short loc_76F866
0x76F852: mov     eax, [ebx+8]
0x76F855: cmp     eax, 1
0x76F858: jz      short loc_76F866
0x76F85A: cmp     eax, 2
0x76F85D: jz      short loc_76F866
0x76F85F: mov     eax, [edi+0Ch]
0x76F862: mov     [esp+arg_18], eax
0x76F866: cmp     [esp+arg_1C], 0
0x76F86B: mov     eax, [ebx+0Ch]
0x76F86E: mov     [esp+arg_C], eax
0x76F872: mov     [esp+arg_10], edx
0x76F876: jz      loc_76F607; jumptable 0076F600 case -1
0x76F87C: lea     edx, [esp+arg_C]
0x76F880: push    edx
0x76F881: call    ecx
0x76F883: add     esp, 4
0x76F886: pop     edi
0x76F887: pop     esi
0x76F888: pop     ebp
0x76F889: pop     ebx
0x76F88A: add     esp, 28h
0x76F88D: retn    1Ch
