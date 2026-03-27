0x78EA30: push    ecx
0x78EA31: mov     eax, [esp+4+arg_0]
0x78EA35: cmp     eax, 0FFFFFFFFh
0x78EA38: jnz     loc_78EAD2
0x78EA3E: cmp     byte ptr ds:0B42994h, 0
0x78EA45: push    esi
0x78EA46: mov     esi, 3039h
0x78EA4B: mov     [esp+8+arg_0], esi
0x78EA4F: jz      short loc_78EA7E
0x78EA51: mov     ecx, offset off_B2B684
0x78EA56: call    sub_7A6FD0
0x78EA5B: fld     qword ptr ds:0A8C628h
0x78EA61: fldz
0x78EA63: fsub    st(1), st
0x78EA65: fxch    st(2)
0x78EA67: fmulp   st(1), st
0x78EA69: faddp   st(1), st
0x78EA6B: fstp    [esp+8+arg_0]
0x78EA6F: fld     [esp+8+arg_0]
0x78EA73: call    Double_To_SInt32
0x78EA78: mov     esi, eax
0x78EA7A: mov     [esp+8+arg_0], eax
0x78EA7E: push    0; Time
0x78EA80: call    __time64
0x78EA85: add     esp, 4
0x78EA88: cmp     esi, eax
0x78EA8A: mov     [esp+8+var_4], eax
0x78EA8E: pop     esi
0x78EA8F: jle     short loc_78EAB1
0x78EA91: fild    [esp+4+var_4]
0x78EA94: sub     esp, 8
0x78EA97: fidiv   [esp+0Ch+arg_0]
0x78EA9B: fstp    [esp+0Ch+var_C]; double
0x78EA9E: call    sub_7A7100
0x78EAA3: add     esp, 8
0x78EAA6: mov     byte ptr ds:0B42994h, 1
0x78EAAD: pop     ecx
0x78EAAE: retn    4
0x78EAB1: fild    [esp+4+arg_0]
0x78EAB5: sub     esp, 8
0x78EAB8: fidiv   [esp+0Ch+var_4]
0x78EABC: fstp    [esp+0Ch+var_C]; double
0x78EABF: call    sub_7A7100
0x78EAC4: add     esp, 8
0x78EAC7: mov     byte ptr ds:0B42994h, 1
0x78EACE: pop     ecx
0x78EACF: retn    4
0x78EAD2: cmp     eax, 1
0x78EAD5: jg      short loc_78EADC
0x78EAD7: mov     eax, 1
0x78EADC: push    eax
0x78EADD: call    sub_7A6D30
0x78EAE2: add     esp, 4
0x78EAE5: mov     byte ptr ds:0B42994h, 1
0x78EAEC: pop     ecx
0x78EAED: retn    4
