0x5660A0: mov     eax, [ecx+1Ch]; 3DTheft: returns packageFlags bit 0x800 (runtime/dynamic package marker).
0x5660A3: shr     eax, 0Bh
0x5660A6: and     al, 1
0x5660A8: retn
