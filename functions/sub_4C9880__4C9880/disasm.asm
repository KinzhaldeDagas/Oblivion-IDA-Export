0x4C9880: mov     al, [ecx+24h]
0x4C9883: test    al, 20h
0x4C9885: jz      short loc_4C988A
0x4C9887: mov     al, 1
0x4C9889: retn
0x4C988A: shr     eax, 6
0x4C988D: and     al, 1
0x4C988F: retn
