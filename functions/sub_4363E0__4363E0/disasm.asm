0x4363E0: push    ecx
0x4363E1: push    esi
0x4363E2: mov     esi, ecx
0x4363E4: mov     ecx, [esp+8+arg_0]
0x4363E8: mov     eax, [esi]
0x4363EA: mov     edx, [eax+28h]
0x4363ED: push    ecx
0x4363EE: mov     ecx, esi
0x4363F0: call    edx
0x4363F2: mov     esi, [esi+220h]
0x4363F8: mov     [esp+8+var_4], eax
0x4363FC: mov     edx, [esi+8]
0x4363FF: push    1
0x436401: lea     eax, [esp+0Ch+arg_0]
0x436405: push    eax
0x436406: push    4
0x436408: lea     ecx, [esp+14h+var_4]
0x43640C: push    ecx
0x43640D: push    esi
0x43640E: mov     [esp+1Ch+arg_0], 4
0x436416: call    edx
0x436418: add     esp, 14h
0x43641B: pop     esi
0x43641C: pop     ecx
0x43641D: retn    4
