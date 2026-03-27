0x848DA0: sub     esp, 1Ch
0x848DA3: cmp     byte ptr ds:0B43070h, 0
0x848DAA: mov     eax, [esp+1Ch+arg_0]
0x848DAE: mov     ecx, [eax+40h]
0x848DB1: mov     edx, [eax+44h]
0x848DB4: mov     eax, [eax+48h]
0x848DB7: mov     [esp+1Ch+var_1C], ecx
0x848DBA: mov     [esp+1Ch+var_18], edx
0x848DBE: mov     [esp+1Ch+var_14], eax
0x848DC2: jz      short loc_848DFD
0x848DC4: cmp     byte ptr ds:0B43074h, 0
0x848DCB: jz      short loc_848DD5
0x848DCD: fld     dword ptr ds:0B4320Ch
0x848DD3: jmp     short loc_848DDB
0x848DD5: fld     dword ptr ds:0B43208h
0x848DDB: fstp    [esp+1Ch+arg_0]
0x848DDF: fld     [esp+1Ch+arg_0]
0x848DE3: fld     st
0x848DE5: fmul    [esp+1Ch+var_1C]
0x848DE8: fstp    [esp+1Ch+var_1C]
0x848DEB: fld     st
0x848DED: fmul    [esp+1Ch+var_18]
0x848DF1: fstp    [esp+1Ch+var_18]
0x848DF5: fmul    [esp+1Ch+var_14]
0x848DF9: fstp    [esp+1Ch+var_14]
0x848DFD: fld     [esp+1Ch+var_1C]
0x848E00: sub     esp, 10h
0x848E03: fstp    [esp+2Ch+var_10]
0x848E07: mov     ecx, [esp+2Ch+var_10]
0x848E0B: fld     [esp+2Ch+var_18]
0x848E0F: mov     eax, esp
0x848E11: fstp    [esp+2Ch+var_C]
0x848E15: mov     edx, [esp+2Ch+var_C]
0x848E19: fld     [esp+2Ch+var_14]
0x848E1D: mov     [eax], ecx
0x848E1F: fstp    [esp+2Ch+var_8]
0x848E23: mov     ecx, [esp+2Ch+var_8]
0x848E27: fld1
0x848E29: mov     [eax+4], edx
0x848E2C: fstp    [esp+2Ch+var_4]
0x848E30: mov     [eax+8], ecx
0x848E33: mov     edx, [esp+2Ch+var_4]
0x848E37: push    19h
0x848E39: mov     [eax+0Ch], edx
0x848E3C: call    sub_7ECAE0
0x848E41: add     esp, 30h
0x848E44: retn    4
