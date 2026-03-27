0x45BAB0: push    ecx
0x45BAB1: mov     eax, [ecx+18h]
0x45BAB4: shr     eax, 9
0x45BAB7: test    al, 1
0x45BAB9: jz      short loc_45BAC9
0x45BABB: mov     eax, [esp+4+arg_8]
0x45BABF: add     [ecx+90h], eax
0x45BAC5: pop     ecx
0x45BAC6: retn    0Ch
0x45BAC9: mov     edx, [esp+4+arg_8]
0x45BACD: mov     eax, [esp+4+arg_4]
0x45BAD1: push    1
0x45BAD3: lea     ecx, [esp+8+var_4]
0x45BAD7: push    ecx
0x45BAD8: push    edx
0x45BAD9: push    eax
0x45BADA: mov     eax, [esp+14h+arg_0]
0x45BADE: mov     ecx, [eax+8]
0x45BAE1: push    eax
0x45BAE2: mov     [esp+18h+var_4], 1
0x45BAEA: call    ecx
0x45BAEC: add     esp, 14h
0x45BAEF: pop     ecx
0x45BAF0: retn    0Ch
