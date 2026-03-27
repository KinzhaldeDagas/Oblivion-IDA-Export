0x7875D0: sub     esp, 1Ch
0x7875D3: cmp     byte ptr [ecx+6Dh], 0
0x7875D7: jz      loc_787671
0x7875DD: mov     eax, [ecx+40h]
0x7875E0: fld     dword ptr [eax]
0x7875E2: fstp    [esp+1Ch+var_C]
0x7875E6: fld     dword ptr [eax+4]
0x7875E9: fstp    [esp+1Ch+var_8]
0x7875ED: fld     dword ptr [eax+8]
0x7875F0: fstp    [esp+1Ch+var_4]
0x7875F4: fld     dword ptr [eax+0Ch]
0x7875F7: fstp    [esp+1Ch+var_18]
0x7875FB: fld     dword ptr [eax+10h]
0x7875FE: fstp    [esp+1Ch+var_14]
0x787602: fld     dword ptr [eax+14h]
0x787605: fstp    [esp+1Ch+var_10]
0x787609: fld     [esp+1Ch+var_10]
0x78760D: fadd    [esp+1Ch+var_4]
0x787611: fmul    qword ptr ds:0A2FAA0h
0x787617: fstp    [esp+1Ch+var_1C]
0x78761A: fld     [esp+1Ch+var_18]
0x78761E: fst     dword ptr [ecx+70h]
0x787621: fld     [esp+1Ch+var_14]
0x787625: fst     dword ptr [ecx+74h]
0x787628: fld     [esp+1Ch+var_1C]
0x78762B: fst     dword ptr [ecx+78h]
0x78762E: fld     [esp+1Ch+var_C]
0x787632: fst     dword ptr [ecx+7Ch]
0x787635: fxch    st(2)
0x787637: fstp    dword ptr [ecx+80h]
0x78763D: fst     dword ptr [ecx+84h]
0x787643: fxch    st(1)
0x787645: fstp    dword ptr [ecx+88h]
0x78764B: fld     [esp+1Ch+var_8]
0x78764F: fst     dword ptr [ecx+8Ch]
0x787655: fxch    st(1)
0x787657: fst     dword ptr [ecx+90h]
0x78765D: fxch    st(2)
0x78765F: fstp    dword ptr [ecx+94h]
0x787665: fstp    dword ptr [ecx+98h]
0x78766B: fstp    dword ptr [ecx+9Ch]
0x787671: add     esp, 1Ch
0x787674: retn
