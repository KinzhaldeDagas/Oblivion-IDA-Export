0x88FEB0: mov     eax, [esp+arg_0]
0x88FEB4: mov     edx, [eax+28h]
0x88FEB7: mov     eax, [edx+1Ch]
0x88FEBA: and     eax, 3Fh
0x88FEBD: cmp     al, 14h
0x88FEBF: jnz     short locret_88FECE
0x88FEC1: mov     eax, [ecx+64h]
0x88FEC4: test    eax, eax
0x88FEC6: jbe     short locret_88FECE
0x88FEC8: add     eax, 0FFFFFFFFh
0x88FECB: mov     [ecx+64h], eax
0x88FECE: retn    4
