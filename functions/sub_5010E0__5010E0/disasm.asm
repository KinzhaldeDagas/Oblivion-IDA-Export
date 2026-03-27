0x5010E0: cmp     byte ptr ds:0B3BD99h, 0
0x5010E7: setz    al
0x5010EA: cmp     byte ptr ds:0B361ACh, 0
0x5010F1: mov     ds:0B3BD99h, al
0x5010F6: jz      short loc_501114
0x5010F8: test    al, al
0x5010FA: mov     eax, offset aOn_0
0x5010FF: jnz     short loc_501106
0x501101: mov     eax, offset aOff
0x501106: push    eax
0x501107: push    offset aAiDetectionIsS; "AI Detection is  %s"
0x50110C: call    Interface_ConsolePrint
0x501111: add     esp, 8
0x501114: mov     al, 1
0x501116: retn
