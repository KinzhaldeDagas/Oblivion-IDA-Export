0x6D58D0: push    esi
0x6D58D1: push    edi
0x6D58D2: mov     edi, [esp+8+arg_0]
0x6D58D6: push    edi
0x6D58D7: mov     esi, ecx
0x6D58D9: call    sub_716050
0x6D58DE: mov     eax, [edi+220h]
0x6D58E4: push    1
0x6D58E6: lea     ecx, [esp+0Ch+arg_0]
0x6D58EA: push    ecx
0x6D58EB: push    2
0x6D58ED: lea     edx, [esi+4Ch]
0x6D58F0: push    edx
0x6D58F1: push    eax
0x6D58F2: mov     eax, [eax+8]
0x6D58F5: mov     [esp+1Ch+arg_0], 2
0x6D58FD: call    eax
0x6D58FF: mov     edx, [edi]
0x6D5901: mov     eax, [esi+50h]
0x6D5904: mov     edx, [edx+2Ch]
0x6D5907: add     esp, 14h
0x6D590A: push    eax
0x6D590B: mov     ecx, edi
0x6D590D: call    edx
0x6D590F: pop     edi
0x6D5910: pop     esi
0x6D5911: retn    4
