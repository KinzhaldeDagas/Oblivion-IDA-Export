0x7C6740: mov     ecx, [ecx+0E8h]
0x7C6746: xor     eax, eax
0x7C6748: test    ecx, ecx
0x7C674A: jz      short locret_7C676D
0x7C674C: lea     esp, [esp+0]
0x7C6750: lea     edx, [ecx+8]
0x7C6753: mov     edx, [edx]
0x7C6755: test    edx, edx
0x7C6757: mov     ecx, [ecx]
0x7C6759: jz      short loc_7C6769
0x7C675B: cmp     word ptr [edx+118h], 0FFh
0x7C6764: jz      short loc_7C6769
0x7C6766: add     eax, 1
0x7C6769: test    ecx, ecx
0x7C676B: jnz     short loc_7C6750
0x7C676D: retn
