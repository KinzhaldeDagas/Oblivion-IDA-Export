0x414D10: xor     al, al
0x414D12: cmp     dword ptr [ecx+8], 0
0x414D16: jnz     short loc_414D1F
0x414D18: cmp     dword ptr [ecx+4], 0
0x414D1C: jnz     short loc_414D1F
0x414D1E: retn
0x414D1F: test    ecx, ecx
0x414D21: jz      short locret_414D48
0x414D23: test    al, al
0x414D25: jnz     short locret_414D48
0x414D27: mov     edx, [ecx+4]
0x414D2A: mov     edx, [edx+1Ch]
0x414D2D: test    edx, edx
0x414D2F: jz      short loc_414D3C
0x414D31: test    dword ptr [edx+58h], 70000h
0x414D38: jz      short loc_414D3C
0x414D3A: mov     al, 1
0x414D3C: mov     ecx, [ecx+8]
0x414D3F: test    ecx, ecx
0x414D41: jz      short locret_414D48
0x414D43: add     ecx, 0FFFFFFFCh
0x414D46: jnz     short loc_414D23
0x414D48: retn
