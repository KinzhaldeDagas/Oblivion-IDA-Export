0x897BD0: push    esi
0x897BD1: push    edi
0x897BD2: mov     edi, [esp+8+arg_0]
0x897BD6: push    edi
0x897BD7: mov     esi, ecx
0x897BD9: call    sub_711D00
0x897BDE: mov     eax, [edi+220h]
0x897BE4: push    1
0x897BE6: lea     ecx, [esp+0Ch+arg_0]
0x897BEA: push    ecx
0x897BEB: push    2
0x897BED: lea     edx, [esi+0Ch]
0x897BF0: push    edx
0x897BF1: push    eax
0x897BF2: mov     eax, [eax+8]
0x897BF5: mov     [esp+1Ch+arg_0], 2
0x897BFD: call    eax
0x897BFF: mov     edx, [edi]
0x897C01: mov     eax, [esi+10h]
0x897C04: mov     edx, [edx+2Ch]
0x897C07: add     esp, 14h
0x897C0A: push    eax
0x897C0B: mov     ecx, edi
0x897C0D: call    edx
0x897C0F: pop     edi
0x897C10: pop     esi
0x897C11: retn    4
