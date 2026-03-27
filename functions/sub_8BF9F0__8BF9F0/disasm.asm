0x8BF9F0: push    esi
0x8BF9F1: mov     esi, [esp+4+arg_0]
0x8BF9F5: push    edi
0x8BF9F6: push    esi
0x8BF9F7: mov     edi, ecx
0x8BF9F9: call    sub_8A0C80
0x8BF9FE: mov     edi, [edi+4]
0x8BFA01: mov     eax, [edi+0Ch]
0x8BFA04: push    eax
0x8BFA05: push    esi
0x8BFA06: call    sub_8E80C0
0x8BFA0B: mov     eax, [esi+220h]
0x8BFA11: push    1
0x8BFA13: lea     ecx, [esp+14h+arg_0]
0x8BFA17: push    ecx
0x8BFA18: push    4
0x8BFA1A: lea     edx, [edi+14h]
0x8BFA1D: push    edx
0x8BFA1E: push    eax
0x8BFA1F: mov     eax, [eax+8]
0x8BFA22: mov     [esp+24h+arg_0], 4
0x8BFA2A: call    eax
0x8BFA2C: mov     eax, [esi+220h]
0x8BFA32: push    1
0x8BFA34: lea     ecx, [esp+28h+arg_0]
0x8BFA38: push    ecx
0x8BFA39: push    1
0x8BFA3B: lea     edx, [edi+19h]
0x8BFA3E: push    edx
0x8BFA3F: push    eax
0x8BFA40: mov     eax, [eax+8]
0x8BFA43: mov     [esp+38h+arg_0], 1
0x8BFA4B: call    eax
0x8BFA4D: mov     esi, [esi+220h]
0x8BFA53: mov     edx, [esi+8]
0x8BFA56: push    1
0x8BFA58: lea     ecx, [esp+3Ch+arg_0]
0x8BFA5C: push    ecx
0x8BFA5D: push    1
0x8BFA5F: add     edi, 1Ah
0x8BFA62: push    edi
0x8BFA63: push    esi
0x8BFA64: mov     [esp+4Ch+arg_0], 1
0x8BFA6C: call    edx
0x8BFA6E: add     esp, 44h
0x8BFA71: pop     edi
0x8BFA72: pop     esi
0x8BFA73: retn    4
