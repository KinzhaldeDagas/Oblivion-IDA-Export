0x5081B0: cmp     byte ptr ds:0B42E86h, 0
0x5081B7: setz    al
0x5081BA: cmp     byte ptr ds:0B361ACh, 0
0x5081C1: mov     ds:0B42E86h, al
0x5081C6: jz      short loc_5081E4
0x5081C8: test    al, al
0x5081CA: mov     eax, offset aOn_0
0x5081CF: jnz     short loc_5081D6
0x5081D1: mov     eax, offset aOff
0x5081D6: push    eax
0x5081D7: push    offset aLiteBriteS; "Lite Brite -> %s"
0x5081DC: call    Interface_ConsolePrint
0x5081E1: add     esp, 8
0x5081E4: mov     al, 1
0x5081E6: retn
