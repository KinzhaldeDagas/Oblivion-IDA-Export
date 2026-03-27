0x9930FF: push    ecx
0x993100: push    ecx
0x993101: mov     cl, byte ptr [esp+8+arg_0]
0x993105: test    cl, 1
0x993108: jz      short loc_993115
0x99310A: fld     tbyte_B31C50
0x993110: fistp   [esp+8+arg_0]
0x993114: wait
0x993115: test    cl, 8
0x993118: jz      short loc_99312A
0x99311A: fstsw   ax
0x99311D: fld     tbyte_B31C50
0x993123: fstp    [esp+8+var_8]
0x993126: wait
0x993127: fstsw   ax
0x99312A: test    cl, 10h
0x99312D: jz      short loc_993139
0x99312F: fld     tbyte_B31C5C
0x993135: fstp    [esp+8+var_8]
0x993138: wait
0x993139: test    cl, 4
0x99313C: jz      short loc_993147
0x99313E: fldz
0x993140: fld1
0x993142: fdivrp  st(1), st
0x993144: fstp    st
0x993146: wait
0x993147: test    cl, 20h
0x99314A: jz      short loc_993152
0x99314C: fldpi
0x99314E: fstp    [esp+8+var_8]
0x993151: wait
0x993152: pop     ecx
0x993153: pop     ecx
0x993154: retn
