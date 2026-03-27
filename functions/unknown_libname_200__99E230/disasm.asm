0x99E230: cmp     cl, 40h ; '@'
0x99E233: jnb     short RETZERO
0x99E235: cmp     cl, 20h ; ' '
0x99E238: jnb     short MORE32_0
0x99E23A: shrd    eax, edx, cl
0x99E23D: shr     edx, cl
0x99E23F: retn
0x99E240: mov     eax, edx
0x99E242: xor     edx, edx
0x99E244: and     cl, 1Fh
0x99E247: shr     eax, cl
0x99E249: retn
0x99E24A: xor     eax, eax
0x99E24C: xor     edx, edx
0x99E24E: retn
