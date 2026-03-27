0x5D3230: push    0Bh; int
0x5D3232: call    sub_57DE50
0x5D3237: mov     ecx, ds:0B33B00h
0x5D323D: add     esp, 4
0x5D3240: push    0; int
0x5D3242: push    0; Str
0x5D3244: push    0; int
0x5D3246: call    TESSaveLoadGame_SaveGame?
0x5D324B: push    40Fh
0x5D3250: call    Menu_GetOpenMenuTile
0x5D3255: add     esp, 4
0x5D3258: test    eax, eax
0x5D325A: jz      short locret_5D3282
0x5D325C: fld     dword ptr ds:0A30634h
0x5D3262: mov     eax, ds:0B387D0h
0x5D3267: push    ecx
0x5D3268: fstp    [esp+4+duration]; duration
0x5D326B: push    1; unk2
0x5D326D: push    0; unk1
0x5D326F: push    eax; string
0x5D3270: call    GameUI_QueueMessage
0x5D3275: add     esp, 10h
0x5D3278: call    sub_5D2CF0
0x5D327D: jmp     sub_5BDA20
0x5D3282: retn
