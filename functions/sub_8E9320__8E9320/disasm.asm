0x8E9320: mov     edx, [esp+arg_0]
0x8E9324: fld     dword ptr [edx+14h]
0x8E9327: fld     dword ptr [edx]
0x8E9329: fst     [esp+arg_0]
0x8E932D: fcomp   st(1)
0x8E932F: fnstsw  ax
0x8E9331: test    ah, 41h
0x8E9334: jnz     short loc_8E933C
0x8E9336: fstp    st
0x8E9338: fld     [esp+arg_0]
0x8E933C: mov     eax, [edx+28h]
0x8E933F: mov     [esp+arg_0], eax
0x8E9343: fcom    [esp+arg_0]
0x8E9347: fnstsw  ax
0x8E9349: test    ah, 41h
0x8E934C: jz      short loc_8E9354
0x8E934E: fstp    st
0x8E9350: fld     [esp+arg_0]
0x8E9354: fcom    dword ptr ds:0A2FAA8h
0x8E935A: fnstsw  ax
0x8E935C: test    ah, 41h
0x8E935F: jnz     short loc_8E9374
0x8E9361: fld     dword ptr ds:0A2F948h
0x8E9367: fdiv    st, st(1)
0x8E9369: fstp    dword ptr [ecx+0C4h]
0x8E936F: fstp    st
0x8E9371: retn    4
0x8E9374: mov     dword ptr [ecx+0C4h], 0
0x8E937E: fstp    st
0x8E9380: retn    4
