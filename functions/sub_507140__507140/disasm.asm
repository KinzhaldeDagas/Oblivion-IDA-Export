0x507140: push    ecx
0x507141: cmp     byte ptr ds:0B43074h, 0; HDR material exposure selector: B43074 nonzero chooses B4320C, otherwise B43208. Return path stores/reloads the value as float.
0x507148: jz      short loc_507158
0x50714A: fld     dword ptr ds:0B4320Ch
0x507150: fstp    [esp+4+var_4]
0x507153: fld     [esp+4+var_4]
0x507156: pop     ecx
0x507157: retn
0x507158: fld     dword ptr ds:0B43208h
0x50715E: fstp    [esp+4+var_4]
0x507161: fld     [esp+4+var_4]
0x507164: pop     ecx
0x507165: retn
