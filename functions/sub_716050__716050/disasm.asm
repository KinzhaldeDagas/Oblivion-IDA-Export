0x716050: push    ebx
0x716051: push    esi
0x716052: mov     esi, [esp+8+arg_0]
0x716056: push    edi
0x716057: push    esi
0x716058: mov     edi, ecx
0x71605A: call    nullsub_returnvVoid_1arg
0x71605F: mov     ebx, [edi+34h]
0x716062: test    ebx, ebx
0x716064: jz      short loc_71607A
0x716066: mov     eax, [ebx]
0x716068: mov     edx, [eax+6Ch]
0x71606B: mov     ecx, ebx
0x71606D: call    edx
0x71606F: test    al, al
0x716071: jnz     short loc_71607A
0x716073: mov     ebx, [ebx+34h]
0x716076: test    ebx, ebx
0x716078: jnz     short loc_716066
0x71607A: mov     eax, [esi]
0x71607C: mov     edx, [eax+2Ch]
0x71607F: push    ebx
0x716080: mov     ecx, esi
0x716082: call    edx
0x716084: mov     eax, [esi+220h]
0x71608A: push    1
0x71608C: lea     ecx, [esp+10h+arg_0]
0x716090: push    ecx
0x716091: push    2
0x716093: lea     edx, [edi+8]
0x716096: push    edx
0x716097: push    eax
0x716098: mov     eax, [eax+8]
0x71609B: mov     [esp+20h+arg_0], 2
0x7160A3: call    eax
0x7160A5: mov     eax, [esi+220h]
0x7160AB: push    1
0x7160AD: lea     ecx, [esp+24h+arg_0]
0x7160B1: push    ecx
0x7160B2: mov     ebx, 4
0x7160B7: push    ebx
0x7160B8: lea     edx, [edi+0Ch]
0x7160BB: push    edx
0x7160BC: push    eax
0x7160BD: mov     eax, [eax+8]
0x7160C0: mov     [esp+34h+arg_0], ebx
0x7160C4: call    eax
0x7160C6: mov     eax, [esi+220h]
0x7160CC: push    1
0x7160CE: lea     ecx, [esp+38h+arg_0]
0x7160D2: push    ecx
0x7160D3: push    ebx
0x7160D4: lea     edx, [edi+10h]
0x7160D7: push    edx
0x7160D8: push    eax
0x7160D9: mov     eax, [eax+8]
0x7160DC: mov     [esp+48h+arg_0], ebx
0x7160E0: call    eax
0x7160E2: mov     eax, [esi+220h]
0x7160E8: push    1
0x7160EA: lea     ecx, [esp+4Ch+arg_0]
0x7160EE: push    ecx
0x7160EF: push    ebx
0x7160F0: lea     edx, [edi+14h]
0x7160F3: push    edx
0x7160F4: push    eax
0x7160F5: mov     eax, [eax+8]
0x7160F8: mov     [esp+5Ch+arg_0], ebx
0x7160FC: call    eax
0x7160FE: mov     eax, [esi+220h]
0x716104: add     esp, 50h
0x716107: push    1
0x716109: lea     ecx, [esp+10h+arg_0]
0x71610D: push    ecx
0x71610E: push    ebx
0x71610F: lea     edx, [edi+18h]
0x716112: push    edx
0x716113: push    eax
0x716114: mov     eax, [eax+8]
0x716117: mov     [esp+20h+arg_0], ebx
0x71611B: call    eax
0x71611D: mov     edx, [esi]
0x71611F: mov     eax, [edi+30h]
0x716122: mov     edx, [edx+2Ch]
0x716125: add     esp, 14h
0x716128: push    eax
0x716129: mov     ecx, esi
0x71612B: call    edx
0x71612D: pop     edi
0x71612E: pop     esi
0x71612F: pop     ebx
0x716130: retn    4
