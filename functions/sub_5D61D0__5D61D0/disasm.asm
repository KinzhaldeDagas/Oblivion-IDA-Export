0x5D61D0: mov     eax, [esp+arg_0]
0x5D61D4: cmp     eax, 63h ; 'c'
0x5D61D7: push    esi
0x5D61D8: mov     esi, ecx
0x5D61DA: jnz     short loc_5D6205
0x5D61DC: mov     ecx, [esp+4+arg_4]
0x5D61E0: push    0FB0h
0x5D61E5: call    Tile_GetFloat
0x5D61EA: call    Double_To_SInt32
0x5D61EF: push    eax
0x5D61F0: mov     ecx, esi
0x5D61F2: call    sub_5D5B40
0x5D61F7: push    4; int
0x5D61F9: call    sub_57DE50
0x5D61FE: add     esp, 4
0x5D6201: pop     esi
0x5D6202: retn    8
0x5D6205: cmp     eax, 4
0x5D6208: jz      short loc_5D6233
0x5D620A: cmp     eax, 5
0x5D620D: jz      short loc_5D6233
0x5D620F: cmp     eax, 6
0x5D6212: jz      short loc_5D6233
0x5D6214: cmp     eax, 7
0x5D6217: jnz     short loc_5D623D
0x5D6219: mov     ecx, [esi+4]
0x5D621C: push    0FB7h
0x5D6221: call    Tile_GetFloat
0x5D6226: fcomp   dword ptr ds:0A379B4h
0x5D622C: fnstsw  ax
0x5D622E: test    ah, 44h
0x5D6231: jp      short loc_5D623D
0x5D6233: push    4; int
0x5D6235: call    sub_57DE50
0x5D623A: add     esp, 4
0x5D623D: pop     esi
0x5D623E: retn    8
