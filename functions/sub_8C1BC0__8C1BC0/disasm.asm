0x8C1BC0: push    esi
0x8C1BC1: mov     esi, [esp+4+arg_0]
0x8C1BC5: push    edi
0x8C1BC6: push    esi
0x8C1BC7: mov     edi, ecx
0x8C1BC9: call    sub_8A0C80
0x8C1BCE: mov     edi, [edi+4]
0x8C1BD1: mov     eax, [esi+220h]
0x8C1BD7: push    1
0x8C1BD9: lea     ecx, [esp+0Ch+arg_0]
0x8C1BDD: push    ecx
0x8C1BDE: push    50h ; 'P'
0x8C1BE0: lea     edx, [edi+10h]
0x8C1BE3: push    edx
0x8C1BE4: push    eax
0x8C1BE5: mov     eax, [eax+8]
0x8C1BE8: mov     [esp+1Ch+arg_0], 50h ; 'P'
0x8C1BF0: call    eax
0x8C1BF2: mov     eax, [esi+220h]
0x8C1BF8: push    1
0x8C1BFA: lea     ecx, [esp+20h+arg_0]
0x8C1BFE: push    ecx
0x8C1BFF: push    30h ; '0'
0x8C1C01: lea     edx, [edi+60h]
0x8C1C04: push    edx
0x8C1C05: push    eax
0x8C1C06: mov     eax, [eax+8]
0x8C1C09: mov     [esp+30h+arg_0], 30h ; '0'
0x8C1C11: call    eax
0x8C1C13: mov     eax, [esi+220h]
0x8C1C19: push    1
0x8C1C1B: lea     ecx, [esp+34h+arg_0]
0x8C1C1F: push    ecx
0x8C1C20: push    4
0x8C1C22: lea     edx, [edi+90h]
0x8C1C28: push    edx
0x8C1C29: push    eax
0x8C1C2A: mov     eax, [eax+8]
0x8C1C2D: mov     [esp+44h+arg_0], 4
0x8C1C35: call    eax
0x8C1C37: mov     eax, [esi+220h]
0x8C1C3D: push    1
0x8C1C3F: lea     ecx, [esp+48h+arg_0]
0x8C1C43: push    ecx
0x8C1C44: push    4
0x8C1C46: lea     edx, [edi+94h]
0x8C1C4C: push    edx
0x8C1C4D: push    eax
0x8C1C4E: mov     eax, [eax+8]
0x8C1C51: mov     [esp+58h+arg_0], 4
0x8C1C59: call    eax
0x8C1C5B: mov     esi, [esi+220h]
0x8C1C61: mov     edx, [esi+8]
0x8C1C64: add     esp, 50h
0x8C1C67: push    1
0x8C1C69: lea     ecx, [esp+0Ch+arg_0]
0x8C1C6D: push    ecx
0x8C1C6E: push    4
0x8C1C70: add     edi, 98h ; '˜'
0x8C1C76: push    edi
0x8C1C77: push    esi
0x8C1C78: mov     [esp+1Ch+arg_0], 4
0x8C1C80: call    edx
0x8C1C82: add     esp, 14h
0x8C1C85: pop     edi
0x8C1C86: pop     esi
0x8C1C87: retn    4
