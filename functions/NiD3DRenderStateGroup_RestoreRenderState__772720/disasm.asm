0x772720: push    esi
0x772721: mov     esi, [ecx+10h]
0x772724: test    esi, esi
0x772726: jz      short loc_772747
0x772728: jmp     short loc_772730
0x77272A: align 10h
0x772730: mov     ecx, ds:0B427A4h
0x772736: mov     eax, [ecx]
0x772738: mov     edx, [esi]
0x77273A: mov     eax, [eax+5Ch]
0x77273D: push    edx
0x77273E: call    eax
0x772740: mov     esi, [esi+8]
0x772743: test    esi, esi
0x772745: jnz     short loc_772730
0x772747: xor     eax, eax
0x772749: pop     esi
0x77274A: retn
