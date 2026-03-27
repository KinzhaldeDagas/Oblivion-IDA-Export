0x47D810: mov     ecx, [esp+arg_0]
0x47D814: fld     dword ptr [ecx]
0x47D816: mov     edx, [esp+arg_4]
0x47D81A: fsub    dword ptr [edx]
0x47D81C: fstp    [esp+arg_0]
0x47D820: fld     [esp+arg_0]
0x47D824: fabs
0x47D826: fstp    [esp+arg_0]
0x47D82A: fld     [esp+arg_0]
0x47D82E: fld     [esp+arg_8]
0x47D832: fcom    st(1)
0x47D834: fnstsw  ax
0x47D836: fstp    st(1)
0x47D838: test    ah, 41h
0x47D83B: jp      short loc_47D842
0x47D83D: fstp    st
0x47D83F: xor     al, al
0x47D841: retn
0x47D842: fld     dword ptr [ecx+4]
0x47D845: fsub    dword ptr [edx+4]
0x47D848: fstp    [esp+arg_0]
0x47D84C: fld     [esp+arg_0]
0x47D850: fabs
0x47D852: fstp    [esp+arg_0]
0x47D856: fld     [esp+arg_0]
0x47D85A: fcomp   st(1)
0x47D85C: fnstsw  ax
0x47D85E: test    ah, 1
0x47D861: jz      short loc_47D83D
0x47D863: fld     dword ptr [ecx+8]
0x47D866: fsub    dword ptr [edx+8]
0x47D869: fstp    [esp+arg_0]
0x47D86D: fld     [esp+arg_0]
0x47D871: fabs
0x47D873: fstp    [esp+arg_0]
0x47D877: fld     [esp+arg_0]
0x47D87B: fcompp
0x47D87D: fnstsw  ax
0x47D87F: test    ah, 1
0x47D882: jz      short loc_47D83F
0x47D884: mov     al, 1
0x47D886: retn
