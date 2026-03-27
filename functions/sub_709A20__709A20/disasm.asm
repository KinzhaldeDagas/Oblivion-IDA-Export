0x709A20: push    esi
0x709A21: push    edi
0x709A22: mov     edi, [esp+8+arg_0]
0x709A26: push    edi
0x709A27: mov     esi, ecx
0x709A29: call    sub_700A80
0x709A2E: push    edi
0x709A2F: lea     ecx, [esi+1Ch]
0x709A32: call    sub_7094A0
0x709A37: push    edi
0x709A38: lea     ecx, [esi+28h]
0x709A3B: call    sub_7094A0
0x709A40: push    edi
0x709A41: lea     ecx, [esi+34h]
0x709A44: call    sub_7094A0
0x709A49: push    edi
0x709A4A: lea     ecx, [esi+40h]
0x709A4D: call    sub_7094A0
0x709A52: mov     eax, [edi+220h]
0x709A58: push    1
0x709A5A: lea     ecx, [esp+0Ch+arg_0]
0x709A5E: push    ecx
0x709A5F: push    4
0x709A61: lea     edx, [esi+4Ch]
0x709A64: push    edx
0x709A65: push    eax
0x709A66: mov     eax, [eax+8]
0x709A69: mov     [esp+1Ch+arg_0], 4
0x709A71: call    eax
0x709A73: mov     edi, [edi+220h]
0x709A79: mov     edx, [edi+8]
0x709A7C: push    1
0x709A7E: lea     ecx, [esp+20h+arg_0]
0x709A82: push    ecx
0x709A83: push    4
0x709A85: add     esi, 50h ; 'P'
0x709A88: push    esi
0x709A89: push    edi
0x709A8A: mov     [esp+30h+arg_0], 4
0x709A92: call    edx
0x709A94: add     esp, 28h
0x709A97: pop     edi
0x709A98: pop     esi
0x709A99: retn    4
