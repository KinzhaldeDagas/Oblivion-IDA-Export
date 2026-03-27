0x6C8C90: push    ecx
0x6C8C91: push    ebx
0x6C8C92: push    ebp
0x6C8C93: push    esi
0x6C8C94: mov     esi, [esp+10h+arg_0]
0x6C8C98: push    edi
0x6C8C99: push    esi
0x6C8C9A: mov     edi, ecx
0x6C8C9C: call    nullsub_returnvVoid_1arg
0x6C8CA1: mov     eax, [edi+8]
0x6C8CA4: push    eax
0x6C8CA5: mov     ecx, esi
0x6C8CA7: call    sub_713720
0x6C8CAC: mov     eax, [esi+220h]
0x6C8CB2: mov     edx, [eax+8]
0x6C8CB5: push    1
0x6C8CB7: lea     ecx, [esp+18h+arg_0]
0x6C8CBB: push    ecx
0x6C8CBC: mov     ebx, 4
0x6C8CC1: push    ebx
0x6C8CC2: lea     ebp, [edi+0Ch]
0x6C8CC5: push    ebp
0x6C8CC6: push    eax
0x6C8CC7: mov     [esp+28h+arg_0], ebx
0x6C8CCB: call    edx
0x6C8CCD: mov     eax, [esi+220h]
0x6C8CD3: push    1
0x6C8CD5: lea     ecx, [esp+2Ch+arg_0]
0x6C8CD9: push    ecx
0x6C8CDA: push    ebx
0x6C8CDB: lea     edx, [edi+10h]
0x6C8CDE: push    edx
0x6C8CDF: push    eax
0x6C8CE0: mov     eax, [eax+8]
0x6C8CE3: mov     [esp+3Ch+arg_0], ebx
0x6C8CE7: call    eax
0x6C8CE9: add     esp, 28h
0x6C8CEC: cmp     dword ptr [ebp+0], 0
0x6C8CF0: mov     [esp+14h+arg_0], 0
0x6C8CF8: jbe     short loc_6C8D66
0x6C8CFA: xor     ebp, ebp
0x6C8CFC: lea     esp, [esp+0]
0x6C8D00: mov     ebx, [edi+14h]
0x6C8D03: mov     edx, [esi]
0x6C8D05: mov     eax, [ebx+ebp]
0x6C8D08: mov     edx, [edx+2Ch]
0x6C8D0B: add     ebx, ebp
0x6C8D0D: push    eax
0x6C8D0E: mov     ecx, esi
0x6C8D10: call    edx
0x6C8D12: mov     ecx, [ebx+4]
0x6C8D15: mov     eax, [esi]
0x6C8D17: mov     edx, [eax+2Ch]
0x6C8D1A: push    ecx
0x6C8D1B: mov     ecx, esi
0x6C8D1D: call    edx
0x6C8D1F: mov     eax, [esi+220h]
0x6C8D25: mov     edx, [eax+8]
0x6C8D28: push    1
0x6C8D2A: lea     ecx, [esp+18h+var_4]
0x6C8D2E: push    ecx
0x6C8D2F: push    1
0x6C8D31: add     ebx, 0Dh
0x6C8D34: push    ebx
0x6C8D35: push    eax
0x6C8D36: mov     [esp+28h+var_4], 1
0x6C8D3E: call    edx
0x6C8D40: mov     ecx, [edi+18h]
0x6C8D43: add     esp, 14h
0x6C8D46: push    esi
0x6C8D47: add     ecx, ebp
0x6C8D49: call    sub_6C8920
0x6C8D4E: mov     eax, [esp+14h+arg_0]
0x6C8D52: add     eax, 1
0x6C8D55: add     ebp, 10h
0x6C8D58: cmp     eax, [edi+0Ch]
0x6C8D5B: mov     [esp+14h+arg_0], eax
0x6C8D5F: jb      short loc_6C8D00
0x6C8D61: mov     ebx, 4
0x6C8D66: mov     eax, [esi+220h]
0x6C8D6C: push    1
0x6C8D6E: lea     ecx, [esp+18h+arg_0]
0x6C8D72: push    ecx
0x6C8D73: push    ebx
0x6C8D74: lea     edx, [edi+1Ch]
0x6C8D77: push    edx
0x6C8D78: push    eax
0x6C8D79: mov     eax, [eax+8]
0x6C8D7C: mov     [esp+28h+arg_0], ebx
0x6C8D80: call    eax
0x6C8D82: mov     edx, [esi]
0x6C8D84: mov     eax, [edi+20h]
0x6C8D87: mov     edx, [edx+2Ch]
0x6C8D8A: add     esp, 14h
0x6C8D8D: push    eax
0x6C8D8E: mov     ecx, esi
0x6C8D90: call    edx
0x6C8D92: mov     eax, [esi+220h]
0x6C8D98: push    1
0x6C8D9A: lea     ecx, [esp+18h+arg_0]
0x6C8D9E: push    ecx
0x6C8D9F: push    ebx
0x6C8DA0: lea     edx, [edi+24h]
0x6C8DA3: push    edx
0x6C8DA4: push    eax
0x6C8DA5: mov     eax, [eax+8]
0x6C8DA8: mov     [esp+28h+arg_0], ebx
0x6C8DAC: call    eax
0x6C8DAE: mov     eax, [esi+220h]
0x6C8DB4: push    1
0x6C8DB6: lea     ecx, [esp+2Ch+arg_0]
0x6C8DBA: push    ecx
0x6C8DBB: push    ebx
0x6C8DBC: lea     edx, [edi+28h]
0x6C8DBF: push    edx
0x6C8DC0: push    eax
0x6C8DC1: mov     eax, [eax+8]
0x6C8DC4: mov     [esp+3Ch+arg_0], ebx
0x6C8DC8: call    eax
0x6C8DCA: mov     eax, [esi+220h]
0x6C8DD0: push    1
0x6C8DD2: lea     ecx, [esp+40h+arg_0]
0x6C8DD6: push    ecx
0x6C8DD7: push    ebx
0x6C8DD8: lea     edx, [edi+2Ch]
0x6C8DDB: push    edx
0x6C8DDC: push    eax
0x6C8DDD: mov     eax, [eax+8]
0x6C8DE0: mov     [esp+50h+arg_0], ebx
0x6C8DE4: call    eax
0x6C8DE6: mov     eax, [esi+220h]
0x6C8DEC: push    1
0x6C8DEE: lea     ecx, [esp+54h+arg_0]
0x6C8DF2: push    ecx
0x6C8DF3: push    ebx
0x6C8DF4: lea     edx, [edi+30h]
0x6C8DF7: push    edx
0x6C8DF8: push    eax
0x6C8DF9: mov     eax, [eax+8]
0x6C8DFC: mov     [esp+64h+arg_0], ebx
0x6C8E00: call    eax
0x6C8E02: mov     edx, [esi]
0x6C8E04: mov     eax, [edi+40h]
0x6C8E07: mov     edx, [edx+2Ch]
0x6C8E0A: add     esp, 50h
0x6C8E0D: push    eax
0x6C8E0E: mov     ecx, esi
0x6C8E10: call    edx
0x6C8E12: mov     eax, [edi+5Ch]
0x6C8E15: push    eax
0x6C8E16: mov     ecx, esi
0x6C8E18: call    sub_713720
0x6C8E1D: mov     edx, [esi]
0x6C8E1F: mov     eax, [edi+64h]
0x6C8E22: mov     edx, [edx+2Ch]
0x6C8E25: push    eax
0x6C8E26: mov     ecx, esi
0x6C8E28: call    edx
0x6C8E2A: pop     edi
0x6C8E2B: pop     esi
0x6C8E2C: pop     ebp
0x6C8E2D: pop     ebx
0x6C8E2E: pop     ecx
0x6C8E2F: retn    4
