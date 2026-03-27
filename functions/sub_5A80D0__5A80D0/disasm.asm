0x5A80D0: mov     eax, ds:0B333C4h
0x5A80D5: push    0
0x5A80D7: push    eax
0x5A80D8: mov     ecx, offset ActorProcessManager_ptr
0x5A80DD: call    sub_6762B0
0x5A80E2: cmp     eax, 3; switch 4 cases
0x5A80E5: ja      def_5A80EB
0x5A80EB: jmp     ds:jpt_5A80EB[eax*4]; switch jump
0x5A80F2: fld     dword ptr ds:0A3D8F0h; jumptable 005A80EB case 0
0x5A80F8: mov     ecx, ds:0B3B354h
0x5A80FE: fst     dword ptr ds:0B140B8h
0x5A8104: sub     esp, 8
0x5A8107: fld     dword ptr ds:0B140C4h
0x5A810D: fstp    [esp+8+var_4]; float
0x5A8111: fstp    [esp+8+var_8]; float
0x5A8114: push    0FB6h
0x5A8119: call    Tile_GetFloat
0x5A811E: push    ecx
0x5A811F: mov     ecx, ds:0B3B354h; int
0x5A8125: fstp    [esp+0Ch+var_C]; float
0x5A8128: push    0FB6h; int
0x5A812D: call    sub_589980
0x5A8132: mov     dword ptr ds:0B3B368h, 0
0x5A813C: mov     byte ptr ds:0B3B361h, 1
0x5A8143: retn
0x5A8144: fld     dword ptr ds:0A3D8F0h; jumptable 005A80EB case 1
0x5A814A: mov     ecx, ds:0B3B354h
0x5A8150: fst     dword ptr ds:0B140B8h
0x5A8156: sub     esp, 8
0x5A8159: fld     dword ptr ds:0B140C4h
0x5A815F: fstp    [esp+8+var_4]; float
0x5A8163: fstp    [esp+8+var_8]; float
0x5A8166: push    0FB6h
0x5A816B: call    Tile_GetFloat
0x5A8170: push    ecx
0x5A8171: mov     ecx, ds:0B3B354h; int
0x5A8177: fstp    [esp+0Ch+var_C]; float
0x5A817A: push    0FB6h; int
0x5A817F: call    sub_589980
0x5A8184: mov     eax, 1
0x5A8189: mov     ds:0B3B361h, al
0x5A818E: mov     ds:0B3B368h, eax
0x5A8193: retn
0x5A8194: fld     dword ptr ds:0A3D8F0h; jumptable 005A80EB case 2
0x5A819A: mov     ecx, ds:0B3B354h
0x5A81A0: fst     dword ptr ds:0B140B8h
0x5A81A6: sub     esp, 8
0x5A81A9: fld     dword ptr ds:0B140C4h
0x5A81AF: fstp    [esp+8+var_4]; float
0x5A81B3: fstp    [esp+8+var_8]; float
0x5A81B6: push    0FB6h
0x5A81BB: call    Tile_GetFloat
0x5A81C0: push    ecx
0x5A81C1: mov     ecx, ds:0B3B354h; int
0x5A81C7: fstp    [esp+0Ch+var_C]; float
0x5A81CA: push    0FB6h; int
0x5A81CF: call    sub_589980
0x5A81D4: mov     dword ptr ds:0B3B368h, 2
0x5A81DE: mov     byte ptr ds:0B3B361h, 1
0x5A81E5: retn
0x5A81E6: fld     dword ptr ds:0A57EF8h; jumptable 005A80EB case 3
0x5A81EC: mov     ecx, ds:0B3B354h
0x5A81F2: fst     dword ptr ds:0B140B8h
0x5A81F8: sub     esp, 8
0x5A81FB: fld     dword ptr ds:0B140C4h
0x5A8201: fstp    [esp+8+var_4]; float
0x5A8205: fstp    [esp+8+var_8]; float
0x5A8208: push    0FB6h
0x5A820D: call    Tile_GetFloat
0x5A8212: push    ecx
0x5A8213: mov     ecx, ds:0B3B354h; int
0x5A8219: fstp    [esp+0Ch+var_C]; float
0x5A821C: push    0FB6h; int
0x5A8221: call    sub_589980
0x5A8226: mov     dword ptr ds:0B3B368h, 3
0x5A8230: mov     byte ptr ds:0B3B361h, 1
