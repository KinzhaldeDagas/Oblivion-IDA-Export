0x7596D0: push    ecx
0x7596D1: push    esi
0x7596D2: push    edi
0x7596D3: mov     edi, [esp+0Ch+arg_0]
0x7596D7: push    edi
0x7596D8: mov     esi, ecx
0x7596DA: call    sub_75E9E0
0x7596DF: mov     al, [esi+30h]
0x7596E2: push    1
0x7596E4: lea     ecx, [esp+10h+var_4]
0x7596E8: push    ecx
0x7596E9: mov     byte ptr [esp+14h+arg_0], al
0x7596ED: mov     eax, [edi+220h]
0x7596F3: push    1
0x7596F5: lea     edx, [esp+18h+arg_0]
0x7596F9: push    edx
0x7596FA: push    eax
0x7596FB: mov     eax, [eax+8]
0x7596FE: mov     [esp+20h+var_4], 1
0x759706: call    eax
0x759708: add     esp, 14h
0x75970B: push    edi
0x75970C: lea     ecx, [esi+34h]
0x75970F: call    sub_7094A0
0x759714: pop     edi
0x759715: pop     esi
0x759716: pop     ecx
0x759717: retn    4
