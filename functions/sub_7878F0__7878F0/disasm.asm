0x7878F0: mov     eax, ecx
0x7878F2: cmp     byte ptr [eax+30h], 0
0x7878F6: jnz     locret_787993
0x7878FC: fld     dword ptr ds:0B2BA7Ch
0x787902: fld     [esp+arg_0]
0x787906: fld     st
0x787908: fmulp   st(2), st
0x78790A: fxch    st(1)
0x78790C: fstp    dword ptr [eax]
0x78790E: fld     dword ptr ds:0B2BA80h
0x787914: fmul    st, st(1)
0x787916: fstp    dword ptr [eax+4]
0x787919: fld     dword ptr ds:0B2BA84h
0x78791F: fld     [esp+arg_4]
0x787923: fld     st
0x787925: fmulp   st(2), st
0x787927: fxch    st(1)
0x787929: fstp    dword ptr [eax+8]
0x78792C: fld     dword ptr ds:0B2BA88h
0x787932: fmul    st, st(2)
0x787934: fstp    dword ptr [eax+0Ch]
0x787937: fld     dword ptr ds:0B2BA8Ch
0x78793D: fmul    st, st(2)
0x78793F: fstp    dword ptr [eax+10h]
0x787942: fld     dword ptr ds:0B2BA90h
0x787948: fmul    st, st(1)
0x78794A: fstp    dword ptr [eax+14h]
0x78794D: fld     dword ptr ds:0B2BA94h
0x787953: fmul    st, st(2)
0x787955: fstp    dword ptr [eax+18h]
0x787958: fld     dword ptr ds:0B2BA98h
0x78795E: fmul    st, st(2)
0x787960: fstp    dword ptr [eax+1Ch]
0x787963: fld     dword ptr ds:0B2BA9Ch
0x787969: fmul    st, st(1)
0x78796B: fstp    dword ptr [eax+20h]
0x78796E: fld     dword ptr ds:0B2BAA0h
0x787974: fmul    st, st(2)
0x787976: fstp    dword ptr [eax+24h]
0x787979: fld     dword ptr ds:0B2BAA4h
0x78797F: fmulp   st(2), st
0x787981: fxch    st(1)
0x787983: fstp    dword ptr [eax+28h]
0x787986: fmul    dword ptr ds:0B2BAA8h
0x78798C: mov     byte ptr [eax+30h], 1
0x787990: fstp    dword ptr [eax+2Ch]
0x787993: retn    8
