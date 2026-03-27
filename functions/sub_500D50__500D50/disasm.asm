0x500D50: call    sub_4F9FA0
0x500D55: test    al, al
0x500D57: setz    al
0x500D5A: push    eax
0x500D5B: call    sub_4F9F90
0x500D60: add     esp, 4
0x500D63: call    sub_4F9FA0
0x500D68: test    al, al
0x500D6A: mov     eax, offset aEnabled_; "enabled."
0x500D6F: jnz     short loc_500D76
0x500D71: mov     eax, offset aDisabled_; "disabled."
0x500D76: push    eax
0x500D77: push    offset aScriptProcessi; "Script processing %s"
0x500D7C: call    Interface_ConsolePrint
0x500D81: add     esp, 8
0x500D84: mov     al, 1
0x500D86: retn
