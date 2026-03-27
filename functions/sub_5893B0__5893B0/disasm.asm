0x5893B0: mov     eax, [ecx+24h]
0x5893B3: xor     dl, dl
0x5893B5: test    eax, eax
0x5893B7: jz      short loc_5893BF
0x5893B9: mov     dl, [eax+18h]
0x5893BC: and     dl, 1
0x5893BF: mov     eax, [ecx+10h]
0x5893C2: test    eax, eax
0x5893C4: jz      short loc_5893DC
0x5893C6: mov     ecx, [eax+24h]
0x5893C9: test    ecx, ecx
0x5893CB: jz      short loc_5893D5
0x5893CD: mov     cl, [ecx+18h]
0x5893D0: and     cl, 1
0x5893D3: or      dl, cl
0x5893D5: mov     eax, [eax+10h]
0x5893D8: test    eax, eax
0x5893DA: jnz     short loc_5893C6
0x5893DC: xor     eax, eax
0x5893DE: test    dl, dl
0x5893E0: setz    al
0x5893E3: retn
