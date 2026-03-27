0x848830: push    0FFFFFFFFh
0x848832: push    offset SEH_852030
0x848837: mov     eax, large fs:0
0x84883D: push    eax
0x84883E: push    ecx
0x84883F: push    ebx
0x848840: push    esi
0x848841: push    edi
0x848842: mov     eax, ds:0B30AACh
0x848847: xor     eax, esp
0x848849: push    eax
0x84884A: lea     eax, [esp+20h+var_C]
0x84884E: mov     large fs:0, eax
0x848854: mov     esi, ecx
0x848856: mov     edi, ds:0B45B38h
0x84885C: test    edi, edi
0x84885E: mov     [esp+20h+var_10], edi
0x848862: mov     ebx, 1
0x848867: jz      short loc_84886C
0x848869: add     [edi+60h], ebx
0x84886C: mov     ecx, [esi+38h]
0x84886F: lea     eax, [esp+20h+var_10]
0x848873: push    eax
0x848874: push    ecx
0x848875: lea     ecx, [esi+40h]
0x848878: mov     [esp+28h+var_4], 0
0x848880: call    sub_76CE40
0x848885: or      eax, 0FFFFFFFFh
0x848888: test    edi, edi
0x84888A: mov     [esp+20h+var_4], eax
0x84888E: jz      short loc_84889C
0x848890: add     [edi+60h], eax
0x848893: jnz     short loc_84889C
0x848895: mov     ecx, edi
0x848897: call    sub_7604D0
0x84889C: add     [esi+38h], ebx
0x84889F: mov     ecx, [esp+20h+var_C]
0x8488A3: mov     large fs:0, ecx
0x8488AA: pop     ecx
0x8488AB: pop     edi
0x8488AC: pop     esi
0x8488AD: pop     ebx
0x8488AE: add     esp, 10h
0x8488B1: retn    10h
