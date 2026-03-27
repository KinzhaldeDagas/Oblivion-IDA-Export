0x6E6000: push    esi
0x6E6001: push    edi
0x6E6002: mov     edi, [esp+8+arg_0]
0x6E6006: push    edi
0x6E6007: mov     esi, ecx
0x6E6009: call    sub_6E53C0
0x6E600E: mov     eax, [edi+220h]
0x6E6014: mov     edx, [eax+8]
0x6E6017: push    1
0x6E6019: lea     ecx, [esp+0Ch+arg_0]
0x6E601D: push    ecx
0x6E601E: push    8
0x6E6020: add     esi, 2Ch ; ','
0x6E6023: push    esi
0x6E6024: push    eax
0x6E6025: mov     [esp+1Ch+arg_0], 4
0x6E602D: call    edx
0x6E602F: add     esp, 14h
0x6E6032: pop     edi
0x6E6033: pop     esi
0x6E6034: retn    4
