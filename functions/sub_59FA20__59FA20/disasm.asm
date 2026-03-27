0x59FA20: mov     eax, [esp+arg_0]
0x59FA24: add     eax, 0FFFFFFF2h; switch 23 cases
0x59FA27: cmp     eax, 16h
0x59FA2A: ja      short def_59FA33; jumptable 0059FA33 default case, cases 20-33,35
0x59FA2C: movzx   eax, ds:byte_59FA94[eax]
0x59FA33: jmp     ds:jpt_59FA33[eax*4]; switch jump
0x59FA3A: mov     eax, [ecx+4Ch]; jumptable 0059FA33 case 36
0x59FA3D: retn    4
0x59FA40: mov     eax, [ecx+54h]; jumptable 0059FA33 case 17
0x59FA43: retn    4
0x59FA46: mov     eax, [ecx+50h]; jumptable 0059FA33 case 16
0x59FA49: retn    4
0x59FA4C: mov     eax, [ecx+5Ch]; jumptable 0059FA33 case 19
0x59FA4F: retn    4
0x59FA52: mov     eax, [ecx+58h]; jumptable 0059FA33 case 18
0x59FA55: retn    4
0x59FA58: mov     eax, [ecx+40h]; jumptable 0059FA33 case 34
0x59FA5B: retn    4
0x59FA5E: mov     eax, [ecx+44h]; jumptable 0059FA33 case 14
0x59FA61: retn    4
0x59FA64: mov     eax, [ecx+48h]; jumptable 0059FA33 case 15
0x59FA67: retn    4
0x59FA6A: xor     eax, eax; jumptable 0059FA33 default case, cases 20-33,35
0x59FA6C: retn    4
