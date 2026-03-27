0x7328F0: push    ecx
0x7328F1: push    ebx
0x7328F2: push    esi
0x7328F3: push    edi
0x7328F4: mov     edi, [esp+10h+arg_0]
0x7328F8: push    edi
0x7328F9: mov     esi, ecx
0x7328FB: call    nullsub_returnvVoid_1arg
0x732900: mov     al, [esi+8]
0x732903: push    1
0x732905: lea     ecx, [esp+14h+var_4]
0x732909: push    ecx
0x73290A: mov     byte ptr [esp+18h+arg_0], al
0x73290E: mov     eax, [edi+220h]
0x732914: push    1
0x732916: lea     edx, [esp+1Ch+arg_0]
0x73291A: push    edx
0x73291B: push    eax
0x73291C: mov     eax, [eax+8]
0x73291F: mov     [esp+24h+var_4], 1
0x732927: call    eax
0x732929: mov     eax, [edi+220h]
0x73292F: mov     edx, [eax+8]
0x732932: push    1
0x732934: lea     ecx, [esp+28h+arg_0]
0x732938: push    ecx
0x732939: push    4
0x73293B: lea     ebx, [esi+0Ch]
0x73293E: push    ebx
0x73293F: push    eax
0x732940: mov     [esp+38h+arg_0], 4
0x732948: call    edx
0x73294A: mov     ecx, [ebx]
0x73294C: mov     edx, [esi+14h]
0x73294F: mov     edi, [edi+220h]
0x732955: push    1
0x732957: lea     eax, [esp+3Ch+arg_0]
0x73295B: push    eax
0x73295C: mov     eax, [edi+8]
0x73295F: add     ecx, ecx
0x732961: add     ecx, ecx
0x732963: push    ecx
0x732964: push    edx
0x732965: push    edi
0x732966: mov     [esp+4Ch+arg_0], 1
0x73296E: call    eax
0x732970: add     esp, 3Ch
0x732973: pop     edi
0x732974: pop     esi
0x732975: pop     ebx
0x732976: pop     ecx
0x732977: retn    4
