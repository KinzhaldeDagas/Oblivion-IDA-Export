0x532DB0: test    ecx, ecx
0x532DB2: jz      short loc_532DC0
0x532DB4: mov     eax, [ecx+8]
0x532DB7: test    eax, eax
0x532DB9: jz      short loc_532DC0
0x532DBB: mov     eax, [eax+0Ch]
0x532DBE: jmp     short loc_532DC2
0x532DC0: xor     eax, eax
0x532DC2: test    eax, eax
0x532DC4: jz      short loc_532DCA
0x532DC6: mov     eax, [eax+8]
0x532DC9: retn
0x532DCA: xor     eax, eax
0x532DCC: retn
