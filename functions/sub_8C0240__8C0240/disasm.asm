0x8C0240: push    ebx
0x8C0241: push    esi
0x8C0242: mov     esi, [esp+8+arg_0]
0x8C0246: push    edi
0x8C0247: push    esi
0x8C0248: mov     edi, ecx
0x8C024A: call    sub_8A0C80
0x8C024F: mov     edi, [edi+4]
0x8C0252: mov     eax, [esi+220h]
0x8C0258: push    1
0x8C025A: lea     ecx, [esp+10h+arg_0]
0x8C025E: push    ecx
0x8C025F: push    20h ; ' '
0x8C0261: lea     edx, [edi+10h]
0x8C0264: push    edx
0x8C0265: push    eax
0x8C0266: mov     eax, [eax+8]
0x8C0269: mov     [esp+20h+arg_0], 20h ; ' '
0x8C0271: call    eax
0x8C0273: mov     eax, [esi+220h]
0x8C0279: push    1
0x8C027B: lea     ecx, [esp+24h+arg_0]
0x8C027F: push    ecx
0x8C0280: push    60h ; '`'
0x8C0282: lea     edx, [edi+30h]
0x8C0285: push    edx
0x8C0286: push    eax
0x8C0287: mov     eax, [eax+8]
0x8C028A: mov     [esp+34h+arg_0], 60h ; '`'
0x8C0292: call    eax
0x8C0294: mov     eax, [esi+220h]
0x8C029A: push    1
0x8C029C: lea     ecx, [esp+38h+arg_0]
0x8C02A0: push    ecx
0x8C02A1: mov     ebx, 4
0x8C02A6: push    ebx
0x8C02A7: lea     edx, [edi+90h]
0x8C02AD: push    edx
0x8C02AE: push    eax
0x8C02AF: mov     eax, [eax+8]
0x8C02B2: mov     [esp+48h+arg_0], ebx
0x8C02B6: call    eax
0x8C02B8: mov     eax, [esi+220h]
0x8C02BE: push    1
0x8C02C0: lea     ecx, [esp+4Ch+arg_0]
0x8C02C4: push    ecx
0x8C02C5: push    ebx
0x8C02C6: lea     edx, [edi+94h]
0x8C02CC: push    edx
0x8C02CD: push    eax
0x8C02CE: mov     eax, [eax+8]
0x8C02D1: mov     [esp+5Ch+arg_0], ebx
0x8C02D5: call    eax
0x8C02D7: mov     eax, [esi+220h]
0x8C02DD: add     esp, 50h
0x8C02E0: push    1
0x8C02E2: lea     ecx, [esp+10h+arg_0]
0x8C02E6: push    ecx
0x8C02E7: push    ebx
0x8C02E8: lea     edx, [edi+98h]
0x8C02EE: push    edx
0x8C02EF: push    eax
0x8C02F0: mov     eax, [eax+8]
0x8C02F3: mov     [esp+20h+arg_0], ebx
0x8C02F7: call    eax
0x8C02F9: mov     esi, [esi+220h]
0x8C02FF: mov     edx, [esi+8]
0x8C0302: push    1
0x8C0304: lea     ecx, [esp+24h+arg_0]
0x8C0308: push    ecx
0x8C0309: push    ebx
0x8C030A: add     edi, 9Ch ; 'œ'
0x8C0310: push    edi
0x8C0311: push    esi
0x8C0312: mov     [esp+34h+arg_0], ebx
0x8C0316: call    edx
0x8C0318: add     esp, 28h
0x8C031B: pop     edi
0x8C031C: pop     esi
0x8C031D: pop     ebx
0x8C031E: retn    4
