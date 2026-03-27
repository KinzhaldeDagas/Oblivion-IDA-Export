0x500860: cmp     byte ptr ds:0B42E97h, 0
0x500867: setz    al
0x50086A: mov     ds:0B42E97h, al
0x50086F: test    al, al
0x500871: mov     eax, offset aOn; "on"
0x500876: jnz     short loc_50087D
0x500878: mov     eax, offset aOff_0
0x50087D: push    eax
0x50087E: push    offset aOcclusionQuery; "Occlusion Query : %s"
0x500883: call    Interface_ConsolePrint
0x500888: add     esp, 8
0x50088B: mov     al, 1
0x50088D: retn
