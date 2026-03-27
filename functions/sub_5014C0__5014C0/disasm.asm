0x5014C0: cmp     byte ptr ds:0B3BDA2h, 0
0x5014C7: setz    al
0x5014CA: cmp     byte ptr ds:0B361ACh, 0
0x5014D1: mov     ds:0B3BDA2h, al
0x5014D6: jz      short loc_5014F4
0x5014D8: test    al, al
0x5014DA: mov     eax, offset aOn_0
0x5014DF: jnz     short loc_5014E6
0x5014E1: mov     eax, offset aOff
0x5014E6: push    eax
0x5014E7: push    offset aAiProcessing_2; "AI Processing for actors in Middle High"...
0x5014EC: call    Interface_ConsolePrint
0x5014F1: add     esp, 8
0x5014F4: mov     al, 1
0x5014F6: retn
