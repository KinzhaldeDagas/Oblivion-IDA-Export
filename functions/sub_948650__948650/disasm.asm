0x948650: push    esi
0x948651: mov     esi, ecx
0x948653: mov     eax, [esi+4]
0x948656: test    eax, eax
0x948658: jz      short loc_9486AB
0x94865A: push    edi
0x94865B: mov     edi, [esp+8+arg_0]
0x94865F: call    sub_948550
0x948664: mov     ecx, [esi+4]
0x948667: add     eax, 25h ; '%'
0x94866A: push    eax
0x94866B: call    sub_918440
0x948670: mov     ecx, [esi+4]
0x948673: push    5
0x948675: call    sub_9181B0
0x94867A: push    edi
0x94867B: lea     ecx, [esi-8]
0x94867E: call    sub_948580
0x948683: mov     eax, [esp+8+arg_4]
0x948687: mov     ecx, [esi+4]
0x94868A: push    eax
0x94868B: call    sub_948810
0x948690: mov     ecx, [esp+8+arg_8]
0x948694: push    ecx
0x948695: mov     ecx, [esi+4]
0x948698: call    sub_918440
0x94869D: mov     edx, [esp+8+arg_C]
0x9486A1: mov     ecx, [esi+4]
0x9486A4: push    edx
0x9486A5: call    sub_918440
0x9486AA: pop     edi
0x9486AB: mov     ecx, [esi+4]
0x9486AE: test    ecx, ecx
0x9486B0: pop     esi
0x9486B1: jz      short loc_9486C7
0x9486B3: lea     eax, [esp+arg_0]
0x9486B7: push    eax
0x9486B8: call    sub_918060
0x9486BD: cmp     byte ptr [eax], 0
0x9486C0: jz      short loc_9486C7
0x9486C2: xor     eax, eax
0x9486C4: retn    10h
0x9486C7: mov     eax, 1
0x9486CC: retn    10h
