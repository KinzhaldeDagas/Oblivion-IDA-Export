0x87A750: push    0FFFFFFFFh
0x87A752: push    offset SEH_880560
0x87A757: mov     eax, large fs:0
0x87A75D: push    eax
0x87A75E: push    ebx
0x87A75F: push    ebp
0x87A760: push    esi
0x87A761: push    edi
0x87A762: mov     eax, ds:0B30AACh
0x87A767: xor     eax, esp
0x87A769: push    eax
0x87A76A: lea     eax, [esp+20h+var_C]
0x87A76E: mov     large fs:0, eax
0x87A774: mov     ebx, ecx
0x87A776: mov     eax, [esp+20h+arg_8]
0x87A77A: mov     eax, [eax+10h]
0x87A77D: mov     edx, [ebx]
0x87A77F: mov     edx, [edx+0BCh]
0x87A785: mov     esi, ds:0B47704h
0x87A78B: push    eax
0x87A78C: mov     eax, [esp+24h+arg_0]
0x87A790: push    0
0x87A792: push    eax
0x87A793: call    edx
0x87A795: mov     eax, [esi+24h]
0x87A798: mov     ecx, [esp+20h+arg_C]
0x87A79C: mov     edi, [eax]
0x87A79E: push    0
0x87A7A0: push    ecx
0x87A7A1: mov     ecx, ebx
0x87A7A3: mov     [esp+28h+arg_8], edi
0x87A7A7: call    sub_848FD0
0x87A7AC: mov     edi, [edi+4]
0x87A7AF: mov     ebp, eax
0x87A7B1: cmp     edi, ebp
0x87A7B3: jz      short loc_87A7EA
0x87A7B5: test    edi, edi
0x87A7B7: jz      short loc_87A7D5
0x87A7B9: lea     edx, [edi+4]
0x87A7BC: push    edx; lpAddend
0x87A7BD: call    dword ptr ds:0A2807Ch
0x87A7C3: test    eax, eax
0x87A7C5: jnz     short loc_87A7D5
0x87A7C7: test    edi, edi
0x87A7C9: jz      short loc_87A7D5
0x87A7CB: mov     eax, [edi]
0x87A7CD: mov     edx, [eax]
0x87A7CF: push    1
0x87A7D1: mov     ecx, edi
0x87A7D3: call    edx
0x87A7D5: test    ebp, ebp
0x87A7D7: mov     eax, [esp+20h+arg_8]
0x87A7DB: mov     [eax+4], ebp
0x87A7DE: jz      short loc_87A7EA
0x87A7E0: add     ebp, 4
0x87A7E3: push    ebp; lpAddend
0x87A7E4: call    dword ptr ds:0A28078h
0x87A7EA: mov     ecx, [esi+24h]
0x87A7ED: mov     edi, [ecx+4]
0x87A7F0: mov     ecx, [esp+20h+arg_C]
0x87A7F4: mov     edx, [ecx]
0x87A7F6: mov     eax, [edx+88h]
0x87A7FC: push    0
0x87A7FE: mov     [esp+24h+arg_8], edi
0x87A802: call    eax
0x87A804: mov     edi, [edi+4]
0x87A807: mov     ebp, eax
0x87A809: cmp     edi, ebp
0x87A80B: jz      short loc_87A842
0x87A80D: test    edi, edi
0x87A80F: jz      short loc_87A82D
0x87A811: lea     ecx, [edi+4]
0x87A814: push    ecx; lpAddend
0x87A815: call    dword ptr ds:0A2807Ch
0x87A81B: test    eax, eax
0x87A81D: jnz     short loc_87A82D
0x87A81F: test    edi, edi
0x87A821: jz      short loc_87A82D
0x87A823: mov     edx, [edi]
0x87A825: mov     eax, [edx]
0x87A827: push    1
0x87A829: mov     ecx, edi
0x87A82B: call    eax
0x87A82D: test    ebp, ebp
0x87A82F: mov     ecx, [esp+20h+arg_8]
0x87A833: mov     [ecx+4], ebp
0x87A836: jz      short loc_87A842
0x87A838: add     ebp, 4
0x87A83B: push    ebp; lpAddend
0x87A83C: call    dword ptr ds:0A28078h
0x87A842: mov     edx, [esi+24h]
0x87A845: mov     ebp, [edx+10h]
0x87A848: mov     eax, ds:0B43108h
0x87A84D: mov     edi, [ebp+4]
0x87A850: add     ebp, 4
0x87A853: cmp     edi, eax
0x87A855: mov     [esp+20h+arg_C], eax
0x87A859: jz      short loc_87A890
0x87A85B: test    edi, edi
0x87A85D: jz      short loc_87A87F
0x87A85F: lea     eax, [edi+4]
0x87A862: push    eax; lpAddend
0x87A863: call    dword ptr ds:0A2807Ch
0x87A869: test    eax, eax
0x87A86B: jnz     short loc_87A87B
0x87A86D: test    edi, edi
0x87A86F: jz      short loc_87A87B
0x87A871: mov     edx, [edi]
0x87A873: mov     eax, [edx]
0x87A875: push    1
0x87A877: mov     ecx, edi
0x87A879: call    eax
0x87A87B: mov     eax, [esp+20h+arg_C]
0x87A87F: test    eax, eax
0x87A881: mov     [ebp+0], eax
0x87A884: jz      short loc_87A890
0x87A886: add     eax, 4
0x87A889: push    eax; lpAddend
0x87A88A: call    dword ptr ds:0A28078h
0x87A890: mov     ecx, [esi+24h]
0x87A893: mov     ebp, [ecx+14h]
0x87A896: mov     eax, ds:0B4310Ch
0x87A89B: mov     edi, [ebp+4]
0x87A89E: cmp     edi, eax
0x87A8A0: mov     ecx, eax
0x87A8A2: mov     [esp+20h+arg_C], ecx
0x87A8A6: jz      short loc_87A8DD
0x87A8A8: test    edi, edi
0x87A8AA: jz      short loc_87A8CC
0x87A8AC: lea     edx, [edi+4]
0x87A8AF: push    edx; lpAddend
0x87A8B0: call    dword ptr ds:0A2807Ch
0x87A8B6: test    eax, eax
0x87A8B8: jnz     short loc_87A8C8
0x87A8BA: test    edi, edi
0x87A8BC: jz      short loc_87A8C8
0x87A8BE: mov     eax, [edi]
0x87A8C0: mov     edx, [eax]
0x87A8C2: push    1
0x87A8C4: mov     ecx, edi
0x87A8C6: call    edx
0x87A8C8: mov     ecx, [esp+20h+arg_C]
0x87A8CC: test    ecx, ecx
0x87A8CE: mov     [ebp+4], ecx
0x87A8D1: jz      short loc_87A8DD
0x87A8D3: add     ecx, 4
0x87A8D6: push    ecx; lpAddend
0x87A8D7: call    dword ptr ds:0A28078h
0x87A8DD: mov     edi, 1
0x87A8E2: add     [esi+60h], edi
0x87A8E5: mov     [esp+20h+arg_C], esi
0x87A8E9: mov     ecx, [ebx+38h]
0x87A8EC: lea     eax, [esp+20h+arg_C]
0x87A8F0: push    eax
0x87A8F1: push    ecx
0x87A8F2: lea     ecx, [ebx+40h]
0x87A8F5: mov     [esp+28h+var_4], 0
0x87A8FD: call    sub_76CE40
0x87A902: or      eax, 0FFFFFFFFh
0x87A905: add     [esi+60h], eax
0x87A908: mov     [esp+20h+var_4], eax
0x87A90C: jnz     short loc_87A915
0x87A90E: mov     ecx, esi
0x87A910: call    sub_7604D0
0x87A915: add     [ebx+38h], edi
0x87A918: mov     ecx, [esp+20h+var_C]
0x87A91C: mov     large fs:0, ecx
0x87A923: pop     ecx
0x87A924: pop     edi
0x87A925: pop     esi
0x87A926: pop     ebp
0x87A927: pop     ebx
0x87A928: add     esp, 0Ch
0x87A92B: retn    10h
