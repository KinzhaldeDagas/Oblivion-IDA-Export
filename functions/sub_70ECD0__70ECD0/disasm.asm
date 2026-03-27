0x70ECD0: push    ebx
0x70ECD1: push    ebp
0x70ECD2: push    esi
0x70ECD3: push    edi
0x70ECD4: mov     edi, [esp+10h+arg_0]
0x70ECD8: push    edi
0x70ECD9: mov     esi, ecx
0x70ECDB: call    nullsub_returnvVoid_1arg
0x70ECE0: push    edi
0x70ECE1: lea     ecx, [esi+8]
0x70ECE4: call    sub_70F7B0
0x70ECE9: mov     ecx, [esi+4Ch]
0x70ECEC: mov     eax, [edi]
0x70ECEE: mov     edx, [eax+2Ch]
0x70ECF1: push    ecx
0x70ECF2: mov     ecx, edi
0x70ECF4: call    edx
0x70ECF6: mov     eax, [edi+220h]
0x70ECFC: push    1
0x70ECFE: lea     edx, [esp+14h+arg_0]
0x70ED02: push    edx
0x70ED03: mov     ebx, 4
0x70ED08: lea     ecx, [esi+60h]
0x70ED0B: push    ebx
0x70ED0C: push    ecx
0x70ED0D: push    eax
0x70ED0E: mov     eax, [eax+8]
0x70ED11: mov     [esp+24h+arg_0], ebx
0x70ED15: call    eax
0x70ED17: mov     eax, [edi+220h]
0x70ED1D: push    1
0x70ED1F: lea     ecx, [esp+28h+arg_0]
0x70ED23: push    ecx
0x70ED24: push    ebx
0x70ED25: lea     edx, [esi+64h]
0x70ED28: push    edx
0x70ED29: push    eax
0x70ED2A: mov     eax, [eax+8]
0x70ED2D: mov     [esp+38h+arg_0], ebx
0x70ED31: call    eax
0x70ED33: xor     ebp, ebp
0x70ED35: add     esp, 28h
0x70ED38: cmp     [esi+60h], ebp
0x70ED3B: jbe     short loc_70EDBC
0x70ED3D: lea     ecx, [ecx+0]
0x70ED40: mov     edx, [esi+54h]
0x70ED43: mov     eax, [edi+220h]
0x70ED49: push    1
0x70ED4B: lea     ecx, [esp+14h+arg_0]
0x70ED4F: push    ecx
0x70ED50: mov     [esp+18h+arg_0], ebx
0x70ED54: lea     ebx, ds:0[ebp*4]
0x70ED5B: push    4
0x70ED5D: add     edx, ebx
0x70ED5F: push    edx
0x70ED60: push    eax
0x70ED61: mov     eax, [eax+8]
0x70ED64: call    eax
0x70ED66: mov     edx, [esi+58h]
0x70ED69: mov     eax, [edi+220h]
0x70ED6F: push    1
0x70ED71: lea     ecx, [esp+28h+arg_0]
0x70ED75: push    ecx
0x70ED76: push    4
0x70ED78: add     edx, ebx
0x70ED7A: push    edx
0x70ED7B: push    eax
0x70ED7C: mov     eax, [eax+8]
0x70ED7F: mov     [esp+38h+arg_0], 4
0x70ED87: call    eax
0x70ED89: mov     edx, [esi+5Ch]
0x70ED8C: mov     eax, [edi+220h]
0x70ED92: push    1
0x70ED94: lea     ecx, [esp+3Ch+arg_0]
0x70ED98: push    ecx
0x70ED99: push    4
0x70ED9B: add     edx, ebx
0x70ED9D: push    edx
0x70ED9E: push    eax
0x70ED9F: mov     eax, [eax+8]
0x70EDA2: mov     [esp+4Ch+arg_0], 4
0x70EDAA: call    eax
0x70EDAC: add     ebp, 1
0x70EDAF: add     esp, 3Ch
0x70EDB2: cmp     ebp, [esi+60h]
0x70EDB5: mov     ebx, 4
0x70EDBA: jb      short loc_70ED40
0x70EDBC: mov     edx, [esi+60h]
0x70EDBF: mov     eax, [edi+220h]
0x70EDC5: push    1
0x70EDC7: lea     ecx, [esp+14h+arg_0]
0x70EDCB: push    ecx
0x70EDCC: mov     ecx, [esi+5Ch]
0x70EDCF: push    ebx
0x70EDD0: lea     edx, [ecx+edx*4]
0x70EDD3: push    edx
0x70EDD4: push    eax
0x70EDD5: mov     eax, [eax+8]
0x70EDD8: mov     [esp+24h+arg_0], ebx
0x70EDDC: call    eax
0x70EDDE: mov     eax, [edi+220h]
0x70EDE4: mov     edx, [eax+8]
0x70EDE7: push    1
0x70EDE9: lea     ecx, [esp+28h+arg_0]
0x70EDED: push    ecx
0x70EDEE: push    ebx
0x70EDEF: lea     ebp, [esi+6Ch]
0x70EDF2: push    ebp
0x70EDF3: push    eax
0x70EDF4: mov     [esp+38h+arg_0], ebx
0x70EDF8: call    edx
0x70EDFA: mov     ecx, [esi+60h]
0x70EDFD: mov     edx, [esi+5Ch]
0x70EE00: mov     edi, [edi+220h]
0x70EE06: push    1
0x70EE08: lea     eax, [esp+3Ch+arg_0]
0x70EE0C: push    eax
0x70EE0D: mov     eax, [edx+ecx*4]
0x70EE10: imul    eax, [ebp+0]
0x70EE14: mov     ecx, [esi+50h]
0x70EE17: mov     edx, [edi+8]
0x70EE1A: push    eax
0x70EE1B: push    ecx
0x70EE1C: push    edi
0x70EE1D: mov     [esp+4Ch+arg_0], 1
0x70EE25: call    edx
0x70EE27: add     esp, 3Ch
0x70EE2A: pop     edi
0x70EE2B: pop     esi
0x70EE2C: pop     ebp
0x70EE2D: pop     ebx
0x70EE2E: retn    4
