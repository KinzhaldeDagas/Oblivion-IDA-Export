0x926BF0: push    ecx
0x926BF1: push    esi
0x926BF2: push    edi
0x926BF3: mov     edi, [esp+0Ch+arg_0]
0x926BF7: push    edi
0x926BF8: mov     esi, ecx
0x926BFA: call    sub_8B3180
0x926BFF: mov     esi, [esi+4]
0x926C02: mov     al, [esi+90h]
0x926C08: push    1
0x926C0A: lea     ecx, [esp+10h+var_4]
0x926C0E: push    ecx
0x926C0F: mov     byte ptr [esp+14h+arg_0], al
0x926C13: mov     eax, [edi+220h]
0x926C19: push    1
0x926C1B: lea     edx, [esp+18h+arg_0]
0x926C1F: push    edx
0x926C20: push    eax
0x926C21: mov     eax, [eax+8]
0x926C24: mov     [esp+20h+var_4], 1
0x926C2C: call    eax
0x926C2E: mov     edi, [edi+220h]
0x926C34: mov     edx, [edi+8]
0x926C37: push    1
0x926C39: lea     ecx, [esp+24h+var_4]
0x926C3D: push    ecx
0x926C3E: push    1
0x926C40: add     esi, 91h ; '‘'
0x926C46: push    esi
0x926C47: push    edi
0x926C48: mov     [esp+34h+var_4], 1
0x926C50: call    edx
0x926C52: add     esp, 28h
0x926C55: pop     edi
0x926C56: pop     esi
0x926C57: pop     ecx
0x926C58: retn    4
