0x628D80: mov     eax, 4
0x628D85: cmp     byte ptr [ecx+eax+2DCh], 0
0x628D8D: jnz     short loc_628D97
0x628D8F: sub     eax, 1
0x628D92: jns     short loc_628D85
0x628D94: xor     eax, eax
0x628D96: retn
0x628D97: mov     eax, [ecx+eax*4+2C8h]
0x628D9E: retn
