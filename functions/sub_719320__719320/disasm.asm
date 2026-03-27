0x719320: sub     esp, 10h
0x719323: push    ebx
0x719324: push    esi
0x719325: push    edi
0x719326: mov     edi, [esp+1Ch+arg_0]
0x71932A: push    edi
0x71932B: mov     esi, ecx
0x71932D: call    sub_700A80
0x719332: cmp     dword ptr [edi+0D8h], 14010002h
0x71933C: push    1
0x71933E: jnb     loc_71948D
0x719344: movzx   eax, byte ptr [esi+18h]
0x719348: lea     ecx, [esp+20h+var_C]
0x71934C: push    ecx
0x71934D: and     al, 1
0x71934F: mov     byte ptr [esp+24h+arg_0], al
0x719353: mov     eax, [edi+220h]
0x719359: push    1
0x71935B: lea     edx, [esp+28h+arg_0]
0x71935F: push    edx
0x719360: push    eax
0x719361: mov     eax, [eax+8]
0x719364: mov     [esp+30h+var_C], 1
0x71936C: call    eax
0x71936E: movzx   ecx, word ptr [esi+18h]
0x719372: mov     eax, [edi+220h]
0x719378: push    1
0x71937A: shr     ecx, 0Ch
0x71937D: lea     edx, [esp+34h+var_C]
0x719381: push    edx
0x719382: mov     [esp+38h+var_8], ecx
0x719386: mov     edx, [eax+8]
0x719389: mov     ebx, 4
0x71938E: push    ebx
0x71938F: lea     ecx, [esp+3Ch+var_8]
0x719393: push    ecx
0x719394: push    eax
0x719395: mov     [esp+44h+var_C], ebx
0x719399: call    edx
0x71939B: mov     eax, [edi+220h]
0x7193A1: push    1
0x7193A3: lea     ecx, [esp+48h+var_C]
0x7193A7: push    ecx
0x7193A8: push    ebx
0x7193A9: lea     edx, [esi+1Ch]
0x7193AC: push    edx
0x7193AD: push    eax
0x7193AE: mov     eax, [eax+8]
0x7193B1: mov     [esp+58h+var_C], ebx
0x7193B5: call    eax
0x7193B7: mov     eax, [edi+220h]
0x7193BD: push    1
0x7193BF: lea     ecx, [esp+5Ch+var_C]
0x7193C3: push    ecx
0x7193C4: push    ebx
0x7193C5: lea     edx, [esi+20h]
0x7193C8: push    edx
0x7193C9: push    eax
0x7193CA: mov     eax, [eax+8]
0x7193CD: mov     [esp+6Ch+var_C], ebx
0x7193D1: call    eax
0x7193D3: movzx   ecx, byte ptr [esi+18h]
0x7193D7: mov     eax, [edi+220h]
0x7193DD: add     esp, 50h
0x7193E0: shr     ecx, 1
0x7193E2: push    1
0x7193E4: and     ecx, 7
0x7193E7: lea     edx, [esp+20h+var_C]
0x7193EB: push    edx
0x7193EC: mov     [esp+24h+var_10], ecx
0x7193F0: mov     edx, [eax+8]
0x7193F3: push    ebx
0x7193F4: lea     ecx, [esp+28h+var_10]
0x7193F8: push    ecx
0x7193F9: push    eax
0x7193FA: mov     [esp+30h+var_C], ebx
0x7193FE: call    edx
0x719400: movzx   eax, byte ptr [esi+18h]
0x719404: push    1
0x719406: shr     eax, 4
0x719409: lea     ecx, [esp+34h+var_C]
0x71940D: push    ecx
0x71940E: and     eax, 7
0x719411: mov     [esp+38h+var_10], eax
0x719415: mov     eax, [edi+220h]
0x71941B: push    ebx
0x71941C: lea     edx, [esp+3Ch+var_10]
0x719420: push    edx
0x719421: push    eax
0x719422: mov     eax, [eax+8]
0x719425: mov     [esp+44h+var_C], ebx
0x719429: call    eax
0x71942B: movzx   ecx, word ptr [esi+18h]
0x71942F: mov     eax, [edi+220h]
0x719435: shr     ecx, 7
0x719438: push    1
0x71943A: and     ecx, 7
0x71943D: lea     edx, [esp+48h+var_C]
0x719441: push    edx
0x719442: mov     [esp+4Ch+var_10], ecx
0x719446: mov     edx, [eax+8]
0x719449: push    ebx
0x71944A: lea     ecx, [esp+50h+var_10]
0x71944E: push    ecx
0x71944F: push    eax
0x719450: mov     [esp+58h+var_C], ebx
0x719454: call    edx
0x719456: movzx   eax, word ptr [esi+18h]
0x71945A: mov     edi, [edi+220h]
0x719460: push    1
0x719462: lea     ecx, [esp+5Ch+var_C]
0x719466: push    ecx
0x719467: shr     eax, 0Ah
0x71946A: and     eax, 3
0x71946D: push    ebx
0x71946E: lea     edx, [esp+64h+var_4]
0x719472: push    edx
0x719473: mov     [esp+68h+var_4], eax
0x719477: mov     eax, [edi+8]
0x71947A: push    edi
0x71947B: mov     [esp+6Ch+var_C], ebx
0x71947F: call    eax
0x719481: add     esp, 50h
0x719484: pop     edi
0x719485: pop     esi
0x719486: pop     ebx
0x719487: add     esp, 10h
0x71948A: retn    4
0x71948D: mov     eax, [edi+220h]
0x719493: lea     ecx, [esp+20h+arg_0]
0x719497: push    ecx
0x719498: push    2
0x71949A: lea     edx, [esi+18h]
0x71949D: push    edx
0x71949E: push    eax
0x71949F: mov     eax, [eax+8]
0x7194A2: mov     [esp+30h+arg_0], 2
0x7194AA: call    eax
0x7194AC: mov     eax, [edi+220h]
0x7194B2: push    1
0x7194B4: lea     ecx, [esp+34h+arg_0]
0x7194B8: push    ecx
0x7194B9: mov     ebx, 4
0x7194BE: push    ebx
0x7194BF: lea     edx, [esi+1Ch]
0x7194C2: push    edx
0x7194C3: push    eax
0x7194C4: mov     eax, [eax+8]
0x7194C7: mov     [esp+44h+arg_0], ebx
0x7194CB: call    eax
0x7194CD: mov     edi, [edi+220h]
0x7194D3: mov     edx, [edi+8]
0x7194D6: push    1
0x7194D8: lea     ecx, [esp+48h+arg_0]
0x7194DC: push    ecx
0x7194DD: push    ebx
0x7194DE: add     esi, 20h ; ' '
0x7194E1: push    esi
0x7194E2: push    edi
0x7194E3: mov     [esp+58h+arg_0], ebx
0x7194E7: call    edx
0x7194E9: add     esp, 3Ch
0x7194EC: pop     edi
0x7194ED: pop     esi
0x7194EE: pop     ebx
0x7194EF: add     esp, 10h
0x7194F2: retn    4
