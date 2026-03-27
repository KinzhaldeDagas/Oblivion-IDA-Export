0x75F050: push    ecx
0x75F051: push    esi
0x75F052: mov     esi, [esp+8+arg_0]
0x75F056: push    edi
0x75F057: push    esi
0x75F058: mov     edi, ecx
0x75F05A: call    nullsub_returnvVoid_1arg
0x75F05F: mov     eax, [esi+220h]
0x75F065: push    1
0x75F067: lea     ecx, [esp+10h+arg_0]
0x75F06B: push    ecx
0x75F06C: push    4
0x75F06E: lea     edx, [edi+8]
0x75F071: push    edx
0x75F072: push    eax
0x75F073: mov     eax, [eax+8]
0x75F076: mov     [esp+20h+arg_0], 4
0x75F07E: call    eax
0x75F080: mov     cl, [edi+0Ch]
0x75F083: mov     eax, [esi+220h]
0x75F089: push    1
0x75F08B: lea     edx, [esp+24h+var_4]
0x75F08F: push    edx
0x75F090: mov     byte ptr [esp+28h+arg_0], cl
0x75F094: mov     edx, [eax+8]
0x75F097: push    1
0x75F099: lea     ecx, [esp+2Ch+arg_0]
0x75F09D: push    ecx
0x75F09E: push    eax
0x75F09F: mov     [esp+34h+var_4], 1
0x75F0A7: call    edx
0x75F0A9: mov     al, [edi+0Dh]
0x75F0AC: push    1
0x75F0AE: lea     ecx, [esp+38h+var_4]
0x75F0B2: push    ecx
0x75F0B3: mov     byte ptr [esp+3Ch+arg_0], al
0x75F0B7: mov     eax, [esi+220h]
0x75F0BD: push    1
0x75F0BF: lea     edx, [esp+40h+arg_0]
0x75F0C3: push    edx
0x75F0C4: push    eax
0x75F0C5: mov     eax, [eax+8]
0x75F0C8: mov     [esp+48h+var_4], 1
0x75F0D0: call    eax
0x75F0D2: mov     edx, [esi]
0x75F0D4: mov     eax, [edi+10h]
0x75F0D7: mov     edx, [edx+2Ch]
0x75F0DA: add     esp, 3Ch
0x75F0DD: push    eax
0x75F0DE: mov     ecx, esi
0x75F0E0: call    edx
0x75F0E2: mov     ecx, [edi+24h]
0x75F0E5: mov     eax, [esi]
0x75F0E7: mov     edx, [eax+2Ch]
0x75F0EA: push    ecx
0x75F0EB: mov     ecx, esi
0x75F0ED: call    edx
0x75F0EF: mov     ecx, [edi+28h]
0x75F0F2: mov     eax, [esi]
0x75F0F4: mov     edx, [eax+2Ch]
0x75F0F7: push    ecx
0x75F0F8: mov     ecx, esi
0x75F0FA: call    edx
0x75F0FC: pop     edi
0x75F0FD: pop     esi
0x75F0FE: pop     ecx
0x75F0FF: retn    4
