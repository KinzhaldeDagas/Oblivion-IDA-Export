0x72E100: push    ecx
0x72E101: push    ebx
0x72E102: push    esi
0x72E103: push    edi
0x72E104: mov     edi, [esp+10h+arg_0]
0x72E108: push    edi
0x72E109: mov     esi, ecx
0x72E10B: call    nullsub_returnvVoid_1arg
0x72E110: mov     eax, [edi+220h]
0x72E116: mov     edx, [eax+8]
0x72E119: push    1
0x72E11B: lea     ecx, [esp+14h+var_4]
0x72E11F: push    ecx
0x72E120: push    4
0x72E122: lea     edi, [esi+8]
0x72E125: push    edi
0x72E126: push    eax
0x72E127: mov     [esp+24h+var_4], 4
0x72E12F: call    edx
0x72E131: xor     ebx, ebx
0x72E133: add     esp, 14h
0x72E136: cmp     [edi], ebx
0x72E138: jbe     short loc_72E15A
0x72E13A: push    ebp
0x72E13B: xor     ebp, ebp
0x72E13D: lea     ecx, [ecx+0]
0x72E140: mov     eax, [esp+14h+arg_0]
0x72E144: mov     ecx, [esi+0Ch]
0x72E147: push    eax
0x72E148: add     ecx, ebp
0x72E14A: call    sub_72DBC0
0x72E14F: add     ebx, 1
0x72E152: add     ebp, 2Ch ; ','
0x72E155: cmp     ebx, [edi]
0x72E157: jb      short loc_72E140
0x72E159: pop     ebp
0x72E15A: pop     edi
0x72E15B: pop     esi
0x72E15C: pop     ebx
0x72E15D: pop     ecx
0x72E15E: retn    4
