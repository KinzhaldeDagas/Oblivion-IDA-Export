0x8A0550: test    ecx, ecx
0x8A0552: jz      short loc_8A0559
0x8A0554: mov     ecx, [ecx+8]
0x8A0557: jmp     short loc_8A055B
0x8A0559: xor     ecx, ecx
0x8A055B: xor     eax, eax
0x8A055D: test    ecx, ecx
0x8A055F: jz      short locret_8A0564
0x8A0561: mov     eax, [ecx+14h]
0x8A0564: retn
