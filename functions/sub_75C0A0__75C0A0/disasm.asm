0x75C0A0: fld     [esp+arg_0]
0x75C0A4: mov     ecx, [ecx+44h]
0x75C0A7: fst     [esp+arg_0]
0x75C0AB: fcomp   qword ptr ds:0A2FC68h
0x75C0B1: fnstsw  ax
0x75C0B3: test    ah, 5
0x75C0B6: jp      short loc_75C0BE
0x75C0B8: fldz
0x75C0BA: fstp    [esp+arg_0]
0x75C0BE: fld     [esp+arg_0]
0x75C0C2: fcom    qword ptr ds:0A2F928h
0x75C0C8: fnstsw  ax
0x75C0CA: test    ah, 41h
0x75C0CD: jnz     short loc_75C0DB
0x75C0CF: fstp    st
0x75C0D1: fld1
0x75C0D3: fstp    [esp+arg_0]
0x75C0D7: fld     [esp+arg_0]
0x75C0DB: fstp    dword ptr [ecx+64h]
0x75C0DE: retn    4
