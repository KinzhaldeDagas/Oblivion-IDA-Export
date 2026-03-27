0x75D400: fld     [esp+arg_0]
0x75D404: mov     ecx, [ecx+44h]
0x75D407: fst     [esp+arg_0]
0x75D40B: fcomp   qword ptr ds:0A2FC68h
0x75D411: fnstsw  ax
0x75D413: test    ah, 5
0x75D416: jp      short loc_75D41E
0x75D418: fldz
0x75D41A: fstp    [esp+arg_0]
0x75D41E: fld     [esp+arg_0]
0x75D422: fcom    qword ptr ds:0A2F928h
0x75D428: fnstsw  ax
0x75D42A: test    ah, 41h
0x75D42D: jnz     short loc_75D43B
0x75D42F: fstp    st
0x75D431: fld1
0x75D433: fstp    [esp+arg_0]
0x75D437: fld     [esp+arg_0]
0x75D43B: fstp    dword ptr [ecx+58h]
0x75D43E: retn    4
