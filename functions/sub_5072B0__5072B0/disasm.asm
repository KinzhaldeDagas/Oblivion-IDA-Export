0x5072B0: mov     eax, [esp+arg_8]
0x5072B4: test    eax, eax
0x5072B6: jz      short loc_5072C3
0x5072B8: mov     ecx, [eax+8]
0x5072BB: shr     ecx, 0Eh
0x5072BE: test    cl, 1
0x5072C1: jz      short loc_5072CB
0x5072C3: mov     eax, [esp+arg_10]
0x5072C7: test    eax, eax
0x5072C9: jz      short loc_507315
0x5072CB: mov     cl, ds:0B09E24h
0x5072D1: cmp     cl, 0FFh
0x5072D4: mov     eax, [eax+0Ch]
0x5072D7: jle     short loc_507306
0x5072D9: cmp     eax, ds:0B361C8h
0x5072DF: jnz     short loc_507306
0x5072E1: mov     eax, [esp+arg_18]
0x5072E5: movsx   edx, cl
0x5072E8: mov     [esp+arg_8], edx
0x5072EC: fild    [esp+arg_8]
0x5072F0: fstp    qword ptr [eax]
0x5072F2: mov     byte ptr ds:0B09E24h, 0FFh
0x5072F9: mov     dword ptr ds:0B361C8h, 0
0x507303: mov     al, 1
0x507305: retn
0x507306: fld     qword ptr ds:0A3D360h
0x50730C: mov     ecx, [esp+arg_18]
0x507310: fstp    qword ptr [ecx]
0x507312: mov     al, 1
0x507314: retn
0x507315: xor     al, al
0x507317: retn
