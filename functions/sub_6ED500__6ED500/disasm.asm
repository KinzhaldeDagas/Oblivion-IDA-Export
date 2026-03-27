0x6ED500: push    esi
0x6ED501: mov     esi, [esp+4+arg_0]
0x6ED505: push    edi
0x6ED506: push    esi
0x6ED507: mov     edi, ecx
0x6ED509: call    j_nullsub_3
0x6ED50E: mov     eax, [esi+220h]
0x6ED514: push    1
0x6ED516: lea     ecx, [esp+0Ch+arg_0]
0x6ED51A: push    ecx
0x6ED51B: push    4
0x6ED51D: lea     edx, [edi+0Ch]
0x6ED520: push    edx
0x6ED521: push    eax
0x6ED522: mov     eax, [eax+8]
0x6ED525: mov     [esp+1Ch+arg_0], 4
0x6ED52D: call    eax
0x6ED52F: mov     eax, [esi+220h]
0x6ED535: push    1
0x6ED537: lea     ecx, [esp+20h+arg_0]
0x6ED53B: push    ecx
0x6ED53C: push    4
0x6ED53E: lea     edx, [edi+10h]
0x6ED541: push    edx
0x6ED542: push    eax
0x6ED543: mov     eax, [eax+8]
0x6ED546: mov     [esp+30h+arg_0], 4
0x6ED54E: call    eax
0x6ED550: mov     edx, [esi]
0x6ED552: mov     eax, [edi+14h]
0x6ED555: mov     edx, [edx+2Ch]
0x6ED558: add     esp, 28h
0x6ED55B: push    eax
0x6ED55C: mov     ecx, esi
0x6ED55E: call    edx
0x6ED560: mov     ecx, [edi+18h]
0x6ED563: mov     eax, [esi]
0x6ED565: mov     edx, [eax+2Ch]
0x6ED568: push    ecx
0x6ED569: mov     ecx, esi
0x6ED56B: call    edx
0x6ED56D: pop     edi
0x6ED56E: pop     esi
0x6ED56F: retn    4
