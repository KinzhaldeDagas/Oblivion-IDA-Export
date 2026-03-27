0x8B3180: push    esi
0x8B3181: mov     esi, [esp+4+arg_0]
0x8B3185: push    edi
0x8B3186: push    esi
0x8B3187: mov     edi, ecx
0x8B3189: call    sub_8A0C80
0x8B318E: mov     edi, [edi+4]
0x8B3191: mov     eax, [esi+220h]
0x8B3197: push    1
0x8B3199: lea     ecx, [esp+0Ch+arg_0]
0x8B319D: push    ecx
0x8B319E: push    40h ; '@'
0x8B31A0: lea     edx, [edi+20h]
0x8B31A3: push    edx
0x8B31A4: push    eax
0x8B31A5: mov     eax, [eax+8]
0x8B31A8: mov     [esp+1Ch+arg_0], 40h ; '@'
0x8B31B0: call    eax
0x8B31B2: mov     eax, [esi+220h]
0x8B31B8: push    1
0x8B31BA: lea     ecx, [esp+20h+arg_0]
0x8B31BE: push    ecx
0x8B31BF: push    30h ; '0'
0x8B31C1: lea     edx, [edi+60h]
0x8B31C4: push    edx
0x8B31C5: push    eax
0x8B31C6: mov     eax, [eax+8]
0x8B31C9: mov     [esp+30h+arg_0], 30h ; '0'
0x8B31D1: call    eax
0x8B31D3: mov     eax, [esi+220h]
0x8B31D9: push    1
0x8B31DB: lea     ecx, [esp+34h+arg_0]
0x8B31DF: push    ecx
0x8B31E0: push    4
0x8B31E2: lea     edx, [edi+0Ch]
0x8B31E5: push    edx
0x8B31E6: push    eax
0x8B31E7: mov     eax, [eax+8]
0x8B31EA: mov     [esp+44h+arg_0], 4
0x8B31F2: call    eax
0x8B31F4: mov     eax, [esi+220h]
0x8B31FA: push    1
0x8B31FC: lea     ecx, [esp+48h+arg_0]
0x8B3200: push    ecx
0x8B3201: push    4
0x8B3203: lea     edx, [edi+10h]
0x8B3206: push    edx
0x8B3207: push    eax
0x8B3208: mov     eax, [eax+8]
0x8B320B: mov     [esp+58h+arg_0], 4
0x8B3213: call    eax
0x8B3215: mov     esi, [esi+220h]
0x8B321B: mov     edx, [esi+8]
0x8B321E: add     esp, 50h
0x8B3221: push    1
0x8B3223: lea     ecx, [esp+0Ch+arg_0]
0x8B3227: push    ecx
0x8B3228: push    4
0x8B322A: add     edi, 14h
0x8B322D: push    edi
0x8B322E: push    esi
0x8B322F: mov     [esp+1Ch+arg_0], 4
0x8B3237: call    edx
0x8B3239: add     esp, 14h
0x8B323C: pop     edi
0x8B323D: pop     esi
0x8B323E: retn    4
