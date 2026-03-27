0x500830: cmp     byte ptr ds:0B42CDAh, 0
0x500837: setz    al
0x50083A: mov     ds:0B42CDAh, al
0x50083F: test    al, al
0x500841: mov     eax, offset aFrozen; "frozen"
0x500846: jnz     short loc_50084D
0x500848: mov     eax, offset aActive_0; "active"
0x50084D: push    eax
0x50084E: push    offset aRendererAccumu; "Renderer Accumulation : %s"
0x500853: call    Interface_ConsolePrint
0x500858: add     esp, 8
0x50085B: mov     al, 1
0x50085D: retn
