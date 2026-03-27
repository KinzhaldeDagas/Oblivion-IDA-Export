0x7EB010: sub     esp, 8
0x7EB013: cmp     byte ptr ds:0B2D91Ch, 0
0x7EB01A: jz      short loc_7EB077
0x7EB01C: cmp     [esp+8+arg_0], 0
0x7EB021: jz      short loc_7EB034
0x7EB023: fld     dword ptr ds:0B4612Ch
0x7EB029: fstp    [esp+8+var_8]
0x7EB02C: fld     dword ptr ds:0A3744Ch
0x7EB032: jmp     short loc_7EB03F
0x7EB034: fld     dword ptr ds:0B46128h
0x7EB03A: fstp    [esp+8+var_8]
0x7EB03D: fld1
0x7EB03F: fstp    [esp+8+var_4]
0x7EB043: fld     dword ptr ds:0B46124h
0x7EB049: fld     [esp+8+var_8]
0x7EB04C: fcom    st(1)
0x7EB04E: fnstsw  ax
0x7EB050: fstp    st(1)
0x7EB052: test    ah, 5
0x7EB055: jnp     short loc_7EB06B
0x7EB057: fstp    dword ptr ds:0B46124h
0x7EB05D: fld     [esp+8+var_4]
0x7EB061: fstp    dword ptr ds:0B46120h
0x7EB067: add     esp, 8
0x7EB06A: retn
0x7EB06B: fstp    st
0x7EB06D: fld     [esp+8+var_4]
0x7EB071: fstp    dword ptr ds:0B46120h
0x7EB077: add     esp, 8
0x7EB07A: retn
