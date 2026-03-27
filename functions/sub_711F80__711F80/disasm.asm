0x711F80: mov     ecx, ds:0B3FB80h
0x711F86: test    ecx, ecx
0x711F88: jz      short loc_711F92
0x711F8A: mov     eax, [ecx]
0x711F8C: mov     edx, [eax]
0x711F8E: push    1
0x711F90: call    edx
0x711F92: mov     ecx, ds:0B3FB84h
0x711F98: test    ecx, ecx
0x711F9A: jz      short locret_711FA4
0x711F9C: mov     eax, [ecx]
0x711F9E: mov     edx, [eax]
0x711FA0: push    1
0x711FA2: call    edx
0x711FA4: retn
