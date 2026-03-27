0x628D30: mov     eax, 4
0x628D35: cmp     byte ptr [ecx+eax+2DCh], 0
0x628D3D: jnz     short loc_628D49
0x628D3F: sub     eax, 1
0x628D42: test    eax, eax
0x628D44: jg      short loc_628D35
0x628D46: mov     al, 1
0x628D48: retn
0x628D49: xor     al, al
0x628D4B: retn
