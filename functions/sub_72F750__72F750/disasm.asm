0x72F750: sub     esp, 10h
0x72F753: push    ebx
0x72F754: push    ebp
0x72F755: push    esi
0x72F756: mov     esi, [esp+1Ch+arg_0]
0x72F75A: push    edi
0x72F75B: mov     ebp, ecx
0x72F75D: push    esi
0x72F75E: mov     [esp+24h+var_4], ebp
0x72F762: call    nullsub_returnvVoid_1arg
0x72F767: push    esi
0x72F768: lea     ecx, [ebp+0Ch]
0x72F76B: call    sub_718BB0
0x72F770: mov     eax, [esi+220h]
0x72F776: mov     edx, [eax+8]
0x72F779: push    1
0x72F77B: lea     ecx, [esp+24h+var_C]
0x72F77F: push    ecx
0x72F780: push    4
0x72F782: lea     edi, [ebp+40h]
0x72F785: push    edi
0x72F786: push    eax
0x72F787: mov     [esp+34h+var_C], 4
0x72F78F: call    edx
0x72F791: mov     eax, [ebp+44h]
0x72F794: xor     ebx, ebx
0x72F796: cmp     [eax+44h], ebx
0x72F799: mov     eax, [esi+220h]
0x72F79F: push    1
0x72F7A1: setnz   cl
0x72F7A4: lea     edx, [esp+38h+var_C]
0x72F7A8: push    edx
0x72F7A9: mov     byte ptr [esp+3Ch+arg_0], cl
0x72F7AD: mov     edx, [eax+8]
0x72F7B0: push    1
0x72F7B2: lea     ecx, [esp+40h+arg_0]
0x72F7B6: push    ecx
0x72F7B7: push    eax
0x72F7B8: mov     [esp+48h+var_C], 1
0x72F7C0: call    edx
0x72F7C2: add     esp, 28h
0x72F7C5: cmp     [edi], ebx
0x72F7C7: mov     [esp+20h+var_C], ebx
0x72F7CB: jbe     loc_72F890
0x72F7D1: mov     [esp+20h+var_10], ebx
0x72F7D5: mov     edi, [ebp+44h]
0x72F7D8: add     edi, [esp+20h+var_10]
0x72F7DC: push    esi
0x72F7DD: mov     ecx, edi
0x72F7DF: call    sub_718BB0
0x72F7E4: push    esi
0x72F7E5: lea     ecx, [edi+34h]
0x72F7E8: call    sub_716EE0
0x72F7ED: mov     eax, [esi+220h]
0x72F7F3: push    1
0x72F7F5: lea     edx, [esp+24h+var_8]
0x72F7F9: push    edx
0x72F7FA: lea     ecx, [edi+48h]
0x72F7FD: push    2
0x72F7FF: push    ecx
0x72F800: push    eax
0x72F801: mov     eax, [eax+8]
0x72F804: mov     [esp+34h+var_8], 2
0x72F80C: call    eax
0x72F80E: add     esp, 14h
0x72F811: cmp     byte ptr [esp+20h+arg_0], 0
0x72F816: jz      short loc_72F877
0x72F818: xor     ebx, ebx
0x72F81A: cmp     [edi+48h], bx
0x72F81E: jbe     short loc_72F877
0x72F820: mov     ecx, [edi+44h]
0x72F823: mov     eax, [esi+220h]
0x72F829: push    1
0x72F82B: lea     edx, [esp+24h+var_8]
0x72F82F: push    edx
0x72F830: lea     ebp, [ecx+ebx*8]
0x72F833: push    2
0x72F835: push    ebp
0x72F836: push    eax
0x72F837: mov     eax, [eax+8]
0x72F83A: mov     [esp+34h+var_8], 2
0x72F842: call    eax
0x72F844: mov     eax, [esi+220h]
0x72F84A: mov     edx, [eax+8]
0x72F84D: push    1
0x72F84F: lea     ecx, [esp+38h+var_8]
0x72F853: push    ecx
0x72F854: push    4
0x72F856: add     ebp, 4
0x72F859: push    ebp
0x72F85A: push    eax
0x72F85B: mov     [esp+48h+var_8], 4
0x72F863: call    edx
0x72F865: movzx   eax, word ptr [edi+48h]
0x72F869: add     ebx, 1
0x72F86C: add     esp, 28h
0x72F86F: cmp     ebx, eax
0x72F871: jb      short loc_72F820
0x72F873: mov     ebp, [esp+20h+var_4]
0x72F877: mov     eax, [esp+20h+var_C]
0x72F87B: add     [esp+20h+var_10], 4Ch ; 'L'
0x72F880: add     eax, 1
0x72F883: cmp     eax, [ebp+40h]
0x72F886: mov     [esp+20h+var_C], eax
0x72F88A: jb      loc_72F7D5
0x72F890: pop     edi
0x72F891: pop     esi
0x72F892: pop     ebp
0x72F893: pop     ebx
0x72F894: add     esp, 10h
0x72F897: retn    4
