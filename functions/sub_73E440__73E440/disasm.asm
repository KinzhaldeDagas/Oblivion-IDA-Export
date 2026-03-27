0x73E440: sub     esp, 1Ch
0x73E443: push    ebp
0x73E444: push    esi
0x73E445: push    edi
0x73E446: mov     edi, [esp+28h+arg_0]
0x73E44A: mov     esi, ecx
0x73E44C: push    edi
0x73E44D: mov     [esp+2Ch+var_18], esi
0x73E451: call    nullsub_returnvVoid_1arg
0x73E456: mov     eax, [esi+10h]
0x73E459: push    1
0x73E45B: lea     ecx, [esp+2Ch+arg_0]
0x73E45F: push    ecx
0x73E460: mov     [esp+30h+var_1C], eax
0x73E464: mov     eax, [edi+220h]
0x73E46A: push    4
0x73E46C: lea     edx, [esp+34h+var_1C]
0x73E470: push    edx
0x73E471: push    eax
0x73E472: mov     eax, [eax+8]
0x73E475: mov     [esp+3Ch+arg_0], 4
0x73E47D: call    eax
0x73E47F: xor     ebp, ebp
0x73E481: add     esp, 14h
0x73E484: cmp     [esp+28h+var_1C], ebp
0x73E488: jbe     loc_73E58F
0x73E48E: push    ebx
0x73E48F: mov     [esp+2Ch+arg_0], ebp
0x73E493: mov     ebx, 2
0x73E498: jmp     short loc_73E4A0
0x73E49A: align 10h
0x73E4A0: mov     esi, [esi+8]
0x73E4A3: add     esi, [esp+2Ch+arg_0]
0x73E4A7: mov     eax, [edi+220h]
0x73E4AD: mov     edx, [eax+8]
0x73E4B0: push    1
0x73E4B2: lea     ecx, [esp+30h+var_14]
0x73E4B6: push    ecx
0x73E4B7: push    ebx
0x73E4B8: push    esi
0x73E4B9: push    eax
0x73E4BA: mov     [esp+40h+var_14], ebx
0x73E4BE: call    edx
0x73E4C0: mov     eax, [edi+220h]
0x73E4C6: push    1
0x73E4C8: lea     ecx, [esp+44h+var_14]
0x73E4CC: push    ecx
0x73E4CD: push    ebx
0x73E4CE: lea     edx, [esi+2]
0x73E4D1: push    edx
0x73E4D2: push    eax
0x73E4D3: mov     eax, [eax+8]
0x73E4D6: mov     [esp+54h+var_14], ebx
0x73E4DA: call    eax
0x73E4DC: mov     eax, [edi+220h]
0x73E4E2: push    1
0x73E4E4: lea     ecx, [esp+58h+var_14]
0x73E4E8: push    ecx
0x73E4E9: push    ebx
0x73E4EA: lea     edx, [esi+4]
0x73E4ED: push    edx
0x73E4EE: push    eax
0x73E4EF: mov     eax, [eax+8]
0x73E4F2: mov     [esp+68h+var_14], ebx
0x73E4F6: call    eax
0x73E4F8: mov     eax, [edi+220h]
0x73E4FE: push    1
0x73E500: lea     ecx, [esp+6Ch+var_14]
0x73E504: push    ecx
0x73E505: push    ebx
0x73E506: lea     edx, [esi+6]
0x73E509: push    edx
0x73E50A: push    eax
0x73E50B: mov     eax, [eax+8]
0x73E50E: mov     [esp+7Ch+var_14], ebx
0x73E512: call    eax
0x73E514: mov     eax, [edi+220h]
0x73E51A: add     esp, 50h
0x73E51D: push    1
0x73E51F: lea     ecx, [esp+30h+var_14]
0x73E523: push    ecx
0x73E524: push    ebx
0x73E525: lea     edx, [esi+8]
0x73E528: push    edx
0x73E529: push    eax
0x73E52A: mov     eax, [eax+8]
0x73E52D: mov     [esp+40h+var_14], ebx
0x73E531: call    eax
0x73E533: mov     eax, [edi+220h]
0x73E539: push    1
0x73E53B: lea     ecx, [esp+44h+var_14]
0x73E53F: push    ecx
0x73E540: push    ebx
0x73E541: lea     edx, [esi+0Ah]
0x73E544: push    edx
0x73E545: push    eax
0x73E546: mov     eax, [eax+8]
0x73E549: mov     [esp+54h+var_14], ebx
0x73E54D: call    eax
0x73E54F: mov     ecx, [esi+0Ch]
0x73E552: mov     [esp+54h+var_10], ecx
0x73E556: mov     edx, [esi+10h]
0x73E559: mov     [esp+54h+var_C], edx
0x73E55D: mov     eax, [esi+14h]
0x73E560: mov     [esp+54h+var_8], eax
0x73E564: mov     ecx, [esi+18h]
0x73E567: add     esp, 28h
0x73E56A: mov     [esp+2Ch+var_4], ecx
0x73E56E: push    edi
0x73E56F: lea     ecx, [esp+30h+var_10]
0x73E573: call    sub_709510
0x73E578: add     ebp, 1
0x73E57B: add     [esp+2Ch+arg_0], 1Ch
0x73E580: cmp     ebp, [esp+2Ch+var_1C]
0x73E584: mov     esi, [esp+2Ch+var_18]
0x73E588: jb      loc_73E4A0
0x73E58E: pop     ebx
0x73E58F: mov     edx, [edi]
0x73E591: mov     eax, [esi+14h]
0x73E594: mov     edx, [edx+2Ch]
0x73E597: push    eax
0x73E598: mov     ecx, edi
0x73E59A: call    edx
0x73E59C: pop     edi
0x73E59D: pop     esi
0x73E59E: pop     ebp
0x73E59F: add     esp, 1Ch
0x73E5A2: retn    4
