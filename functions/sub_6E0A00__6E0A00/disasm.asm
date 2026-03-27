0x6E0A00: test    byte ptr [ecx+40h], 1
0x6E0A04: mov     eax, offset aAmbient; "Ambient"
0x6E0A09: jnz     short locret_6E0A10
0x6E0A0B: mov     eax, offset aDiffuse; "Diffuse"
0x6E0A10: retn
