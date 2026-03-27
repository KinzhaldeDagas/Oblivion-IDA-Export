0x7056C0: push    ebx
0x7056C1: push    esi
0x7056C2: push    edi
0x7056C3: mov     edi, [esp+0Ch+arg_0]
0x7056C7: push    edi
0x7056C8: mov     esi, ecx
0x7056CA: call    sub_7054D0
0x7056CF: mov     eax, [edi+220h]
0x7056D5: push    1
0x7056D7: lea     ecx, [esp+10h+arg_0]
0x7056DB: push    ecx
0x7056DC: mov     ebx, 4
0x7056E1: push    ebx
0x7056E2: lea     edx, [esi+10h]
0x7056E5: push    edx
0x7056E6: push    eax
0x7056E7: mov     eax, [eax+8]
0x7056EA: mov     [esp+20h+arg_0], ebx
0x7056EE: call    eax
0x7056F0: mov     eax, [edi+220h]
0x7056F6: push    1
0x7056F8: lea     ecx, [esp+24h+arg_0]
0x7056FC: push    ecx
0x7056FD: push    ebx
0x7056FE: lea     edx, [esi+14h]
0x705701: push    edx
0x705702: push    eax
0x705703: mov     eax, [eax+8]
0x705706: mov     [esp+34h+arg_0], ebx
0x70570A: call    eax
0x70570C: mov     eax, [edi+220h]
0x705712: push    1
0x705714: lea     ecx, [esp+38h+arg_0]
0x705718: push    ecx
0x705719: push    ebx
0x70571A: lea     edx, [esi+18h]
0x70571D: push    edx
0x70571E: push    eax
0x70571F: mov     eax, [eax+8]
0x705722: mov     [esp+48h+arg_0], ebx
0x705726: call    eax
0x705728: mov     eax, [edi+220h]
0x70572E: push    1
0x705730: lea     ecx, [esp+4Ch+arg_0]
0x705734: push    ecx
0x705735: push    ebx
0x705736: lea     edx, [esi+1Ch]
0x705739: push    edx
0x70573A: push    eax
0x70573B: mov     eax, [eax+8]
0x70573E: mov     [esp+5Ch+arg_0], ebx
0x705742: call    eax
0x705744: mov     eax, [edi+220h]
0x70574A: add     esp, 50h
0x70574D: push    1
0x70574F: lea     ecx, [esp+10h+arg_0]
0x705753: push    ecx
0x705754: push    ebx
0x705755: lea     edx, [esi+20h]
0x705758: push    edx
0x705759: push    eax
0x70575A: mov     eax, [eax+8]
0x70575D: mov     [esp+20h+arg_0], ebx
0x705761: call    eax
0x705763: mov     edi, [edi+220h]
0x705769: mov     edx, [edi+8]
0x70576C: push    1
0x70576E: lea     ecx, [esp+24h+arg_0]
0x705772: push    ecx
0x705773: push    ebx
0x705774: add     esi, 24h ; '$'
0x705777: push    esi
0x705778: push    edi
0x705779: mov     [esp+34h+arg_0], ebx
0x70577D: call    edx
0x70577F: add     esp, 28h
0x705782: pop     edi
0x705783: pop     esi
0x705784: pop     ebx
0x705785: retn    4
