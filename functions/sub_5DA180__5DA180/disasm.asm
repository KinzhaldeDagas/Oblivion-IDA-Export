0x5DA180: push    3EBh
0x5DA185: call    InterfaceManager_MenuModeHasFocus
0x5DA18A: add     esp, 4
0x5DA18D: test    al, al
0x5DA18F: jz      short locret_5DA19F
0x5DA191: cmp     byte ptr ds:0B3B43Dh, 0
0x5DA198: jz      short locret_5DA19F
0x5DA19A: jmp     sub_5C1000
0x5DA19F: retn
