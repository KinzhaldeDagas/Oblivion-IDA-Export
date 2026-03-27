0x507BA0: cmp     byte ptr ds:0B36508h, 0
0x507BA7: setz    al
0x507BAA: mov     ds:0B36508h, al
0x507BAF: test    al, al
0x507BB1: mov     eax, offset aShown_; "shown."
0x507BB6: jnz     short loc_507BBD
0x507BB8: mov     eax, offset aHidden_; "hidden."
0x507BBD: push    eax
0x507BBE: push    offset aConversationSt; "Conversation stats %s"
0x507BC3: call    Interface_ConsolePrint
0x507BC8: add     esp, 8
0x507BCB: mov     al, 1
0x507BCD: retn
