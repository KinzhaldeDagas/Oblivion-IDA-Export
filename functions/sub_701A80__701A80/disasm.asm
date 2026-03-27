0x701A80: mov     ecx, ds:0B3F940h
0x701A86: test    ecx, ecx
0x701A88: jz      short locret_701AAD
0x701A8A: mov     eax, [ecx]
0x701A8C: mov     edx, [eax+5Ch]
0x701A8F: call    edx
0x701A91: mov     ecx, ds:0B3F940h
0x701A97: test    ecx, ecx
0x701A99: jz      short loc_701AA3
0x701A9B: mov     eax, [ecx]
0x701A9D: mov     edx, [eax]
0x701A9F: push    1
0x701AA1: call    edx
0x701AA3: mov     dword ptr ds:0B3F940h, 0
0x701AAD: retn
