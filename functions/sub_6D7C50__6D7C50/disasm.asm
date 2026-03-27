0x6D7C50: push    ecx
0x6D7C51: push    ebx
0x6D7C52: push    esi
0x6D7C53: push    edi
0x6D7C54: mov     edi, [esp+10h+arg_0]
0x6D7C58: push    edi
0x6D7C59: mov     esi, ecx
0x6D7C5B: call    nullsub_returnvVoid_1arg
0x6D7C60: mov     eax, [esi+10h]
0x6D7C63: push    1
0x6D7C65: lea     ecx, [esp+14h+var_4]
0x6D7C69: push    ecx
0x6D7C6A: lea     ebx, [esi+10h]
0x6D7C6D: mov     [esp+18h+arg_0], eax
0x6D7C71: mov     eax, [edi+220h]
0x6D7C77: push    4
0x6D7C79: lea     edx, [esp+1Ch+arg_0]
0x6D7C7D: push    edx
0x6D7C7E: push    eax
0x6D7C7F: mov     eax, [eax+8]
0x6D7C82: mov     [esp+24h+var_4], 4
0x6D7C8A: call    eax
0x6D7C8C: mov     ecx, [esp+24h+arg_0]
0x6D7C90: add     esp, 14h
0x6D7C93: test    ecx, ecx
0x6D7C95: jbe     short loc_6D7CBA
0x6D7C97: mov     eax, [edi+220h]
0x6D7C9D: push    1
0x6D7C9F: lea     edx, [esp+14h+var_4]
0x6D7CA3: push    edx
0x6D7CA4: mov     edx, [eax+8]
0x6D7CA7: push    ecx
0x6D7CA8: mov     ecx, [esi+8]
0x6D7CAB: push    ecx
0x6D7CAC: push    eax
0x6D7CAD: mov     [esp+24h+var_4], 1
0x6D7CB5: call    edx
0x6D7CB7: add     esp, 14h
0x6D7CBA: mov     edi, [edi+220h]
0x6D7CC0: mov     ecx, [edi+8]
0x6D7CC3: push    1
0x6D7CC5: lea     eax, [esp+14h+var_4]
0x6D7CC9: push    eax
0x6D7CCA: push    4
0x6D7CCC: push    ebx
0x6D7CCD: push    edi
0x6D7CCE: mov     [esp+24h+var_4], 4
0x6D7CD6: call    ecx
0x6D7CD8: add     esp, 14h
0x6D7CDB: pop     edi
0x6D7CDC: pop     esi
0x6D7CDD: pop     ebx
0x6D7CDE: pop     ecx
0x6D7CDF: retn    4
