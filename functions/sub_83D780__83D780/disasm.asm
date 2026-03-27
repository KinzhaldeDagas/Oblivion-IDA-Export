0x83D780: push    0FFFFFFFFh
0x83D782: push    offset SEH_882120
0x83D787: mov     eax, large fs:0
0x83D78D: push    eax
0x83D78E: push    ebx
0x83D78F: push    ebp
0x83D790: push    esi
0x83D791: push    edi
0x83D792: mov     eax, ds:0B30AACh
0x83D797: xor     eax, esp
0x83D799: push    eax
0x83D79A: lea     eax, [esp+20h+var_C]
0x83D79E: mov     large fs:0, eax
0x83D7A4: mov     esi, ecx
0x83D7A6: mov     ebx, [esp+20h+arg_8]
0x83D7AA: mov     eax, [ebx+10h]
0x83D7AD: mov     edi, ds:0B4581Ch
0x83D7B3: push    eax
0x83D7B4: call    sub_848C40
0x83D7B9: mov     ebx, [ebx+0Ch]
0x83D7BC: push    ebx
0x83D7BD: mov     ecx, esi
0x83D7BF: call    sub_848E50
0x83D7C4: mov     ecx, [esp+20h+arg_0]
0x83D7C8: mov     eax, [esi]
0x83D7CA: mov     edx, [eax+0BCh]
0x83D7D0: push    0
0x83D7D2: push    ebx
0x83D7D3: push    ecx
0x83D7D4: mov     ecx, esi
0x83D7D6: call    edx
0x83D7D8: mov     eax, [edi+24h]
0x83D7DB: mov     ebx, [esp+20h+arg_C]
0x83D7DF: mov     ebp, [eax]
0x83D7E1: mov     edx, [ebx]
0x83D7E3: mov     eax, [edx+88h]
0x83D7E9: push    0
0x83D7EB: mov     ecx, ebx
0x83D7ED: mov     [esp+24h+arg_8], ebp
0x83D7F1: call    eax
0x83D7F3: mov     ebp, [ebp+4]
0x83D7F6: cmp     ebp, eax
0x83D7F8: mov     [esp+20h+arg_0], eax
0x83D7FC: jz      short loc_83D838
0x83D7FE: test    ebp, ebp
0x83D800: jz      short loc_83D823
0x83D802: lea     ecx, [ebp+4]
0x83D805: push    ecx; lpAddend
0x83D806: call    dword ptr ds:0A2807Ch
0x83D80C: test    eax, eax
0x83D80E: jnz     short loc_83D81F
0x83D810: test    ebp, ebp
0x83D812: jz      short loc_83D81F
0x83D814: mov     edx, [ebp+0]
0x83D817: mov     eax, [edx]
0x83D819: push    1
0x83D81B: mov     ecx, ebp
0x83D81D: call    eax
0x83D81F: mov     eax, [esp+20h+arg_0]
0x83D823: test    eax, eax
0x83D825: mov     ecx, [esp+20h+arg_8]
0x83D829: mov     [ecx+4], eax
0x83D82C: jz      short loc_83D838
0x83D82E: add     eax, 4
0x83D831: push    eax; lpAddend
0x83D832: call    dword ptr ds:0A28078h
0x83D838: mov     edx, [esp+20h+arg_8]
0x83D83C: push    ebx
0x83D83D: push    edx
0x83D83E: mov     ecx, esi
0x83D840: call    sub_848FA0
0x83D845: mov     eax, [edi+24h]
0x83D848: mov     ebp, [eax+4]
0x83D84B: push    0
0x83D84D: push    ebx
0x83D84E: mov     ecx, esi
0x83D850: mov     [esp+28h+arg_8], ebp
0x83D854: call    sub_848FD0
0x83D859: mov     ebp, [ebp+4]
0x83D85C: cmp     ebp, eax
0x83D85E: mov     [esp+20h+arg_0], eax
0x83D862: jz      short loc_83D89E
0x83D864: test    ebp, ebp
0x83D866: jz      short loc_83D889
0x83D868: lea     ecx, [ebp+4]
0x83D86B: push    ecx; lpAddend
0x83D86C: call    dword ptr ds:0A2807Ch
0x83D872: test    eax, eax
0x83D874: jnz     short loc_83D885
0x83D876: test    ebp, ebp
0x83D878: jz      short loc_83D885
0x83D87A: mov     edx, [ebp+0]
0x83D87D: mov     eax, [edx]
0x83D87F: push    1
0x83D881: mov     ecx, ebp
0x83D883: call    eax
0x83D885: mov     eax, [esp+20h+arg_0]
0x83D889: test    eax, eax
0x83D88B: mov     ecx, [esp+20h+arg_8]
0x83D88F: mov     [ecx+4], eax
0x83D892: jz      short loc_83D89E
0x83D894: add     eax, 4
0x83D897: push    eax; lpAddend
0x83D898: call    dword ptr ds:0A28078h
0x83D89E: mov     edx, [esp+20h+arg_8]
0x83D8A2: push    ebx
0x83D8A3: push    edx
0x83D8A4: mov     ecx, esi
0x83D8A6: call    sub_848FA0
0x83D8AB: mov     ecx, [edi+24h]
0x83D8AE: mov     ebx, [ecx+18h]
0x83D8B1: mov     eax, ds:0B43108h
0x83D8B6: mov     ebp, [ebx+4]
0x83D8B9: add     ebx, 4
0x83D8BC: cmp     ebp, eax
0x83D8BE: mov     [esp+20h+arg_8], eax
0x83D8C2: jz      short loc_83D8F9
0x83D8C4: test    ebp, ebp
0x83D8C6: jz      short loc_83D8E9
0x83D8C8: lea     edx, [ebp+4]
0x83D8CB: push    edx; lpAddend
0x83D8CC: call    dword ptr ds:0A2807Ch
0x83D8D2: test    eax, eax
0x83D8D4: jnz     short loc_83D8E5
0x83D8D6: test    ebp, ebp
0x83D8D8: jz      short loc_83D8E5
0x83D8DA: mov     eax, [ebp+0]
0x83D8DD: mov     edx, [eax]
0x83D8DF: push    1
0x83D8E1: mov     ecx, ebp
0x83D8E3: call    edx
0x83D8E5: mov     eax, [esp+20h+arg_8]
0x83D8E9: test    eax, eax
0x83D8EB: mov     [ebx], eax
0x83D8ED: jz      short loc_83D8F9
0x83D8EF: add     eax, 4
0x83D8F2: push    eax; lpAddend
0x83D8F3: call    dword ptr ds:0A28078h
0x83D8F9: mov     eax, [edi+24h]
0x83D8FC: mov     ebp, [eax+1Ch]
0x83D8FF: mov     eax, ds:0B4310Ch
0x83D904: mov     ebx, [ebp+4]
0x83D907: cmp     ebx, eax
0x83D909: mov     ecx, eax
0x83D90B: mov     [esp+20h+arg_8], ecx
0x83D90F: jz      short loc_83D946
0x83D911: test    ebx, ebx
0x83D913: jz      short loc_83D935
0x83D915: lea     ecx, [ebx+4]
0x83D918: push    ecx; lpAddend
0x83D919: call    dword ptr ds:0A2807Ch
0x83D91F: test    eax, eax
0x83D921: jnz     short loc_83D931
0x83D923: test    ebx, ebx
0x83D925: jz      short loc_83D931
0x83D927: mov     edx, [ebx]
0x83D929: mov     eax, [edx]
0x83D92B: push    1
0x83D92D: mov     ecx, ebx
0x83D92F: call    eax
0x83D931: mov     ecx, [esp+20h+arg_8]
0x83D935: test    ecx, ecx
0x83D937: mov     [ebp+4], ecx
0x83D93A: jz      short loc_83D946
0x83D93C: add     ecx, 4
0x83D93F: push    ecx; lpAddend
0x83D940: call    dword ptr ds:0A28078h
0x83D946: mov     ebx, 1
0x83D94B: add     [edi+60h], ebx
0x83D94E: mov     [esp+20h+arg_8], edi
0x83D952: mov     edx, [esi+38h]
0x83D955: lea     ecx, [esp+20h+arg_8]
0x83D959: push    ecx
0x83D95A: push    edx
0x83D95B: lea     ecx, [esi+40h]
0x83D95E: mov     [esp+28h+var_4], 0
0x83D966: call    sub_76CE40
0x83D96B: or      eax, 0FFFFFFFFh
0x83D96E: add     [edi+60h], eax
0x83D971: mov     [esp+20h+var_4], eax
0x83D975: jnz     short loc_83D97E
0x83D977: mov     ecx, edi
0x83D979: call    sub_7604D0
0x83D97E: add     [esi+38h], ebx
0x83D981: mov     ecx, [esp+20h+var_C]
0x83D985: mov     large fs:0, ecx
0x83D98C: pop     ecx
0x83D98D: pop     edi
0x83D98E: pop     esi
0x83D98F: pop     ebp
0x83D990: pop     ebx
0x83D991: add     esp, 0Ch
0x83D994: retn    10h
