0x413320: mov     eax, [ecx+1Ch]
0x413323: mov     edx, [eax+58h]
0x413326: shr     edx, 8
0x413329: test    dl, 1
0x41332C: jz      short loc_413331
0x41332E: xor     eax, eax
0x413330: retn
0x413331: mov     eax, [ecx+4]
0x413334: retn
