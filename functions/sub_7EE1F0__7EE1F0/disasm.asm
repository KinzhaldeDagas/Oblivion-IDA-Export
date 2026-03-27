0x7EE1F0: cmp     dword ptr [ecx+90h], 0
0x7EE1F7: jz      short loc_7EE20B
0x7EE1F9: mov     eax, [ecx+90h]
0x7EE1FF: mov     edx, [eax]
0x7EE201: mov     [ecx+90h], edx
0x7EE207: mov     eax, [eax+8]
0x7EE20A: retn
0x7EE20B: xor     eax, eax
0x7EE20D: retn
