0x8A8140: mov     eax, [esp+arg_0]
0x8A8144: and     eax, 3Fh
0x8A8147: add     eax, 0FFFFFFFFh; switch 21 cases
0x8A814A: sub     esp, 0Ch
0x8A814D: cmp     eax, 14h
0x8A8150: ja      def_8A8156; jumptable 008A8156 default case, cases 15,19
0x8A8156: jmp     ds:jpt_8A8156[eax*4]; switch jump
0x8A815D: fld1; jumptable 008A8156 case 1
0x8A815F: fstp    [esp+0Ch+var_C]
0x8A8162: fldz
0x8A8164: fst     [esp+0Ch+var_8]
0x8A8168: mov     eax, [esp+0Ch+arg_4]
0x8A816C: fstp    [esp+0Ch+var_4]
0x8A8170: mov     ecx, [esp+0Ch+var_C]
0x8A8173: mov     edx, [esp+0Ch+var_8]
0x8A8177: mov     [eax], ecx
0x8A8179: mov     ecx, [esp+0Ch+var_4]
0x8A817D: mov     [eax+4], edx
0x8A8180: mov     [eax+8], ecx
0x8A8183: add     esp, 0Ch
0x8A8186: retn
0x8A8187: fld     dword ptr ds:0A37450h; jumptable 008A8156 cases 2,10
0x8A818D: fstp    [esp+0Ch+var_C]
0x8A8190: fld     dword ptr ds:0A9792Ch
0x8A8196: fstp    [esp+0Ch+var_8]
0x8A819A: fld     dword ptr ds:0A97928h
0x8A81A0: mov     eax, [esp+0Ch+arg_4]
0x8A81A4: fstp    [esp+0Ch+var_4]
0x8A81A8: mov     edx, [esp+0Ch+var_C]
0x8A81AB: mov     ecx, [esp+0Ch+var_8]
0x8A81AF: mov     [eax], edx
0x8A81B1: mov     edx, [esp+0Ch+var_4]
0x8A81B5: mov     [eax+4], ecx
0x8A81B8: mov     [eax+8], edx
0x8A81BB: add     esp, 0Ch
0x8A81BE: retn
0x8A81BF: fld     dword ptr ds:0A97924h; jumptable 008A8156 case 3
0x8A81C5: mov     eax, [esp+0Ch+arg_4]
0x8A81C9: fstp    [esp+0Ch+var_C]
0x8A81CC: mov     ecx, [esp+0Ch+var_C]
0x8A81CF: fld     dword ptr ds:0A524B0h
0x8A81D5: mov     [eax], ecx
0x8A81D7: fst     [esp+0Ch+var_8]
0x8A81DB: mov     edx, [esp+0Ch+var_8]
0x8A81DF: fstp    [esp+0Ch+var_4]
0x8A81E3: mov     ecx, [esp+0Ch+var_4]
0x8A81E7: mov     [eax+4], edx
0x8A81EA: mov     [eax+8], ecx
0x8A81ED: add     esp, 0Ch
0x8A81F0: retn
0x8A81F1: fld     dword ptr ds:0A97920h; jumptable 008A8156 case 4
0x8A81F7: fstp    [esp+0Ch+var_C]
0x8A81FA: fld     dword ptr ds:0A9791Ch
0x8A8200: fstp    [esp+0Ch+var_8]
0x8A8204: fld     dword ptr ds:0A97918h
0x8A820A: jmp     short loc_8A81A0
0x8A820C: fld     dword ptr ds:0A5247Ch; jumptable 008A8156 case 5
0x8A8212: fstp    [esp+0Ch+var_C]
0x8A8215: fld     dword ptr ds:0A97914h
0x8A821B: fstp    [esp+0Ch+var_8]
0x8A821F: fld     dword ptr ds:0A73DE4h
0x8A8225: jmp     loc_8A8168
0x8A822A: fld     dword ptr ds:0A37450h; jumptable 008A8156 case 6
0x8A8230: fstp    [esp+0Ch+var_C]
0x8A8233: fld     dword ptr ds:0A97910h
0x8A8239: fstp    [esp+0Ch+var_8]
0x8A823D: fld     dword ptr ds:0A9790Ch
0x8A8243: jmp     loc_8A81A0
0x8A8248: fld     dword ptr ds:0A97908h; jumptable 008A8156 case 7
0x8A824E: fstp    [esp+0Ch+var_C]
0x8A8251: fld     dword ptr ds:0A34F5Ch
0x8A8257: fstp    [esp+0Ch+var_8]
0x8A825B: fld     dword ptr ds:0A37450h
0x8A8261: jmp     loc_8A8168
0x8A8266: fldz; jumptable 008A8156 case 8
0x8A8268: fst     [esp+0Ch+var_C]
0x8A826B: fld1
0x8A826D: fstp    [esp+0Ch+var_8]
0x8A8271: jmp     loc_8A81A0
0x8A8276: fld     dword ptr ds:0A524B0h; jumptable 008A8156 case 9
0x8A827C: fstp    [esp+0Ch+var_C]
0x8A827F: fld     dword ptr ds:0A97904h
0x8A8285: fstp    [esp+0Ch+var_8]
0x8A8289: fld     dword ptr ds:0A63CA4h
0x8A828F: jmp     loc_8A8168
0x8A8294: fld     dword ptr ds:0A97900h; jumptable 008A8156 case 11
0x8A829A: fstp    [esp+0Ch+var_C]
0x8A829D: fld     dword ptr ds:0A52A74h
0x8A82A3: fst     [esp+0Ch+var_8]
0x8A82A7: jmp     loc_8A81A0
0x8A82AC: fld     dword ptr ds:0A97910h; jumptable 008A8156 cases 12,14
0x8A82B2: fstp    [esp+0Ch+var_C]
0x8A82B5: fld     dword ptr ds:0A978FCh
0x8A82BB: fstp    [esp+0Ch+var_8]
0x8A82BF: fld     dword ptr ds:0A41328h
0x8A82C5: jmp     loc_8A8168
0x8A82CA: fld     dword ptr ds:0A97910h; jumptable 008A8156 case 16
0x8A82D0: fstp    [esp+0Ch+var_C]
0x8A82D3: fld     dword ptr ds:0A978F8h
0x8A82D9: fstp    [esp+0Ch+var_8]
0x8A82DD: fld     dword ptr ds:0A41724h
0x8A82E3: jmp     loc_8A81A0
0x8A82E8: fld     dword ptr ds:0A97924h; jumptable 008A8156 cases 13,17
0x8A82EE: fstp    [esp+0Ch+var_C]
0x8A82F1: fld     dword ptr ds:0A34F5Ch
0x8A82F7: fstp    [esp+0Ch+var_8]
0x8A82FB: fld     dword ptr ds:0A978F4h
0x8A8301: jmp     loc_8A8168
0x8A8306: fldz; jumptable 008A8156 case 18
0x8A8308: fst     [esp+0Ch+var_C]
0x8A830B: fld     dword ptr ds:0A41724h
0x8A8311: fstp    [esp+0Ch+var_8]
0x8A8315: jmp     loc_8A81A0
0x8A831A: fld1; jumptable 008A8156 case 20
0x8A831C: fst     [esp+0Ch+var_C]
0x8A831F: fstp    [esp+0Ch+var_8]
0x8A8323: fldz
0x8A8325: jmp     loc_8A8168
0x8A832A: fld1; jumptable 008A8156 case 21
0x8A832C: fstp    [esp+0Ch+var_C]
0x8A832F: fld     dword ptr ds:0A524B0h
0x8A8335: fstp    [esp+0Ch+var_8]
0x8A8339: fldz
0x8A833B: jmp     loc_8A81A0
0x8A8340: mov     ecx, ds:0B25AC4h; jumptable 008A8156 default case, cases 15,19
0x8A8346: mov     eax, [esp+0Ch+arg_4]
0x8A834A: mov     [eax], ecx
0x8A834C: mov     edx, ds:0B25AC8h
0x8A8352: mov     [eax+4], edx
0x8A8355: mov     ecx, ds:0B25ACCh
0x8A835B: mov     [eax+8], ecx
0x8A835E: add     esp, 0Ch
0x8A8361: retn
