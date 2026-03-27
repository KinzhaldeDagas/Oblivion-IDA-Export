0x6D7090: push    ecx
0x6D7091: push    esi
0x6D7092: push    edi
0x6D7093: mov     edi, [esp+0Ch+arg_0]
0x6D7097: push    edi
0x6D7098: mov     esi, ecx
0x6D709A: call    sub_6EC5B0
0x6D709F: mov     al, [esi+48h]
0x6D70A2: push    1
0x6D70A4: lea     ecx, [esp+10h+var_4]
0x6D70A8: push    ecx
0x6D70A9: mov     byte ptr [esp+14h+arg_0], al
0x6D70AD: mov     eax, [edi+220h]
0x6D70B3: push    1
0x6D70B5: lea     edx, [esp+18h+arg_0]
0x6D70B9: push    edx
0x6D70BA: push    eax
0x6D70BB: mov     eax, [eax+8]
0x6D70BE: mov     [esp+20h+var_4], 1
0x6D70C6: call    eax
0x6D70C8: mov     eax, [edi+220h]
0x6D70CE: push    1
0x6D70D0: lea     ecx, [esp+24h+var_4]
0x6D70D4: push    ecx
0x6D70D5: push    4
0x6D70D7: lea     edx, [esi+4Ch]
0x6D70DA: push    edx
0x6D70DB: push    eax
0x6D70DC: mov     eax, [eax+8]
0x6D70DF: mov     [esp+34h+var_4], 4
0x6D70E7: call    eax
0x6D70E9: mov     edi, [edi+220h]
0x6D70EF: mov     edx, [edi+8]
0x6D70F2: push    1
0x6D70F4: lea     ecx, [esp+38h+var_4]
0x6D70F8: push    ecx
0x6D70F9: push    4
0x6D70FB: add     esi, 50h ; 'P'
0x6D70FE: push    esi
0x6D70FF: push    edi
0x6D7100: mov     [esp+48h+var_4], 4
0x6D7108: call    edx
0x6D710A: add     esp, 3Ch
0x6D710D: pop     edi
0x6D710E: pop     esi
0x6D710F: pop     ecx
0x6D7110: retn    4
