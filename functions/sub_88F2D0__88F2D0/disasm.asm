0x88F2D0: push    ecx
0x88F2D1: push    ebx
0x88F2D2: push    esi
0x88F2D3: mov     esi, [esp+0Ch+arg_0]
0x88F2D7: push    edi
0x88F2D8: push    esi
0x88F2D9: mov     edi, ecx
0x88F2DB: call    sub_89E940
0x88F2E0: mov     eax, [esi+21Ch]
0x88F2E6: push    1
0x88F2E8: lea     ecx, [esp+14h+arg_0]
0x88F2EC: push    ecx
0x88F2ED: mov     ebx, 4
0x88F2F2: push    ebx
0x88F2F3: lea     edx, [edi+14h]
0x88F2F6: push    edx
0x88F2F7: push    eax
0x88F2F8: mov     eax, [eax+4]
0x88F2FB: mov     [esp+24h+arg_0], ebx
0x88F2FF: call    eax
0x88F301: mov     eax, [esi+21Ch]
0x88F307: mov     edx, [eax+4]
0x88F30A: push    1
0x88F30C: lea     ecx, [esp+28h+arg_0]
0x88F310: push    ecx
0x88F311: push    ebx
0x88F312: add     edi, 18h
0x88F315: push    edi
0x88F316: push    eax
0x88F317: mov     [esp+38h+arg_0], ebx
0x88F31B: call    edx
0x88F31D: add     esp, 28h
0x88F320: cmp     dword ptr [esi+4], 8
0x88F324: jnb     short loc_88F363
0x88F326: mov     eax, [esi+21Ch]
0x88F32C: push    1
0x88F32E: lea     ecx, [esp+14h+arg_0]
0x88F332: push    ecx
0x88F333: push    ebx
0x88F334: lea     edx, [esp+1Ch+var_4]
0x88F338: push    edx
0x88F339: push    eax
0x88F33A: mov     eax, [eax+4]
0x88F33D: mov     [esp+24h+arg_0], ebx
0x88F341: call    eax
0x88F343: mov     esi, [esi+21Ch]
0x88F349: mov     eax, [esi+4]
0x88F34C: push    1
0x88F34E: lea     ecx, [esp+28h+arg_0]
0x88F352: push    ecx
0x88F353: push    ebx
0x88F354: lea     edx, [esp+30h+var_4]
0x88F358: push    edx
0x88F359: push    esi
0x88F35A: mov     [esp+38h+arg_0], ebx
0x88F35E: call    eax
0x88F360: add     esp, 28h
0x88F363: pop     edi
0x88F364: pop     esi
0x88F365: pop     ebx
0x88F366: pop     ecx
0x88F367: retn    4
