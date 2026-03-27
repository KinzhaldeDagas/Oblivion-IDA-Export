0x507930: cmp     byte ptr ds:0B3B908h, 0
0x507937: setz    al
0x50793A: mov     ds:0B3B908h, al
0x50793F: test    al, al
0x507941: mov     eax, offset aShown_; "shown."
0x507946: jnz     short loc_50794D
0x507948: mov     eax, offset aHidden_; "hidden."
0x50794D: push    eax
0x50794E: push    offset aVerboseMessage; "Verbose messages %s"
0x507953: call    Interface_ConsolePrint
0x507958: add     esp, 8
0x50795B: mov     al, 1
0x50795D: retn
