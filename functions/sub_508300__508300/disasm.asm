0x508300: cmp     byte ptr ds:0B14B74h, 0
0x508307: setz    al
0x50830A: cmp     byte ptr ds:0B361ACh, 0
0x508311: mov     ds:0B14B74h, al
0x508316: jz      short loc_508334
0x508318: test    al, al
0x50831A: mov     eax, offset aOn_0
0x50831F: jnz     short loc_508326
0x508321: mov     eax, offset aOff
0x508326: push    eax
0x508327: push    offset aAllCombatAiPro; "All Combat AI processing is %s"
0x50832C: call    Interface_ConsolePrint
0x508331: add     esp, 8
0x508334: mov     al, 1
0x508336: retn
