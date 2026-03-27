0x7C2910: mov     eax, [ecx+0A8h]
0x7C2916: sub     eax, 1
0x7C2919: jz      short loc_7C2923
0x7C291B: sub     eax, 2
0x7C291E: jnz     short loc_7C2923
0x7C2920: xor     eax, eax
0x7C2922: retn
0x7C2923: mov     eax, 3
0x7C2928: retn
