0x8908E0: fld     [esp+arg_0]
0x8908E4: fst     [esp+arg_0]
0x8908E8: fldz
0x8908EA: fcom    dword ptr [ecx+308h]
0x8908F0: fnstsw  ax
0x8908F2: test    ah, 5
0x8908F5: jp      short loc_890953
0x8908F7: fstp    st
0x8908F9: fld     [esp+arg_4]
0x8908FD: fld     dword ptr [ecx+308h]
0x890903: fcomp   st(1)
0x890905: fnstsw  ax
0x890907: test    ah, 41h
0x89090A: jnz     short loc_890912
0x89090C: fst     [esp+arg_0]
0x890910: jmp     short loc_89091C
0x890912: fld     dword ptr [ecx+308h]
0x890918: fstp    [esp+arg_0]
0x89091C: fld     dword ptr [ecx+304h]
0x890922: fmul    [esp+arg_0]
0x890926: faddp   st(2), st
0x890928: fxch    st(1)
0x89092A: fstp    [esp+arg_0]
0x89092E: fsubr   dword ptr [ecx+308h]
0x890934: fstp    dword ptr [ecx+308h]
0x89093A: fld     dword ptr [ecx+304h]
0x890940: fsub    qword ptr ds:0A68610h
0x890946: fstp    dword ptr [ecx+304h]
0x89094C: fld     [esp+arg_0]
0x890950: retn    8
0x890953: fstp    st(1)
0x890955: fstp    dword ptr [ecx+304h]
0x89095B: fld     [esp+arg_0]
0x89095F: retn    8
