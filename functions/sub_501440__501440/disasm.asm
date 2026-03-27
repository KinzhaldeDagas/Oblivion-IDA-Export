0x501440: cmp     byte ptr ds:0B3BDA1h, 0
0x501447: setz    al
0x50144A: cmp     byte ptr ds:0B361ACh, 0
0x501451: mov     ds:0B3BDA1h, al
0x501456: jz      short loc_501474
0x501458: test    al, al
0x50145A: mov     eax, offset aOn_0
0x50145F: jnz     short loc_501466
0x501461: mov     eax, offset aOff
0x501466: push    eax
0x501467: push    offset aAiProcessing_0; "AI Processing for actors in Low is  %s"
0x50146C: call    Interface_ConsolePrint
0x501471: add     esp, 8
0x501474: mov     al, 1
0x501476: retn
