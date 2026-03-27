0x75E9E0: push    ecx
0x75E9E1: push    esi
0x75E9E2: push    edi
0x75E9E3: mov     edi, [esp+0Ch+arg_0]
0x75E9E7: push    edi
0x75E9E8: mov     esi, ecx
0x75E9EA: call    sub_752E40
0x75E9EF: mov     ecx, [esi+18h]
0x75E9F2: mov     eax, [edi]
0x75E9F4: mov     edx, [eax+2Ch]
0x75E9F7: push    ecx
0x75E9F8: mov     ecx, edi
0x75E9FA: call    edx
0x75E9FC: mov     eax, [edi+220h]
0x75EA02: push    1
0x75EA04: lea     ecx, [esp+10h+var_4]
0x75EA08: push    ecx
0x75EA09: push    4
0x75EA0B: lea     edx, [esi+1Ch]
0x75EA0E: push    edx
0x75EA0F: push    eax
0x75EA10: mov     eax, [eax+8]
0x75EA13: mov     [esp+20h+var_4], 4
0x75EA1B: call    eax
0x75EA1D: mov     eax, [edi+220h]
0x75EA23: push    1
0x75EA25: lea     ecx, [esp+24h+var_4]
0x75EA29: push    ecx
0x75EA2A: push    4
0x75EA2C: lea     edx, [esi+20h]
0x75EA2F: push    edx
0x75EA30: push    eax
0x75EA31: mov     eax, [eax+8]
0x75EA34: mov     [esp+34h+var_4], 4
0x75EA3C: call    eax
0x75EA3E: mov     cl, [esi+24h]
0x75EA41: mov     eax, [edi+220h]
0x75EA47: push    1
0x75EA49: lea     edx, [esp+38h+var_4]
0x75EA4D: push    edx
0x75EA4E: mov     byte ptr [esp+3Ch+arg_0], cl
0x75EA52: mov     edx, [eax+8]
0x75EA55: push    1
0x75EA57: lea     ecx, [esp+40h+arg_0]
0x75EA5B: push    ecx
0x75EA5C: push    eax
0x75EA5D: mov     [esp+48h+var_4], 1
0x75EA65: call    edx
0x75EA67: mov     edi, [edi+220h]
0x75EA6D: mov     ecx, [edi+8]
0x75EA70: push    1
0x75EA72: lea     eax, [esp+4Ch+var_4]
0x75EA76: push    eax
0x75EA77: push    4
0x75EA79: add     esi, 28h ; '('
0x75EA7C: push    esi
0x75EA7D: push    edi
0x75EA7E: mov     [esp+5Ch+var_4], 4
0x75EA86: call    ecx
0x75EA88: add     esp, 50h
0x75EA8B: pop     edi
0x75EA8C: pop     esi
0x75EA8D: pop     ecx
0x75EA8E: retn    4
