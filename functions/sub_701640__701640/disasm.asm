0x701640: mov     eax, [ecx]
0x701642: mov     edx, [eax+7Ch]
0x701645: call    edx
0x701647: test    eax, eax
0x701649: jnz     short loc_70164E
0x70164B: xor     eax, eax
0x70164D: retn
0x70164E: mov     edx, [eax]
0x701650: mov     ecx, eax
0x701652: mov     eax, [edx+70h]
0x701655: push    0
0x701657: call    eax
0x701659: test    eax, eax
0x70165B: jz      short loc_70164B
0x70165D: mov     eax, [eax+8]
0x701660: retn
