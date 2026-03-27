0x466B00: fld1
0x466B02: push    ebx
0x466B03: push    esi
0x466B04: push    ecx
0x466B05: fstp    [esp+0Ch+duration]; duration
0x466B08: mov     ebx, 1
0x466B0D: mov     esi, ecx
0x466B0F: push    ebx; unk2
0x466B10: mov     [esi+0ABh], bl
0x466B16: mov     eax, ds:0B38798h
0x466B1B: push    0; unk1
0x466B1D: push    eax; string
0x466B1E: call    GameUI_QueueMessage
0x466B23: add     esp, 10h
0x466B26: push    0
0x466B28: push    offset aQuicksave; "quicksave"
0x466B2D: push    0
0x466B2F: mov     ecx, esi
0x466B31: call    TESSaveLoadGame_LoadGame
0x466B36: test    al, al
0x466B38: jnz     short loc_466B5D
0x466B3A: fld1
0x466B3C: push    ecx
0x466B3D: mov     ecx, ds:0B387B0h
0x466B43: fstp    [esp+0Ch+duration]; duration
0x466B46: push    ebx; unk2
0x466B47: push    0; unk1
0x466B49: push    ecx; string
0x466B4A: call    GameUI_QueueMessage
0x466B4F: add     esp, 10h
0x466B52: xor     al, al
0x466B54: mov     [esi+0ABh], al
0x466B5A: pop     esi
0x466B5B: pop     ebx
0x466B5C: retn
0x466B5D: mov     byte ptr [esi+0ABh], 0
0x466B64: pop     esi
0x466B65: mov     al, bl
0x466B67: pop     ebx
0x466B68: retn
