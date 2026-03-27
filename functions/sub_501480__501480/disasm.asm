0x501480: cmp     byte ptr ds:0B3BDA3h, 0
0x501487: setz    al
0x50148A: cmp     byte ptr ds:0B361ACh, 0
0x501491: mov     ds:0B3BDA3h, al
0x501496: jz      short loc_5014B4
0x501498: test    al, al
0x50149A: mov     eax, offset aOn_0
0x50149F: jnz     short loc_5014A6
0x5014A1: mov     eax, offset aOff
0x5014A6: push    eax
0x5014A7: push    offset aAiProcessing_1; "AI Processing for actors in Middle Low "...
0x5014AC: call    Interface_ConsolePrint
0x5014B1: add     esp, 8
0x5014B4: mov     al, 1
0x5014B6: retn
