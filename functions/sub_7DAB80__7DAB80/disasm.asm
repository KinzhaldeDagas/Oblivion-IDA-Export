0x7DAB80: mov     ecx, ds:0B42F48h
0x7DAB86: add     ecx, 0FFFFFFFFh; switch 7 cases
0x7DAB89: xor     eax, eax
0x7DAB8B: cmp     ecx, 6
0x7DAB8E: ja      def_7DAB94
0x7DAB94: jmp     ds:jpt_7DAB94[ecx*4]; switch jump
0x7DAB9B: mov     eax, 1; jumptable 007DAB94 case 1
0x7DABA0: retn
0x7DABA1: mov     eax, 2; jumptable 007DAB94 case 2
0x7DABA6: retn
0x7DABA7: mov     eax, 5; jumptable 007DAB94 case 3
0x7DABAC: retn
0x7DABAD: mov     eax, 8; jumptable 007DAB94 case 4
0x7DABB2: retn
0x7DABB3: cmp     ds:0B42EA5h, al; jumptable 007DAB94 case 5
0x7DABB9: jz      short loc_7DABD8
0x7DABBB: cmp     ds:0B43070h, al
0x7DABC1: jz      short loc_7DABD2
0x7DABC3: xor     eax, eax
0x7DABC5: cmp     ds:0B43071h, al
0x7DABCB: setnz   al
0x7DABCE: add     eax, 0Ch
0x7DABD1: retn
0x7DABD2: mov     eax, 4
0x7DABD7: retn
0x7DABD8: cmp     ds:0B43070h, al
0x7DABDE: jz      short loc_7DABEF
0x7DABE0: xor     eax, eax
0x7DABE2: cmp     ds:0B43071h, al
0x7DABE8: setnz   al
0x7DABEB: add     eax, 0Ah
0x7DABEE: retn
0x7DABEF: mov     eax, 3
0x7DABF4: retn
0x7DABF5: cmp     ds:0B42EA5h, al; jumptable 007DAB94 case 6
0x7DABFB: jz      short loc_7DAC1A
0x7DABFD: cmp     ds:0B43070h, al
0x7DAC03: jz      short loc_7DAC14
0x7DAC05: xor     eax, eax
0x7DAC07: cmp     ds:0B43071h, al
0x7DAC0D: setnz   al
0x7DAC10: add     eax, 10h
0x7DAC13: retn
0x7DAC14: mov     eax, 7
0x7DAC19: retn
0x7DAC1A: cmp     ds:0B43070h, al
0x7DAC20: jz      short loc_7DAC31
0x7DAC22: xor     eax, eax
0x7DAC24: cmp     ds:0B43071h, al
0x7DAC2A: setnz   al
0x7DAC2D: add     eax, 0Eh
0x7DAC30: retn
0x7DAC31: mov     eax, 6
0x7DAC36: retn
0x7DAC37: cmp     ds:0B43070h, al; jumptable 007DAB94 case 7
0x7DAC3D: jz      short loc_7DAC4E
0x7DAC3F: xor     eax, eax
0x7DAC41: cmp     ds:0B43071h, al
0x7DAC47: setnz   al
0x7DAC4A: add     eax, 12h
0x7DAC4D: retn
0x7DAC4E: mov     eax, 9
