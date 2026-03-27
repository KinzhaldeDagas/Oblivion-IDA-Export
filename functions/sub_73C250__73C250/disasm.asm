0x73C250: push    ecx
0x73C251: push    ebx
0x73C252: push    esi
0x73C253: push    edi
0x73C254: mov     edi, [esp+10h+arg_0]
0x73C258: push    edi
0x73C259: mov     esi, ecx
0x73C25B: call    sub_709020
0x73C260: push    edi
0x73C261: lea     ecx, [esi+0DCh]
0x73C267: call    sub_711BF0
0x73C26C: push    edi
0x73C26D: lea     ecx, [esi+100h]
0x73C273: call    sub_7094A0
0x73C278: mov     eax, [edi+220h]
0x73C27E: push    1
0x73C280: lea     ecx, [esp+14h+var_4]
0x73C284: push    ecx
0x73C285: mov     ebx, 4
0x73C28A: push    ebx
0x73C28B: lea     edx, [esi+140h]
0x73C291: push    edx
0x73C292: push    eax
0x73C293: mov     eax, [eax+8]
0x73C296: mov     [esp+24h+var_4], ebx
0x73C29A: call    eax
0x73C29C: mov     eax, [edi+220h]
0x73C2A2: push    1
0x73C2A4: lea     ecx, [esp+28h+var_4]
0x73C2A8: push    ecx
0x73C2A9: push    ebx
0x73C2AA: lea     edx, [esi+144h]
0x73C2B0: push    edx
0x73C2B1: push    eax
0x73C2B2: mov     eax, [eax+8]
0x73C2B5: mov     [esp+38h+var_4], ebx
0x73C2B9: call    eax
0x73C2BB: mov     eax, [edi+220h]
0x73C2C1: push    1
0x73C2C3: lea     ecx, [esp+3Ch+var_4]
0x73C2C7: push    ecx
0x73C2C8: push    ebx
0x73C2C9: lea     edx, [esi+148h]
0x73C2CF: push    edx
0x73C2D0: push    eax
0x73C2D1: mov     eax, [eax+8]
0x73C2D4: mov     [esp+4Ch+var_4], ebx
0x73C2D8: call    eax
0x73C2DA: mov     eax, [edi+220h]
0x73C2E0: push    1
0x73C2E2: lea     ecx, [esp+50h+var_4]
0x73C2E6: push    ecx
0x73C2E7: push    ebx
0x73C2E8: lea     edx, [esi+14Ch]
0x73C2EE: push    edx
0x73C2EF: push    eax
0x73C2F0: mov     eax, [eax+8]
0x73C2F3: mov     [esp+60h+var_4], ebx
0x73C2F7: call    eax
0x73C2F9: mov     edx, [edi]
0x73C2FB: mov     eax, [esi+13Ch]
0x73C301: mov     edx, [edx+2Ch]
0x73C304: add     esp, 50h
0x73C307: push    eax
0x73C308: mov     ecx, edi
0x73C30A: call    edx
0x73C30C: mov     al, [esi+150h]
0x73C312: push    1
0x73C314: lea     ecx, [esp+14h+var_4]
0x73C318: push    ecx
0x73C319: mov     byte ptr [esp+18h+arg_0], al
0x73C31D: mov     eax, [edi+220h]
0x73C323: push    1
0x73C325: lea     edx, [esp+1Ch+arg_0]
0x73C329: push    edx
0x73C32A: push    eax
0x73C32B: mov     eax, [eax+8]
0x73C32E: mov     [esp+24h+var_4], 1
0x73C336: call    eax
0x73C338: add     esp, 14h
0x73C33B: push    edi
0x73C33C: lea     ecx, [esi+154h]
0x73C342: call    sub_716EE0
0x73C347: pop     edi
0x73C348: pop     esi
0x73C349: pop     ebx
0x73C34A: pop     ecx
0x73C34B: retn    4
