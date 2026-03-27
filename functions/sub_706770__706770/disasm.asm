0x706770: sub     esp, 8
0x706773: push    esi
0x706774: mov     esi, [esp+0Ch+arg_0]
0x706778: push    edi
0x706779: push    esi
0x70677A: mov     edi, ecx
0x70677C: call    sub_700A80
0x706781: mov     eax, [esi+220h]
0x706787: mov     edx, [eax+8]
0x70678A: push    1
0x70678C: lea     ecx, [esp+14h+arg_0]
0x706790: push    ecx
0x706791: push    2
0x706793: add     edi, 18h
0x706796: push    edi
0x706797: push    eax
0x706798: mov     [esp+24h+arg_0], 2
0x7067A0: call    edx
0x7067A2: add     esp, 14h
0x7067A5: cmp     dword ptr [esi+0D8h], 14010002h
0x7067AF: jnb     short loc_70680C
0x7067B1: movzx   eax, word ptr [edi]
0x7067B4: mov     ecx, eax
0x7067B6: shr     ecx, 4
0x7067B9: push    1
0x7067BB: and     ecx, 3
0x7067BE: shr     eax, 3
0x7067C1: lea     edx, [esp+14h+arg_0]
0x7067C5: push    edx
0x7067C6: mov     [esp+18h+var_8], ecx
0x7067CA: and     eax, 1
0x7067CD: mov     edi, 4
0x7067D2: mov     [esp+18h+var_4], eax
0x7067D6: mov     eax, [esi+220h]
0x7067DC: mov     edx, [eax+8]
0x7067DF: push    edi
0x7067E0: lea     ecx, [esp+1Ch+var_8]
0x7067E4: push    ecx
0x7067E5: push    eax
0x7067E6: mov     [esp+24h+arg_0], edi
0x7067EA: call    edx
0x7067EC: mov     esi, [esi+220h]
0x7067F2: mov     edx, [esi+8]
0x7067F5: push    1
0x7067F7: lea     eax, [esp+28h+arg_0]
0x7067FB: push    eax
0x7067FC: push    edi
0x7067FD: lea     ecx, [esp+30h+var_4]
0x706801: push    ecx
0x706802: push    esi
0x706803: mov     [esp+38h+arg_0], edi
0x706807: call    edx
0x706809: add     esp, 28h
0x70680C: pop     edi
0x70680D: pop     esi
0x70680E: add     esp, 8
0x706811: retn    4
