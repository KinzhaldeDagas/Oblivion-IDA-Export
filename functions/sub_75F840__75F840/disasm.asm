0x75F840: sub     esp, 0Ch
0x75F843: push    ebx
0x75F844: push    esi
0x75F845: mov     esi, [esp+14h+arg_0]
0x75F849: push    edi
0x75F84A: push    esi
0x75F84B: mov     edi, ecx
0x75F84D: call    sub_709430
0x75F852: cmp     dword ptr [esi+0D8h], 0A030005h
0x75F85C: jnb     short loc_75F868
0x75F85E: push    esi
0x75F85F: lea     ecx, [esp+1Ch+var_C]
0x75F863: call    sub_709430
0x75F868: mov     eax, [esi+21Ch]
0x75F86E: push    1
0x75F870: lea     ecx, [esp+1Ch+arg_0]
0x75F874: push    ecx
0x75F875: mov     ebx, 4
0x75F87A: push    ebx
0x75F87B: lea     edx, [edi+0Ch]
0x75F87E: push    edx
0x75F87F: push    eax
0x75F880: mov     eax, [eax+4]
0x75F883: mov     [esp+2Ch+arg_0], ebx
0x75F887: call    eax
0x75F889: mov     eax, [esi+21Ch]
0x75F88F: push    1
0x75F891: lea     ecx, [esp+30h+arg_0]
0x75F895: push    ecx
0x75F896: push    ebx
0x75F897: lea     edx, [edi+10h]
0x75F89A: push    edx
0x75F89B: push    eax
0x75F89C: mov     eax, [eax+4]
0x75F89F: mov     [esp+40h+arg_0], ebx
0x75F8A3: call    eax
0x75F8A5: mov     eax, [esi+21Ch]
0x75F8AB: push    1
0x75F8AD: lea     ecx, [esp+44h+arg_0]
0x75F8B1: push    ecx
0x75F8B2: push    ebx
0x75F8B3: lea     edx, [edi+14h]
0x75F8B6: push    edx
0x75F8B7: push    eax
0x75F8B8: mov     eax, [eax+4]
0x75F8BB: mov     [esp+54h+arg_0], ebx
0x75F8BF: call    eax
0x75F8C1: mov     eax, [esi+21Ch]
0x75F8C7: push    1
0x75F8C9: lea     ecx, [esp+58h+arg_0]
0x75F8CD: push    ecx
0x75F8CE: mov     ebx, 2
0x75F8D3: push    ebx
0x75F8D4: lea     edx, [edi+18h]
0x75F8D7: push    edx
0x75F8D8: push    eax
0x75F8D9: mov     eax, [eax+4]
0x75F8DC: mov     [esp+68h+arg_0], ebx
0x75F8E0: call    eax
0x75F8E2: mov     esi, [esi+21Ch]
0x75F8E8: mov     edx, [esi+4]
0x75F8EB: add     esp, 50h
0x75F8EE: push    1
0x75F8F0: lea     ecx, [esp+1Ch+arg_0]
0x75F8F4: push    ecx
0x75F8F5: push    ebx
0x75F8F6: add     edi, 1Ah
0x75F8F9: push    edi
0x75F8FA: push    esi
0x75F8FB: mov     [esp+2Ch+arg_0], ebx
0x75F8FF: call    edx
0x75F901: add     esp, 14h
0x75F904: pop     edi
0x75F905: pop     esi
0x75F906: pop     ebx
0x75F907: add     esp, 0Ch
0x75F90A: retn    4
