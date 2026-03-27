0x501000: call    ToggleDebugText
0x501005: cmp     byte ptr ds:0B361ACh, 0
0x50100C: jz      short loc_50102F
0x50100E: call    GetInterfaceSingleton0x50
0x501013: test    al, al
0x501015: mov     eax, offset aOn_0
0x50101A: jnz     short loc_501021
0x50101C: mov     eax, offset aOff
0x501021: push    eax
0x501022: push    offset aDebugTextS; "Debug Text -> %s"
0x501027: call    Interface_ConsolePrint
0x50102C: add     esp, 8
0x50102F: mov     al, 1
0x501031: retn
