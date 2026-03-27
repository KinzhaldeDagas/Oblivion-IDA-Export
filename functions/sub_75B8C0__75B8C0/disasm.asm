0x75B8C0: push    ecx
0x75B8C1: push    ebx
0x75B8C2: push    esi
0x75B8C3: push    edi
0x75B8C4: mov     edi, [esp+10h+arg_0]
0x75B8C8: push    edi
0x75B8C9: mov     esi, ecx
0x75B8CB: call    sub_752DC0
0x75B8D0: mov     ecx, edi
0x75B8D2: call    sub_712A20
0x75B8D7: push    edi
0x75B8D8: lea     ecx, [esi+1Ch]
0x75B8DB: call    sub_709430
0x75B8E0: mov     eax, [edi+21Ch]
0x75B8E6: push    1
0x75B8E8: lea     ecx, [esp+14h+arg_0]
0x75B8EC: push    ecx
0x75B8ED: mov     ebx, 4
0x75B8F2: push    ebx
0x75B8F3: lea     edx, [esi+28h]
0x75B8F6: push    edx
0x75B8F7: push    eax
0x75B8F8: mov     eax, [eax+4]
0x75B8FB: mov     [esp+24h+arg_0], ebx
0x75B8FF: call    eax
0x75B901: mov     eax, [edi+21Ch]
0x75B907: push    1
0x75B909: lea     ecx, [esp+28h+arg_0]
0x75B90D: push    ecx
0x75B90E: push    ebx
0x75B90F: lea     edx, [esi+2Ch]
0x75B912: push    edx
0x75B913: push    eax
0x75B914: mov     eax, [eax+4]
0x75B917: mov     [esp+38h+arg_0], ebx
0x75B91B: call    eax
0x75B91D: mov     eax, [edi+21Ch]
0x75B923: push    1
0x75B925: lea     ecx, [esp+3Ch+arg_0]
0x75B929: push    ecx
0x75B92A: push    ebx
0x75B92B: lea     edx, [esp+44h+var_4]
0x75B92F: push    edx
0x75B930: push    eax
0x75B931: mov     eax, [eax+4]
0x75B934: mov     [esp+4Ch+arg_0], ebx
0x75B938: call    eax
0x75B93A: mov     ecx, [esp+4Ch+var_4]
0x75B93E: push    1
0x75B940: lea     edx, [esp+50h+arg_0]
0x75B944: push    edx
0x75B945: mov     [esi+30h], ecx
0x75B948: mov     edi, [edi+21Ch]
0x75B94E: mov     ecx, [edi+4]
0x75B951: push    ebx
0x75B952: lea     eax, [esp+58h+var_4]
0x75B956: push    eax
0x75B957: push    edi
0x75B958: mov     [esp+60h+arg_0], ebx
0x75B95C: call    ecx
0x75B95E: mov     edx, [esp+60h+var_4]
0x75B962: add     esp, 50h
0x75B965: pop     edi
0x75B966: mov     [esi+34h], edx
0x75B969: pop     esi
0x75B96A: pop     ebx
0x75B96B: pop     ecx
0x75B96C: retn    4
