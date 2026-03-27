0x741180: push    esi
0x741181: push    edi
0x741182: mov     edi, [esp+8+arg_0]
0x741186: push    edi
0x741187: mov     esi, ecx
0x741189: call    sub_700A80
0x74118E: mov     eax, [edi+220h]
0x741194: push    1
0x741196: lea     ecx, [esp+0Ch+arg_0]
0x74119A: push    ecx
0x74119B: push    2
0x74119D: lea     edx, [esi+18h]
0x7411A0: push    edx
0x7411A1: push    eax
0x7411A2: mov     eax, [eax+8]
0x7411A5: mov     [esp+1Ch+arg_0], 2
0x7411AD: call    eax
0x7411AF: mov     eax, [edi+220h]
0x7411B5: push    1
0x7411B7: lea     ecx, [esp+20h+arg_0]
0x7411BB: push    ecx
0x7411BC: push    4
0x7411BE: lea     edx, [esi+1Ch]
0x7411C1: push    edx
0x7411C2: push    eax
0x7411C3: mov     eax, [eax+8]
0x7411C6: mov     [esp+30h+arg_0], 4
0x7411CE: call    eax
0x7411D0: add     esp, 28h
0x7411D3: push    edi
0x7411D4: lea     ecx, [esi+20h]
0x7411D7: call    sub_7094A0
0x7411DC: pop     edi
0x7411DD: pop     esi
0x7411DE: retn    4
