0x47DF80: mov     eax, [esp+Seed]
0x47DF84: test    eax, eax
0x47DF86: jz      short loc_47DF9D
0x47DF88: push    eax; Seed
0x47DF89: call    _srand
0x47DF8E: add     esp, 4
0x47DF91: mov     byte ptr ds:0B069C3h, 0
0x47DF98: jmp     _rand
0x47DF9D: cmp     byte ptr ds:0B069C3h, 0
0x47DFA4: jz      short loc_47DFBD
0x47DFA6: push    0; Time
0x47DFA8: call    __time64
0x47DFAD: push    eax; Seed
0x47DFAE: call    _srand
0x47DFB3: add     esp, 8
0x47DFB6: mov     byte ptr ds:0B069C3h, 0
0x47DFBD: jmp     _rand
