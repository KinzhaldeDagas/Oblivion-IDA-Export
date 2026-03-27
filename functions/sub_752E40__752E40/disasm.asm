0x752E40: push    ecx
0x752E41: push    esi
0x752E42: push    edi
0x752E43: mov     edi, [esp+0Ch+arg_0]
0x752E47: push    edi
0x752E48: mov     esi, ecx
0x752E4A: call    nullsub_returnvVoid_1arg
0x752E4F: mov     eax, [esi+8]
0x752E52: push    eax
0x752E53: mov     ecx, edi
0x752E55: call    sub_713720
0x752E5A: mov     eax, [edi+220h]
0x752E60: push    1
0x752E62: lea     ecx, [esp+10h+arg_0]
0x752E66: push    ecx
0x752E67: push    4
0x752E69: lea     edx, [esi+0Ch]
0x752E6C: push    edx
0x752E6D: push    eax
0x752E6E: mov     eax, [eax+8]
0x752E71: mov     [esp+20h+arg_0], 4
0x752E79: call    eax
0x752E7B: mov     edx, [edi]
0x752E7D: mov     eax, [esi+10h]
0x752E80: mov     edx, [edx+2Ch]
0x752E83: add     esp, 14h
0x752E86: push    eax
0x752E87: mov     ecx, edi
0x752E89: call    edx
0x752E8B: mov     al, [esi+14h]
0x752E8E: mov     edi, [edi+220h]
0x752E94: push    1
0x752E96: lea     ecx, [esp+10h+var_4]
0x752E9A: push    ecx
0x752E9B: push    1
0x752E9D: lea     edx, [esp+18h+arg_0]
0x752EA1: push    edx
0x752EA2: mov     byte ptr [esp+1Ch+arg_0], al
0x752EA6: mov     eax, [edi+8]
0x752EA9: push    edi
0x752EAA: mov     [esp+20h+var_4], 1
0x752EB2: call    eax
0x752EB4: add     esp, 14h
0x752EB7: pop     edi
0x752EB8: pop     esi
0x752EB9: pop     ecx
0x752EBA: retn    4
