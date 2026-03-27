0x507A00: cmp     byte ptr ds:0B1206Ch, 0
0x507A07: setz    al
0x507A0A: mov     ds:0B1206Ch, al
0x507A0F: test    al, al
0x507A11: mov     eax, offset aEnabled__0; "Enabled."
0x507A16: jnz     short loc_507A1D
0x507A18: mov     eax, offset aDisabled__0; "Disabled."
0x507A1D: push    eax
0x507A1E: push    offset aNpcFacialEmoti; "NPC Facial Emotions %s"
0x507A23: call    Interface_ConsolePrint
0x507A28: add     esp, 8
0x507A2B: mov     al, 1
0x507A2D: retn
