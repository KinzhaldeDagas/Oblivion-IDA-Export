0x500E00: call    sub_5793B0
0x500E05: call    sub_579400
0x500E0A: test    al, al
0x500E0C: mov     eax, offset aShown_; "shown."
0x500E11: jnz     short loc_500E18
0x500E13: mov     eax, offset aHidden_; "hidden."
0x500E18: push    eax
0x500E19: push    offset aToggleFullHelp; "Toggle Full Help %s"
0x500E1E: call    Interface_ConsolePrint
0x500E23: add     esp, 8
0x500E26: mov     al, 1
0x500E28: retn
