0x5939F4: mov     ecx, [esp+arg_14]
0x5939F8: test    ecx, ecx
0x5939FA: jz      short AlchMenu_Create___HandleRERT
0x5939FC: mov     eax, ds:0B333C4h
0x593A01: push    eax
0x593A02: call    sub_4851B0
0x593A07: push    eax
0x593A08: push    offset aIcons; "Icons"
0x593A0D: lea     ecx, [esp+8+arg_1C]
0x593A11: push    offset aSS_2; "%s\\%s"
0x593A16: push    ecx
0x593A17: call    __sprintf
0x593A1C: mov     ecx, [esi+38h]
0x593A1F: add     esp, 10h
0x593A22: lea     edx, [esp+arg_1C]
0x593A26: push    edx
0x593A27: push    0FE6h
0x593A2C: call    Tile_SetString
0x593A31: fld     dword ptr ds:0A379B4h
0x593A37: push    ecx
0x593A38: mov     ecx, [esi+38h]; this
0x593A3B: fstp    [esp+4+a2]; a3
0x593A3E: push    0FA1h; a2
0x593A43: call    Tile_SetFloat
