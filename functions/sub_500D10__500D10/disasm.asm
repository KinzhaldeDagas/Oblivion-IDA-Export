0x500D10: call    GetGodMode
0x500D15: test    al, al
0x500D17: setz    al
0x500D1A: push    eax
0x500D1B: call    sub_65D810
0x500D20: add     esp, 4
0x500D23: call    GetGodMode
0x500D28: test    al, al
0x500D2A: mov     eax, offset aEnabled_; "enabled."
0x500D2F: jnz     short loc_500D36
0x500D31: mov     eax, offset aDisabled_; "disabled."
0x500D36: push    eax
0x500D37: push    offset aGodModeS; "God Mode %s"
0x500D3C: call    Interface_ConsolePrint
0x500D41: add     esp, 8
0x500D44: mov     al, 1
0x500D46: retn
