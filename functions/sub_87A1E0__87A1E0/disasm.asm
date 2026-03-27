0x87A1E0: push    0FFFFFFFFh
0x87A1E2: push    offset SEH_87A1E0
0x87A1E7: mov     eax, large fs:0
0x87A1ED: push    eax
0x87A1EE: push    ebx
0x87A1EF: push    ebp
0x87A1F0: push    esi
0x87A1F1: push    edi
0x87A1F2: mov     eax, ds:0B30AACh
0x87A1F7: xor     eax, esp
0x87A1F9: push    eax
0x87A1FA: lea     eax, [esp+20h+var_C]
0x87A1FE: mov     large fs:0, eax
0x87A204: mov     esi, ecx
0x87A206: mov     ecx, [esp+20h+arg_0]
0x87A20A: mov     eax, [esi]
0x87A20C: mov     edx, [eax+0BCh]
0x87A212: mov     edi, ds:0B476F4h
0x87A218: push    0
0x87A21A: push    0
0x87A21C: push    ecx
0x87A21D: mov     ecx, esi
0x87A21F: call    edx
0x87A221: mov     eax, [edi+24h]
0x87A224: mov     ecx, [esp+20h+arg_C]
0x87A228: mov     ebx, [eax]
0x87A22A: mov     edx, [ecx]
0x87A22C: mov     eax, [edx+88h]
0x87A232: push    0
0x87A234: mov     [esp+24h+arg_0], ebx
0x87A238: call    eax
0x87A23A: mov     ebx, [ebx+4]
0x87A23D: mov     ebp, eax
0x87A23F: cmp     ebx, ebp
0x87A241: jz      short loc_87A278
0x87A243: test    ebx, ebx
0x87A245: jz      short loc_87A263
0x87A247: lea     ecx, [ebx+4]
0x87A24A: push    ecx; lpAddend
0x87A24B: call    dword ptr ds:0A2807Ch
0x87A251: test    eax, eax
0x87A253: jnz     short loc_87A263
0x87A255: test    ebx, ebx
0x87A257: jz      short loc_87A263
0x87A259: mov     edx, [ebx]
0x87A25B: mov     eax, [edx]
0x87A25D: push    1
0x87A25F: mov     ecx, ebx
0x87A261: call    eax
0x87A263: test    ebp, ebp
0x87A265: mov     ecx, [esp+20h+arg_0]
0x87A269: mov     [ecx+4], ebp
0x87A26C: jz      short loc_87A278
0x87A26E: add     ebp, 4
0x87A271: push    ebp; lpAddend
0x87A272: call    dword ptr ds:0A28078h
0x87A278: mov     ebx, 1
0x87A27D: add     [edi+60h], ebx
0x87A280: mov     [esp+20h+arg_0], edi
0x87A284: mov     eax, [esi+38h]
0x87A287: lea     edx, [esp+20h+arg_0]
0x87A28B: push    edx
0x87A28C: push    eax
0x87A28D: lea     ecx, [esi+40h]
0x87A290: mov     [esp+28h+var_4], 0
0x87A298: call    sub_76CE40
0x87A29D: or      eax, 0FFFFFFFFh
0x87A2A0: add     [edi+60h], eax
0x87A2A3: mov     [esp+20h+var_4], eax
0x87A2A7: jnz     short loc_87A2B0
0x87A2A9: mov     ecx, edi
0x87A2AB: call    sub_7604D0
0x87A2B0: add     [esi+38h], ebx
0x87A2B3: mov     ecx, dword ptr [esp+20h+var_C]
0x87A2B7: mov     large fs:0, ecx
0x87A2BE: pop     ecx
0x87A2BF: pop     edi
0x87A2C0: pop     esi
0x87A2C1: pop     ebp
0x87A2C2: pop     ebx
0x87A2C3: add     esp, 0Ch
0x87A2C6: retn    10h
