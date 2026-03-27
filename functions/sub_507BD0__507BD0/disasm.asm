0x507BD0: cmp     byte ptr ds:0B3355Ch, 0
0x507BD7: setz    al
0x507BDA: mov     ds:0B3355Ch, al
0x507BDF: test    al, al
0x507BE1: mov     eax, offset aShown_; "shown."
0x507BE6: jnz     short loc_507BED
0x507BE8: mov     eax, offset aHidden_; "hidden."
0x507BED: push    eax
0x507BEE: push    offset aMagicStatsS; "Magic stats %s"
0x507BF3: call    Interface_ConsolePrint
0x507BF8: add     esp, 8
0x507BFB: mov     al, 1
0x507BFD: retn
