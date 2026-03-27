0x5A8B20: push    ecx
0x5A8B21: fldz
0x5A8B23: mov     eax, ds:0B3B358h
0x5A8B28: test    eax, eax
0x5A8B2A: fstp    [esp+4+Src]
0x5A8B2D: jz      short loc_5A8B3E
0x5A8B2F: cmp     byte ptr ds:0B14E90h, 0
0x5A8B36: jnz     short loc_5A8B3E
0x5A8B38: fld     dword ptr [eax+58h]
0x5A8B3B: fstp    [esp+4+Src]
0x5A8B3E: mov     ecx, ds:0B33B00h
0x5A8B44: push    4; Size
0x5A8B46: lea     eax, [esp+8+Src]
0x5A8B4A: push    eax; Src
0x5A8B4B: call    SaveLoad_SaveData
0x5A8B50: pop     ecx
0x5A8B51: retn
