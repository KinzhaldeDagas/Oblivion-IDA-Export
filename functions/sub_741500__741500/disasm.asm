0x741500: push    esi
0x741501: push    edi
0x741502: mov     edi, [esp+8+arg_0]
0x741506: push    edi
0x741507: mov     esi, ecx
0x741509: call    sub_700A80
0x74150E: mov     eax, [edi+220h]
0x741514: mov     edx, [eax+8]
0x741517: push    1
0x741519: lea     ecx, [esp+0Ch+arg_0]
0x74151D: push    ecx
0x74151E: push    2
0x741520: add     esi, 18h
0x741523: push    esi
0x741524: push    eax
0x741525: mov     [esp+1Ch+arg_0], 2
0x74152D: call    edx
0x74152F: add     esp, 14h
0x741532: pop     edi
0x741533: pop     esi
0x741534: retn    4
