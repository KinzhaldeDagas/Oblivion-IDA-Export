0x6A7260: mov     eax, ds:0B333C4h
0x6A7265: test    eax, eax
0x6A7267: jz      short loc_6A726E
0x6A7269: add     eax, 68h ; 'h'
0x6A726C: jmp     short loc_6A7270
0x6A726E: xor     eax, eax
0x6A7270: cmp     [ecx+20h], eax
0x6A7273: jnz     short SunDamageEffect_DoesHealthDmg___Return_False
0x6A7275: call    sub_6A6AF0
0x6A727A: fcomp   dword ptr ds:0A34BA0h
0x6A7280: fnstsw  ax
0x6A7282: test    ah, 41h
0x6A7285: jnz     short SunDamageEffect_DoesHealthDmg___Return_False
0x6A7287: mov     al, 1
0x6A7289: retn
