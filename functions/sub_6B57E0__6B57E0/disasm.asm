0x6B57E0: fld     [esp+arg_0]
0x6B57E4: fcom    qword ptr ds:0A3D5A8h
0x6B57EA: fnstsw  ax
0x6B57EC: test    ah, 41h
0x6B57EF: jnz     short loc_6B57FB
0x6B57F1: fstp    st
0x6B57F3: mov     eax, 7FFFh
0x6B57F8: retn    4
0x6B57FB: fld     dword ptr ds:0A78418h
0x6B5801: fcomp   st(1)
0x6B5803: fnstsw  ax
0x6B5805: test    ah, 41h
0x6B5808: jnz     short loc_6B5814
0x6B580A: fstp    st
0x6B580C: mov     eax, 0FFFF8000h
0x6B5811: retn    4
0x6B5814: call    Double_To_SInt32
0x6B5819: movsx   eax, ax
0x6B581C: retn    4
