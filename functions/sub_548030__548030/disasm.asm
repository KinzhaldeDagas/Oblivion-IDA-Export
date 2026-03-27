0x548030: cmp     byte ptr [esp+arg_4], 0
0x548035: jz      short loc_54803F
0x548037: fld     dword ptr ds:0B37670h
0x54803D: jmp     short loc_548041
0x54803F: fld1
0x548041: cmp     byte ptr [esp+arg_8], 0
0x548046: fstp    [esp+arg_4]
0x54804A: jz      short loc_548054
0x54804C: fld     dword ptr ds:0B37678h
0x548052: jmp     short loc_54805A
0x548054: fld     dword ptr ds:0B37680h
0x54805A: fstp    [esp+arg_8]
0x54805E: fild    [esp+arg_0]
0x548062: fmul    dword ptr ds:0B37D98h
0x548068: fstp    [esp+arg_0]
0x54806C: fld     [esp+arg_0]
0x548070: fld     dword ptr ds:0B37D90h
0x548076: call    __CIpow
0x54807B: fstp    [esp+arg_0]
0x54807F: fld     [esp+arg_0]
0x548083: fmul    [esp+arg_4]
0x548087: fmul    [esp+arg_8]
0x54808B: fstp    [esp+arg_4]
0x54808F: fld     [esp+arg_4]
0x548093: retn
