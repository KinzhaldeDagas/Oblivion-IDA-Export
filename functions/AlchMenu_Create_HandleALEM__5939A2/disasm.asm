0x5939A2: test    ebx, ebx
0x5939A4: jz      short AlchMenu_Create___HandleCALC
0x5939A6: mov     eax, ds:0B333C4h
0x5939AB: push    eax
0x5939AC: mov     ecx, ebx
0x5939AE: call    sub_4851B0
0x5939B3: push    eax
0x5939B4: push    offset aIcons; "Icons"
0x5939B9: lea     ecx, [esp+8+arg_1C]
0x5939BD: push    offset aSS_2; "%s\\%s"
0x5939C2: push    ecx
0x5939C3: call    __sprintf
0x5939C8: mov     ecx, [esi+34h]
0x5939CB: add     esp, 10h
0x5939CE: lea     edx, [esp+arg_1C]
0x5939D2: push    edx
0x5939D3: push    0FE6h
0x5939D8: call    Tile_SetString
0x5939DD: fld     dword ptr ds:0A379B4h
0x5939E3: push    ecx
0x5939E4: mov     ecx, [esi+34h]; this
0x5939E7: fstp    [esp+4+a2]; a3
0x5939EA: push    0FA1h; a2
0x5939EF: call    Tile_SetFloat
