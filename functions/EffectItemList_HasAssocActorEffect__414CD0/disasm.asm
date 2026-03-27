0x414CD0: xor     al, al
0x414CD2: cmp     dword ptr [ecx+8], 0
0x414CD6: jnz     short loc_414CDF
0x414CD8: cmp     dword ptr [ecx+4], 0
0x414CDC: jnz     short loc_414CDF
0x414CDE: retn
0x414CDF: test    ecx, ecx
0x414CE1: jz      short locret_414D0A
0x414CE3: test    al, al
0x414CE5: jnz     short locret_414D0A
0x414CE7: mov     edx, [ecx+4]
0x414CEA: mov     edx, [edx+1Ch]
0x414CED: test    edx, edx
0x414CEF: jz      short loc_414CFE
0x414CF1: mov     edx, [edx+58h]
0x414CF4: shr     edx, 12h
0x414CF7: test    dl, 1
0x414CFA: jz      short loc_414CFE
0x414CFC: mov     al, 1
0x414CFE: mov     ecx, [ecx+8]
0x414D01: test    ecx, ecx
0x414D03: jz      short locret_414D0A
0x414D05: add     ecx, 0FFFFFFFCh
0x414D08: jnz     short loc_414CE3
0x414D0A: retn
