0x76D6D0: mov     eax, [ecx+4Ch]
0x76D6D3: mov     ecx, [eax]
0x76D6D5: mov     edx, [ecx+44h]
0x76D6D8: push    0
0x76D6DA: push    0
0x76D6DC: push    0
0x76D6DE: push    0
0x76D6E0: push    eax
0x76D6E1: call    edx
0x76D6E3: xor     ecx, ecx
0x76D6E5: test    eax, eax
0x76D6E7: setnl   cl
0x76D6EA: mov     al, cl
0x76D6EC: retn
