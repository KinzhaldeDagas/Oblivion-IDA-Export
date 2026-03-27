0x8C2AC0: push    esi
0x8C2AC1: push    edi
0x8C2AC2: mov     edi, [esp+8+arg_0]
0x8C2AC6: push    edi
0x8C2AC7: mov     esi, ecx
0x8C2AC9: call    sub_8A0C80
0x8C2ACE: mov     esi, [esi+4]
0x8C2AD1: mov     eax, [edi+220h]
0x8C2AD7: push    1
0x8C2AD9: lea     ecx, [esp+0Ch+arg_0]
0x8C2ADD: push    ecx
0x8C2ADE: push    30h ; '0'
0x8C2AE0: lea     edx, [esi+10h]
0x8C2AE3: push    edx
0x8C2AE4: push    eax
0x8C2AE5: mov     eax, [eax+8]
0x8C2AE8: mov     [esp+1Ch+arg_0], 30h ; '0'
0x8C2AF0: call    eax
0x8C2AF2: mov     edi, [edi+220h]
0x8C2AF8: mov     edx, [edi+8]
0x8C2AFB: push    1
0x8C2AFD: lea     ecx, [esp+20h+arg_0]
0x8C2B01: push    ecx
0x8C2B02: push    20h ; ' '
0x8C2B04: add     esi, 40h ; '@'
0x8C2B07: push    esi
0x8C2B08: push    edi
0x8C2B09: mov     [esp+30h+arg_0], 20h ; ' '
0x8C2B11: call    edx
0x8C2B13: add     esp, 28h
0x8C2B16: pop     edi
0x8C2B17: pop     esi
0x8C2B18: retn    4
