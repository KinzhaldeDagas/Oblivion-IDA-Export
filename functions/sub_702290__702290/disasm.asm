0x702290: push    esi
0x702291: push    edi
0x702292: mov     edi, [esp+8+arg_0]
0x702296: push    edi
0x702297: mov     esi, ecx
0x702299: call    sub_700A70
0x70229E: test    al, al
0x7022A0: jnz     short loc_7022A7
0x7022A2: pop     edi
0x7022A3: pop     esi
0x7022A4: retn    4
0x7022A7: mov     ecx, [esi+3Ch]
0x7022AA: test    ecx, ecx
0x7022AC: jz      short loc_7022BB
0x7022AE: mov     eax, [ecx]
0x7022B0: mov     edx, [eax+24h]
0x7022B3: push    edi
0x7022B4: call    edx
0x7022B6: pop     edi
0x7022B7: pop     esi
0x7022B8: retn    4
0x7022BB: pop     edi
0x7022BC: mov     al, 1
0x7022BE: pop     esi
0x7022BF: retn    4
