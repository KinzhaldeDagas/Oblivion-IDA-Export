0x9480A0: push    esi
0x9480A1: mov     esi, ecx
0x9480A3: mov     ecx, [esi+4]
0x9480A6: test    ecx, ecx
0x9480A8: jz      short loc_9480E4
0x9480AA: push    11h
0x9480AC: call    sub_918440
0x9480B1: mov     ecx, [esi+4]
0x9480B4: push    3
0x9480B6: call    sub_9181B0
0x9480BB: mov     eax, [esp+4+arg_0]
0x9480BF: mov     ecx, [esi+4]
0x9480C2: push    eax
0x9480C3: call    sub_918440
0x9480C8: mov     ecx, [esp+4+arg_4]
0x9480CC: push    0
0x9480CE: push    ecx
0x9480CF: mov     ecx, [esi+4]
0x9480D2: call    sub_918460
0x9480D7: mov     edx, [esp+4+arg_8]
0x9480DB: mov     ecx, [esi+4]
0x9480DE: push    edx
0x9480DF: call    sub_918440
0x9480E4: mov     ecx, [esi+4]
0x9480E7: test    ecx, ecx
0x9480E9: pop     esi
0x9480EA: jz      short loc_948100
0x9480EC: lea     eax, [esp+arg_0]
0x9480F0: push    eax
0x9480F1: call    sub_918060
0x9480F6: cmp     byte ptr [eax], 0
0x9480F9: jz      short loc_948100
0x9480FB: xor     eax, eax
0x9480FD: retn    0Ch
0x948100: mov     eax, 1
0x948105: retn    0Ch
