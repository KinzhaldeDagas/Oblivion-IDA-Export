0x506990: cmp     byte ptr ds:0B1437Ch, 0
0x506997: setz    al
0x50699A: cmp     byte ptr ds:0B361ACh, 0
0x5069A1: mov     ds:0B1437Ch, al
0x5069A6: jz      short loc_5069C4
0x5069A8: test    al, al
0x5069AA: mov     eax, offset aDisabled_0; "DISABLED"
0x5069AF: jz      short loc_5069B6
0x5069B1: mov     eax, offset aEnabled; "ENABLED"
0x5069B6: push    eax
0x5069B7: push    offset aFogOfWarS_; "Fog of war - %s."
0x5069BC: call    Interface_ConsolePrint
0x5069C1: add     esp, 8
0x5069C4: mov     al, 1
0x5069C6: retn
