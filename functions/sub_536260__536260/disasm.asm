0x536260: mov     eax, [esp+arg_0]
0x536264: cmp     eax, 9; switch 10 cases
0x536267: ja      short def_536269
0x536269: jmp     ds:jpt_536269[eax*4]; switch jump
0x536270: fld     dword ptr ds:0B37A78h; jumptable 00536269 case 0
0x536276: retn
0x536277: fld     dword ptr ds:0B37A80h; jumptable 00536269 case 1
0x53627D: retn
0x53627E: fld     dword ptr ds:0B37A88h; jumptable 00536269 case 2
0x536284: retn
0x536285: fld     dword ptr ds:0B37A90h; jumptable 00536269 case 3
0x53628B: retn
0x53628C: fld     dword ptr ds:0B37A98h; jumptable 00536269 case 4
0x536292: retn
0x536293: fld     dword ptr ds:0B37AA0h; jumptable 00536269 case 5
0x536299: retn
0x53629A: fld     dword ptr ds:0B37AA8h; jumptable 00536269 case 6
0x5362A0: retn
0x5362A1: fld     dword ptr ds:0B37AB0h; jumptable 00536269 case 7
0x5362A7: retn
0x5362A8: fld     dword ptr ds:0B37AB8h; jumptable 00536269 case 8
0x5362AE: retn
0x5362AF: fld     dword ptr ds:0B37AC0h; jumptable 00536269 case 9
0x5362B5: retn
