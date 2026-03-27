0x730A90: push    esi
0x730A91: push    edi
0x730A92: mov     edi, [esp+8+arg_0]
0x730A96: push    edi
0x730A97: mov     esi, ecx
0x730A99: call    sub_6FE000
0x730A9E: mov     eax, [edi+220h]
0x730AA4: mov     edx, [eax+8]
0x730AA7: push    1
0x730AA9: lea     ecx, [esp+0Ch+arg_0]
0x730AAD: push    ecx
0x730AAE: push    4
0x730AB0: add     esi, 0Ch
0x730AB3: push    esi
0x730AB4: push    eax
0x730AB5: mov     [esp+1Ch+arg_0], 4
0x730ABD: call    edx
0x730ABF: add     esp, 14h
0x730AC2: pop     edi
0x730AC3: pop     esi
0x730AC4: retn    4
