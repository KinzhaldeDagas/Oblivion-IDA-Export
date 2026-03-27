0x755510: push    esi
0x755511: push    edi
0x755512: mov     edi, [esp+8+arg_0]
0x755516: push    edi
0x755517: mov     esi, ecx
0x755519: call    sub_75E9E0
0x75551E: mov     eax, [edi+220h]
0x755524: mov     edx, [eax+8]
0x755527: push    1
0x755529: lea     ecx, [esp+0Ch+arg_0]
0x75552D: push    ecx
0x75552E: push    4
0x755530: add     esi, 30h ; '0'
0x755533: push    esi
0x755534: push    eax
0x755535: mov     [esp+1Ch+arg_0], 4
0x75553D: call    edx
0x75553F: add     esp, 14h
0x755542: pop     edi
0x755543: pop     esi
0x755544: retn    4
