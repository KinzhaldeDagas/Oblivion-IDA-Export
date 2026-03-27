0x4D66B0: mov     eax, [ecx]
0x4D66B2: mov     edx, [esp+arg_0]
0x4D66B6: mov     eax, [eax+138h]
0x4D66BC: push    edx
0x4D66BD: call    eax
0x4D66BF: test    eax, eax
0x4D66C1: jz      short loc_4D66D2
0x4D66C3: mov     edx, [eax]
0x4D66C5: mov     ecx, eax
0x4D66C7: mov     eax, [edx+9Ch]
0x4D66CD: call    eax
0x4D66CF: retn    4
0x4D66D2: xor     eax, eax
0x4D66D4: retn    4
