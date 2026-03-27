0x9741F0: sub     esp, 8
0x9741F3: fld     dword ptr [ecx+18h]
0x9741F6: push    esi
0x9741F7: fmul    dword ptr [ecx+14h]
0x9741FA: mov     esi, [esp+0Ch+arg_0]
0x9741FE: fld     dword ptr [ecx+20h]
0x974201: fmul    dword ptr [ecx+0Ch]
0x974204: fsubp   st(1), st
0x974206: fstp    [esp+0Ch+var_8]
0x97420A: fld     dword ptr [ecx+0Ch]
0x97420D: fmul    dword ptr [ecx+1Ch]
0x974210: fld     dword ptr [ecx+18h]
0x974213: fmul    dword ptr [ecx+10h]
0x974216: fsubp   st(1), st
0x974218: fstp    [esp+0Ch+var_4]
0x97421C: fld     dword ptr [ecx+20h]
0x97421F: fmul    dword ptr [ecx+10h]
0x974222: fld     dword ptr [ecx+14h]
0x974225: fmul    dword ptr [ecx+1Ch]
0x974228: mov     ecx, esi
0x97422A: fsubp   st(1), st
0x97422C: fstp    dword ptr [esi]
0x97422E: fld     [esp+0Ch+var_8]
0x974232: fstp    dword ptr [esi+4]
0x974235: fld     [esp+0Ch+var_4]
0x974239: fstp    dword ptr [esi+8]
0x97423C: call    sub_43F350
0x974241: mov     eax, esi
0x974243: fstp    st
0x974245: pop     esi
0x974246: add     esp, 8
0x974249: retn    4
