0x628DB0: mov     eax, 4
0x628DB5: cmp     byte ptr [ecx+eax+2DCh], 0
0x628DBD: jnz     short locret_628DC6
0x628DBF: sub     eax, 1
0x628DC2: jns     short loc_628DB5
0x628DC4: xor     eax, eax
0x628DC6: retn
