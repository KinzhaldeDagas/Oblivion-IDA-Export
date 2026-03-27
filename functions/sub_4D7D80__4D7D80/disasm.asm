0x4D7D80: push    esi
0x4D7D81: mov     esi, ecx
0x4D7D83: lea     ecx, [esi+44h]
0x4D7D86: call    sub_4203C0
0x4D7D8B: test    eax, eax
0x4D7D8D: jz      short loc_4D7D98
0x4D7D8F: push    esi
0x4D7D90: lea     ecx, [eax+44h]
0x4D7D93: call    sub_424C00
0x4D7D98: mov     eax, [esi]
0x4D7D9A: mov     edx, [eax+8Ch]
0x4D7DA0: push    1
0x4D7DA2: mov     ecx, esi
0x4D7DA4: call    edx
0x4D7DA6: mov     eax, [esi]
0x4D7DA8: mov     edx, [eax+90h]
0x4D7DAE: push    1
0x4D7DB0: mov     ecx, esi
0x4D7DB2: call    edx
0x4D7DB4: mov     eax, [esi]
0x4D7DB6: mov     edx, [eax+150h]
0x4D7DBC: push    0
0x4D7DBE: mov     ecx, esi
0x4D7DC0: call    edx
0x4D7DC2: pop     esi
0x4D7DC3: retn
