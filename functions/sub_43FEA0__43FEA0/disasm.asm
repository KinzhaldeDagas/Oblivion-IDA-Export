0x43FEA0: mov     edx, [esp+arg_0]
0x43FEA4: push    esi
0x43FEA5: mov     esi, ds:0B051DCh
0x43FEAB: push    edi
0x43FEAC: xor     eax, eax
0x43FEAE: mov     edi, edi
0x43FEB0: cmp     eax, esi
0x43FEB2: jnb     short loc_43FEC8
0x43FEB4: mov     edi, [ecx+3Ch]
0x43FEB7: cmp     [edi+eax*4], edx
0x43FEBA: jz      short loc_43FEC1
0x43FEBC: add     eax, 1
0x43FEBF: jmp     short loc_43FEB0
0x43FEC1: pop     edi
0x43FEC2: mov     al, 1
0x43FEC4: pop     esi
0x43FEC5: retn    4
0x43FEC8: pop     edi
0x43FEC9: xor     al, al
0x43FECB: pop     esi
0x43FECC: retn    4
