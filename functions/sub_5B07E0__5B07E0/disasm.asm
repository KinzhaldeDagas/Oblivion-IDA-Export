0x5B07E0: push    esi
0x5B07E1: push    3F6h
0x5B07E6: mov     esi, ecx
0x5B07E8: call    InterfaceManager_MenuModeHasFocus
0x5B07ED: add     esp, 4
0x5B07F0: test    al, al
0x5B07F2: jz      short loc_5B0823
0x5B07F4: cmp     byte ptr ds:0B3B3F4h, 0
0x5B07FB: jz      short loc_5B0810
0x5B07FD: push    offset aDrslockopenfai; "DRSLockOpenFail"
0x5B0802: mov     ecx, esi
0x5B0804: call    sub_5AFD50
0x5B0809: mov     byte ptr ds:0B3B3F4h, 0
0x5B0810: push    0FFh
0x5B0815: call    sub_583DF0
0x5B081A: add     esp, 4
0x5B081D: pop     esi
0x5B081E: jmp     sub_5AF960
0x5B0823: pop     esi
0x5B0824: retn
