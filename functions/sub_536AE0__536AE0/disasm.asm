0x536AE0: mov     eax, [ecx+1Ch]
0x536AE3: test    eax, eax
0x536AE5: jz      short loc_536AFC
0x536AE7: mov     ecx, [esp+arg_0]
0x536AEB: jmp     short loc_536AF0
0x536AED: align 10h
0x536AF0: cmp     [eax+0Ch], ecx
0x536AF3: jz      short loc_536B01
0x536AF5: mov     eax, [eax+4]
0x536AF8: test    eax, eax
0x536AFA: jnz     short loc_536AF0
0x536AFC: xor     al, al
0x536AFE: retn    4
0x536B01: mov     al, 1
0x536B03: retn    4
