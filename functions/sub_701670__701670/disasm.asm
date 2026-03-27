0x701670: mov     eax, [ecx]
0x701672: mov     edx, [eax+7Ch]
0x701675: call    edx
0x701677: test    eax, eax
0x701679: jnz     short loc_70167E
0x70167B: xor     eax, eax
0x70167D: retn
0x70167E: mov     edx, [eax]
0x701680: mov     ecx, eax
0x701682: mov     eax, [edx+70h]
0x701685: push    0
0x701687: call    eax
0x701689: test    eax, eax
0x70168B: jz      short loc_70167B
0x70168D: mov     eax, [eax+0Ch]
0x701690: retn
