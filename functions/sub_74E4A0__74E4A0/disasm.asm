0x74E4A0: push    ecx
0x74E4A1: push    ebx
0x74E4A2: push    esi
0x74E4A3: push    edi
0x74E4A4: mov     edi, [esp+10h+arg_0]
0x74E4A8: push    edi
0x74E4A9: mov     esi, ecx
0x74E4AB: call    sub_752E40
0x74E4B0: mov     eax, [edi+220h]
0x74E4B6: push    1
0x74E4B8: lea     ecx, [esp+14h+arg_0]
0x74E4BC: push    ecx
0x74E4BD: mov     ebx, 4
0x74E4C2: push    ebx
0x74E4C3: lea     edx, [esi+18h]
0x74E4C6: push    edx
0x74E4C7: push    eax
0x74E4C8: mov     eax, [eax+8]
0x74E4CB: mov     [esp+24h+arg_0], ebx
0x74E4CF: call    eax
0x74E4D1: mov     eax, [edi+220h]
0x74E4D7: push    1
0x74E4D9: lea     ecx, [esp+28h+arg_0]
0x74E4DD: push    ecx
0x74E4DE: push    ebx
0x74E4DF: lea     edx, [esi+1Ch]
0x74E4E2: push    edx
0x74E4E3: push    eax
0x74E4E4: mov     eax, [eax+8]
0x74E4E7: mov     [esp+38h+arg_0], ebx
0x74E4EB: call    eax
0x74E4ED: mov     eax, [edi+220h]
0x74E4F3: push    1
0x74E4F5: lea     ecx, [esp+3Ch+arg_0]
0x74E4F9: push    ecx
0x74E4FA: push    ebx
0x74E4FB: lea     edx, [esi+20h]
0x74E4FE: push    edx
0x74E4FF: push    eax
0x74E500: mov     eax, [eax+8]
0x74E503: mov     [esp+4Ch+arg_0], ebx
0x74E507: call    eax
0x74E509: mov     eax, [edi+220h]
0x74E50F: push    1
0x74E511: lea     ecx, [esp+50h+arg_0]
0x74E515: push    ecx
0x74E516: push    ebx
0x74E517: lea     edx, [esi+24h]
0x74E51A: push    edx
0x74E51B: push    eax
0x74E51C: mov     eax, [eax+8]
0x74E51F: mov     [esp+60h+arg_0], ebx
0x74E523: call    eax
0x74E525: mov     cl, [esi+35h]
0x74E528: mov     eax, [edi+220h]
0x74E52E: add     esp, 50h
0x74E531: push    1
0x74E533: lea     edx, [esp+14h+var_4]
0x74E537: push    edx
0x74E538: mov     byte ptr [esp+18h+arg_0], cl
0x74E53C: mov     edx, [eax+8]
0x74E53F: push    1
0x74E541: lea     ecx, [esp+1Ch+arg_0]
0x74E545: push    ecx
0x74E546: push    eax
0x74E547: mov     [esp+24h+var_4], 1
0x74E54F: call    edx
0x74E551: mov     al, [esi+34h]
0x74E554: push    1
0x74E556: lea     ecx, [esp+28h+var_4]
0x74E55A: push    ecx
0x74E55B: mov     byte ptr [esp+2Ch+arg_0], al
0x74E55F: mov     eax, [edi+220h]
0x74E565: push    1
0x74E567: lea     edx, [esp+30h+arg_0]
0x74E56B: push    edx
0x74E56C: push    eax
0x74E56D: mov     eax, [eax+8]
0x74E570: mov     [esp+38h+var_4], 1
0x74E578: call    eax
0x74E57A: add     esp, 28h
0x74E57D: push    edi
0x74E57E: lea     ecx, [esi+28h]
0x74E581: call    sub_7094A0
0x74E586: pop     edi
0x74E587: pop     esi
0x74E588: pop     ebx
0x74E589: pop     ecx
0x74E58A: retn    4
