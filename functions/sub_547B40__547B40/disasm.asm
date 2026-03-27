0x547B40: mov     eax, 64h ; 'd'
0x547B45: sub     eax, [esp+arg_0]
0x547B49: mov     [esp+arg_0], eax
0x547B4D: fild    [esp+arg_0]
0x547B51: fld     [esp+arg_4]
0x547B55: call    __CIpow
0x547B5A: fild    [esp+arg_8]
0x547B5E: fld     qword ptr ds:0A3F3E8h
0x547B64: fdiv    st(1), st
0x547B66: fxch    st(2)
0x547B68: fsubrp  st(1), st
0x547B6A: fild    [esp+arg_C]
0x547B6E: fisub   [esp+arg_10]
0x547B72: fdivrp  st(2), st
0x547B74: faddp   st(1), st
0x547B76: call    Double_To_SInt32
0x547B7B: xor     ecx, ecx
0x547B7D: test    eax, eax
0x547B7F: setle   cl
0x547B82: sub     ecx, 1
0x547B85: and     eax, ecx
0x547B87: retn
