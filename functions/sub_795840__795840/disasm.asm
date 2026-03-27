0x795840: push    ecx
0x795841: push    ebx
0x795842: push    ebp
0x795843: mov     ebp, [esp+0Ch+arg_4]
0x795847: push    esi
0x795848: mov     esi, ecx
0x79584A: push    edi
0x79584B: mov     edi, [esi+4]
0x79584E: test    edi, edi
0x795850: jz      short loc_79585E
0x795852: mov     eax, [esi+8]
0x795855: mov     ecx, eax
0x795857: sub     ecx, edi
0x795859: sar     ecx, 2
0x79585C: jnz     short loc_795862
0x79585E: xor     ebx, ebx
0x795860: jmp     short loc_795881
0x795862: cmp     edi, eax
0x795864: jbe     short loc_79586B
0x795866: call    __invalid_parameter_noinfo
0x79586B: test    ebp, ebp
0x79586D: jz      short loc_795873
0x79586F: cmp     ebp, esi
0x795871: jz      short loc_795878
0x795873: call    __invalid_parameter_noinfo
0x795878: mov     ebx, [esp+14h+Src]
0x79587C: sub     ebx, edi
0x79587E: sar     ebx, 2
0x795881: mov     edx, [esp+14h+arg_C]
0x795885: mov     eax, [esp+14h+Src]
0x795889: push    edx; int
0x79588A: push    1; int
0x79588C: push    eax; Src
0x79588D: push    ebp; int
0x79588E: mov     ecx, esi
0x795890: call    sub_7950A0
0x795895: mov     edi, [esi+4]
0x795898: cmp     edi, [esi+8]
0x79589B: jbe     short loc_7958A2
0x79589D: call    __invalid_parameter_noinfo
0x7958A2: mov     [esp+14h+Src], edi
0x7958A6: lea     edi, [edi+ebx*4]
0x7958A9: cmp     edi, [esi+8]
0x7958AC: ja      short loc_7958B3
0x7958AE: cmp     edi, [esi+4]
0x7958B1: jnb     short loc_7958B8
0x7958B3: call    __invalid_parameter_noinfo
0x7958B8: mov     eax, [esp+14h+arg_0]
0x7958BC: mov     [eax+4], edi
0x7958BF: pop     edi
0x7958C0: mov     [eax], esi
0x7958C2: pop     esi
0x7958C3: pop     ebp
0x7958C4: pop     ebx
0x7958C5: pop     ecx
0x7958C6: retn    10h
