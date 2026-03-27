0x987637: cmp     dword ptr ds:0BA9E00h, 1
0x98763E: jnz     short loc_987645
0x987640: call    __FF_MSGBANNER
0x987645: push    [esp+arg_0]
0x987649: call    __NMSG_WRITE
0x98764E: push    0FFh; uExitCode
0x987653: call    ___crtExitProcess
