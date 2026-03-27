0x440C40: fld     dword ptr ds:0A2FAACh
0x440C46: mov     eax, ds:0B38BF8h
0x440C4B: push    ecx
0x440C4C: fstp    [esp+4+duration]; duration
0x440C4F: push    0; unk2
0x440C51: push    0; unk1
0x440C53: push    eax; string
0x440C54: call    GameUI_QueueMessage
0x440C59: add     esp, 10h
0x440C5C: call    sub_5791A0
0x440C61: call    sub_5791E0
0x440C66: call    sub_579220
0x440C6B: mov     ecx, ds:0B33398h
0x440C71: mov     byte ptr ds:0B35228h, 1
0x440C78: jmp     sub_40D4D0
