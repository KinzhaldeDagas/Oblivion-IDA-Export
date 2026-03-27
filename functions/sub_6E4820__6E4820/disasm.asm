0x6E4820: push    ebx
0x6E4821: push    ebp
0x6E4822: push    esi
0x6E4823: push    edi
0x6E4824: mov     edi, [esp+10h+arg_0]
0x6E4828: push    edi
0x6E4829: mov     esi, ecx
0x6E482B: call    nullsub_returnvVoid_1arg
0x6E4830: mov     eax, [edi+220h]
0x6E4836: mov     edx, [eax+8]
0x6E4839: push    1
0x6E483B: lea     ecx, [esp+14h+arg_0]
0x6E483F: push    ecx
0x6E4840: mov     ebp, 4
0x6E4845: push    ebp
0x6E4846: lea     ebx, [esi+8]
0x6E4849: push    ebx
0x6E484A: push    eax
0x6E484B: mov     [esp+24h+arg_0], ebp
0x6E484F: call    edx
0x6E4851: add     esp, 14h
0x6E4854: cmp     dword ptr [ebx], 0
0x6E4857: jbe     short loc_6E488D
0x6E4859: mov     eax, [edi+220h]
0x6E485F: mov     edx, [eax+8]
0x6E4862: push    1
0x6E4864: lea     ecx, [esp+14h+arg_0]
0x6E4868: push    ecx
0x6E4869: mov     [esp+18h+arg_0], ebp
0x6E486D: push    4
0x6E486F: lea     ebp, [esi+10h]
0x6E4872: push    ebp
0x6E4873: push    eax
0x6E4874: call    edx
0x6E4876: mov     ecx, [ebx]
0x6E4878: mov     edx, [esi+0Ch]
0x6E487B: mov     eax, [ebp+0]
0x6E487E: mov     eax, ds:0B3D608h[eax*4]
0x6E4885: push    ecx
0x6E4886: push    edx
0x6E4887: push    edi
0x6E4888: call    eax ; dword_B3D608
0x6E488A: add     esp, 20h
0x6E488D: pop     edi
0x6E488E: pop     esi
0x6E488F: pop     ebp
0x6E4890: pop     ebx
0x6E4891: retn    4
