0x9482A0: push    esi
0x9482A1: mov     esi, ecx
0x9482A3: mov     ecx, [esi+4]
0x9482A6: test    ecx, ecx
0x9482A8: jz      short loc_9482E2
0x9482AA: push    15h
0x9482AC: call    sub_918440
0x9482B1: mov     ecx, [esi+4]
0x9482B4: push    7
0x9482B6: call    sub_9181B0
0x9482BB: mov     eax, [esp+4+arg_0]
0x9482BF: mov     ecx, [esi+4]
0x9482C2: push    eax
0x9482C3: call    sub_948800
0x9482C8: mov     ecx, [esp+4+arg_4]
0x9482CC: push    ecx
0x9482CD: mov     ecx, [esi+4]
0x9482D0: call    sub_918440
0x9482D5: mov     edx, [esp+4+arg_8]
0x9482D9: mov     ecx, [esi+4]
0x9482DC: push    edx
0x9482DD: call    sub_918440
0x9482E2: mov     ecx, [esi+4]
0x9482E5: test    ecx, ecx
0x9482E7: pop     esi
0x9482E8: jz      short loc_9482FE
0x9482EA: lea     eax, [esp+arg_0]
0x9482EE: push    eax
0x9482EF: call    sub_918060
0x9482F4: cmp     byte ptr [eax], 0
0x9482F7: jz      short loc_9482FE
0x9482F9: xor     eax, eax
0x9482FB: retn    0Ch
0x9482FE: mov     eax, 1
0x948303: retn    0Ch
