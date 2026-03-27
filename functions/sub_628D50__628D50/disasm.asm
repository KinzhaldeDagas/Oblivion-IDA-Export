0x628D50: mov     eax, 4
0x628D55: cmp     byte ptr [ecx+eax+2DCh], 0
0x628D5D: jnz     short loc_628D6A
0x628D5F: sub     eax, 1
0x628D62: cmp     eax, 1
0x628D65: jge     short loc_628D55
0x628D67: mov     al, 1
0x628D69: retn
0x628D6A: xor     al, al
0x628D6C: retn
