0x4D8270: push    esi
0x4D8271: push    edi
0x4D8272: mov     edi, [esp+8+arg_0]
0x4D8276: cmp     edi, 4
0x4D8279: mov     esi, ecx
0x4D827B: jnz     short loc_4D82CD
0x4D827D: mov     ecx, ds:0B33B00h
0x4D8283: push    0
0x4D8285: push    esi
0x4D8286: call    sub_4533F0
0x4D828B: test    eax, 40000h
0x4D8290: push    8
0x4D8292: lea     ecx, [esi+44h]
0x4D8295: jz      short loc_4D82A3
0x4D8297: call    sub_41F830
0x4D829C: test    al, al
0x4D829E: setz    al
0x4D82A1: jmp     short loc_4D82A8
0x4D82A3: call    sub_41F830
0x4D82A8: test    al, al
0x4D82AA: mov     eax, [esi]
0x4D82AC: push    80000h
0x4D82B1: mov     ecx, esi
0x4D82B3: jz      short loc_4D82C8
0x4D82B5: mov     edx, [eax+44h]
0x4D82B8: call    edx
0x4D82BA: push    edi
0x4D82BB: lea     ecx, [esi+44h]
0x4D82BE: call    sub_423DF0
0x4D82C3: pop     edi
0x4D82C4: pop     esi
0x4D82C5: retn    4
0x4D82C8: mov     edx, [eax+40h]
0x4D82CB: call    edx
0x4D82CD: push    edi
0x4D82CE: lea     ecx, [esi+44h]
0x4D82D1: call    sub_423DF0
0x4D82D6: pop     edi
0x4D82D7: pop     esi
0x4D82D8: retn    4
