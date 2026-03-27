0x6B8580: mov     eax, [ecx+1Ch]
0x6B8583: test    eax, eax
0x6B8585: jz      short loc_6B858D
0x6B8587: mov     eax, [eax+4]
0x6B858A: mov     [ecx+1Ch], eax
0x6B858D: mov     ecx, [ecx+1Ch]
0x6B8590: test    ecx, ecx
0x6B8592: jz      short loc_6B859F
0x6B8594: cmp     dword ptr [ecx], 0
0x6B8597: jz      short loc_6B859F
0x6B8599: mov     eax, 1
0x6B859E: retn
0x6B859F: xor     eax, eax
0x6B85A1: retn
