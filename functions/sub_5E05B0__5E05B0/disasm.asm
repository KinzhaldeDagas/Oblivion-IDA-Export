0x5E05B0: cmp     dword ptr [ecx+58h], 0
0x5E05B4: jz      short loc_5E05CA
0x5E05B6: mov     ecx, [ecx+58h]
0x5E05B9: mov     eax, [ecx]
0x5E05BB: mov     edx, [eax+2C0h]
0x5E05C1: call    edx
0x5E05C3: test    al, 0Fh
0x5E05C5: jz      short loc_5E05CA
0x5E05C7: mov     al, 1
0x5E05C9: retn
0x5E05CA: xor     al, al
0x5E05CC: retn
