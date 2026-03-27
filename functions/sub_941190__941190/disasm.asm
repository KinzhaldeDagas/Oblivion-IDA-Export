0x941190: mov     eax, ds:0B30590h
0x941195: mov     edx, [esp+arg_8]
0x941199: push    ebx
0x94119A: mov     ebx, [esp+4+arg_4]
0x94119E: push    ebp
0x94119F: mov     ebp, [esp+8+arg_0]
0x9411A3: push    esi
0x9411A4: push    edi
0x9411A5: push    eax
0x9411A6: mov     esi, ecx
0x9411A8: mov     ecx, [esp+14h+arg_C]
0x9411AC: push    ecx
0x9411AD: push    edx
0x9411AE: push    ebx
0x9411AF: push    ebp
0x9411B0: mov     ecx, esi
0x9411B2: call    sub_941070
0x9411B7: push    0FFFFFFFFh
0x9411B9: lea     edi, [esi+14h]
0x9411BC: push    ebp
0x9411BD: mov     ecx, edi
0x9411BF: call    sub_8B1550
0x9411C4: push    0FFFFFFFFh
0x9411C6: push    ebx
0x9411C7: mov     ecx, edi
0x9411C9: mov     [esi+44h], eax
0x9411CC: call    sub_8B1550
0x9411D1: pop     edi
0x9411D2: mov     [esi+48h], eax
0x9411D5: pop     esi
0x9411D6: pop     ebp
0x9411D7: pop     ebx
0x9411D8: retn    10h
