0x7251C0: push    ebx
0x7251C1: push    ebp
0x7251C2: push    esi
0x7251C3: push    edi
0x7251C4: mov     edi, [esp+10h+arg_0]
0x7251C8: push    edi
0x7251C9: mov     esi, ecx
0x7251CB: call    j_nullsub_3
0x7251D0: push    edi
0x7251D1: lea     ecx, [esi+8]
0x7251D4: call    sub_7094A0
0x7251D9: mov     eax, [edi+220h]
0x7251DF: mov     edx, [eax+8]
0x7251E2: push    1
0x7251E4: lea     ecx, [esp+14h+arg_0]
0x7251E8: push    ecx
0x7251E9: push    4
0x7251EB: lea     ebx, [esi+20h]
0x7251EE: push    ebx
0x7251EF: push    eax
0x7251F0: mov     [esp+24h+arg_0], 4
0x7251F8: call    edx
0x7251FA: xor     ebp, ebp
0x7251FC: add     esp, 14h
0x7251FF: cmp     [ebx], ebp
0x725201: jbe     short loc_72525B
0x725203: xor     ebx, ebx
0x725205: mov     edx, [esi+24h]
0x725208: mov     eax, [edi+220h]
0x72520E: push    1
0x725210: lea     ecx, [esp+14h+arg_0]
0x725214: push    ecx
0x725215: push    4
0x725217: add     edx, ebx
0x725219: push    edx
0x72521A: push    eax
0x72521B: mov     eax, [eax+8]
0x72521E: mov     [esp+24h+arg_0], 4
0x725226: call    eax
0x725228: mov     edx, [esi+24h]
0x72522B: mov     eax, [edi+220h]
0x725231: push    1
0x725233: lea     ecx, [esp+28h+arg_0]
0x725237: push    ecx
0x725238: lea     ecx, [edx+ebx+4]
0x72523C: mov     edx, [eax+8]
0x72523F: push    4
0x725241: push    ecx
0x725242: push    eax
0x725243: mov     [esp+38h+arg_0], 4
0x72524B: call    edx
0x72524D: add     ebp, 1
0x725250: add     esp, 28h
0x725253: add     ebx, 10h
0x725256: cmp     ebp, [esi+20h]
0x725259: jb      short loc_725205
0x72525B: pop     edi
0x72525C: pop     esi
0x72525D: pop     ebp
0x72525E: pop     ebx
0x72525F: retn    4
