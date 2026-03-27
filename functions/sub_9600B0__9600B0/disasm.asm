0x9600B0: sub     esp, 1Ch
0x9600B3: fld     dword ptr [ecx+1Ch]
0x9600B6: fsub    dword ptr [ecx+38h]
0x9600B9: fstp    [esp+1Ch+var_1C]
0x9600BC: fld     [esp+1Ch+var_1C]
0x9600BF: fst     [esp+1Ch+var_1C]
0x9600C2: fld     dword ptr [ecx+10h]
0x9600C5: fld     [esp+1Ch+var_1C]
0x9600C8: fld     st
0x9600CA: fmulp   st(2), st
0x9600CC: fxch    st(1)
0x9600CE: fstp    [esp+1Ch+var_18]
0x9600D2: fld     dword ptr [ecx+14h]
0x9600D5: fmul    st, st(1)
0x9600D7: fstp    [esp+1Ch+var_14]
0x9600DB: fmul    dword ptr [ecx+18h]
0x9600DE: fstp    [esp+1Ch+var_10]
0x9600E2: fld     dword ptr [ecx+4]
0x9600E5: fsub    [esp+1Ch+var_18]
0x9600E9: fstp    [esp+1Ch+var_C]
0x9600ED: mov     eax, [esp+1Ch+var_C]
0x9600F1: fld     dword ptr [ecx+8]
0x9600F4: fsub    [esp+1Ch+var_14]
0x9600F8: fstp    [esp+1Ch+var_8]
0x9600FC: mov     edx, [esp+1Ch+var_8]
0x960100: fld     dword ptr [ecx+0Ch]
0x960103: mov     [ecx+20h], eax
0x960106: fsub    [esp+1Ch+var_10]
0x96010A: mov     [ecx+24h], edx
0x96010D: fstp    [esp+1Ch+var_4]
0x960111: mov     eax, [esp+1Ch+var_4]
0x960115: mov     [ecx+28h], eax
0x960118: fstp    [esp+1Ch+var_1C]
0x96011B: fld     dword ptr [ecx+10h]
0x96011E: fld     [esp+1Ch+var_1C]
0x960121: fld     st
0x960123: fmulp   st(2), st
0x960125: fxch    st(1)
0x960127: fstp    [esp+1Ch+var_C]
0x96012B: fld     dword ptr [ecx+14h]
0x96012E: fmul    st, st(1)
0x960130: fstp    [esp+1Ch+var_8]
0x960134: fmul    dword ptr [ecx+18h]
0x960137: fstp    [esp+1Ch+var_4]
0x96013B: fld     [esp+1Ch+var_C]
0x96013F: fld     qword ptr ds:0A3D0C0h
0x960145: fmul    st(1), st
0x960147: fxch    st(1)
0x960149: fstp    [esp+1Ch+var_18]
0x96014D: mov     edx, [esp+1Ch+var_18]
0x960151: fld     [esp+1Ch+var_8]
0x960155: mov     [ecx+2Ch], edx
0x960158: fmul    st, st(1)
0x96015A: fstp    [esp+1Ch+var_14]
0x96015E: mov     eax, [esp+1Ch+var_14]
0x960162: mov     [ecx+30h], eax
0x960165: fmul    [esp+1Ch+var_4]
0x960169: fstp    [esp+1Ch+var_10]
0x96016D: mov     edx, [esp+1Ch+var_10]
0x960171: mov     [ecx+34h], edx
0x960174: add     esp, 1Ch
0x960177: retn
