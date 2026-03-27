0x5888A0: push    edi
0x5888A1: xor     eax, eax
0x5888A3: mov     ecx, 64h ; 'd'
0x5888A8: mov     edi, offset dword_B3AF10
0x5888AD: rep stosd
0x5888AF: mov     ds:0B3B0ACh, eax
0x5888B4: pop     edi
0x5888B5: retn
