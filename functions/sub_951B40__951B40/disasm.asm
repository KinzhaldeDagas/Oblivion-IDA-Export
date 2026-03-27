0x951B40: mov     ecx, [esp+arg_0]
0x951B44: fld     [esp+arg_8]
0x951B48: fsub    [esp+arg_4]
0x951B4C: imul    ecx, 3E39B193h
0x951B52: mov     edx, [esp+arg_C]
0x951B56: mov     eax, 3039h
0x951B5B: sub     eax, ecx
0x951B5D: and     eax, 7FFFFFFFh
0x951B62: mov     [esp+arg_0], eax
0x951B66: imul    eax, 3E39B193h
0x951B6C: fild    [esp+arg_0]
0x951B70: fmul    dword ptr ds:0A9AFE8h
0x951B76: mov     ecx, 3039h
0x951B7B: fadd    [esp+arg_4]
0x951B7F: sub     ecx, eax
0x951B81: and     ecx, 7FFFFFFFh
0x951B87: fmul    st, st(1)
0x951B89: mov     [esp+arg_0], ecx
0x951B8D: imul    ecx, 3E39B193h
0x951B93: fstp    dword ptr [edx]
0x951B95: fild    [esp+arg_0]
0x951B99: fmul    dword ptr ds:0A9AFE8h
0x951B9F: mov     eax, 3039h
0x951BA4: fadd    [esp+arg_4]
0x951BA8: sub     eax, ecx
0x951BAA: and     eax, 7FFFFFFFh
0x951BAF: fmul    st, st(1)
0x951BB1: mov     [esp+arg_0], eax
0x951BB5: fstp    dword ptr [edx+4]
0x951BB8: fild    [esp+arg_0]
0x951BBC: fmul    dword ptr ds:0A9AFE8h
0x951BC2: fadd    [esp+arg_4]
0x951BC6: fmul    st, st(1)
0x951BC8: fstp    dword ptr [edx+8]
0x951BCB: fstp    st
0x951BCD: retn
