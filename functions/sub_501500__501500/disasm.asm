0x501500: cmp     byte ptr ds:0B3BDA4h, 0
0x501507: setz    al
0x50150A: cmp     byte ptr ds:0B361ACh, 0
0x501511: mov     ds:0B3BDA4h, al
0x501516: jz      short loc_501534
0x501518: test    al, al
0x50151A: mov     eax, offset aOn_0
0x50151F: jnz     short loc_501526
0x501521: mov     eax, offset aOff
0x501526: push    eax
0x501527: push    offset aAiProcessingOf; "AI Processing of Actor's Editor Schedul"...
0x50152C: call    Interface_ConsolePrint
0x501531: add     esp, 8
0x501534: mov     al, 1
0x501536: retn
