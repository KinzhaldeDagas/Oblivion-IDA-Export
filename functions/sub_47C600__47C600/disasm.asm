0x47C600: sub     esp, 24h
0x47C603: fld     dword ptr [ecx+4]
0x47C606: mov     eax, [esp+24h+arg_0]
0x47C60A: fld     qword ptr ds:0A3D0C0h
0x47C610: fmul    st(1), st
0x47C612: fxch    st(1)
0x47C614: fstp    [esp+24h+var_24]
0x47C617: fld     dword ptr [ecx+8]
0x47C61A: fmul    st, st(1)
0x47C61C: fstp    [esp+24h+var_20]
0x47C620: fmul    dword ptr [ecx+0Ch]
0x47C623: fstp    [esp+24h+var_1C]
0x47C627: fld     dword ptr [ecx]
0x47C629: fld     [esp+24h+var_24]
0x47C62C: fld     st
0x47C62E: fmulp   st(2), st
0x47C630: fxch    st(1)
0x47C632: fstp    [esp+24h+var_4]
0x47C636: fld     dword ptr [ecx]
0x47C638: fld     [esp+24h+var_20]
0x47C63C: fld     st
0x47C63E: fmulp   st(2), st
0x47C640: fxch    st(1)
0x47C642: fstp    [esp+24h+var_24]
0x47C645: fld     dword ptr [ecx]
0x47C647: fld     [esp+24h+var_1C]
0x47C64B: fld     st
0x47C64D: fmulp   st(2), st
0x47C64F: fxch    st(1)
0x47C651: fstp    [esp+24h+var_14]
0x47C655: fld     dword ptr [ecx+4]
0x47C658: fmulp   st(3), st
0x47C65A: fxch    st(2)
0x47C65C: fstp    [esp+24h+var_C]
0x47C660: fld     st
0x47C662: fmul    dword ptr [ecx+4]
0x47C665: fstp    [esp+24h+var_18]
0x47C669: fld     st(1)
0x47C66B: fmul    dword ptr [ecx+4]
0x47C66E: fstp    [esp+24h+var_10]
0x47C672: fmul    dword ptr [ecx+8]
0x47C675: fstp    [esp+24h+var_20]
0x47C679: fld     dword ptr [ecx+8]
0x47C67C: fmul    st, st(1)
0x47C67E: fstp    [esp+24h+var_8]
0x47C682: fmul    dword ptr [ecx+0Ch]
0x47C685: fstp    [esp+24h+var_1C]
0x47C689: fld     [esp+24h+var_1C]
0x47C68D: fld     st
0x47C68F: fld     [esp+24h+var_20]
0x47C693: fld     st
0x47C695: faddp   st(2), st
0x47C697: fld1
0x47C699: fld     st
0x47C69B: fsubrp  st(3), st
0x47C69D: fxch    st(2)
0x47C69F: fstp    dword ptr [eax]
0x47C6A1: fld     [esp+24h+var_18]
0x47C6A5: fld     st
0x47C6A7: fld     [esp+24h+var_14]
0x47C6AB: fld     st
0x47C6AD: faddp   st(2), st
0x47C6AF: fxch    st(1)
0x47C6B1: fstp    dword ptr [eax+0Ch]
0x47C6B4: fld     [esp+24h+var_10]
0x47C6B8: fld     st
0x47C6BA: fsub    [esp+24h+var_24]
0x47C6BD: fstp    dword ptr [eax+18h]
0x47C6C0: fxch    st(2)
0x47C6C2: fsubrp  st(1), st
0x47C6C4: fstp    dword ptr [eax+4]
0x47C6C7: fld     [esp+24h+var_C]
0x47C6CB: fld     st
0x47C6CD: faddp   st(5), st
0x47C6CF: fld     st(3)
0x47C6D1: fsubrp  st(5), st
0x47C6D3: fxch    st(4)
0x47C6D5: fstp    dword ptr [eax+10h]
0x47C6D8: fld     [esp+24h+var_8]
0x47C6DC: fld     st
0x47C6DE: fld     [esp+24h+var_4]
0x47C6E2: fld     st
0x47C6E4: faddp   st(2), st
0x47C6E6: fxch    st(1)
0x47C6E8: fstp    dword ptr [eax+1Ch]
0x47C6EB: fld     [esp+24h+var_24]
0x47C6EE: faddp   st(3), st
0x47C6F0: fxch    st(2)
0x47C6F2: fstp    dword ptr [eax+8]
0x47C6F5: fsubrp  st(1), st
0x47C6F7: fstp    dword ptr [eax+14h]
0x47C6FA: faddp   st(2), st
0x47C6FC: fsubrp  st(1), st
0x47C6FE: fstp    dword ptr [eax+20h]
0x47C701: add     esp, 24h
0x47C704: retn    4
